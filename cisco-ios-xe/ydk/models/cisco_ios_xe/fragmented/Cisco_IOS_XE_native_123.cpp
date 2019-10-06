
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_123.hpp"
#include "Cisco_IOS_XE_native_124.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Key::Chain::Key_::LifetimeLocal::LifetimeLocal()
    :
    local(std::make_shared<Native::Key::Chain::Key_::LifetimeLocal::Local>())
{
    local->parent = this;

    yang_name = "lifetime-local"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Key::Chain::Key_::LifetimeLocal::~LifetimeLocal()
{
}

bool Native::Key::Chain::Key_::LifetimeLocal::has_data() const
{
    if (is_presence_container) return true;
    return (local !=  nullptr && local->has_data());
}

bool Native::Key::Chain::Key_::LifetimeLocal::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Key::Chain::Key_::LifetimeLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::LifetimeLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Key::Chain::Key_::LifetimeLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Key::Chain::Key_::LifetimeLocal::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Key::Chain::Key_::LifetimeLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void Native::Key::Chain::Key_::LifetimeLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Key::Chain::Key_::LifetimeLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Key::Chain::Key_::LifetimeLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Key::Chain::Key_::LifetimeLocal::Local::Local()
    :
    lifetime_group(std::make_shared<Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup>())
{
    lifetime_group->parent = this;

    yang_name = "local"; yang_parent_name = "lifetime-local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Key::Chain::Key_::LifetimeLocal::Local::~Local()
{
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::has_data() const
{
    if (is_presence_container) return true;
    return (lifetime_group !=  nullptr && lifetime_group->has_data());
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::has_operation() const
{
    return is_set(yfilter)
	|| (lifetime_group !=  nullptr && lifetime_group->has_operation());
}

std::string Native::Key::Chain::Key_::LifetimeLocal::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::LifetimeLocal::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Key::Chain::Key_::LifetimeLocal::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime-group")
    {
        if(lifetime_group == nullptr)
        {
            lifetime_group = std::make_shared<Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup>();
        }
        return lifetime_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Key::Chain::Key_::LifetimeLocal::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime_group != nullptr)
    {
        _children["lifetime-group"] = lifetime_group;
    }

    return _children;
}

void Native::Key::Chain::Key_::LifetimeLocal::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Key::Chain::Key_::LifetimeLocal::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime-group")
        return true;
    return false;
}

Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::LifetimeGroup()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"},
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    duration{YType::uint32, "duration"},
    hh_mm_ss1{YType::str, "hh-mm-ss1"},
    date3{YType::uint8, "date3"},
    month3{YType::str, "month3"},
    date4{YType::uint8, "date4"},
    month4{YType::str, "month4"},
    year1{YType::uint16, "year1"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "lifetime-group"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::~LifetimeGroup()
{
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set
	|| date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| duration.is_set
	|| hh_mm_ss1.is_set
	|| date3.is_set
	|| month3.is_set
	|| date4.is_set
	|| month4.is_set
	|| year1.is_set
	|| infinite.is_set;
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(hh_mm_ss1.yfilter)
	|| ydk::is_set(date3.yfilter)
	|| ydk::is_set(month3.yfilter)
	|| ydk::is_set(date4.yfilter)
	|| ydk::is_set(month4.yfilter)
	|| ydk::is_set(year1.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (hh_mm_ss1.is_set || is_set(hh_mm_ss1.yfilter)) leaf_name_data.push_back(hh_mm_ss1.get_name_leafdata());
    if (date3.is_set || is_set(date3.yfilter)) leaf_name_data.push_back(date3.get_name_leafdata());
    if (month3.is_set || is_set(month3.yfilter)) leaf_name_data.push_back(month3.get_name_leafdata());
    if (date4.is_set || is_set(date4.yfilter)) leaf_name_data.push_back(date4.get_name_leafdata());
    if (month4.is_set || is_set(month4.yfilter)) leaf_name_data.push_back(month4.get_name_leafdata());
    if (year1.is_set || is_set(year1.yfilter)) leaf_name_data.push_back(year1.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm-ss1")
    {
        hh_mm_ss1 = value;
        hh_mm_ss1.value_namespace = name_space;
        hh_mm_ss1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date3")
    {
        date3 = value;
        date3.value_namespace = name_space;
        date3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month3")
    {
        month3 = value;
        month3.value_namespace = name_space;
        month3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date4")
    {
        date4 = value;
        date4.value_namespace = name_space;
        date4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month4")
    {
        month4 = value;
        month4.value_namespace = name_space;
        month4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year1")
    {
        year1 = value;
        year1.value_namespace = name_space;
        year1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "hh-mm-ss1")
    {
        hh_mm_ss1.yfilter = yfilter;
    }
    if(value_path == "date3")
    {
        date3.yfilter = yfilter;
    }
    if(value_path == "month3")
    {
        month3.yfilter = yfilter;
    }
    if(value_path == "date4")
    {
        date4.yfilter = yfilter;
    }
    if(value_path == "month4")
    {
        month4.yfilter = yfilter;
    }
    if(value_path == "year1")
    {
        year1.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss" || name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "duration" || name == "hh-mm-ss1" || name == "date3" || name == "month3" || name == "date4" || name == "month4" || name == "year1" || name == "infinite")
        return true;
    return false;
}

Native::L2::L2()
    :
    router_id{YType::str, "router-id"}
        ,
    vfi(this, {"name"})
{

    yang_name = "l2"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2::~L2()
{
}

bool Native::L2::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfi.len(); index++)
    {
        if(vfi[index]->has_data())
            return true;
    }
    return router_id.is_set;
}

bool Native::L2::has_operation() const
{
    for (std::size_t index=0; index<vfi.len(); index++)
    {
        if(vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Native::L2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-l2vpn:vfi")
    {
        auto ent_ = std::make_shared<Native::L2::Vfi>();
        ent_->parent = this;
        vfi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vfi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::L2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Native::L2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi" || name == "router-id")
        return true;
    return false;
}

Native::L2::Vfi::Vfi()
    :
    name{YType::str, "name"},
    mode{YType::enumeration, "mode"},
    evc{YType::str, "evc"},
    bridge_domain{YType::uint16, "bridge-domain"},
    mtu{YType::uint32, "mtu"}
        ,
    vpn(std::make_shared<Native::L2::Vfi::Vpn>())
    , neighbor(this, {"router_id"})
{
    vpn->parent = this;

    yang_name = "vfi"; yang_parent_name = "l2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2::Vfi::~Vfi()
{
}

bool Native::L2::Vfi::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return name.is_set
	|| mode.is_set
	|| evc.is_set
	|| bridge_domain.is_set
	|| mtu.is_set
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::L2::Vfi::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(bridge_domain.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::L2::Vfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:vfi";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::Vfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (bridge_domain.is_set || is_set(bridge_domain.yfilter)) leaf_name_data.push_back(bridge_domain.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::L2::Vfi::Vpn>();
        }
        return vpn;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::L2::Vfi::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vpn != nullptr)
    {
        _children["vpn"] = vpn;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::L2::Vfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain")
    {
        bridge_domain = value;
        bridge_domain.value_namespace = name_space;
        bridge_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "bridge-domain")
    {
        bridge_domain.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn" || name == "neighbor" || name == "name" || name == "mode" || name == "evc" || name == "bridge-domain" || name == "mtu")
        return true;
    return false;
}

Native::L2::Vfi::Vpn::Vpn()
    :
    id{YType::uint64, "id"}
{

    yang_name = "vpn"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2::Vfi::Vpn::~Vpn()
{
}

bool Native::L2::Vfi::Vpn::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Native::L2::Vfi::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2::Vfi::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::Vfi::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2::Vfi::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2::Vfi::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2::Vfi::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2::Vfi::Neighbor::Neighbor()
    :
    router_id{YType::str, "router-id"},
    vc_id{YType::uint64, "vc-id"},
    encapsulation{YType::enumeration, "encapsulation"},
    pw_class{YType::str, "pw-class"}
{

    yang_name = "neighbor"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2::Vfi::Neighbor::~Neighbor()
{
}

bool Native::L2::Vfi::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| vc_id.is_set
	|| encapsulation.is_set
	|| pw_class.is_set;
}

bool Native::L2::Vfi::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(vc_id.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(pw_class.yfilter);
}

std::string Native::L2::Vfi::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(router_id, "router-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::Vfi::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.yfilter)) leaf_name_data.push_back(vc_id.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2::Vfi::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2::Vfi::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2::Vfi::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
        vc_id.value_namespace = name_space;
        vc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "vc-id")
    {
        vc_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "vc-id" || name == "encapsulation" || name == "pw-class")
        return true;
    return false;
}

Native::System::System()
    :
    debug(std::make_shared<Native::System::Debug>())
    , disable(std::make_shared<Native::System::Disable>())
    , environment(std::make_shared<Native::System::Environment>())
    , fnf(std::make_shared<Native::System::Fnf>())
    , ignore(std::make_shared<Native::System::Ignore>())
    , mode_button(std::make_shared<Native::System::ModeButton>())
    , mtu(std::make_shared<Native::System::Mtu>())
    , mode(std::make_shared<Native::System::Mode>())
{
    debug->parent = this;
    disable->parent = this;
    environment->parent = this;
    fnf->parent = this;
    ignore->parent = this;
    mode_button->parent = this;
    mtu->parent = this;
    mode->parent = this;

    yang_name = "system"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::~System()
{
}

bool Native::System::has_data() const
{
    if (is_presence_container) return true;
    return (debug !=  nullptr && debug->has_data())
	|| (disable !=  nullptr && disable->has_data())
	|| (environment !=  nullptr && environment->has_data())
	|| (fnf !=  nullptr && fnf->has_data())
	|| (ignore !=  nullptr && ignore->has_data())
	|| (mode_button !=  nullptr && mode_button->has_data())
	|| (mtu !=  nullptr && mtu->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::System::has_operation() const
{
    return is_set(yfilter)
	|| (debug !=  nullptr && debug->has_operation())
	|| (disable !=  nullptr && disable->has_operation())
	|| (environment !=  nullptr && environment->has_operation())
	|| (fnf !=  nullptr && fnf->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation())
	|| (mode_button !=  nullptr && mode_button->has_operation())
	|| (mtu !=  nullptr && mtu->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-switch:debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<Native::System::Debug>();
        }
        return debug;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::System::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:environment")
    {
        if(environment == nullptr)
        {
            environment = std::make_shared<Native::System::Environment>();
        }
        return environment;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:fnf")
    {
        if(fnf == nullptr)
        {
            fnf = std::make_shared<Native::System::Fnf>();
        }
        return fnf;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::System::Ignore>();
        }
        return ignore;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:mode-button")
    {
        if(mode_button == nullptr)
        {
            mode_button = std::make_shared<Native::System::ModeButton>();
        }
        return mode_button;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:mtu")
    {
        if(mtu == nullptr)
        {
            mtu = std::make_shared<Native::System::Mtu>();
        }
        return mtu;
    }

    if(child_yang_name == "Cisco-IOS-XE-mmode:mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::System::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(debug != nullptr)
    {
        _children["Cisco-IOS-XE-switch:debug"] = debug;
    }

    if(disable != nullptr)
    {
        _children["Cisco-IOS-XE-switch:disable"] = disable;
    }

    if(environment != nullptr)
    {
        _children["Cisco-IOS-XE-switch:environment"] = environment;
    }

    if(fnf != nullptr)
    {
        _children["Cisco-IOS-XE-switch:fnf"] = fnf;
    }

    if(ignore != nullptr)
    {
        _children["Cisco-IOS-XE-switch:ignore"] = ignore;
    }

    if(mode_button != nullptr)
    {
        _children["Cisco-IOS-XE-switch:mode-button"] = mode_button;
    }

    if(mtu != nullptr)
    {
        _children["Cisco-IOS-XE-switch:mtu"] = mtu;
    }

    if(mode != nullptr)
    {
        _children["Cisco-IOS-XE-mmode:mode"] = mode;
    }

    return _children;
}

void Native::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "debug" || name == "disable" || name == "environment" || name == "fnf" || name == "ignore" || name == "mode-button" || name == "mtu" || name == "mode")
        return true;
    return false;
}

Native::System::Debug::Debug()
    :
    shell(std::make_shared<Native::System::Debug::Shell>())
{
    shell->parent = this;

    yang_name = "debug"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Debug::~Debug()
{
}

bool Native::System::Debug::has_data() const
{
    if (is_presence_container) return true;
    return (shell !=  nullptr && shell->has_data());
}

bool Native::System::Debug::has_operation() const
{
    return is_set(yfilter)
	|| (shell !=  nullptr && shell->has_operation());
}

std::string Native::System::Debug::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:debug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Debug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shell")
    {
        if(shell == nullptr)
        {
            shell = std::make_shared<Native::System::Debug::Shell>();
        }
        return shell;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shell != nullptr)
    {
        _children["shell"] = shell;
    }

    return _children;
}

void Native::System::Debug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Debug::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Debug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shell")
        return true;
    return false;
}

Native::System::Debug::Shell::Shell()
    :
    switch_(std::make_shared<Native::System::Debug::Shell::Switch>())
{
    switch_->parent = this;

    yang_name = "shell"; yang_parent_name = "debug"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Debug::Shell::~Shell()
{
}

bool Native::System::Debug::Shell::has_data() const
{
    if (is_presence_container) return true;
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::System::Debug::Shell::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::System::Debug::Shell::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:debug/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Debug::Shell::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shell";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Debug::Shell::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Debug::Shell::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::System::Debug::Shell::Switch>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Debug::Shell::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switch_ != nullptr)
    {
        _children["switch"] = switch_;
    }

    return _children;
}

void Native::System::Debug::Shell::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Debug::Shell::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Debug::Shell::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::System::Debug::Shell::Switch::Switch()
    :
    switch_number{YType::uint8, "switch-number"},
    all{YType::empty, "all"}
{

    yang_name = "switch"; yang_parent_name = "shell"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Debug::Shell::Switch::~Switch()
{
}

bool Native::System::Debug::Shell::Switch::has_data() const
{
    if (is_presence_container) return true;
    return switch_number.is_set
	|| all.is_set;
}

bool Native::System::Debug::Shell::Switch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_number.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::System::Debug::Shell::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:debug/shell/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Debug::Shell::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Debug::Shell::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Debug::Shell::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Debug::Shell::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::System::Debug::Shell::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Debug::Shell::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::System::Debug::Shell::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-number" || name == "all")
        return true;
    return false;
}

Native::System::Disable::Disable()
    :
    password(std::make_shared<Native::System::Disable::Password>())
{
    password->parent = this;

    yang_name = "disable"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Disable::~Disable()
{
}

bool Native::System::Disable::has_data() const
{
    if (is_presence_container) return true;
    return (password !=  nullptr && password->has_data());
}

bool Native::System::Disable::has_operation() const
{
    return is_set(yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::System::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::System::Disable::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::System::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password")
        return true;
    return false;
}

Native::System::Disable::Password::Password()
    :
    recovery(std::make_shared<Native::System::Disable::Password::Recovery>())
{
    recovery->parent = this;

    yang_name = "password"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Disable::Password::~Password()
{
}

bool Native::System::Disable::Password::has_data() const
{
    if (is_presence_container) return true;
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::System::Disable::Password::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::System::Disable::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:disable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Disable::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Disable::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Disable::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::System::Disable::Password::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Disable::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recovery != nullptr)
    {
        _children["recovery"] = recovery;
    }

    return _children;
}

void Native::System::Disable::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Disable::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Disable::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::System::Disable::Password::Recovery::Recovery()
    :
    switch_(std::make_shared<Native::System::Disable::Password::Recovery::Switch>())
{
    switch_->parent = this;

    yang_name = "recovery"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Disable::Password::Recovery::~Recovery()
{
}

bool Native::System::Disable::Password::Recovery::has_data() const
{
    if (is_presence_container) return true;
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::System::Disable::Password::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::System::Disable::Password::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:disable/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Disable::Password::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Disable::Password::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Disable::Password::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::System::Disable::Password::Recovery::Switch>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Disable::Password::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switch_ != nullptr)
    {
        _children["switch"] = switch_;
    }

    return _children;
}

void Native::System::Disable::Password::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Disable::Password::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Disable::Password::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::System::Disable::Password::Recovery::Switch::Switch()
    :
    number{YType::uint8, "number"},
    all{YType::empty, "all"}
{

    yang_name = "switch"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Disable::Password::Recovery::Switch::~Switch()
{
}

bool Native::System::Disable::Password::Recovery::Switch::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| all.is_set;
}

bool Native::System::Disable::Password::Recovery::Switch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::System::Disable::Password::Recovery::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:disable/password/recovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Disable::Password::Recovery::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Disable::Password::Recovery::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Disable::Password::Recovery::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Disable::Password::Recovery::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::System::Disable::Password::Recovery::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Disable::Password::Recovery::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::System::Disable::Password::Recovery::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "all")
        return true;
    return false;
}

Native::System::Environment::Environment()
    :
    fan_fail_action(std::make_shared<Native::System::Environment::FanFailAction>())
    , temperature(std::make_shared<Native::System::Environment::Temperature>())
{
    fan_fail_action->parent = this;
    temperature->parent = this;

    yang_name = "environment"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Environment::~Environment()
{
}

bool Native::System::Environment::has_data() const
{
    if (is_presence_container) return true;
    return (fan_fail_action !=  nullptr && fan_fail_action->has_data())
	|| (temperature !=  nullptr && temperature->has_data());
}

bool Native::System::Environment::has_operation() const
{
    return is_set(yfilter)
	|| (fan_fail_action !=  nullptr && fan_fail_action->has_operation())
	|| (temperature !=  nullptr && temperature->has_operation());
}

std::string Native::System::Environment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:environment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Environment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fan-fail-action")
    {
        if(fan_fail_action == nullptr)
        {
            fan_fail_action = std::make_shared<Native::System::Environment::FanFailAction>();
        }
        return fan_fail_action;
    }

    if(child_yang_name == "temperature")
    {
        if(temperature == nullptr)
        {
            temperature = std::make_shared<Native::System::Environment::Temperature>();
        }
        return temperature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Environment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fan_fail_action != nullptr)
    {
        _children["fan-fail-action"] = fan_fail_action;
    }

    if(temperature != nullptr)
    {
        _children["temperature"] = temperature;
    }

    return _children;
}

void Native::System::Environment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Environment::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Environment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fan-fail-action" || name == "temperature")
        return true;
    return false;
}

Native::System::Environment::FanFailAction::FanFailAction()
    :
    shut{YType::empty, "shut"}
{

    yang_name = "fan-fail-action"; yang_parent_name = "environment"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Environment::FanFailAction::~FanFailAction()
{
}

bool Native::System::Environment::FanFailAction::has_data() const
{
    if (is_presence_container) return true;
    return shut.is_set;
}

bool Native::System::Environment::FanFailAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shut.yfilter);
}

std::string Native::System::Environment::FanFailAction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Environment::FanFailAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-fail-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Environment::FanFailAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shut.is_set || is_set(shut.yfilter)) leaf_name_data.push_back(shut.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Environment::FanFailAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Environment::FanFailAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::System::Environment::FanFailAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shut")
    {
        shut = value;
        shut.value_namespace = name_space;
        shut.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Environment::FanFailAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shut")
    {
        shut.yfilter = yfilter;
    }
}

bool Native::System::Environment::FanFailAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shut")
        return true;
    return false;
}

Native::System::Environment::Temperature::Temperature()
    :
    threshold(std::make_shared<Native::System::Environment::Temperature::Threshold>())
{
    threshold->parent = this;

    yang_name = "temperature"; yang_parent_name = "environment"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Environment::Temperature::~Temperature()
{
}

bool Native::System::Environment::Temperature::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::System::Environment::Temperature::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::System::Environment::Temperature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Environment::Temperature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "temperature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Environment::Temperature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Environment::Temperature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::System::Environment::Temperature::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Environment::Temperature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::System::Environment::Temperature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Environment::Temperature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Environment::Temperature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::System::Environment::Temperature::Threshold::Threshold()
    :
    yellow(std::make_shared<Native::System::Environment::Temperature::Threshold::Yellow>())
{
    yellow->parent = this;

    yang_name = "threshold"; yang_parent_name = "temperature"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Environment::Temperature::Threshold::~Threshold()
{
}

bool Native::System::Environment::Temperature::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return (yellow !=  nullptr && yellow->has_data());
}

bool Native::System::Environment::Temperature::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (yellow !=  nullptr && yellow->has_operation());
}

std::string Native::System::Environment::Temperature::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/temperature/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Environment::Temperature::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Environment::Temperature::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Environment::Temperature::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "yellow")
    {
        if(yellow == nullptr)
        {
            yellow = std::make_shared<Native::System::Environment::Temperature::Threshold::Yellow>();
        }
        return yellow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Environment::Temperature::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(yellow != nullptr)
    {
        _children["yellow"] = yellow;
    }

    return _children;
}

void Native::System::Environment::Temperature::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Environment::Temperature::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Environment::Temperature::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "yellow")
        return true;
    return false;
}

Native::System::Environment::Temperature::Threshold::Yellow::Yellow()
    :
    delta_value{YType::uint8, "delta-value"},
    detail{YType::empty, "detail"}
{

    yang_name = "yellow"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Environment::Temperature::Threshold::Yellow::~Yellow()
{
}

bool Native::System::Environment::Temperature::Threshold::Yellow::has_data() const
{
    if (is_presence_container) return true;
    return delta_value.is_set
	|| detail.is_set;
}

bool Native::System::Environment::Temperature::Threshold::Yellow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delta_value.yfilter)
	|| ydk::is_set(detail.yfilter);
}

std::string Native::System::Environment::Temperature::Threshold::Yellow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/temperature/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Environment::Temperature::Threshold::Yellow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "yellow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Environment::Temperature::Threshold::Yellow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delta_value.is_set || is_set(delta_value.yfilter)) leaf_name_data.push_back(delta_value.get_name_leafdata());
    if (detail.is_set || is_set(detail.yfilter)) leaf_name_data.push_back(detail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Environment::Temperature::Threshold::Yellow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Environment::Temperature::Threshold::Yellow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::System::Environment::Temperature::Threshold::Yellow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delta-value")
    {
        delta_value = value;
        delta_value.value_namespace = name_space;
        delta_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail")
    {
        detail = value;
        detail.value_namespace = name_space;
        detail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Environment::Temperature::Threshold::Yellow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delta-value")
    {
        delta_value.yfilter = yfilter;
    }
    if(value_path == "detail")
    {
        detail.yfilter = yfilter;
    }
}

bool Native::System::Environment::Temperature::Threshold::Yellow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delta-value" || name == "detail")
        return true;
    return false;
}

Native::System::Fnf::Fnf()
    :
    bytes_count(std::make_shared<Native::System::Fnf::BytesCount>())
{
    bytes_count->parent = this;

    yang_name = "fnf"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Fnf::~Fnf()
{
}

bool Native::System::Fnf::has_data() const
{
    if (is_presence_container) return true;
    return (bytes_count !=  nullptr && bytes_count->has_data());
}

bool Native::System::Fnf::has_operation() const
{
    return is_set(yfilter)
	|| (bytes_count !=  nullptr && bytes_count->has_operation());
}

std::string Native::System::Fnf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Fnf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:fnf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Fnf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Fnf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes-count")
    {
        if(bytes_count == nullptr)
        {
            bytes_count = std::make_shared<Native::System::Fnf::BytesCount>();
        }
        return bytes_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Fnf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bytes_count != nullptr)
    {
        _children["bytes-count"] = bytes_count;
    }

    return _children;
}

void Native::System::Fnf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Fnf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Fnf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes-count")
        return true;
    return false;
}

Native::System::Fnf::BytesCount::BytesCount()
    :
    layer2{YType::empty, "layer2"}
{

    yang_name = "bytes-count"; yang_parent_name = "fnf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Fnf::BytesCount::~BytesCount()
{
}

bool Native::System::Fnf::BytesCount::has_data() const
{
    if (is_presence_container) return true;
    return layer2.is_set;
}

bool Native::System::Fnf::BytesCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(layer2.yfilter);
}

std::string Native::System::Fnf::BytesCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:fnf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Fnf::BytesCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Fnf::BytesCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (layer2.is_set || is_set(layer2.yfilter)) leaf_name_data.push_back(layer2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Fnf::BytesCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Fnf::BytesCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::System::Fnf::BytesCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "layer2")
    {
        layer2 = value;
        layer2.value_namespace = name_space;
        layer2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Fnf::BytesCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "layer2")
    {
        layer2.yfilter = yfilter;
    }
}

bool Native::System::Fnf::BytesCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "layer2")
        return true;
    return false;
}

Native::System::Ignore::Ignore()
    :
    startupconfig(std::make_shared<Native::System::Ignore::Startupconfig>())
{
    startupconfig->parent = this;

    yang_name = "ignore"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Ignore::~Ignore()
{
}

bool Native::System::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return (startupconfig !=  nullptr && startupconfig->has_data());
}

bool Native::System::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| (startupconfig !=  nullptr && startupconfig->has_operation());
}

std::string Native::System::Ignore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "startupconfig")
    {
        if(startupconfig == nullptr)
        {
            startupconfig = std::make_shared<Native::System::Ignore::Startupconfig>();
        }
        return startupconfig;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(startupconfig != nullptr)
    {
        _children["startupconfig"] = startupconfig;
    }

    return _children;
}

void Native::System::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "startupconfig")
        return true;
    return false;
}

Native::System::Ignore::Startupconfig::Startupconfig()
    :
    switch_(std::make_shared<Native::System::Ignore::Startupconfig::Switch>())
{
    switch_->parent = this;

    yang_name = "startupconfig"; yang_parent_name = "ignore"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Ignore::Startupconfig::~Startupconfig()
{
}

bool Native::System::Ignore::Startupconfig::has_data() const
{
    if (is_presence_container) return true;
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::System::Ignore::Startupconfig::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::System::Ignore::Startupconfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:ignore/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Ignore::Startupconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "startupconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Ignore::Startupconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Ignore::Startupconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::System::Ignore::Startupconfig::Switch>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Ignore::Startupconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switch_ != nullptr)
    {
        _children["switch"] = switch_;
    }

    return _children;
}

void Native::System::Ignore::Startupconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Ignore::Startupconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Ignore::Startupconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::System::Ignore::Startupconfig::Switch::Switch()
    :
    number{YType::uint8, "number"},
    all{YType::empty, "all"}
{

    yang_name = "switch"; yang_parent_name = "startupconfig"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Ignore::Startupconfig::Switch::~Switch()
{
}

bool Native::System::Ignore::Startupconfig::Switch::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| all.is_set;
}

bool Native::System::Ignore::Startupconfig::Switch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::System::Ignore::Startupconfig::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:ignore/startupconfig/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Ignore::Startupconfig::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Ignore::Startupconfig::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Ignore::Startupconfig::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Ignore::Startupconfig::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::System::Ignore::Startupconfig::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Ignore::Startupconfig::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::System::Ignore::Startupconfig::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "all")
        return true;
    return false;
}

Native::System::ModeButton::ModeButton()
    :
    reset{YType::empty, "reset"}
{

    yang_name = "mode-button"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::ModeButton::~ModeButton()
{
}

bool Native::System::ModeButton::has_data() const
{
    if (is_presence_container) return true;
    return reset.is_set;
}

bool Native::System::ModeButton::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reset.yfilter);
}

std::string Native::System::ModeButton::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::ModeButton::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mode-button";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::ModeButton::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::ModeButton::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::ModeButton::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::System::ModeButton::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::ModeButton::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
}

bool Native::System::ModeButton::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset")
        return true;
    return false;
}

Native::System::Mtu::Mtu()
    :
    size{YType::uint16, "size"},
    jumbo{YType::uint16, "jumbo"},
    routing{YType::uint16, "routing"}
{

    yang_name = "mtu"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Mtu::~Mtu()
{
}

bool Native::System::Mtu::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| jumbo.is_set
	|| routing.is_set;
}

bool Native::System::Mtu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(jumbo.yfilter)
	|| ydk::is_set(routing.yfilter);
}

std::string Native::System::Mtu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mtu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mtu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (jumbo.is_set || is_set(jumbo.yfilter)) leaf_name_data.push_back(jumbo.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Mtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Mtu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::System::Mtu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jumbo")
    {
        jumbo = value;
        jumbo.value_namespace = name_space;
        jumbo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Mtu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "jumbo")
    {
        jumbo.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
}

bool Native::System::Mtu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "jumbo" || name == "routing")
        return true;
    return false;
}

Native::System::Mode::Mode()
    :
    maintenance(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Mode::~Mode()
{
}

bool Native::System::Mode::has_data() const
{
    if (is_presence_container) return true;
    return (maintenance !=  nullptr && maintenance->has_data());
}

bool Native::System::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (maintenance !=  nullptr && maintenance->has_operation());
}

std::string Native::System::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mmode:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maintenance")
    {
        if(maintenance == nullptr)
        {
            maintenance = std::make_shared<Native::System::Mode::Maintenance>();
        }
        return maintenance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(maintenance != nullptr)
    {
        _children["maintenance"] = maintenance;
    }

    return _children;
}

void Native::System::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maintenance")
        return true;
    return false;
}

Native::System::Mode::Maintenance::Maintenance()
    :
    config_maintenance(std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance>())
{
    config_maintenance->parent = this;

    yang_name = "maintenance"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::System::Mode::Maintenance::~Maintenance()
{
}

bool Native::System::Mode::Maintenance::has_data() const
{
    if (is_presence_container) return true;
    return (config_maintenance !=  nullptr && config_maintenance->has_data());
}

bool Native::System::Mode::Maintenance::has_operation() const
{
    return is_set(yfilter)
	|| (config_maintenance !=  nullptr && config_maintenance->has_operation());
}

std::string Native::System::Mode::Maintenance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mode::Maintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mode::Maintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Mode::Maintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-maintenance")
    {
        if(config_maintenance == nullptr)
        {
            config_maintenance = std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance>();
        }
        return config_maintenance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Mode::Maintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_maintenance != nullptr)
    {
        _children["config-maintenance"] = config_maintenance;
    }

    return _children;
}

void Native::System::Mode::Maintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Mode::Maintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Mode::Maintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-maintenance")
        return true;
    return false;
}

Native::System::Mode::Maintenance::ConfigMaintenance::ConfigMaintenance()
    :
    failsafe{YType::uint8, "failsafe"},
    template_{YType::str, "template"},
    timeout{YType::uint8, "timeout"}
        ,
    on_reload(std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload>())
{
    on_reload->parent = this;

    yang_name = "config-maintenance"; yang_parent_name = "maintenance"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Mode::Maintenance::ConfigMaintenance::~ConfigMaintenance()
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::has_data() const
{
    if (is_presence_container) return true;
    return failsafe.is_set
	|| template_.is_set
	|| timeout.is_set
	|| (on_reload !=  nullptr && on_reload->has_data());
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failsafe.yfilter)
	|| ydk::is_set(template_.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (on_reload !=  nullptr && on_reload->has_operation());
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/maintenance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mode::Maintenance::ConfigMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failsafe.is_set || is_set(failsafe.yfilter)) leaf_name_data.push_back(failsafe.get_name_leafdata());
    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Mode::Maintenance::ConfigMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-reload")
    {
        if(on_reload == nullptr)
        {
            on_reload = std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload>();
        }
        return on_reload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Mode::Maintenance::ConfigMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(on_reload != nullptr)
    {
        _children["on-reload"] = on_reload;
    }

    return _children;
}

void Native::System::Mode::Maintenance::ConfigMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failsafe")
    {
        failsafe = value;
        failsafe.value_namespace = name_space;
        failsafe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Mode::Maintenance::ConfigMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failsafe")
    {
        failsafe.yfilter = yfilter;
    }
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-reload" || name == "failsafe" || name == "template" || name == "timeout")
        return true;
    return false;
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::OnReload()
    :
    reset_reason(std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason>())
{
    reset_reason->parent = this;

    yang_name = "on-reload"; yang_parent_name = "config-maintenance"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::~OnReload()
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::has_data() const
{
    if (is_presence_container) return true;
    return (reset_reason !=  nullptr && reset_reason->has_data());
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::has_operation() const
{
    return is_set(yfilter)
	|| (reset_reason !=  nullptr && reset_reason->has_operation());
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/maintenance/config-maintenance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-reload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reset-reason")
    {
        if(reset_reason == nullptr)
        {
            reset_reason = std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason>();
        }
        return reset_reason;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reset_reason != nullptr)
    {
        _children["reset-reason"] = reset_reason;
    }

    return _children;
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset-reason")
        return true;
    return false;
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::ResetReason()
    :
    maintenance{YType::empty, "maintenance"}
{

    yang_name = "reset-reason"; yang_parent_name = "on-reload"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::~ResetReason()
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::has_data() const
{
    if (is_presence_container) return true;
    return maintenance.is_set;
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintenance.yfilter);
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/maintenance/config-maintenance/on-reload/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset-reason";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance.is_set || is_set(maintenance.yfilter)) leaf_name_data.push_back(maintenance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintenance")
    {
        maintenance = value;
        maintenance.value_namespace = name_space;
        maintenance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintenance")
    {
        maintenance.yfilter = yfilter;
    }
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maintenance")
        return true;
    return false;
}

Native::Errdisable::Errdisable()
    :
    detect(std::make_shared<Native::Errdisable::Detect>())
    , flap_setting(std::make_shared<Native::Errdisable::FlapSetting>())
    , recovery(std::make_shared<Native::Errdisable::Recovery>())
{
    detect->parent = this;
    flap_setting->parent = this;
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::~Errdisable()
{
}

bool Native::Errdisable::has_data() const
{
    if (is_presence_container) return true;
    return (detect !=  nullptr && detect->has_data())
	|| (flap_setting !=  nullptr && flap_setting->has_data())
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (detect !=  nullptr && detect->has_operation())
	|| (flap_setting !=  nullptr && flap_setting->has_operation())
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Errdisable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detect")
    {
        if(detect == nullptr)
        {
            detect = std::make_shared<Native::Errdisable::Detect>();
        }
        return detect;
    }

    if(child_yang_name == "flap-setting")
    {
        if(flap_setting == nullptr)
        {
            flap_setting = std::make_shared<Native::Errdisable::FlapSetting>();
        }
        return flap_setting;
    }

    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detect != nullptr)
    {
        _children["detect"] = detect;
    }

    if(flap_setting != nullptr)
    {
        _children["flap-setting"] = flap_setting;
    }

    if(recovery != nullptr)
    {
        _children["recovery"] = recovery;
    }

    return _children;
}

void Native::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detect" || name == "flap-setting" || name == "recovery")
        return true;
    return false;
}

Native::Errdisable::Detect::Detect()
    :
    cause(std::make_shared<Native::Errdisable::Detect::Cause>())
{
    cause->parent = this;

    yang_name = "detect"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::Detect::~Detect()
{
}

bool Native::Errdisable::Detect::has_data() const
{
    if (is_presence_container) return true;
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::Detect::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::Detect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::Detect::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::Detect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cause != nullptr)
    {
        _children["cause"] = cause;
    }

    return _children;
}

void Native::Errdisable::Detect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::Detect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::Detect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::Cause()
    :
    all{YType::empty, "all"},
    arp_inspection{YType::empty, "arp-inspection"},
    bpduguard{YType::empty, "bpduguard"},
    dhcp_rate_limit{YType::empty, "dhcp-rate-limit"},
    dtp_flap{YType::empty, "dtp-flap"},
    gbic_invalid{YType::empty, "gbic-invalid"},
    inline_power{YType::empty, "inline-power"},
    l2ptguard{YType::empty, "l2ptguard"},
    link_flap{YType::empty, "link-flap"},
    loopback{YType::empty, "loopback"},
    mlacp_minlink{YType::empty, "mlacp-minlink"},
    pagp_flap{YType::empty, "pagp-flap"},
    pppoe_ia_rate_limit{YType::empty, "pppoe-ia-rate-limit"},
    sfp_config_mismatch{YType::empty, "sfp-config-mismatch"},
    small_frame{YType::empty, "small-frame"}
        ,
    security_violation(std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation>())
{
    security_violation->parent = this;

    yang_name = "cause"; yang_parent_name = "detect"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::Detect::Cause::~Cause()
{
}

bool Native::Errdisable::Detect::Cause::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| arp_inspection.is_set
	|| bpduguard.is_set
	|| dhcp_rate_limit.is_set
	|| dtp_flap.is_set
	|| gbic_invalid.is_set
	|| inline_power.is_set
	|| l2ptguard.is_set
	|| link_flap.is_set
	|| loopback.is_set
	|| mlacp_minlink.is_set
	|| pagp_flap.is_set
	|| pppoe_ia_rate_limit.is_set
	|| sfp_config_mismatch.is_set
	|| small_frame.is_set
	|| (security_violation !=  nullptr && security_violation->has_data());
}

bool Native::Errdisable::Detect::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(arp_inspection.yfilter)
	|| ydk::is_set(bpduguard.yfilter)
	|| ydk::is_set(dhcp_rate_limit.yfilter)
	|| ydk::is_set(dtp_flap.yfilter)
	|| ydk::is_set(gbic_invalid.yfilter)
	|| ydk::is_set(inline_power.yfilter)
	|| ydk::is_set(l2ptguard.yfilter)
	|| ydk::is_set(link_flap.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(mlacp_minlink.yfilter)
	|| ydk::is_set(pagp_flap.yfilter)
	|| ydk::is_set(pppoe_ia_rate_limit.yfilter)
	|| ydk::is_set(sfp_config_mismatch.yfilter)
	|| ydk::is_set(small_frame.yfilter)
	|| (security_violation !=  nullptr && security_violation->has_operation());
}

std::string Native::Errdisable::Detect::Cause::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (arp_inspection.is_set || is_set(arp_inspection.yfilter)) leaf_name_data.push_back(arp_inspection.get_name_leafdata());
    if (bpduguard.is_set || is_set(bpduguard.yfilter)) leaf_name_data.push_back(bpduguard.get_name_leafdata());
    if (dhcp_rate_limit.is_set || is_set(dhcp_rate_limit.yfilter)) leaf_name_data.push_back(dhcp_rate_limit.get_name_leafdata());
    if (dtp_flap.is_set || is_set(dtp_flap.yfilter)) leaf_name_data.push_back(dtp_flap.get_name_leafdata());
    if (gbic_invalid.is_set || is_set(gbic_invalid.yfilter)) leaf_name_data.push_back(gbic_invalid.get_name_leafdata());
    if (inline_power.is_set || is_set(inline_power.yfilter)) leaf_name_data.push_back(inline_power.get_name_leafdata());
    if (l2ptguard.is_set || is_set(l2ptguard.yfilter)) leaf_name_data.push_back(l2ptguard.get_name_leafdata());
    if (link_flap.is_set || is_set(link_flap.yfilter)) leaf_name_data.push_back(link_flap.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (mlacp_minlink.is_set || is_set(mlacp_minlink.yfilter)) leaf_name_data.push_back(mlacp_minlink.get_name_leafdata());
    if (pagp_flap.is_set || is_set(pagp_flap.yfilter)) leaf_name_data.push_back(pagp_flap.get_name_leafdata());
    if (pppoe_ia_rate_limit.is_set || is_set(pppoe_ia_rate_limit.yfilter)) leaf_name_data.push_back(pppoe_ia_rate_limit.get_name_leafdata());
    if (sfp_config_mismatch.is_set || is_set(sfp_config_mismatch.yfilter)) leaf_name_data.push_back(sfp_config_mismatch.get_name_leafdata());
    if (small_frame.is_set || is_set(small_frame.yfilter)) leaf_name_data.push_back(small_frame.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::Detect::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-violation")
    {
        if(security_violation == nullptr)
        {
            security_violation = std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation>();
        }
        return security_violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::Detect::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security_violation != nullptr)
    {
        _children["security-violation"] = security_violation;
    }

    return _children;
}

void Native::Errdisable::Detect::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection = value;
        arp_inspection.value_namespace = name_space;
        arp_inspection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpduguard")
    {
        bpduguard = value;
        bpduguard.value_namespace = name_space;
        bpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit = value;
        dhcp_rate_limit.value_namespace = name_space;
        dhcp_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap = value;
        dtp_flap.value_namespace = name_space;
        dtp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid = value;
        gbic_invalid.value_namespace = name_space;
        gbic_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inline-power")
    {
        inline_power = value;
        inline_power.value_namespace = name_space;
        inline_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard = value;
        l2ptguard.value_namespace = name_space;
        l2ptguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-flap")
    {
        link_flap = value;
        link_flap.value_namespace = name_space;
        link_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink = value;
        mlacp_minlink.value_namespace = name_space;
        mlacp_minlink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap = value;
        pagp_flap.value_namespace = name_space;
        pagp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit = value;
        pppoe_ia_rate_limit.value_namespace = name_space;
        pppoe_ia_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch = value;
        sfp_config_mismatch.value_namespace = name_space;
        sfp_config_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small-frame")
    {
        small_frame = value;
        small_frame.value_namespace = name_space;
        small_frame.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Detect::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection.yfilter = yfilter;
    }
    if(value_path == "bpduguard")
    {
        bpduguard.yfilter = yfilter;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit.yfilter = yfilter;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap.yfilter = yfilter;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid.yfilter = yfilter;
    }
    if(value_path == "inline-power")
    {
        inline_power.yfilter = yfilter;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard.yfilter = yfilter;
    }
    if(value_path == "link-flap")
    {
        link_flap.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink.yfilter = yfilter;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap.yfilter = yfilter;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit.yfilter = yfilter;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch.yfilter = yfilter;
    }
    if(value_path == "small-frame")
    {
        small_frame.yfilter = yfilter;
    }
}

bool Native::Errdisable::Detect::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-violation" || name == "all" || name == "arp-inspection" || name == "bpduguard" || name == "dhcp-rate-limit" || name == "dtp-flap" || name == "gbic-invalid" || name == "inline-power" || name == "l2ptguard" || name == "link-flap" || name == "loopback" || name == "mlacp-minlink" || name == "pagp-flap" || name == "pppoe-ia-rate-limit" || name == "sfp-config-mismatch" || name == "small-frame")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::SecurityViolation()
    :
    shutdown(std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown>())
{
    shutdown->parent = this;

    yang_name = "security-violation"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::Detect::Cause::SecurityViolation::~SecurityViolation()
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_data() const
{
    if (is_presence_container) return true;
    return (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_operation() const
{
    return is_set(yfilter)
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::Cause::SecurityViolation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::Detect::Cause::SecurityViolation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::Detect::Cause::SecurityViolation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    return _children;
}

void Native::Errdisable::Detect::Cause::SecurityViolation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::Detect::Cause::SecurityViolation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::Shutdown()
    :
    vlan{YType::empty, "vlan"}
{

    yang_name = "shutdown"; yang_parent_name = "security-violation"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::~Shutdown()
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/cause/security-violation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::FlapSetting()
    :
    cause(std::make_shared<Native::Errdisable::FlapSetting::Cause>())
{
    cause->parent = this;

    yang_name = "flap-setting"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::FlapSetting::~FlapSetting()
{
}

bool Native::Errdisable::FlapSetting::has_data() const
{
    if (is_presence_container) return true;
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::FlapSetting::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::FlapSetting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flap-setting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::FlapSetting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::FlapSetting::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::FlapSetting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cause != nullptr)
    {
        _children["cause"] = cause;
    }

    return _children;
}

void Native::Errdisable::FlapSetting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::FlapSetting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::FlapSetting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::Cause()
    :
    dtp_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::DtpFlap>())
    , link_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::LinkFlap>())
    , pagp_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::PagpFlap>())
{
    dtp_flap->parent = this;
    link_flap->parent = this;
    pagp_flap->parent = this;

    yang_name = "cause"; yang_parent_name = "flap-setting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::FlapSetting::Cause::~Cause()
{
}

bool Native::Errdisable::FlapSetting::Cause::has_data() const
{
    if (is_presence_container) return true;
    return (dtp_flap !=  nullptr && dtp_flap->has_data())
	|| (link_flap !=  nullptr && link_flap->has_data())
	|| (pagp_flap !=  nullptr && pagp_flap->has_data());
}

bool Native::Errdisable::FlapSetting::Cause::has_operation() const
{
    return is_set(yfilter)
	|| (dtp_flap !=  nullptr && dtp_flap->has_operation())
	|| (link_flap !=  nullptr && link_flap->has_operation())
	|| (pagp_flap !=  nullptr && pagp_flap->has_operation());
}

std::string Native::Errdisable::FlapSetting::Cause::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::FlapSetting::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dtp-flap")
    {
        if(dtp_flap == nullptr)
        {
            dtp_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::DtpFlap>();
        }
        return dtp_flap;
    }

    if(child_yang_name == "link-flap")
    {
        if(link_flap == nullptr)
        {
            link_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::LinkFlap>();
        }
        return link_flap;
    }

    if(child_yang_name == "pagp-flap")
    {
        if(pagp_flap == nullptr)
        {
            pagp_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::PagpFlap>();
        }
        return pagp_flap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::FlapSetting::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dtp_flap != nullptr)
    {
        _children["dtp-flap"] = dtp_flap;
    }

    if(link_flap != nullptr)
    {
        _children["link-flap"] = link_flap;
    }

    if(pagp_flap != nullptr)
    {
        _children["pagp-flap"] = pagp_flap;
    }

    return _children;
}

void Native::Errdisable::FlapSetting::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::FlapSetting::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::FlapSetting::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dtp-flap" || name == "link-flap" || name == "pagp-flap")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::DtpFlap::DtpFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{

    yang_name = "dtp-flap"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::FlapSetting::Cause::DtpFlap::~DtpFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_data() const
{
    if (is_presence_container) return true;
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::DtpFlap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::DtpFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dtp-flap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::DtpFlap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::FlapSetting::Cause::DtpFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::FlapSetting::Cause::DtpFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Errdisable::FlapSetting::Cause::DtpFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::DtpFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::LinkFlap::LinkFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{

    yang_name = "link-flap"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::FlapSetting::Cause::LinkFlap::~LinkFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_data() const
{
    if (is_presence_container) return true;
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::LinkFlap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::LinkFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::LinkFlap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::FlapSetting::Cause::LinkFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::FlapSetting::Cause::LinkFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Errdisable::FlapSetting::Cause::LinkFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::LinkFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::PagpFlap::PagpFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{

    yang_name = "pagp-flap"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::FlapSetting::Cause::PagpFlap::~PagpFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_data() const
{
    if (is_presence_container) return true;
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::PagpFlap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::PagpFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pagp-flap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::PagpFlap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::FlapSetting::Cause::PagpFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::FlapSetting::Cause::PagpFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Errdisable::FlapSetting::Cause::PagpFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::PagpFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::Recovery::Recovery()
    :
    interval{YType::uint32, "interval"}
        ,
    cause(std::make_shared<Native::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::Recovery::~Recovery()
{
}

bool Native::Errdisable::Recovery::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cause != nullptr)
    {
        _children["cause"] = cause;
    }

    return _children;
}

void Native::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause" || name == "interval")
        return true;
    return false;
}

Native::Errdisable::Recovery::Cause::Cause()
    :
    all{YType::empty, "all"},
    arp_inspection{YType::empty, "arp-inspection"},
    bpduguard{YType::empty, "bpduguard"},
    channel_misconfig{YType::empty, "channel-misconfig"},
    dhcp_rate_limit{YType::empty, "dhcp-rate-limit"},
    dtp_flap{YType::empty, "dtp-flap"},
    gbic_invalid{YType::empty, "gbic-invalid"},
    inline_power{YType::empty, "inline-power"},
    l2ptguard{YType::empty, "l2ptguard"},
    link_flap{YType::empty, "link-flap"},
    link_monitor_failure{YType::empty, "link-monitor-failure"},
    loopback{YType::empty, "loopback"},
    mac_limit{YType::empty, "mac-limit"},
    mlacp_minlink{YType::empty, "mlacp-minlink"},
    pagp_flap{YType::empty, "pagp-flap"},
    port_mode_failure{YType::empty, "port-mode-failure"},
    pppoe_ia_rate_limit{YType::empty, "pppoe-ia-rate-limit"},
    psp{YType::empty, "psp"},
    psecure_violation{YType::empty, "psecure-violation"},
    security_violation{YType::empty, "security-violation"},
    sfp_config_mismatch{YType::empty, "sfp-config-mismatch"},
    small_frame{YType::empty, "small-frame"},
    storm_control{YType::empty, "storm-control"},
    udld{YType::empty, "udld"},
    unicast_flood{YType::empty, "unicast-flood"},
    vmps{YType::empty, "vmps"}
        ,
    oam_remote_failure(nullptr) // presence node
{

    yang_name = "cause"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Errdisable::Recovery::Cause::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| arp_inspection.is_set
	|| bpduguard.is_set
	|| channel_misconfig.is_set
	|| dhcp_rate_limit.is_set
	|| dtp_flap.is_set
	|| gbic_invalid.is_set
	|| inline_power.is_set
	|| l2ptguard.is_set
	|| link_flap.is_set
	|| link_monitor_failure.is_set
	|| loopback.is_set
	|| mac_limit.is_set
	|| mlacp_minlink.is_set
	|| pagp_flap.is_set
	|| port_mode_failure.is_set
	|| pppoe_ia_rate_limit.is_set
	|| psp.is_set
	|| psecure_violation.is_set
	|| security_violation.is_set
	|| sfp_config_mismatch.is_set
	|| small_frame.is_set
	|| storm_control.is_set
	|| udld.is_set
	|| unicast_flood.is_set
	|| vmps.is_set
	|| (oam_remote_failure !=  nullptr && oam_remote_failure->has_data());
}

bool Native::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(arp_inspection.yfilter)
	|| ydk::is_set(bpduguard.yfilter)
	|| ydk::is_set(channel_misconfig.yfilter)
	|| ydk::is_set(dhcp_rate_limit.yfilter)
	|| ydk::is_set(dtp_flap.yfilter)
	|| ydk::is_set(gbic_invalid.yfilter)
	|| ydk::is_set(inline_power.yfilter)
	|| ydk::is_set(l2ptguard.yfilter)
	|| ydk::is_set(link_flap.yfilter)
	|| ydk::is_set(link_monitor_failure.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mlacp_minlink.yfilter)
	|| ydk::is_set(pagp_flap.yfilter)
	|| ydk::is_set(port_mode_failure.yfilter)
	|| ydk::is_set(pppoe_ia_rate_limit.yfilter)
	|| ydk::is_set(psp.yfilter)
	|| ydk::is_set(psecure_violation.yfilter)
	|| ydk::is_set(security_violation.yfilter)
	|| ydk::is_set(sfp_config_mismatch.yfilter)
	|| ydk::is_set(small_frame.yfilter)
	|| ydk::is_set(storm_control.yfilter)
	|| ydk::is_set(udld.yfilter)
	|| ydk::is_set(unicast_flood.yfilter)
	|| ydk::is_set(vmps.yfilter)
	|| (oam_remote_failure !=  nullptr && oam_remote_failure->has_operation());
}

std::string Native::Errdisable::Recovery::Cause::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/recovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Recovery::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (arp_inspection.is_set || is_set(arp_inspection.yfilter)) leaf_name_data.push_back(arp_inspection.get_name_leafdata());
    if (bpduguard.is_set || is_set(bpduguard.yfilter)) leaf_name_data.push_back(bpduguard.get_name_leafdata());
    if (channel_misconfig.is_set || is_set(channel_misconfig.yfilter)) leaf_name_data.push_back(channel_misconfig.get_name_leafdata());
    if (dhcp_rate_limit.is_set || is_set(dhcp_rate_limit.yfilter)) leaf_name_data.push_back(dhcp_rate_limit.get_name_leafdata());
    if (dtp_flap.is_set || is_set(dtp_flap.yfilter)) leaf_name_data.push_back(dtp_flap.get_name_leafdata());
    if (gbic_invalid.is_set || is_set(gbic_invalid.yfilter)) leaf_name_data.push_back(gbic_invalid.get_name_leafdata());
    if (inline_power.is_set || is_set(inline_power.yfilter)) leaf_name_data.push_back(inline_power.get_name_leafdata());
    if (l2ptguard.is_set || is_set(l2ptguard.yfilter)) leaf_name_data.push_back(l2ptguard.get_name_leafdata());
    if (link_flap.is_set || is_set(link_flap.yfilter)) leaf_name_data.push_back(link_flap.get_name_leafdata());
    if (link_monitor_failure.is_set || is_set(link_monitor_failure.yfilter)) leaf_name_data.push_back(link_monitor_failure.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mlacp_minlink.is_set || is_set(mlacp_minlink.yfilter)) leaf_name_data.push_back(mlacp_minlink.get_name_leafdata());
    if (pagp_flap.is_set || is_set(pagp_flap.yfilter)) leaf_name_data.push_back(pagp_flap.get_name_leafdata());
    if (port_mode_failure.is_set || is_set(port_mode_failure.yfilter)) leaf_name_data.push_back(port_mode_failure.get_name_leafdata());
    if (pppoe_ia_rate_limit.is_set || is_set(pppoe_ia_rate_limit.yfilter)) leaf_name_data.push_back(pppoe_ia_rate_limit.get_name_leafdata());
    if (psp.is_set || is_set(psp.yfilter)) leaf_name_data.push_back(psp.get_name_leafdata());
    if (psecure_violation.is_set || is_set(psecure_violation.yfilter)) leaf_name_data.push_back(psecure_violation.get_name_leafdata());
    if (security_violation.is_set || is_set(security_violation.yfilter)) leaf_name_data.push_back(security_violation.get_name_leafdata());
    if (sfp_config_mismatch.is_set || is_set(sfp_config_mismatch.yfilter)) leaf_name_data.push_back(sfp_config_mismatch.get_name_leafdata());
    if (small_frame.is_set || is_set(small_frame.yfilter)) leaf_name_data.push_back(small_frame.get_name_leafdata());
    if (storm_control.is_set || is_set(storm_control.yfilter)) leaf_name_data.push_back(storm_control.get_name_leafdata());
    if (udld.is_set || is_set(udld.yfilter)) leaf_name_data.push_back(udld.get_name_leafdata());
    if (unicast_flood.is_set || is_set(unicast_flood.yfilter)) leaf_name_data.push_back(unicast_flood.get_name_leafdata());
    if (vmps.is_set || is_set(vmps.yfilter)) leaf_name_data.push_back(vmps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam-remote-failure")
    {
        if(oam_remote_failure == nullptr)
        {
            oam_remote_failure = std::make_shared<Native::Errdisable::Recovery::Cause::OamRemoteFailure>();
        }
        return oam_remote_failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oam_remote_failure != nullptr)
    {
        _children["oam-remote-failure"] = oam_remote_failure;
    }

    return _children;
}

void Native::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection = value;
        arp_inspection.value_namespace = name_space;
        arp_inspection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpduguard")
    {
        bpduguard = value;
        bpduguard.value_namespace = name_space;
        bpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-misconfig")
    {
        channel_misconfig = value;
        channel_misconfig.value_namespace = name_space;
        channel_misconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit = value;
        dhcp_rate_limit.value_namespace = name_space;
        dhcp_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap = value;
        dtp_flap.value_namespace = name_space;
        dtp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid = value;
        gbic_invalid.value_namespace = name_space;
        gbic_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inline-power")
    {
        inline_power = value;
        inline_power.value_namespace = name_space;
        inline_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard = value;
        l2ptguard.value_namespace = name_space;
        l2ptguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-flap")
    {
        link_flap = value;
        link_flap.value_namespace = name_space;
        link_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-monitor-failure")
    {
        link_monitor_failure = value;
        link_monitor_failure.value_namespace = name_space;
        link_monitor_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink = value;
        mlacp_minlink.value_namespace = name_space;
        mlacp_minlink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap = value;
        pagp_flap.value_namespace = name_space;
        pagp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-mode-failure")
    {
        port_mode_failure = value;
        port_mode_failure.value_namespace = name_space;
        port_mode_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit = value;
        pppoe_ia_rate_limit.value_namespace = name_space;
        pppoe_ia_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psp")
    {
        psp = value;
        psp.value_namespace = name_space;
        psp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psecure-violation")
    {
        psecure_violation = value;
        psecure_violation.value_namespace = name_space;
        psecure_violation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-violation")
    {
        security_violation = value;
        security_violation.value_namespace = name_space;
        security_violation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch = value;
        sfp_config_mismatch.value_namespace = name_space;
        sfp_config_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small-frame")
    {
        small_frame = value;
        small_frame.value_namespace = name_space;
        small_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control")
    {
        storm_control = value;
        storm_control.value_namespace = name_space;
        storm_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udld")
    {
        udld = value;
        udld.value_namespace = name_space;
        udld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-flood")
    {
        unicast_flood = value;
        unicast_flood.value_namespace = name_space;
        unicast_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmps")
    {
        vmps = value;
        vmps.value_namespace = name_space;
        vmps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection.yfilter = yfilter;
    }
    if(value_path == "bpduguard")
    {
        bpduguard.yfilter = yfilter;
    }
    if(value_path == "channel-misconfig")
    {
        channel_misconfig.yfilter = yfilter;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit.yfilter = yfilter;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap.yfilter = yfilter;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid.yfilter = yfilter;
    }
    if(value_path == "inline-power")
    {
        inline_power.yfilter = yfilter;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard.yfilter = yfilter;
    }
    if(value_path == "link-flap")
    {
        link_flap.yfilter = yfilter;
    }
    if(value_path == "link-monitor-failure")
    {
        link_monitor_failure.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink.yfilter = yfilter;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap.yfilter = yfilter;
    }
    if(value_path == "port-mode-failure")
    {
        port_mode_failure.yfilter = yfilter;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit.yfilter = yfilter;
    }
    if(value_path == "psp")
    {
        psp.yfilter = yfilter;
    }
    if(value_path == "psecure-violation")
    {
        psecure_violation.yfilter = yfilter;
    }
    if(value_path == "security-violation")
    {
        security_violation.yfilter = yfilter;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch.yfilter = yfilter;
    }
    if(value_path == "small-frame")
    {
        small_frame.yfilter = yfilter;
    }
    if(value_path == "storm-control")
    {
        storm_control.yfilter = yfilter;
    }
    if(value_path == "udld")
    {
        udld.yfilter = yfilter;
    }
    if(value_path == "unicast-flood")
    {
        unicast_flood.yfilter = yfilter;
    }
    if(value_path == "vmps")
    {
        vmps.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam-remote-failure" || name == "all" || name == "arp-inspection" || name == "bpduguard" || name == "channel-misconfig" || name == "dhcp-rate-limit" || name == "dtp-flap" || name == "gbic-invalid" || name == "inline-power" || name == "l2ptguard" || name == "link-flap" || name == "link-monitor-failure" || name == "loopback" || name == "mac-limit" || name == "mlacp-minlink" || name == "pagp-flap" || name == "port-mode-failure" || name == "pppoe-ia-rate-limit" || name == "psp" || name == "psecure-violation" || name == "security-violation" || name == "sfp-config-mismatch" || name == "small-frame" || name == "storm-control" || name == "udld" || name == "unicast-flood" || name == "vmps")
        return true;
    return false;
}

Native::Errdisable::Recovery::Cause::OamRemoteFailure::OamRemoteFailure()
    :
    critical_event{YType::empty, "critical-event"},
    dying_gasp{YType::empty, "dying-gasp"},
    link_fault{YType::empty, "link-fault"}
{

    yang_name = "oam-remote-failure"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Errdisable::Recovery::Cause::OamRemoteFailure::~OamRemoteFailure()
{
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_data() const
{
    if (is_presence_container) return true;
    return critical_event.is_set
	|| dying_gasp.is_set
	|| link_fault.is_set;
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical_event.yfilter)
	|| ydk::is_set(dying_gasp.yfilter)
	|| ydk::is_set(link_fault.yfilter);
}

std::string Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/recovery/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-remote-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical_event.is_set || is_set(critical_event.yfilter)) leaf_name_data.push_back(critical_event.get_name_leafdata());
    if (dying_gasp.is_set || is_set(dying_gasp.yfilter)) leaf_name_data.push_back(dying_gasp.get_name_leafdata());
    if (link_fault.is_set || is_set(link_fault.yfilter)) leaf_name_data.push_back(link_fault.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Errdisable::Recovery::Cause::OamRemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical-event")
    {
        critical_event = value;
        critical_event.value_namespace = name_space;
        critical_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp = value;
        dying_gasp.value_namespace = name_space;
        dying_gasp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fault")
    {
        link_fault = value;
        link_fault.value_namespace = name_space;
        link_fault.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::Cause::OamRemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical-event")
    {
        critical_event.yfilter = yfilter;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp.yfilter = yfilter;
    }
    if(value_path == "link-fault")
    {
        link_fault.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::Identity::Identity()
    :
    policy(this, {"name"})
    , profile(std::make_shared<Native::Identity::Profile>())
{
    profile->parent = this;

    yang_name = "identity"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Identity::~Identity()
{
}

bool Native::Identity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Identity::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Identity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::Identity::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Identity::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(profile != nullptr)
    {
        _children["profile"] = profile;
    }

    return _children;
}

void Native::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "profile")
        return true;
    return false;
}

Native::Identity::Policy::Policy()
    :
    name{YType::str, "name"},
    absolute_timer{YType::uint16, "absolute-timer"},
    access_group{YType::str, "access-group"},
    description{YType::str, "description"},
    inactivity_timer{YType::uint16, "inactivity-timer"},
    interface_template{YType::str, "interface-template"},
    sgt{YType::uint16, "sgt"},
    tag{YType::str, "tag"},
    vlan{YType::uint16, "vlan"}
        ,
    no(std::make_shared<Native::Identity::Policy::No>())
    , linksec(std::make_shared<Native::Identity::Policy::Linksec>())
    , redirect(std::make_shared<Native::Identity::Policy::Redirect>())
    , service_policy(std::make_shared<Native::Identity::Policy::ServicePolicy>())
    , tunnel(std::make_shared<Native::Identity::Policy::Tunnel>())
    , voice(std::make_shared<Native::Identity::Policy::Voice>())
{
    no->parent = this;
    linksec->parent = this;
    redirect->parent = this;
    service_policy->parent = this;
    tunnel->parent = this;
    voice->parent = this;

    yang_name = "policy"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Identity::Policy::~Policy()
{
}

bool Native::Identity::Policy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| absolute_timer.is_set
	|| access_group.is_set
	|| description.is_set
	|| inactivity_timer.is_set
	|| interface_template.is_set
	|| sgt.is_set
	|| tag.is_set
	|| vlan.is_set
	|| (no !=  nullptr && no->has_data())
	|| (linksec !=  nullptr && linksec->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Identity::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(absolute_timer.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(inactivity_timer.yfilter)
	|| ydk::is_set(interface_template.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (no !=  nullptr && no->has_operation())
	|| (linksec !=  nullptr && linksec->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Identity::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/identity/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Identity::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (absolute_timer.is_set || is_set(absolute_timer.yfilter)) leaf_name_data.push_back(absolute_timer.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (inactivity_timer.is_set || is_set(inactivity_timer.yfilter)) leaf_name_data.push_back(inactivity_timer.get_name_leafdata());
    if (interface_template.is_set || is_set(interface_template.yfilter)) leaf_name_data.push_back(interface_template.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no")
    {
        if(no == nullptr)
        {
            no = std::make_shared<Native::Identity::Policy::No>();
        }
        return no;
    }

    if(child_yang_name == "linksec")
    {
        if(linksec == nullptr)
        {
            linksec = std::make_shared<Native::Identity::Policy::Linksec>();
        }
        return linksec;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Identity::Policy::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Identity::Policy::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Identity::Policy::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Identity::Policy::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(no != nullptr)
    {
        _children["no"] = no;
    }

    if(linksec != nullptr)
    {
        _children["linksec"] = linksec;
    }

    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    if(voice != nullptr)
    {
        _children["voice"] = voice;
    }

    return _children;
}

void Native::Identity::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-timer")
    {
        absolute_timer = value;
        absolute_timer.value_namespace = name_space;
        absolute_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactivity-timer")
    {
        inactivity_timer = value;
        inactivity_timer.value_namespace = name_space;
        inactivity_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-template")
    {
        interface_template = value;
        interface_template.value_namespace = name_space;
        interface_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "absolute-timer")
    {
        absolute_timer.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "inactivity-timer")
    {
        inactivity_timer.yfilter = yfilter;
    }
    if(value_path == "interface-template")
    {
        interface_template.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no" || name == "linksec" || name == "redirect" || name == "service-policy" || name == "tunnel" || name == "voice" || name == "name" || name == "absolute-timer" || name == "access-group" || name == "description" || name == "inactivity-timer" || name == "interface-template" || name == "sgt" || name == "tag" || name == "vlan")
        return true;
    return false;
}

Native::Identity::Policy::No::No()
    :
    absolute_timer{YType::uint16, "absolute-timer"},
    access_group{YType::str, "access-group"},
    description{YType::str, "description"},
    inactivity_timer{YType::uint16, "inactivity-timer"},
    interface_template{YType::str, "interface-template"},
    sgt{YType::uint16, "sgt"},
    tag{YType::str, "tag"},
    vlan{YType::uint16, "vlan"}
        ,
    linksec(std::make_shared<Native::Identity::Policy::No::Linksec>())
    , redirect(std::make_shared<Native::Identity::Policy::No::Redirect>())
    , service_policy(std::make_shared<Native::Identity::Policy::No::ServicePolicy>())
    , tunnel(std::make_shared<Native::Identity::Policy::No::Tunnel>())
    , voice(std::make_shared<Native::Identity::Policy::No::Voice>())
{
    linksec->parent = this;
    redirect->parent = this;
    service_policy->parent = this;
    tunnel->parent = this;
    voice->parent = this;

    yang_name = "no"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::No::~No()
{
}

bool Native::Identity::Policy::No::has_data() const
{
    if (is_presence_container) return true;
    return absolute_timer.is_set
	|| access_group.is_set
	|| description.is_set
	|| inactivity_timer.is_set
	|| interface_template.is_set
	|| sgt.is_set
	|| tag.is_set
	|| vlan.is_set
	|| (linksec !=  nullptr && linksec->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Identity::Policy::No::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_timer.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(inactivity_timer.yfilter)
	|| ydk::is_set(interface_template.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (linksec !=  nullptr && linksec->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Identity::Policy::No::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_timer.is_set || is_set(absolute_timer.yfilter)) leaf_name_data.push_back(absolute_timer.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (inactivity_timer.is_set || is_set(inactivity_timer.yfilter)) leaf_name_data.push_back(inactivity_timer.get_name_leafdata());
    if (interface_template.is_set || is_set(interface_template.yfilter)) leaf_name_data.push_back(interface_template.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::No::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "linksec")
    {
        if(linksec == nullptr)
        {
            linksec = std::make_shared<Native::Identity::Policy::No::Linksec>();
        }
        return linksec;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Identity::Policy::No::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Identity::Policy::No::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Identity::Policy::No::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Identity::Policy::No::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::No::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(linksec != nullptr)
    {
        _children["linksec"] = linksec;
    }

    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    if(voice != nullptr)
    {
        _children["voice"] = voice;
    }

    return _children;
}

void Native::Identity::Policy::No::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-timer")
    {
        absolute_timer = value;
        absolute_timer.value_namespace = name_space;
        absolute_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactivity-timer")
    {
        inactivity_timer = value;
        inactivity_timer.value_namespace = name_space;
        inactivity_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-template")
    {
        interface_template = value;
        interface_template.value_namespace = name_space;
        interface_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-timer")
    {
        absolute_timer.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "inactivity-timer")
    {
        inactivity_timer.yfilter = yfilter;
    }
    if(value_path == "interface-template")
    {
        interface_template.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "linksec" || name == "redirect" || name == "service-policy" || name == "tunnel" || name == "voice" || name == "absolute-timer" || name == "access-group" || name == "description" || name == "inactivity-timer" || name == "interface-template" || name == "sgt" || name == "tag" || name == "vlan")
        return true;
    return false;
}

Native::Identity::Policy::No::Linksec::Linksec()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "linksec"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::No::Linksec::~Linksec()
{
}

bool Native::Identity::Policy::No::Linksec::has_data() const
{
    if (is_presence_container) return true;
    return policy.is_set;
}

bool Native::Identity::Policy::No::Linksec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Identity::Policy::No::Linksec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linksec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Linksec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::No::Linksec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::No::Linksec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Identity::Policy::No::Linksec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::Linksec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::Linksec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Identity::Policy::No::Redirect::Redirect()
    :
    url{YType::str, "url"}
{

    yang_name = "redirect"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::No::Redirect::~Redirect()
{
}

bool Native::Identity::Policy::No::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return url.is_set;
}

bool Native::Identity::Policy::No::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Native::Identity::Policy::No::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::No::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::No::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Identity::Policy::No::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url")
        return true;
    return false;
}

Native::Identity::Policy::No::ServicePolicy::ServicePolicy()
    :
    qos(this, {"direction"})
{

    yang_name = "service-policy"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::No::ServicePolicy::~ServicePolicy()
{
}

bool Native::Identity::Policy::No::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qos.len(); index++)
    {
        if(qos[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Identity::Policy::No::ServicePolicy::has_operation() const
{
    for (std::size_t index=0; index<qos.len(); index++)
    {
        if(qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Identity::Policy::No::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::No::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        auto ent_ = std::make_shared<Native::Identity::Policy::No::ServicePolicy::Qos>();
        ent_->parent = this;
        qos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::No::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Identity::Policy::No::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::No::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::No::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

Native::Identity::Policy::No::ServicePolicy::Qos::Qos()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "qos"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::No::ServicePolicy::Qos::~Qos()
{
}

bool Native::Identity::Policy::No::ServicePolicy::Qos::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Identity::Policy::No::ServicePolicy::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Identity::Policy::No::ServicePolicy::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::ServicePolicy::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::No::ServicePolicy::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::No::ServicePolicy::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Identity::Policy::No::ServicePolicy::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::ServicePolicy::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::ServicePolicy::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Identity::Policy::No::Tunnel::Tunnel()
    :
    type(std::make_shared<Native::Identity::Policy::No::Tunnel::Type>())
{
    type->parent = this;

    yang_name = "tunnel"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::No::Tunnel::~Tunnel()
{
}

bool Native::Identity::Policy::No::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return (type !=  nullptr && type->has_data());
}

bool Native::Identity::Policy::No::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Identity::Policy::No::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::No::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Identity::Policy::No::Tunnel::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::No::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Identity::Policy::No::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::No::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::No::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Identity::Policy::No::Tunnel::Type::Type()
    :
    capwap(std::make_shared<Native::Identity::Policy::No::Tunnel::Type::Capwap>())
{
    capwap->parent = this;

    yang_name = "type"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::No::Tunnel::Type::~Type()
{
}

bool Native::Identity::Policy::No::Tunnel::Type::has_data() const
{
    if (is_presence_container) return true;
    return (capwap !=  nullptr && capwap->has_data());
}

bool Native::Identity::Policy::No::Tunnel::Type::has_operation() const
{
    return is_set(yfilter)
	|| (capwap !=  nullptr && capwap->has_operation());
}

std::string Native::Identity::Policy::No::Tunnel::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Tunnel::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::No::Tunnel::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capwap")
    {
        if(capwap == nullptr)
        {
            capwap = std::make_shared<Native::Identity::Policy::No::Tunnel::Type::Capwap>();
        }
        return capwap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::No::Tunnel::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(capwap != nullptr)
    {
        _children["capwap"] = capwap;
    }

    return _children;
}

void Native::Identity::Policy::No::Tunnel::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::No::Tunnel::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::No::Tunnel::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capwap")
        return true;
    return false;
}

Native::Identity::Policy::No::Tunnel::Type::Capwap::Capwap()
    :
    name{YType::str, "name"}
{

    yang_name = "capwap"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::No::Tunnel::Type::Capwap::~Capwap()
{
}

bool Native::Identity::Policy::No::Tunnel::Type::Capwap::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Identity::Policy::No::Tunnel::Type::Capwap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Identity::Policy::No::Tunnel::Type::Capwap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capwap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Tunnel::Type::Capwap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::No::Tunnel::Type::Capwap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::No::Tunnel::Type::Capwap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Identity::Policy::No::Tunnel::Type::Capwap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::Tunnel::Type::Capwap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::Tunnel::Type::Capwap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Identity::Policy::No::Voice::Voice()
    :
    vlan{YType::empty, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::No::Voice::~Voice()
{
}

bool Native::Identity::Policy::No::Voice::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Identity::Policy::No::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Identity::Policy::No::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::No::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::No::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Identity::Policy::No::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Identity::Policy::Linksec::Linksec()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "linksec"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::Linksec::~Linksec()
{
}

bool Native::Identity::Policy::Linksec::has_data() const
{
    if (is_presence_container) return true;
    return policy.is_set;
}

bool Native::Identity::Policy::Linksec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Identity::Policy::Linksec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linksec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Linksec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::Linksec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::Linksec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Identity::Policy::Linksec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::Linksec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::Linksec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Identity::Policy::Redirect::Redirect()
    :
    url{YType::str, "url"}
{

    yang_name = "redirect"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::Redirect::~Redirect()
{
}

bool Native::Identity::Policy::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return url.is_set;
}

bool Native::Identity::Policy::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Native::Identity::Policy::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Identity::Policy::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url")
        return true;
    return false;
}

Native::Identity::Policy::ServicePolicy::ServicePolicy()
    :
    qos(this, {"direction"})
{

    yang_name = "service-policy"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::ServicePolicy::~ServicePolicy()
{
}

bool Native::Identity::Policy::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qos.len(); index++)
    {
        if(qos[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Identity::Policy::ServicePolicy::has_operation() const
{
    for (std::size_t index=0; index<qos.len(); index++)
    {
        if(qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Identity::Policy::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        auto ent_ = std::make_shared<Native::Identity::Policy::ServicePolicy::Qos>();
        ent_->parent = this;
        qos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Identity::Policy::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

Native::Identity::Policy::ServicePolicy::Qos::Qos()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "qos"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::ServicePolicy::Qos::~Qos()
{
}

bool Native::Identity::Policy::ServicePolicy::Qos::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Identity::Policy::ServicePolicy::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Identity::Policy::ServicePolicy::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::ServicePolicy::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::ServicePolicy::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::ServicePolicy::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Identity::Policy::ServicePolicy::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::ServicePolicy::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::ServicePolicy::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Identity::Policy::Tunnel::Tunnel()
    :
    type(std::make_shared<Native::Identity::Policy::Tunnel::Type>())
{
    type->parent = this;

    yang_name = "tunnel"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::Tunnel::~Tunnel()
{
}

bool Native::Identity::Policy::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return (type !=  nullptr && type->has_data());
}

bool Native::Identity::Policy::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Identity::Policy::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Identity::Policy::Tunnel::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Identity::Policy::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Identity::Policy::Tunnel::Type::Type()
    :
    capwap(std::make_shared<Native::Identity::Policy::Tunnel::Type::Capwap>())
{
    capwap->parent = this;

    yang_name = "type"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::Tunnel::Type::~Type()
{
}

bool Native::Identity::Policy::Tunnel::Type::has_data() const
{
    if (is_presence_container) return true;
    return (capwap !=  nullptr && capwap->has_data());
}

bool Native::Identity::Policy::Tunnel::Type::has_operation() const
{
    return is_set(yfilter)
	|| (capwap !=  nullptr && capwap->has_operation());
}

std::string Native::Identity::Policy::Tunnel::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Tunnel::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::Tunnel::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capwap")
    {
        if(capwap == nullptr)
        {
            capwap = std::make_shared<Native::Identity::Policy::Tunnel::Type::Capwap>();
        }
        return capwap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::Tunnel::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(capwap != nullptr)
    {
        _children["capwap"] = capwap;
    }

    return _children;
}

void Native::Identity::Policy::Tunnel::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::Tunnel::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::Tunnel::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capwap")
        return true;
    return false;
}

Native::Identity::Policy::Tunnel::Type::Capwap::Capwap()
    :
    name{YType::str, "name"}
{

    yang_name = "capwap"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::Tunnel::Type::Capwap::~Capwap()
{
}

bool Native::Identity::Policy::Tunnel::Type::Capwap::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Identity::Policy::Tunnel::Type::Capwap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Identity::Policy::Tunnel::Type::Capwap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capwap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Tunnel::Type::Capwap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::Tunnel::Type::Capwap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::Tunnel::Type::Capwap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Identity::Policy::Tunnel::Type::Capwap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::Tunnel::Type::Capwap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::Tunnel::Type::Capwap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Identity::Policy::Voice::Voice()
    :
    vlan{YType::empty, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Identity::Policy::Voice::~Voice()
{
}

bool Native::Identity::Policy::Voice::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Identity::Policy::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Identity::Policy::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Policy::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Policy::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Identity::Policy::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Identity::Profile::Profile()
    :
    dot1x{YType::empty, "dot1x"},
    default_{YType::empty, "default"}
{

    yang_name = "profile"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Identity::Profile::~Profile()
{
}

bool Native::Identity::Profile::has_data() const
{
    if (is_presence_container) return true;
    return dot1x.is_set
	|| default_.is_set;
}

bool Native::Identity::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Identity::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/identity/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Identity::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Identity::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Identity::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Identity::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Identity::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "default")
        return true;
    return false;
}

Native::Monitor::Monitor()
    :
    event_trace(std::make_shared<Native::Monitor::EventTrace>())
    , session(this, {"id"})
{
    event_trace->parent = this;

    yang_name = "monitor"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Monitor::~Monitor()
{
}

bool Native::Monitor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return (event_trace !=  nullptr && event_trace->has_data());
}

bool Native::Monitor::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (event_trace !=  nullptr && event_trace->has_operation());
}

std::string Native::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-trace")
    {
        if(event_trace == nullptr)
        {
            event_trace = std::make_shared<Native::Monitor::EventTrace>();
        }
        return event_trace;
    }

    if(child_yang_name == "session")
    {
        auto ent_ = std::make_shared<Native::Monitor::Session>();
        ent_->parent = this;
        session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event_trace != nullptr)
    {
        _children["event-trace"] = event_trace;
    }

    count_ = 0;
    for (auto ent_ : session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-trace" || name == "session")
        return true;
    return false;
}

Native::Monitor::EventTrace::EventTrace()
    :
    sequence_number{YType::empty, "sequence-number"}
        ,
    timestamps(nullptr) // presence node
    , atom(std::make_shared<Native::Monitor::EventTrace::Atom>())
{
    atom->parent = this;

    yang_name = "event-trace"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Monitor::EventTrace::~EventTrace()
{
}

bool Native::Monitor::EventTrace::has_data() const
{
    if (is_presence_container) return true;
    return sequence_number.is_set
	|| (timestamps !=  nullptr && timestamps->has_data())
	|| (atom !=  nullptr && atom->has_data());
}

bool Native::Monitor::EventTrace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| (timestamps !=  nullptr && timestamps->has_operation())
	|| (atom !=  nullptr && atom->has_operation());
}

std::string Native::Monitor::EventTrace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::EventTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamps")
    {
        if(timestamps == nullptr)
        {
            timestamps = std::make_shared<Native::Monitor::EventTrace::Timestamps>();
        }
        return timestamps;
    }

    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<Native::Monitor::EventTrace::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::EventTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timestamps != nullptr)
    {
        _children["timestamps"] = timestamps;
    }

    if(atom != nullptr)
    {
        _children["atom"] = atom;
    }

    return _children;
}

void Native::Monitor::EventTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::EventTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Native::Monitor::EventTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamps" || name == "atom" || name == "sequence-number")
        return true;
    return false;
}

Native::Monitor::EventTrace::Timestamps::Timestamps()
    :
    uptime{YType::empty, "uptime"}
{

    yang_name = "timestamps"; yang_parent_name = "event-trace"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Monitor::EventTrace::Timestamps::~Timestamps()
{
}

bool Native::Monitor::EventTrace::Timestamps::has_data() const
{
    if (is_presence_container) return true;
    return uptime.is_set;
}

bool Native::Monitor::EventTrace::Timestamps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uptime.yfilter);
}

std::string Native::Monitor::EventTrace::Timestamps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/event-trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::Timestamps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::Timestamps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::EventTrace::Timestamps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::EventTrace::Timestamps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::EventTrace::Timestamps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::EventTrace::Timestamps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Native::Monitor::EventTrace::Timestamps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uptime")
        return true;
    return false;
}

Native::Monitor::EventTrace::Atom::Atom()
    :
    error(std::make_shared<Native::Monitor::EventTrace::Atom::Error>())
    , event(std::make_shared<Native::Monitor::EventTrace::Atom::Event>())
    , major_(std::make_shared<Native::Monitor::EventTrace::Atom::Major>())
{
    error->parent = this;
    event->parent = this;
    major_->parent = this;

    yang_name = "atom"; yang_parent_name = "event-trace"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Monitor::EventTrace::Atom::~Atom()
{
}

bool Native::Monitor::EventTrace::Atom::has_data() const
{
    if (is_presence_container) return true;
    return (error !=  nullptr && error->has_data())
	|| (event !=  nullptr && event->has_data())
	|| (major_ !=  nullptr && major_->has_data());
}

bool Native::Monitor::EventTrace::Atom::has_operation() const
{
    return is_set(yfilter)
	|| (error !=  nullptr && error->has_operation())
	|| (event !=  nullptr && event->has_operation())
	|| (major_ !=  nullptr && major_->has_operation());
}

std::string Native::Monitor::EventTrace::Atom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/event-trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::EventTrace::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        if(error == nullptr)
        {
            error = std::make_shared<Native::Monitor::EventTrace::Atom::Error>();
        }
        return error;
    }

    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Monitor::EventTrace::Atom::Event>();
        }
        return event;
    }

    if(child_yang_name == "major")
    {
        if(major_ == nullptr)
        {
            major_ = std::make_shared<Native::Monitor::EventTrace::Atom::Major>();
        }
        return major_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::EventTrace::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(error != nullptr)
    {
        _children["error"] = error;
    }

    if(event != nullptr)
    {
        _children["event"] = event;
    }

    if(major_ != nullptr)
    {
        _children["major"] = major_;
    }

    return _children;
}

void Native::Monitor::EventTrace::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::EventTrace::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::EventTrace::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "event" || name == "major")
        return true;
    return false;
}

Native::Monitor::EventTrace::Atom::Error::Error()
    :
    enable{YType::empty, "enable"},
    disable{YType::empty, "disable"},
    include{YType::enumeration, "include"}
{

    yang_name = "error"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Monitor::EventTrace::Atom::Error::~Error()
{
}

bool Native::Monitor::EventTrace::Atom::Error::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : include.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enable.is_set
	|| disable.is_set;
}

bool Native::Monitor::EventTrace::Atom::Error::has_operation() const
{
    for (auto const & leaf : include.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(include.yfilter);
}

std::string Native::Monitor::EventTrace::Atom::Error::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/event-trace/atom/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::Atom::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::Atom::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    auto include_name_datas = include.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_name_datas.begin(), include_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::EventTrace::Atom::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::EventTrace::Atom::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::EventTrace::Atom::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include")
    {
        include.append(value);
    }
}

void Native::Monitor::EventTrace::Atom::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "include")
    {
        include.yfilter = yfilter;
    }
}

bool Native::Monitor::EventTrace::Atom::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "disable" || name == "include")
        return true;
    return false;
}

Native::Monitor::EventTrace::Atom::Event::Event()
    :
    enable{YType::empty, "enable"},
    disable{YType::empty, "disable"},
    size{YType::uint32, "size"},
    exclude{YType::enumeration, "exclude"}
{

    yang_name = "event"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Monitor::EventTrace::Atom::Event::~Event()
{
}

bool Native::Monitor::EventTrace::Atom::Event::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : exclude.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enable.is_set
	|| disable.is_set
	|| size.is_set;
}

bool Native::Monitor::EventTrace::Atom::Event::has_operation() const
{
    for (auto const & leaf : exclude.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(exclude.yfilter);
}

std::string Native::Monitor::EventTrace::Atom::Event::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/event-trace/atom/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::Atom::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::Atom::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    auto exclude_name_datas = exclude.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_name_datas.begin(), exclude_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::EventTrace::Atom::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::EventTrace::Atom::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::EventTrace::Atom::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude")
    {
        exclude.append(value);
    }
}

void Native::Monitor::EventTrace::Atom::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "exclude")
    {
        exclude.yfilter = yfilter;
    }
}

bool Native::Monitor::EventTrace::Atom::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "disable" || name == "size" || name == "exclude")
        return true;
    return false;
}

Native::Monitor::EventTrace::Atom::Major::Major()
    :
    enable{YType::empty, "enable"},
    disable{YType::empty, "disable"},
    include{YType::enumeration, "include"}
{

    yang_name = "major"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Monitor::EventTrace::Atom::Major::~Major()
{
}

bool Native::Monitor::EventTrace::Atom::Major::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : include.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enable.is_set
	|| disable.is_set;
}

bool Native::Monitor::EventTrace::Atom::Major::has_operation() const
{
    for (auto const & leaf : include.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(include.yfilter);
}

std::string Native::Monitor::EventTrace::Atom::Major::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/event-trace/atom/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::Atom::Major::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::Atom::Major::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    auto include_name_datas = include.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_name_datas.begin(), include_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::EventTrace::Atom::Major::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::EventTrace::Atom::Major::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::EventTrace::Atom::Major::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include")
    {
        include.append(value);
    }
}

void Native::Monitor::EventTrace::Atom::Major::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "include")
    {
        include.yfilter = yfilter;
    }
}

bool Native::Monitor::EventTrace::Atom::Major::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "disable" || name == "include")
        return true;
    return false;
}

Native::Monitor::Session::Session()
    :
    id{YType::uint8, "id"}
        ,
    destination(std::make_shared<Native::Monitor::Session::Destination>())
    , filter(std::make_shared<Native::Monitor::Session::Filter>())
    , source(std::make_shared<Native::Monitor::Session::Source>())
    , type(std::make_shared<Native::Monitor::Session::Type>())
{
    destination->parent = this;
    filter->parent = this;
    source->parent = this;
    type->parent = this;

    yang_name = "session"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Monitor::Session::~Session()
{
}

bool Native::Monitor::Session::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Monitor::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Monitor::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Monitor::Session::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Monitor::Session::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Monitor::Session::Source>();
        }
        return source;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Monitor::Session::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Monitor::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "filter" || name == "source" || name == "type" || name == "id")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Destination()
    :
    interface(this, {"name"})
    , remote(std::make_shared<Native::Monitor::Session::Destination::Remote>())
{
    remote->parent = this;

    yang_name = "destination"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Destination::~Destination()
{
}

bool Native::Monitor::Session::Destination::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return (remote !=  nullptr && remote->has_data());
}

bool Native::Monitor::Session::Destination::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::Monitor::Session::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Monitor::Session::Destination::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Monitor::Session::Destination::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void Native::Monitor::Session::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "remote")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Interface::Interface()
    :
    name{YType::str, "name"},
    encapsulation{YType::enumeration, "encapsulation"},
    ingress{YType::empty, "ingress"},
    ingress_encap{YType::enumeration, "ingress-encap"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "interface"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Destination::Interface::~Interface()
{
}

bool Native::Monitor::Session::Destination::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| encapsulation.is_set
	|| ingress.is_set
	|| ingress_encap.is_set
	|| vlan.is_set;
}

bool Native::Monitor::Session::Destination::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(ingress_encap.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Destination::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Destination::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (ingress_encap.is_set || is_set(ingress_encap.yfilter)) leaf_name_data.push_back(ingress_encap.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Destination::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Destination::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Destination::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-encap")
    {
        ingress_encap = value;
        ingress_encap.value_namespace = name_space;
        ingress_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Destination::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "ingress-encap")
    {
        ingress_encap.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Destination::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "encapsulation" || name == "ingress" || name == "ingress-encap" || name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Remote::Remote()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "remote"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Destination::Remote::~Remote()
{
}

bool Native::Monitor::Session::Destination::Remote::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Monitor::Session::Destination::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Destination::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Destination::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Destination::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Destination::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Destination::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Destination::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Destination::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Filter::Filter()
    :
    packet_type(std::make_shared<Native::Monitor::Session::Filter::PacketType>())
    , ip(std::make_shared<Native::Monitor::Session::Filter::Ip>())
{
    packet_type->parent = this;
    ip->parent = this;

    yang_name = "filter"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Filter::~Filter()
{
}

bool Native::Monitor::Session::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (packet_type !=  nullptr && packet_type->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Monitor::Session::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (packet_type !=  nullptr && packet_type->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Monitor::Session::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-type")
    {
        if(packet_type == nullptr)
        {
            packet_type = std::make_shared<Native::Monitor::Session::Filter::PacketType>();
        }
        return packet_type;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Monitor::Session::Filter::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(packet_type != nullptr)
    {
        _children["packet-type"] = packet_type;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Monitor::Session::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-type" || name == "ip")
        return true;
    return false;
}

Native::Monitor::Session::Filter::PacketType::PacketType()
    :
    status{YType::enumeration, "status"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "packet-type"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Filter::PacketType::~PacketType()
{
}

bool Native::Monitor::Session::Filter::PacketType::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Filter::PacketType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Filter::PacketType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::PacketType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Filter::PacketType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Filter::PacketType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Filter::PacketType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Filter::PacketType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Filter::PacketType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Filter::Ip::Ip()
    :
    access_group(std::make_shared<Native::Monitor::Session::Filter::Ip::AccessGroup>())
{
    access_group->parent = this;

    yang_name = "ip"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Filter::Ip::~Ip()
{
}

bool Native::Monitor::Session::Filter::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (access_group !=  nullptr && access_group->has_data());
}

bool Native::Monitor::Session::Filter::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (access_group !=  nullptr && access_group->has_operation());
}

std::string Native::Monitor::Session::Filter::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Filter::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Monitor::Session::Filter::Ip::AccessGroup>();
        }
        return access_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Filter::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_group != nullptr)
    {
        _children["access-group"] = access_group;
    }

    return _children;
}

void Native::Monitor::Session::Filter::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Filter::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Filter::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group")
        return true;
    return false;
}

Native::Monitor::Session::Filter::Ip::AccessGroup::AccessGroup()
    :
    acl_name{YType::str, "acl-name"}
{

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Filter::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set;
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Native::Monitor::Session::Filter::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Filter::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Filter::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Filter::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Filter::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name")
        return true;
    return false;
}

Native::Monitor::Session::Source::Source()
    :
    interface(this, {"name"})
    , vlan(std::make_shared<Native::Monitor::Session::Source::Vlan>())
    , remote(std::make_shared<Native::Monitor::Session::Source::Remote>())
{
    vlan->parent = this;
    remote->parent = this;

    yang_name = "source"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Source::~Source()
{
}

bool Native::Monitor::Session::Source::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return (vlan !=  nullptr && vlan->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::Monitor::Session::Source::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::Monitor::Session::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Monitor::Session::Source::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Monitor::Session::Source::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Monitor::Session::Source::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void Native::Monitor::Session::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "vlan" || name == "remote")
        return true;
    return false;
}

Native::Monitor::Session::Source::Interface::Interface()
    :
    name{YType::str, "name"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "interface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Source::Interface::~Interface()
{
}

bool Native::Monitor::Session::Source::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Source::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Source::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Source::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Source::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Source::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Source::Vlan::Vlan()
    :
    vlan{YType::uint16, "vlan"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Source::Vlan::~Vlan()
{
}

bool Native::Monitor::Session::Source::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Source::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Source::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Source::Remote::Remote()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "remote"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Source::Remote::~Remote()
{
}

bool Native::Monitor::Session::Source::Remote::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Monitor::Session::Source::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Source::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Source::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Source::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Source::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Type::Type()
    :
    erspan_source(nullptr) // presence node
    , erspan_destination(nullptr) // presence node
    , local(nullptr) // presence node
{

    yang_name = "type"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::~Type()
{
}

bool Native::Monitor::Session::Type::has_data() const
{
    if (is_presence_container) return true;
    return (erspan_source !=  nullptr && erspan_source->has_data())
	|| (erspan_destination !=  nullptr && erspan_destination->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool Native::Monitor::Session::Type::has_operation() const
{
    return is_set(yfilter)
	|| (erspan_source !=  nullptr && erspan_source->has_operation())
	|| (erspan_destination !=  nullptr && erspan_destination->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Monitor::Session::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "erspan-source")
    {
        if(erspan_source == nullptr)
        {
            erspan_source = std::make_shared<Native::Monitor::Session::Type::ErspanSource>();
        }
        return erspan_source;
    }

    if(child_yang_name == "erspan-destination")
    {
        if(erspan_destination == nullptr)
        {
            erspan_destination = std::make_shared<Native::Monitor::Session::Type::ErspanDestination>();
        }
        return erspan_destination;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Monitor::Session::Type::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(erspan_source != nullptr)
    {
        _children["erspan-source"] = erspan_source;
    }

    if(erspan_destination != nullptr)
    {
        _children["erspan-destination"] = erspan_destination;
    }

    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void Native::Monitor::Session::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "erspan-source" || name == "erspan-destination" || name == "local")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::ErspanSource()
    :
    description{YType::str, "description"},
    header_type{YType::uint8, "header-type"},
    shutdown{YType::empty, "shutdown"}
        ,
    source(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Source>())
    , filter(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter>())
    , destination(nullptr) // presence node
{
    source->parent = this;
    filter->parent = this;

    yang_name = "erspan-source"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Monitor::Session::Type::ErspanSource::~ErspanSource()
{
}

bool Native::Monitor::Session::Type::ErspanSource::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| header_type.is_set
	|| shutdown.is_set
	|| (source !=  nullptr && source->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (destination !=  nullptr && destination->has_data());
}

bool Native::Monitor::Session::Type::ErspanSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(header_type.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erspan-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (header_type.is_set || is_set(header_type.yfilter)) leaf_name_data.push_back(header_type.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Source>();
        }
        return source;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-type")
    {
        header_type = value;
        header_type.value_namespace = name_space;
        header_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "header-type")
    {
        header_type.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "filter" || name == "destination" || name == "description" || name == "header-type" || name == "shutdown")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Source::Source()
    :
    interface(this, {"name"})
    , vlan(this, {"vlan1"})
{

    yang_name = "source"; yang_parent_name = "erspan-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanSource::Source::~Source()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Source::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Monitor::Session::Type::ErspanSource::Source::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Source::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Source::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::ErspanSource::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::ErspanSource::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Source::Interface::Interface()
    :
    name{YType::str, "name"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "interface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanSource::Source::Interface::~Interface()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Source::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Source::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::Source::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::Source::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::Source::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Source::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Source::Vlan::Vlan()
    :
    vlan1{YType::uint16, "vlan1"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanSource::Source::Vlan::~Vlan()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan1.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan1.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan1, "vlan1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Source::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan1.is_set || is_set(vlan1.yfilter)) leaf_name_data.push_back(vlan1.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::Source::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan1")
    {
        vlan1 = value;
        vlan1.value_namespace = name_space;
        vlan1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Source::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan1")
    {
        vlan1.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Source::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan1" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Filter::Filter()
    :
    sgt{YType::uint16, "sgt"}
        ,
    vlan(this, {"vlan1"})
    , ip(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter::Ip>())
{
    ip->parent = this;

    yang_name = "filter"; yang_parent_name = "erspan-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanSource::Filter::~Filter()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return sgt.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanSource::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "ip" || name == "sgt")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::Vlan()
    :
    vlan1{YType::uint16, "vlan1"}
{

    yang_name = "vlan"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::~Vlan()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan1.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan1.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan1, "vlan1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan1.is_set || is_set(vlan1.yfilter)) leaf_name_data.push_back(vlan1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan1")
    {
        vlan1 = value;
        vlan1.value_namespace = name_space;
        vlan1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan1")
    {
        vlan1.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan1")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Filter::Ip::Ip()
    :
    access_group(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup>())
{
    access_group->parent = this;

    yang_name = "ip"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanSource::Filter::Ip::~Ip()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (access_group !=  nullptr && access_group->has_data());
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (access_group !=  nullptr && access_group->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanSource::Filter::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Filter::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::Filter::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup>();
        }
        return access_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::Filter::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_group != nullptr)
    {
        _children["access-group"] = access_group;
    }

    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::AccessGroup()
    :
    acl_name{YType::str, "acl-name"}
{

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Filter::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Destination::Destination()
    :
    erspan_id{YType::uint16, "erspan-id"}
        ,
    ip(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Ip>())
    , origin(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Origin>())
{
    ip->parent = this;
    origin->parent = this;

    yang_name = "destination"; yang_parent_name = "erspan-source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Monitor::Session::Type::ErspanSource::Destination::~Destination()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::has_data() const
{
    if (is_presence_container) return true;
    return erspan_id.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (origin !=  nullptr && origin->has_data());
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(erspan_id.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (origin !=  nullptr && origin->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanSource::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (erspan_id.is_set || is_set(erspan_id.yfilter)) leaf_name_data.push_back(erspan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "origin")
    {
        if(origin == nullptr)
        {
            origin = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Origin>();
        }
        return origin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(origin != nullptr)
    {
        _children["origin"] = origin;
    }

    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "erspan-id")
    {
        erspan_id = value;
        erspan_id.value_namespace = name_space;
        erspan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "erspan-id")
    {
        erspan_id.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "origin" || name == "erspan-id")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Destination::Ip::Ip()
    :
    address{YType::str, "address"},
    ttl{YType::uint16, "ttl"}
{

    yang_name = "ip"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanSource::Destination::Ip::~Ip()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| ttl.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Destination::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Destination::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::Destination::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::Destination::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "ttl")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Origin()
    :
    ip(std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip>())
{
    ip->parent = this;

    yang_name = "origin"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanSource::Destination::Origin::~Origin()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanSource::Destination::Origin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Destination::Origin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::Destination::Origin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::Destination::Origin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Origin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Origin::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "origin"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::~Ip()
{
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanSource::Destination::Origin::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanDestination::ErspanDestination()
    :
    description{YType::str, "description"},
    shutdown{YType::empty, "shutdown"}
        ,
    destination(std::make_shared<Native::Monitor::Session::Type::ErspanDestination::Destination>())
    , source(nullptr) // presence node
{
    destination->parent = this;

    yang_name = "erspan-destination"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Monitor::Session::Type::ErspanDestination::~ErspanDestination()
{
}

bool Native::Monitor::Session::Type::ErspanDestination::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| shutdown.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Monitor::Session::Type::ErspanDestination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanDestination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erspan-destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanDestination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanDestination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Monitor::Session::Type::ErspanDestination::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Monitor::Session::Type::ErspanDestination::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanDestination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Monitor::Session::Type::ErspanDestination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanDestination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanDestination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source" || name == "description" || name == "shutdown")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanDestination::Destination::Destination()
    :
    vlan{YType::uint16, "vlan"}
        ,
    interface(this, {"name"})
{

    yang_name = "destination"; yang_parent_name = "erspan-destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanDestination::Destination::~Destination()
{
}

bool Native::Monitor::Session::Type::ErspanDestination::Destination::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return vlan.is_set;
}

bool Native::Monitor::Session::Type::ErspanDestination::Destination::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanDestination::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanDestination::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanDestination::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Monitor::Session::Type::ErspanDestination::Destination::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanDestination::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Monitor::Session::Type::ErspanDestination::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanDestination::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanDestination::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanDestination::Destination::Interface::Interface()
    :
    name{YType::str, "name"}
{

    yang_name = "interface"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanDestination::Destination::Interface::~Interface()
{
}

bool Native::Monitor::Session::Type::ErspanDestination::Destination::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Monitor::Session::Type::ErspanDestination::Destination::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanDestination::Destination::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanDestination::Destination::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanDestination::Destination::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanDestination::Destination::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::ErspanDestination::Destination::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanDestination::Destination::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanDestination::Destination::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanDestination::Source::Source()
    :
    vrf{YType::str, "vrf"},
    erspan_id{YType::uint16, "erspan-id"}
        ,
    ip(std::make_shared<Native::Monitor::Session::Type::ErspanDestination::Source::Ip>())
{
    ip->parent = this;

    yang_name = "source"; yang_parent_name = "erspan-destination"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Monitor::Session::Type::ErspanDestination::Source::~Source()
{
}

bool Native::Monitor::Session::Type::ErspanDestination::Source::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| erspan_id.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Monitor::Session::Type::ErspanDestination::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(erspan_id.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Monitor::Session::Type::ErspanDestination::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanDestination::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (erspan_id.is_set || is_set(erspan_id.yfilter)) leaf_name_data.push_back(erspan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanDestination::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Monitor::Session::Type::ErspanDestination::Source::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanDestination::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Monitor::Session::Type::ErspanDestination::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "erspan-id")
    {
        erspan_id = value;
        erspan_id.value_namespace = name_space;
        erspan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanDestination::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "erspan-id")
    {
        erspan_id.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanDestination::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "vrf" || name == "erspan-id")
        return true;
    return false;
}

Native::Monitor::Session::Type::ErspanDestination::Source::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::ErspanDestination::Source::Ip::~Ip()
{
}

bool Native::Monitor::Session::Type::ErspanDestination::Source::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Monitor::Session::Type::ErspanDestination::Source::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Monitor::Session::Type::ErspanDestination::Source::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::ErspanDestination::Source::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::ErspanDestination::Source::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::ErspanDestination::Source::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::ErspanDestination::Source::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::ErspanDestination::Source::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::ErspanDestination::Source::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Monitor::Session::Type::Local::Local()
    :
    description{YType::str, "description"},
    shutdown{YType::empty, "shutdown"}
        ,
    source(std::make_shared<Native::Monitor::Session::Type::Local::Source>())
    , destination(std::make_shared<Native::Monitor::Session::Type::Local::Destination>())
    , filter(std::make_shared<Native::Monitor::Session::Type::Local::Filter>())
{
    source->parent = this;
    destination->parent = this;
    filter->parent = this;

    yang_name = "local"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Monitor::Session::Type::Local::~Local()
{
}

bool Native::Monitor::Session::Type::Local::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| shutdown.is_set
	|| (source !=  nullptr && source->has_data())
	|| (destination !=  nullptr && destination->has_data())
	|| (filter !=  nullptr && filter->has_data());
}

bool Native::Monitor::Session::Type::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (destination !=  nullptr && destination->has_operation())
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Monitor::Session::Type::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Monitor::Session::Type::Local::Source>();
        }
        return source;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Monitor::Session::Type::Local::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Monitor::Session::Type::Local::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    return _children;
}

void Native::Monitor::Session::Type::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination" || name == "filter" || name == "description" || name == "shutdown")
        return true;
    return false;
}

Native::Monitor::Session::Type::Local::Source::Source()
    :
    interface(this, {"name"})
    , vlan(this, {"vlan1"})
{

    yang_name = "source"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::Local::Source::~Source()
{
}

bool Native::Monitor::Session::Type::Local::Source::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Monitor::Session::Type::Local::Source::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Monitor::Session::Type::Local::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::Local::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::Local::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Monitor::Session::Type::Local::Source::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Monitor::Session::Type::Local::Source::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::Local::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Monitor::Session::Type::Local::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::Local::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::Local::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Type::Local::Source::Interface::Interface()
    :
    name{YType::str, "name"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "interface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::Local::Source::Interface::~Interface()
{
}

bool Native::Monitor::Session::Type::Local::Source::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Type::Local::Source::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Type::Local::Source::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::Local::Source::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::Local::Source::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::Local::Source::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::Local::Source::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::Local::Source::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::Local::Source::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Type::Local::Source::Vlan::Vlan()
    :
    vlan1{YType::uint16, "vlan1"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::Local::Source::Vlan::~Vlan()
{
}

bool Native::Monitor::Session::Type::Local::Source::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan1.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Type::Local::Source::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan1.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Type::Local::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan1, "vlan1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::Local::Source::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan1.is_set || is_set(vlan1.yfilter)) leaf_name_data.push_back(vlan1.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::Local::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::Local::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::Local::Source::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan1")
    {
        vlan1 = value;
        vlan1.value_namespace = name_space;
        vlan1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::Local::Source::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan1")
    {
        vlan1.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::Local::Source::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan1" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Type::Local::Destination::Destination()
    :
    interface(this, {"name"})
{

    yang_name = "destination"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::Local::Destination::~Destination()
{
}

bool Native::Monitor::Session::Type::Local::Destination::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Monitor::Session::Type::Local::Destination::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Monitor::Session::Type::Local::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::Local::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::Local::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::Monitor::Session::Type::Local::Destination::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::Local::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Monitor::Session::Type::Local::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::Local::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::Local::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Monitor::Session::Type::Local::Destination::Interface::Interface()
    :
    name{YType::str, "name"}
{

    yang_name = "interface"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::Local::Destination::Interface::~Interface()
{
}

bool Native::Monitor::Session::Type::Local::Destination::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Monitor::Session::Type::Local::Destination::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Monitor::Session::Type::Local::Destination::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::Local::Destination::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::Local::Destination::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::Local::Destination::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::Local::Destination::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::Local::Destination::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::Local::Destination::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Monitor::Session::Type::Local::Filter::Filter()
    :
    vlan(this, {"vlan1"})
{

    yang_name = "filter"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::Local::Filter::~Filter()
{
}

bool Native::Monitor::Session::Type::Local::Filter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Monitor::Session::Type::Local::Filter::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Monitor::Session::Type::Local::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::Local::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::Local::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Monitor::Session::Type::Local::Filter::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::Local::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Monitor::Session::Type::Local::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Type::Local::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Type::Local::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Type::Local::Filter::Vlan::Vlan()
    :
    vlan1{YType::uint16, "vlan1"}
{

    yang_name = "vlan"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Monitor::Session::Type::Local::Filter::Vlan::~Vlan()
{
}

bool Native::Monitor::Session::Type::Local::Filter::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan1.is_set;
}

bool Native::Monitor::Session::Type::Local::Filter::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan1.yfilter);
}

std::string Native::Monitor::Session::Type::Local::Filter::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan1, "vlan1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Type::Local::Filter::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan1.is_set || is_set(vlan1.yfilter)) leaf_name_data.push_back(vlan1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Monitor::Session::Type::Local::Filter::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Monitor::Session::Type::Local::Filter::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Monitor::Session::Type::Local::Filter::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan1")
    {
        vlan1 = value;
        vlan1.value_namespace = name_space;
        vlan1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Type::Local::Filter::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan1")
    {
        vlan1.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Type::Local::Filter::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan1")
        return true;
    return false;
}

Native::TftpServer::TftpServer()
    :
    name{YType::str, "name"}
{

    yang_name = "tftp-server"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::TftpServer::~TftpServer()
{
}

bool Native::TftpServer::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::TftpServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::TftpServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TftpServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-server";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TftpServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::TftpServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::TftpServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::TftpServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TftpServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::TftpServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RadiusServer::RadiusServer()
    :
    deadtime{YType::uint32, "Cisco-IOS-XE-aaa:deadtime"},
    retransmit{YType::uint8, "Cisco-IOS-XE-aaa:retransmit"},
    timeout{YType::uint16, "Cisco-IOS-XE-aaa:timeout"}
        ,
    attribute(this, {"number"})
    , dead_criteria(std::make_shared<Native::RadiusServer::DeadCriteria>())
    , host(this, {"id"})
    , key(std::make_shared<Native::RadiusServer::Key>())
    , source_ports(std::make_shared<Native::RadiusServer::SourcePorts>())
    , vsa(std::make_shared<Native::RadiusServer::Vsa>())
{
    dead_criteria->parent = this;
    key->parent = this;
    source_ports->parent = this;
    vsa->parent = this;

    yang_name = "radius-server"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RadiusServer::~RadiusServer()
{
}

bool Native::RadiusServer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute.len(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return deadtime.is_set
	|| retransmit.is_set
	|| timeout.is_set
	|| (dead_criteria !=  nullptr && dead_criteria->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (source_ports !=  nullptr && source_ports->has_data())
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::RadiusServer::has_operation() const
{
    for (std::size_t index=0; index<attribute.len(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (dead_criteria !=  nullptr && dead_criteria->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (source_ports !=  nullptr && source_ports->has_operation())
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::RadiusServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-aaa:attribute")
    {
        auto ent_ = std::make_shared<Native::RadiusServer::Attribute>();
        ent_->parent = this;
        attribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:dead-criteria")
    {
        if(dead_criteria == nullptr)
        {
            dead_criteria = std::make_shared<Native::RadiusServer::DeadCriteria>();
        }
        return dead_criteria;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:host")
    {
        auto ent_ = std::make_shared<Native::RadiusServer::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::RadiusServer::Key>();
        }
        return key;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:source-ports")
    {
        if(source_ports == nullptr)
        {
            source_ports = std::make_shared<Native::RadiusServer::SourcePorts>();
        }
        return source_ports;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::RadiusServer::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(dead_criteria != nullptr)
    {
        _children["Cisco-IOS-XE-aaa:dead-criteria"] = dead_criteria;
    }

    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(key != nullptr)
    {
        _children["Cisco-IOS-XE-aaa:key"] = key;
    }

    if(source_ports != nullptr)
    {
        _children["Cisco-IOS-XE-aaa:source-ports"] = source_ports;
    }

    if(vsa != nullptr)
    {
        _children["Cisco-IOS-XE-aaa:vsa"] = vsa;
    }

    return _children;
}

void Native::RadiusServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-aaa:deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-aaa:retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-aaa:timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::RadiusServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "dead-criteria" || name == "host" || name == "key" || name == "source-ports" || name == "vsa" || name == "deadtime" || name == "retransmit" || name == "timeout")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attribute()
    :
    number{YType::uint32, "number"},
    send_attribute{YType::enumeration, "send-attribute"}
        ,
    access_request(std::make_shared<Native::RadiusServer::Attribute::AccessRequest>())
    , attri31(std::make_shared<Native::RadiusServer::Attribute::Attri31>())
{
    access_request->parent = this;
    attri31->parent = this;

    yang_name = "attribute"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RadiusServer::Attribute::~Attribute()
{
}

bool Native::RadiusServer::Attribute::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : send_attribute.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return number.is_set
	|| (access_request !=  nullptr && access_request->has_data())
	|| (attri31 !=  nullptr && attri31->has_data());
}

bool Native::RadiusServer::Attribute::has_operation() const
{
    for (auto const & leaf : send_attribute.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(send_attribute.yfilter)
	|| (access_request !=  nullptr && access_request->has_operation())
	|| (attri31 !=  nullptr && attri31->has_operation());
}

std::string Native::RadiusServer::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:attribute";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    auto send_attribute_name_datas = send_attribute.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), send_attribute_name_datas.begin(), send_attribute_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-request")
    {
        if(access_request == nullptr)
        {
            access_request = std::make_shared<Native::RadiusServer::Attribute::AccessRequest>();
        }
        return access_request;
    }

    if(child_yang_name == "attri31")
    {
        if(attri31 == nullptr)
        {
            attri31 = std::make_shared<Native::RadiusServer::Attribute::Attri31>();
        }
        return attri31;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_request != nullptr)
    {
        _children["access-request"] = access_request;
    }

    if(attri31 != nullptr)
    {
        _children["attri31"] = attri31;
    }

    return _children;
}

void Native::RadiusServer::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-attribute")
    {
        send_attribute.append(value);
    }
}

void Native::RadiusServer::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "send-attribute")
    {
        send_attribute.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-request" || name == "attri31" || name == "number" || name == "send-attribute")
        return true;
    return false;
}

Native::RadiusServer::Attribute::AccessRequest::AccessRequest()
    :
    include{YType::empty, "include"}
{

    yang_name = "access-request"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RadiusServer::Attribute::AccessRequest::~AccessRequest()
{
}

bool Native::RadiusServer::Attribute::AccessRequest::has_data() const
{
    if (is_presence_container) return true;
    return include.is_set;
}

bool Native::RadiusServer::Attribute::AccessRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include.yfilter);
}

std::string Native::RadiusServer::Attribute::AccessRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::AccessRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include.is_set || is_set(include.yfilter)) leaf_name_data.push_back(include.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Attribute::AccessRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Attribute::AccessRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RadiusServer::Attribute::AccessRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include")
    {
        include = value;
        include.value_namespace = name_space;
        include.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::AccessRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include")
    {
        include.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::AccessRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31()
    :
    attri31_list(this, {"calling_station_id"})
{

    yang_name = "attri31"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RadiusServer::Attribute::Attri31::~Attri31()
{
}

bool Native::RadiusServer::Attribute::Attri31::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attri31_list.len(); index++)
    {
        if(attri31_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RadiusServer::Attribute::Attri31::has_operation() const
{
    for (std::size_t index=0; index<attri31_list.len(); index++)
    {
        if(attri31_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attri31";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Attribute::Attri31::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attri31-list")
    {
        auto ent_ = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List>();
        ent_->parent = this;
        attri31_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Attribute::Attri31::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attri31_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RadiusServer::Attribute::Attri31::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Attribute::Attri31::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Attribute::Attri31::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attri31-list")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::Attri31List()
    :
    calling_station_id{YType::enumeration, "calling-station-id"}
        ,
    id_mac(std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac>())
    , id_send(std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend>())
{
    id_mac->parent = this;
    id_send->parent = this;

    yang_name = "attri31-list"; yang_parent_name = "attri31"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RadiusServer::Attribute::Attri31::Attri31List::~Attri31List()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_data() const
{
    if (is_presence_container) return true;
    return calling_station_id.is_set
	|| (id_mac !=  nullptr && id_mac->has_data())
	|| (id_send !=  nullptr && id_send->has_data());
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(calling_station_id.yfilter)
	|| (id_mac !=  nullptr && id_mac->has_operation())
	|| (id_send !=  nullptr && id_send->has_operation());
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attri31-list";
    ADD_KEY_TOKEN(calling_station_id, "calling-station-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::Attri31List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calling_station_id.is_set || is_set(calling_station_id.yfilter)) leaf_name_data.push_back(calling_station_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id-mac")
    {
        if(id_mac == nullptr)
        {
            id_mac = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac>();
        }
        return id_mac;
    }

    if(child_yang_name == "id-send")
    {
        if(id_send == nullptr)
        {
            id_send = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend>();
        }
        return id_send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id_mac != nullptr)
    {
        _children["id-mac"] = id_mac;
    }

    if(id_send != nullptr)
    {
        _children["id-send"] = id_send;
    }

    return _children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "calling-station-id")
    {
        calling_station_id = value;
        calling_station_id.value_namespace = name_space;
        calling_station_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "calling-station-id")
    {
        calling_station_id.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-mac" || name == "id-send" || name == "calling-station-id")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::IdMac()
    :
    format{YType::enumeration, "format"},
    lu_case{YType::enumeration, "lu-case"}
{

    yang_name = "id-mac"; yang_parent_name = "attri31-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::~IdMac()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set
	|| lu_case.is_set;
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(lu_case.yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (lu_case.is_set || is_set(lu_case.yfilter)) leaf_name_data.push_back(lu_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lu-case")
    {
        lu_case = value;
        lu_case.value_namespace = name_space;
        lu_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "lu-case")
    {
        lu_case.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "lu-case")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::IdSend()
    :
    nas_port_detail{YType::empty, "nas-port-detail"},
    mac_only{YType::empty, "mac-only"}
{

    yang_name = "id-send"; yang_parent_name = "attri31-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::~IdSend()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_data() const
{
    if (is_presence_container) return true;
    return nas_port_detail.is_set
	|| mac_only.is_set;
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nas_port_detail.yfilter)
	|| ydk::is_set(mac_only.yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id-send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nas_port_detail.is_set || is_set(nas_port_detail.yfilter)) leaf_name_data.push_back(nas_port_detail.get_name_leafdata());
    if (mac_only.is_set || is_set(mac_only.yfilter)) leaf_name_data.push_back(mac_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nas-port-detail")
    {
        nas_port_detail = value;
        nas_port_detail.value_namespace = name_space;
        nas_port_detail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-only")
    {
        mac_only = value;
        mac_only.value_namespace = name_space;
        mac_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nas-port-detail")
    {
        nas_port_detail.yfilter = yfilter;
    }
    if(value_path == "mac-only")
    {
        mac_only.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nas-port-detail" || name == "mac-only")
        return true;
    return false;
}

Native::RadiusServer::DeadCriteria::DeadCriteria()
    :
    time{YType::uint8, "time"},
    tries{YType::uint8, "tries"}
{

    yang_name = "dead-criteria"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RadiusServer::DeadCriteria::~DeadCriteria()
{
}

bool Native::RadiusServer::DeadCriteria::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set
	|| tries.is_set;
}

bool Native::RadiusServer::DeadCriteria::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(tries.yfilter);
}

std::string Native::RadiusServer::DeadCriteria::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::DeadCriteria::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:dead-criteria";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::DeadCriteria::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (tries.is_set || is_set(tries.yfilter)) leaf_name_data.push_back(tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::DeadCriteria::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::DeadCriteria::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RadiusServer::DeadCriteria::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tries")
    {
        tries = value;
        tries.value_namespace = name_space;
        tries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::DeadCriteria::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "tries")
    {
        tries.yfilter = yfilter;
    }
}

bool Native::RadiusServer::DeadCriteria::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "tries")
        return true;
    return false;
}

Native::RadiusServer::Host::Host()
    :
    id{YType::str, "id"},
    auth_port{YType::uint16, "auth-port"},
    acct_port{YType::uint16, "acct-port"},
    retransmit{YType::uint8, "retransmit"},
    timeout{YType::uint16, "timeout"},
    key{YType::str, "key"},
    clear_key{YType::str, "clear-key"}
        ,
    test(std::make_shared<Native::RadiusServer::Host::Test>())
{
    test->parent = this;

    yang_name = "host"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RadiusServer::Host::~Host()
{
}

bool Native::RadiusServer::Host::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| auth_port.is_set
	|| acct_port.is_set
	|| retransmit.is_set
	|| timeout.is_set
	|| key.is_set
	|| clear_key.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::RadiusServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(auth_port.yfilter)
	|| ydk::is_set(acct_port.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::RadiusServer::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:host";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.yfilter)) leaf_name_data.push_back(auth_port.get_name_leafdata());
    if (acct_port.is_set || is_set(acct_port.yfilter)) leaf_name_data.push_back(acct_port.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::RadiusServer::Host::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(test != nullptr)
    {
        _children["test"] = test;
    }

    return _children;
}

void Native::RadiusServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
        auth_port.value_namespace = name_space;
        auth_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port")
    {
        acct_port = value;
        acct_port.value_namespace = name_space;
        acct_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "auth-port")
    {
        auth_port.yfilter = yfilter;
    }
    if(value_path == "acct-port")
    {
        acct_port.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "id" || name == "auth-port" || name == "acct-port" || name == "retransmit" || name == "timeout" || name == "key" || name == "clear-key")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Test()
    :
    username(this, {"name"})
{

    yang_name = "test"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RadiusServer::Host::Test::~Test()
{
}

bool Native::RadiusServer::Host::Test::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<username.len(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RadiusServer::Host::Test::has_operation() const
{
    for (std::size_t index=0; index<username.len(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RadiusServer::Host::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Host::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        auto ent_ = std::make_shared<Native::RadiusServer::Host::Test::Username>();
        ent_->parent = this;
        username.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Host::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : username.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RadiusServer::Host::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Host::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Host::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Username::Username()
    :
    name{YType::str, "name"}
        ,
    key(std::make_shared<Native::RadiusServer::Host::Test::Username::Key>())
{
    key->parent = this;

    yang_name = "username"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RadiusServer::Host::Test::Username::~Username()
{
}

bool Native::RadiusServer::Host::Test::Username::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::RadiusServer::Host::Test::Username::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::RadiusServer::Host::Test::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::Test::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Host::Test::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::RadiusServer::Host::Test::Username::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Host::Test::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::RadiusServer::Host::Test::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::Test::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::Test::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Username::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    clear_key{YType::str, "clear-key"}
{

    yang_name = "key"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RadiusServer::Host::Test::Username::Key::~Key()
{
}

bool Native::RadiusServer::Host::Test::Username::Key::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| clear_key.is_set;
}

bool Native::RadiusServer::Host::Test::Username::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(clear_key.yfilter);
}

std::string Native::RadiusServer::Host::Test::Username::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Host::Test::Username::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Host::Test::Username::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Host::Test::Username::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RadiusServer::Host::Test::Username::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::Test::Username::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::Test::Username::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "clear-key")
        return true;
    return false;
}

Native::RadiusServer::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    clear_key{YType::str, "clear-key"}
{

    yang_name = "key"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RadiusServer::Key::~Key()
{
}

bool Native::RadiusServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| clear_key.is_set;
}

bool Native::RadiusServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(clear_key.yfilter);
}

std::string Native::RadiusServer::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RadiusServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "clear-key")
        return true;
    return false;
}

Native::RadiusServer::SourcePorts::SourcePorts()
    :
    extended{YType::empty, "extended"}
{

    yang_name = "source-ports"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RadiusServer::SourcePorts::~SourcePorts()
{
}

bool Native::RadiusServer::SourcePorts::has_data() const
{
    if (is_presence_container) return true;
    return extended.is_set;
}

bool Native::RadiusServer::SourcePorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Native::RadiusServer::SourcePorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::SourcePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:source-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::SourcePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::SourcePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::SourcePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RadiusServer::SourcePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::SourcePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Native::RadiusServer::SourcePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Vsa()
    :
    disallow(std::make_shared<Native::RadiusServer::Vsa::Disallow>())
    , send(nullptr) // presence node
{
    disallow->parent = this;

    yang_name = "vsa"; yang_parent_name = "radius-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RadiusServer::Vsa::~Vsa()
{
}

bool Native::RadiusServer::Vsa::has_data() const
{
    if (is_presence_container) return true;
    return (disallow !=  nullptr && disallow->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::RadiusServer::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| (disallow !=  nullptr && disallow->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::RadiusServer::Vsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disallow")
    {
        if(disallow == nullptr)
        {
            disallow = std::make_shared<Native::RadiusServer::Vsa::Disallow>();
        }
        return disallow;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::RadiusServer::Vsa::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disallow != nullptr)
    {
        _children["disallow"] = disallow;
    }

    if(send != nullptr)
    {
        _children["send"] = send;
    }

    return _children;
}

void Native::RadiusServer::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disallow" || name == "send")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Disallow::Disallow()
    :
    unknown{YType::empty, "unknown"}
{

    yang_name = "disallow"; yang_parent_name = "vsa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RadiusServer::Vsa::Disallow::~Disallow()
{
}

bool Native::RadiusServer::Vsa::Disallow::has_data() const
{
    if (is_presence_container) return true;
    return unknown.is_set;
}

bool Native::RadiusServer::Vsa::Disallow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter);
}

std::string Native::RadiusServer::Vsa::Disallow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Disallow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disallow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Disallow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Vsa::Disallow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Vsa::Disallow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RadiusServer::Vsa::Disallow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Disallow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Disallow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Send()
    :
    accounting(nullptr) // presence node
    , authentication(nullptr) // presence node
    , cisco_nas_port(nullptr) // presence node
{

    yang_name = "send"; yang_parent_name = "vsa"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::RadiusServer::Vsa::Send::~Send()
{
}

bool Native::RadiusServer::Vsa::Send::has_data() const
{
    if (is_presence_container) return true;
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (cisco_nas_port !=  nullptr && cisco_nas_port->has_data());
}

bool Native::RadiusServer::Vsa::Send::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (cisco_nas_port !=  nullptr && cisco_nas_port->has_operation());
}

std::string Native::RadiusServer::Vsa::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Vsa::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::RadiusServer::Vsa::Send::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::RadiusServer::Vsa::Send::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "cisco-nas-port")
    {
        if(cisco_nas_port == nullptr)
        {
            cisco_nas_port = std::make_shared<Native::RadiusServer::Vsa::Send::CiscoNasPort>();
        }
        return cisco_nas_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Vsa::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(cisco_nas_port != nullptr)
    {
        _children["cisco-nas-port"] = cisco_nas_port;
    }

    return _children;
}

void Native::RadiusServer::Vsa::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Vsa::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Vsa::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "cisco-nas-port")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Accounting::Accounting()
    :
    threegpp2{YType::empty, "threegpp2"}
{

    yang_name = "accounting"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::RadiusServer::Vsa::Send::Accounting::~Accounting()
{
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Vsa::Send::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Vsa::Send::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RadiusServer::Vsa::Send::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Authentication::Authentication()
    :
    threegpp2{YType::empty, "threegpp2"}
{

    yang_name = "authentication"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::RadiusServer::Vsa::Send::Authentication::~Authentication()
{
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Vsa::Send::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Vsa::Send::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RadiusServer::Vsa::Send::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::CiscoNasPort::CiscoNasPort()
    :
    threegpp2{YType::empty, "threegpp2"}
{

    yang_name = "cisco-nas-port"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::RadiusServer::Vsa::Send::CiscoNasPort::~CiscoNasPort()
{
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_data() const
{
    if (is_presence_container) return true;
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::CiscoNasPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RadiusServer::Vsa::Send::CiscoNasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-nas-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RadiusServer::Vsa::Send::CiscoNasPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RadiusServer::Vsa::Send::CiscoNasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RadiusServer::Vsa::Send::CiscoNasPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RadiusServer::Vsa::Send::CiscoNasPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::CiscoNasPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::Radius::Radius()
    :
    filter(this, {"id"})
    , server(this, {"id"})
{

    yang_name = "radius"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Radius::~Radius()
{
}

bool Native::Radius::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter.len(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Radius::has_operation() const
{
    for (std::size_t index=0; index<filter.len(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-aaa:filter")
    {
        auto ent_ = std::make_shared<Native::Radius::Filter>();
        ent_->parent = this;
        filter.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:server")
    {
        auto ent_ = std::make_shared<Native::Radius::Server>();
        ent_->parent = this;
        server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : filter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "server")
        return true;
    return false;
}

Native::Radius::Filter::Filter()
    :
    id{YType::str, "id"},
    match{YType::enumeration, "match"}
{

    yang_name = "filter"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Radius::Filter::~Filter()
{
}

bool Native::Radius::Filter::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| match.is_set;
}

bool Native::Radius::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(match.yfilter);
}

std::string Native::Radius::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Radius::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:filter";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Radius::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Radius::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Radius::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
}

bool Native::Radius::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "match")
        return true;
    return false;
}

Native::Radius::Server::Server()
    :
    id{YType::str, "id"},
    timeout{YType::uint16, "timeout"},
    retransmit{YType::uint8, "retransmit"}
        ,
    address(std::make_shared<Native::Radius::Server::Address>())
    , automate_tester(std::make_shared<Native::Radius::Server::AutomateTester>())
    , backoff(std::make_shared<Native::Radius::Server::Backoff>())
    , key(std::make_shared<Native::Radius::Server::Key>())
    , pac(std::make_shared<Native::Radius::Server::Pac>())
{
    address->parent = this;
    automate_tester->parent = this;
    backoff->parent = this;
    key->parent = this;
    pac->parent = this;

    yang_name = "server"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Radius::Server::~Server()
{
}

bool Native::Radius::Server::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| timeout.is_set
	|| retransmit.is_set
	|| (address !=  nullptr && address->has_data())
	|| (automate_tester !=  nullptr && automate_tester->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (pac !=  nullptr && pac->has_data());
}

bool Native::Radius::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (automate_tester !=  nullptr && automate_tester->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (pac !=  nullptr && pac->has_operation());
}

std::string Native::Radius::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Radius::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Radius::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Radius::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "automate-tester")
    {
        if(automate_tester == nullptr)
        {
            automate_tester = std::make_shared<Native::Radius::Server::AutomateTester>();
        }
        return automate_tester;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::Radius::Server::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Radius::Server::Key>();
        }
        return key;
    }

    if(child_yang_name == "pac")
    {
        if(pac == nullptr)
        {
            pac = std::make_shared<Native::Radius::Server::Pac>();
        }
        return pac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Radius::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(automate_tester != nullptr)
    {
        _children["automate-tester"] = automate_tester;
    }

    if(backoff != nullptr)
    {
        _children["backoff"] = backoff;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(pac != nullptr)
    {
        _children["pac"] = pac;
    }

    return _children;
}

void Native::Radius::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
}

bool Native::Radius::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "automate-tester" || name == "backoff" || name == "key" || name == "pac" || name == "id" || name == "timeout" || name == "retransmit")
        return true;
    return false;
}

Native::Radius::Server::Address::Address()
    :
    ipv4(std::make_shared<Native::Radius::Server::Address::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Radius::Server::Address::~Address()
{
}

bool Native::Radius::Server::Address::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Radius::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Radius::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Radius::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Radius::Server::Address::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Radius::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void Native::Radius::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Radius::Server::Address::Ipv4::Ipv4()
    :
    host{YType::str, "host"},
    auth_port{YType::uint16, "auth-port"},
    acct_port{YType::uint16, "acct-port"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Radius::Server::Address::Ipv4::~Ipv4()
{
}

bool Native::Radius::Server::Address::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| auth_port.is_set
	|| acct_port.is_set;
}

bool Native::Radius::Server::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(auth_port.yfilter)
	|| ydk::is_set(acct_port.yfilter);
}

std::string Native::Radius::Server::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.yfilter)) leaf_name_data.push_back(auth_port.get_name_leafdata());
    if (acct_port.is_set || is_set(acct_port.yfilter)) leaf_name_data.push_back(acct_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Radius::Server::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Radius::Server::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Radius::Server::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
        auth_port.value_namespace = name_space;
        auth_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port")
    {
        acct_port = value;
        acct_port.value_namespace = name_space;
        acct_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "auth-port")
    {
        auth_port.yfilter = yfilter;
    }
    if(value_path == "acct-port")
    {
        acct_port.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "auth-port" || name == "acct-port")
        return true;
    return false;
}

Native::Radius::Server::AutomateTester::AutomateTester()
    :
    username{YType::str, "username"},
    at_option{YType::enumeration, "at-option"}
{

    yang_name = "automate-tester"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Radius::Server::AutomateTester::~AutomateTester()
{
}

bool Native::Radius::Server::AutomateTester::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| at_option.is_set;
}

bool Native::Radius::Server::AutomateTester::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(at_option.yfilter);
}

std::string Native::Radius::Server::AutomateTester::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "automate-tester";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::AutomateTester::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (at_option.is_set || is_set(at_option.yfilter)) leaf_name_data.push_back(at_option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Radius::Server::AutomateTester::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Radius::Server::AutomateTester::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Radius::Server::AutomateTester::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-option")
    {
        at_option = value;
        at_option.value_namespace = name_space;
        at_option.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::AutomateTester::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "at-option")
    {
        at_option.yfilter = yfilter;
    }
}

bool Native::Radius::Server::AutomateTester::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "at-option")
        return true;
    return false;
}

Native::Radius::Server::Backoff::Backoff()
    :
    exponential(nullptr) // presence node
{

    yang_name = "backoff"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Radius::Server::Backoff::~Backoff()
{
}

bool Native::Radius::Server::Backoff::has_data() const
{
    if (is_presence_container) return true;
    return (exponential !=  nullptr && exponential->has_data());
}

bool Native::Radius::Server::Backoff::has_operation() const
{
    return is_set(yfilter)
	|| (exponential !=  nullptr && exponential->has_operation());
}

std::string Native::Radius::Server::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Radius::Server::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exponential")
    {
        if(exponential == nullptr)
        {
            exponential = std::make_shared<Native::Radius::Server::Backoff::Exponential>();
        }
        return exponential;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Radius::Server::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exponential != nullptr)
    {
        _children["exponential"] = exponential;
    }

    return _children;
}

void Native::Radius::Server::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exponential")
        return true;
    return false;
}

Native::Radius::Server::Backoff::Exponential::Exponential()
    :
    max_delay{YType::uint8, "max-delay"},
    backoff_retry{YType::uint8, "backoff-retry"}
{

    yang_name = "exponential"; yang_parent_name = "backoff"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Radius::Server::Backoff::Exponential::~Exponential()
{
}

bool Native::Radius::Server::Backoff::Exponential::has_data() const
{
    if (is_presence_container) return true;
    return max_delay.is_set
	|| backoff_retry.is_set;
}

bool Native::Radius::Server::Backoff::Exponential::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_delay.yfilter)
	|| ydk::is_set(backoff_retry.yfilter);
}

std::string Native::Radius::Server::Backoff::Exponential::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exponential";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Backoff::Exponential::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());
    if (backoff_retry.is_set || is_set(backoff_retry.yfilter)) leaf_name_data.push_back(backoff_retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Radius::Server::Backoff::Exponential::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Radius::Server::Backoff::Exponential::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Radius::Server::Backoff::Exponential::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backoff-retry")
    {
        backoff_retry = value;
        backoff_retry.value_namespace = name_space;
        backoff_retry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Backoff::Exponential::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
    if(value_path == "backoff-retry")
    {
        backoff_retry.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Backoff::Exponential::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-delay" || name == "backoff-retry")
        return true;
    return false;
}

Native::Radius::Server::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Radius::Server::Key::~Key()
{
}

bool Native::Radius::Server::Key::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Radius::Server::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Radius::Server::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Radius::Server::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Radius::Server::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Radius::Server::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Radius::Server::Pac::Pac()
    :
    key(std::make_shared<Native::Radius::Server::Pac::Key>())
{
    key->parent = this;

    yang_name = "pac"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Radius::Server::Pac::~Pac()
{
}

bool Native::Radius::Server::Pac::has_data() const
{
    if (is_presence_container) return true;
    return (key !=  nullptr && key->has_data());
}

bool Native::Radius::Server::Pac::has_operation() const
{
    return is_set(yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Radius::Server::Pac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Pac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Radius::Server::Pac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Radius::Server::Pac::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Radius::Server::Pac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Radius::Server::Pac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Pac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Pac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Radius::Server::Pac::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "pac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Radius::Server::Pac::Key::~Key()
{
}

bool Native::Radius::Server::Pac::Key::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| key.is_set;
}

bool Native::Radius::Server::Pac::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Radius::Server::Pac::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Radius::Server::Pac::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Radius::Server::Pac::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Radius::Server::Pac::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Radius::Server::Pac::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Pac::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Pac::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Zone::Zone()
    :
    security(this, {"id"})
{

    yang_name = "zone"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Zone::~Zone()
{
}

bool Native::Zone::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<security.len(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Zone::has_operation() const
{
    for (std::size_t index=0; index<security.len(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Zone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Zone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Zone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Zone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-zone:security")
    {
        auto ent_ = std::make_shared<Native::Zone::Security>();
        ent_->parent = this;
        security.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Zone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : security.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Zone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Zone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Zone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Zone::Security::Security()
    :
    id{YType::str, "id"},
    description{YType::str, "description"},
    protection{YType::str, "protection"}
{

    yang_name = "security"; yang_parent_name = "zone"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Zone::Security::~Security()
{
}

bool Native::Zone::Security::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| description.is_set
	|| protection.is_set;
}

bool Native::Zone::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(protection.yfilter);
}

std::string Native::Zone::Security::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/zone/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Zone::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:security";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Zone::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (protection.is_set || is_set(protection.yfilter)) leaf_name_data.push_back(protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Zone::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Zone::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Zone::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection")
    {
        protection = value;
        protection.value_namespace = name_space;
        protection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Zone::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "protection")
    {
        protection.yfilter = yfilter;
    }
}

bool Native::Zone::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "description" || name == "protection")
        return true;
    return false;
}

Native::ZonePair::ZonePair()
    :
    security(this, {"id"})
{

    yang_name = "zone-pair"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ZonePair::~ZonePair()
{
}

bool Native::ZonePair::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<security.len(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ZonePair::has_operation() const
{
    for (std::size_t index=0; index<security.len(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ZonePair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ZonePair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone-pair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ZonePair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-zone:security")
    {
        auto ent_ = std::make_shared<Native::ZonePair::Security>();
        ent_->parent = this;
        security.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ZonePair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : security.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::ZonePair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ZonePair::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ZonePair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::ZonePair::Security::Security()
    :
    id{YType::str, "id"},
    source{YType::str, "source"},
    destination{YType::str, "destination"},
    description{YType::str, "description"}
        ,
    service_policy(std::make_shared<Native::ZonePair::Security::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "security"; yang_parent_name = "zone-pair"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ZonePair::Security::~Security()
{
}

bool Native::ZonePair::Security::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| source.is_set
	|| destination.is_set
	|| description.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::ZonePair::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::ZonePair::Security::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/zone-pair/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ZonePair::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:security";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ZonePair::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::ZonePair::Security::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ZonePair::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    return _children;
}

void Native::ZonePair::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ZonePair::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ZonePair::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "id" || name == "source" || name == "destination" || name == "description")
        return true;
    return false;
}

Native::ZonePair::Security::ServicePolicy::ServicePolicy()
    :
    type(std::make_shared<Native::ZonePair::Security::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ZonePair::Security::ServicePolicy::~ServicePolicy()
{
}

bool Native::ZonePair::Security::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return (type !=  nullptr && type->has_data());
}

bool Native::ZonePair::Security::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::ZonePair::Security::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::Security::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ZonePair::Security::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::ZonePair::Security::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ZonePair::Security::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::ZonePair::Security::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ZonePair::Security::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ZonePair::Security::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::ZonePair::Security::ServicePolicy::Type::Type()
    :
    inspect{YType::str, "inspect"}
{

    yang_name = "type"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ZonePair::Security::ServicePolicy::Type::~Type()
{
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_data() const
{
    if (is_presence_container) return true;
    return inspect.is_set;
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inspect.yfilter);
}

std::string Native::ZonePair::Security::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::Security::ServicePolicy::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inspect.is_set || is_set(inspect.yfilter)) leaf_name_data.push_back(inspect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ZonePair::Security::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ZonePair::Security::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ZonePair::Security::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inspect")
    {
        inspect = value;
        inspect.value_namespace = name_space;
        inspect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ZonePair::Security::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inspect")
    {
        inspect.yfilter = yfilter;
    }
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspect")
        return true;
    return false;
}

Native::AlarmContact::AlarmContact()
    :
    name{YType::uint8, "name"},
    description{YType::str, "description"},
    severity{YType::enumeration, "severity"},
    trigger{YType::enumeration, "trigger"}
{

    yang_name = "alarm-contact"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::AlarmContact::~AlarmContact()
{
}

bool Native::AlarmContact::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| severity.is_set
	|| trigger.is_set;
}

bool Native::AlarmContact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Native::AlarmContact::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AlarmContact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-contact";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AlarmContact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::AlarmContact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::AlarmContact::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::AlarmContact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Native::AlarmContact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Native::AlarmContact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "severity" || name == "trigger")
        return true;
    return false;
}

Native::Ethernet::Ethernet()
    :
    evc(this, {"name"})
    , lmi(std::make_shared<Native::Ethernet::Lmi>())
    , cfm(std::make_shared<Native::Ethernet::Cfm>())
{
    lmi->parent = this;
    cfm->parent = this;

    yang_name = "ethernet"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ethernet::~Ethernet()
{
}

bool Native::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evc.len(); index++)
    {
        if(evc[index]->has_data())
            return true;
    }
    return (lmi !=  nullptr && lmi->has_data())
	|| (cfm !=  nullptr && cfm->has_data());
}

bool Native::Ethernet::has_operation() const
{
    for (std::size_t index=0; index<evc.len(); index++)
    {
        if(evc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (lmi !=  nullptr && lmi->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation());
}

std::string Native::Ethernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-ethernet:evc")
    {
        auto ent_ = std::make_shared<Native::Ethernet::Evc>();
        ent_->parent = this;
        evc.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Ethernet::Lmi>();
        }
        return lmi;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Ethernet::Cfm>();
        }
        return cfm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : evc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(lmi != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:lmi"] = lmi;
    }

    if(cfm != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:cfm"] = cfm;
    }

    return _children;
}

void Native::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evc" || name == "lmi" || name == "cfm")
        return true;
    return false;
}

const Enum::YLeaf Native::L2::Vfi::Mode::autodiscovery {0, "autodiscovery"};
const Enum::YLeaf Native::L2::Vfi::Mode::manual {1, "manual"};
const Enum::YLeaf Native::L2::Vfi::Mode::point_to_point {2, "point-to-point"};

const Enum::YLeaf Native::L2::Vfi::Neighbor::Encapsulation::l2tpv3 {0, "l2tpv3"};
const Enum::YLeaf Native::L2::Vfi::Neighbor::Encapsulation::mpls {1, "mpls"};

const Enum::YLeaf Native::Identity::Policy::No::Linksec::Policy_::must_not_secure {0, "must-not-secure"};
const Enum::YLeaf Native::Identity::Policy::No::Linksec::Policy_::must_secure {1, "must-secure"};
const Enum::YLeaf Native::Identity::Policy::No::Linksec::Policy_::should_secure {2, "should-secure"};

const Enum::YLeaf Native::Identity::Policy::No::ServicePolicy::Qos::Direction::input {0, "input"};
const Enum::YLeaf Native::Identity::Policy::No::ServicePolicy::Qos::Direction::output {1, "output"};

const Enum::YLeaf Native::Identity::Policy::Linksec::Policy_::must_not_secure {0, "must-not-secure"};
const Enum::YLeaf Native::Identity::Policy::Linksec::Policy_::must_secure {1, "must-secure"};
const Enum::YLeaf Native::Identity::Policy::Linksec::Policy_::should_secure {2, "should-secure"};

const Enum::YLeaf Native::Identity::Policy::ServicePolicy::Qos::Direction::input {0, "input"};
const Enum::YLeaf Native::Identity::Policy::ServicePolicy::Qos::Direction::output {1, "output"};

const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::isl {1, "isl"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::replicate {2, "replicate"};

const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::isl {1, "isl"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::untagged {2, "untagged"};

const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Status::good {0, "good"};
const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Status::bad {1, "bad"};

const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Direction::rx {0, "rx"};
const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Direction::tx {1, "tx"};

const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::tx {2, "tx"};

const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::tx {2, "tx"};

const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Interface::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Interface::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Interface::Direction::tx {2, "tx"};

const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Vlan::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Vlan::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Type::ErspanSource::Source::Vlan::Direction::tx {2, "tx"};

const Enum::YLeaf Native::Monitor::Session::Type::Local::Source::Interface::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Type::Local::Source::Interface::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Type::Local::Source::Interface::Direction::tx {2, "tx"};

const Enum::YLeaf Native::Monitor::Session::Type::Local::Source::Vlan::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Type::Local::Source::Vlan::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Type::Local::Source::Vlan::Direction::tx {2, "tx"};

const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::on_for_login_auth {0, "on-for-login-auth"};
const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::include_in_access_req {1, "include-in-access-req"};
const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::support_multiple {2, "support-multiple"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::CallingStationId::mac {0, "mac"};
const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::CallingStationId::send {1, "send"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::Format::ietf {0, "ietf"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::LuCase::lower_case {0, "lower-case"};
const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::LuCase::upper_case {1, "upper-case"};

const Enum::YLeaf Native::RadiusServer::Host::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Host::Key::Y_7 {1, "7"};

const Enum::YLeaf Native::RadiusServer::Host::Test::Username::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Host::Test::Username::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::RadiusServer::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Radius::Filter::Match::match_all {0, "match-all"};
const Enum::YLeaf Native::Radius::Filter::Match::match_any {1, "match-any"};

const Enum::YLeaf Native::Radius::Server::AutomateTester::AtOption::probe_on {0, "probe-on"};

const Enum::YLeaf Native::Radius::Server::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Radius::Server::Key::Encryption::Y_5 {1, "5"};

const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_6 {1, "6"};
const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_7 {2, "7"};

const Enum::YLeaf Native::AlarmContact::Severity::critical {0, "critical"};
const Enum::YLeaf Native::AlarmContact::Severity::major_ {1, "major"};
const Enum::YLeaf Native::AlarmContact::Severity::minor {2, "minor"};

const Enum::YLeaf Native::AlarmContact::Trigger::open {0, "open"};
const Enum::YLeaf Native::AlarmContact::Trigger::closed {1, "closed"};


}
}

