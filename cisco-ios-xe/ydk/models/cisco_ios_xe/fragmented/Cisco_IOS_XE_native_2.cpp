
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_2.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_6.hpp"
#include "Cisco_IOS_XE_native_3.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Controller::SONET::Au4::FramingUnframed::FramingUnframed()
    :
    tug_2(this, {"number", "e1"})
{

    yang_name = "framing-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::FramingUnframed::~FramingUnframed()
{
}

bool Native::Controller::SONET::Au4::FramingUnframed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::FramingUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::FramingUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framing-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::FramingUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::FramingUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONET::Au4::FramingUnframed::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::FramingUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONET::Au4::FramingUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::FramingUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::FramingUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::FramingUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    framing{YType::enumeration, "framing"}
{

    yang_name = "tug-2"; yang_parent_name = "framing-unframed"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::FramingUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::FramingUnframed::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| framing.is_set;
}

bool Native::Controller::SONET::Au4::FramingUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(framing.yfilter);
}

std::string Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Au4::FramingUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::FramingUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::FramingUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "framing")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupAtm::CemGroupAtm()
    :
    tug_2(this, {"number", "e1"})
{

    yang_name = "cem-group-atm"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::CemGroupAtm::~CemGroupAtm()
{
}

bool Native::Controller::SONET::Au4::CemGroupAtm::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::CemGroupAtm::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupAtm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupAtm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::CemGroupAtm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONET::Au4::CemGroupAtm::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::CemGroupAtm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONET::Au4::CemGroupAtm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::CemGroupAtm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::CemGroupAtm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupAtm::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    atm{YType::empty, "atm"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-atm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::CemGroupAtm::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::CemGroupAtm::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| atm.is_set;
}

bool Native::Controller::SONET::Au4::CemGroupAtm::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Au4::CemGroupAtm::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::CemGroupAtm::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::CemGroupAtm::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "atm")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ImaGroup::ImaGroup()
    :
    tug_2(this, {"number", "e1", "ima_group"})
{

    yang_name = "ima-group"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::ImaGroup::~ImaGroup()
{
}

bool Native::Controller::SONET::Au4::ImaGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::ImaGroup::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::ImaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ima-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ImaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::ImaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONET::Au4::ImaGroup::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::ImaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONET::Au4::ImaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::ImaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::ImaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ImaGroup::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    ima_group{YType::int32, "ima-group"}
{

    yang_name = "tug-2"; yang_parent_name = "ima-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::ImaGroup::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::ImaGroup::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| ima_group.is_set;
}

bool Native::Controller::SONET::Au4::ImaGroup::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(ima_group.yfilter);
}

std::string Native::Controller::SONET::Au4::ImaGroup::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    ADD_KEY_TOKEN(ima_group, "ima-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ImaGroup::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (ima_group.is_set || is_set(ima_group.yfilter)) leaf_name_data.push_back(ima_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::ImaGroup::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::ImaGroup::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Au4::ImaGroup::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ima-group")
    {
        ima_group = value;
        ima_group.value_namespace = name_space;
        ima_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::ImaGroup::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "ima-group")
    {
        ima_group.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::ImaGroup::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "ima-group")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Aps()
    :
    working{YType::int8, "working"},
    hspw_icrm_grp{YType::uint8, "hspw-icrm-grp"}
        ,
    group(std::make_shared<Native::Controller::SONET::Aps::Group>())
    , protect(std::make_shared<Native::Controller::SONET::Aps::Protect>())
    , interchassis(std::make_shared<Native::Controller::SONET::Aps::Interchassis>())
{
    group->parent = this;
    protect->parent = this;
    interchassis->parent = this;

    yang_name = "aps"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Aps::~Aps()
{
}

bool Native::Controller::SONET::Aps::has_data() const
{
    if (is_presence_container) return true;
    return working.is_set
	|| hspw_icrm_grp.is_set
	|| (group !=  nullptr && group->has_data())
	|| (protect !=  nullptr && protect->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data());
}

bool Native::Controller::SONET::Aps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(working.yfilter)
	|| ydk::is_set(hspw_icrm_grp.yfilter)
	|| (group !=  nullptr && group->has_operation())
	|| (protect !=  nullptr && protect->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation());
}

std::string Native::Controller::SONET::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (working.is_set || is_set(working.yfilter)) leaf_name_data.push_back(working.get_name_leafdata());
    if (hspw_icrm_grp.is_set || is_set(hspw_icrm_grp.yfilter)) leaf_name_data.push_back(hspw_icrm_grp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Controller::SONET::Aps::Group>();
        }
        return group;
    }

    if(child_yang_name == "protect")
    {
        if(protect == nullptr)
        {
            protect = std::make_shared<Native::Controller::SONET::Aps::Protect>();
        }
        return protect;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Controller::SONET::Aps::Interchassis>();
        }
        return interchassis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group != nullptr)
    {
        _children["group"] = group;
    }

    if(protect != nullptr)
    {
        _children["protect"] = protect;
    }

    if(interchassis != nullptr)
    {
        _children["interchassis"] = interchassis;
    }

    return _children;
}

void Native::Controller::SONET::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "working")
    {
        working = value;
        working.value_namespace = name_space;
        working.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp = value;
        hspw_icrm_grp.value_namespace = name_space;
        hspw_icrm_grp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "working")
    {
        working.yfilter = yfilter;
    }
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "protect" || name == "interchassis" || name == "working" || name == "hspw-icrm-grp")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Group::Group()
    :
    group_number{YType::uint8, "group-number"},
    acr{YType::int8, "acr"}
{

    yang_name = "group"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Aps::Group::~Group()
{
}

bool Native::Controller::SONET::Aps::Group::has_data() const
{
    if (is_presence_container) return true;
    return group_number.is_set
	|| acr.is_set;
}

bool Native::Controller::SONET::Aps::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Controller::SONET::Aps::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Aps::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Aps::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Aps::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-number" || name == "acr")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Protect::Protect()
    :
    number{YType::int8, "number"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "protect"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Aps::Protect::~Protect()
{
}

bool Native::Controller::SONET::Aps::Protect::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| ip_addr.is_set;
}

bool Native::Controller::SONET::Aps::Protect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Controller::SONET::Aps::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::Protect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Aps::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Aps::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Aps::Protect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::Protect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::Protect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "ip-addr")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Interchassis::Interchassis()
    :
    group{YType::uint8, "group"}
{

    yang_name = "interchassis"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Aps::Interchassis::~Interchassis()
{
}

bool Native::Controller::SONET::Aps::Interchassis::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Controller::SONET::Aps::Interchassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Controller::SONET::Aps::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::Interchassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Aps::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Aps::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Aps::Interchassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::Interchassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::Interchassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Controller::SONETACR::SONETACR()
    :
    name{YType::str, "name"},
    framing{YType::enumeration, "framing"},
    shutdown{YType::empty, "shutdown"}
        ,
    clock_(std::make_shared<Native::Controller::SONETACR::Clock>())
    , aug(std::make_shared<Native::Controller::SONETACR::Aug>())
    , au_3(this, {"number"})
    , au_4_atm(std::make_shared<Native::Controller::SONETACR::Au4Atm>())
    , au_4(this, {"number", "tug_3"})
    , aps(std::make_shared<Native::Controller::SONETACR::Aps>())
{
    clock_->parent = this;
    aug->parent = this;
    au_4_atm->parent = this;
    aps->parent = this;

    yang_name = "SONET-ACR"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Controller::SONETACR::~SONETACR()
{
}

bool Native::Controller::SONETACR::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<au_3.len(); index++)
    {
        if(au_3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<au_4.len(); index++)
    {
        if(au_4[index]->has_data())
            return true;
    }
    return name.is_set
	|| framing.is_set
	|| shutdown.is_set
	|| (clock_ !=  nullptr && clock_->has_data())
	|| (aug !=  nullptr && aug->has_data())
	|| (au_4_atm !=  nullptr && au_4_atm->has_data())
	|| (aps !=  nullptr && aps->has_data());
}

bool Native::Controller::SONETACR::has_operation() const
{
    for (std::size_t index=0; index<au_3.len(); index++)
    {
        if(au_3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<au_4.len(); index++)
    {
        if(au_4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (aug !=  nullptr && aug->has_operation())
	|| (au_4_atm !=  nullptr && au_4_atm->has_operation())
	|| (aps !=  nullptr && aps->has_operation());
}

std::string Native::Controller::SONETACR::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::SONETACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:SONET-ACR";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Native::Controller::SONETACR::Clock>();
        }
        return clock_;
    }

    if(child_yang_name == "aug")
    {
        if(aug == nullptr)
        {
            aug = std::make_shared<Native::Controller::SONETACR::Aug>();
        }
        return aug;
    }

    if(child_yang_name == "au-3")
    {
        auto ent_ = std::make_shared<Native::Controller::SONETACR::Au3>();
        ent_->parent = this;
        au_3.append(ent_);
        return ent_;
    }

    if(child_yang_name == "au-4-atm")
    {
        if(au_4_atm == nullptr)
        {
            au_4_atm = std::make_shared<Native::Controller::SONETACR::Au4Atm>();
        }
        return au_4_atm;
    }

    if(child_yang_name == "au-4")
    {
        auto ent_ = std::make_shared<Native::Controller::SONETACR::Au4>();
        ent_->parent = this;
        au_4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<Native::Controller::SONETACR::Aps>();
        }
        return aps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_ != nullptr)
    {
        _children["clock"] = clock_;
    }

    if(aug != nullptr)
    {
        _children["aug"] = aug;
    }

    count_ = 0;
    for (auto ent_ : au_3.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(au_4_atm != nullptr)
    {
        _children["au-4-atm"] = au_4_atm;
    }

    count_ = 0;
    for (auto ent_ : au_4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(aps != nullptr)
    {
        _children["aps"] = aps;
    }

    return _children;
}

void Native::Controller::SONETACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock" || name == "aug" || name == "au-3" || name == "au-4-atm" || name == "au-4" || name == "aps" || name == "name" || name == "framing" || name == "shutdown")
        return true;
    return false;
}

Native::Controller::SONETACR::Clock::Clock()
    :
    source{YType::enumeration, "source"}
{

    yang_name = "clock"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Clock::~Clock()
{
}

bool Native::Controller::SONETACR::Clock::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set;
}

bool Native::Controller::SONETACR::Clock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Controller::SONETACR::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Clock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Clock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Clock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Controller::SONETACR::Aug::Aug()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "aug"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Aug::~Aug()
{
}

bool Native::Controller::SONETACR::Aug::has_data() const
{
    if (is_presence_container) return true;
    return mapping.is_set;
}

bool Native::Controller::SONETACR::Aug::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONETACR::Aug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Aug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Aug::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Aug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aug::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONETACR::Au3::Au3()
    :
    number{YType::int8, "number"}
        ,
    overhead(std::make_shared<Native::Controller::SONETACR::Au3::Overhead>())
    , mode(std::make_shared<Native::Controller::SONETACR::Au3::Mode>())
{
    overhead->parent = this;
    mode->parent = this;

    yang_name = "au-3"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au3::~Au3()
{
}

bool Native::Controller::SONETACR::Au3::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (overhead !=  nullptr && overhead->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Controller::SONETACR::Au3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (overhead !=  nullptr && overhead->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Controller::SONETACR::Au3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-3";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overhead")
    {
        if(overhead == nullptr)
        {
            overhead = std::make_shared<Native::Controller::SONETACR::Au3::Overhead>();
        }
        return overhead;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Controller::SONETACR::Au3::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(overhead != nullptr)
    {
        _children["overhead"] = overhead;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Controller::SONETACR::Au3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overhead" || name == "mode" || name == "number")
        return true;
    return false;
}

Native::Controller::SONETACR::Au3::Overhead::Overhead()
    :
    byte{YType::enumeration, "byte"},
    length{YType::uint8, "length"}
{

    yang_name = "overhead"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au3::Overhead::~Overhead()
{
}

bool Native::Controller::SONETACR::Au3::Overhead::has_data() const
{
    if (is_presence_container) return true;
    return byte.is_set
	|| length.is_set;
}

bool Native::Controller::SONETACR::Au3::Overhead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string Native::Controller::SONETACR::Au3::Overhead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overhead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au3::Overhead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte.is_set || is_set(byte.yfilter)) leaf_name_data.push_back(byte.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au3::Overhead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au3::Overhead::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Au3::Overhead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte")
    {
        byte = value;
        byte.value_namespace = name_space;
        byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au3::Overhead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte")
    {
        byte.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au3::Overhead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte" || name == "length")
        return true;
    return false;
}

Native::Controller::SONETACR::Au3::Mode::Mode()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "mode"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au3::Mode::~Mode()
{
}

bool Native::Controller::SONETACR::Au3::Mode::has_data() const
{
    if (is_presence_container) return true;
    return mapping.is_set;
}

bool Native::Controller::SONETACR::Au3::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONETACR::Au3::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au3::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au3::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au3::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Au3::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au3::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au3::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4Atm::Au4Atm()
    :
    au_4(std::make_shared<Native::Controller::SONETACR::Au4Atm::Au4>())
{
    au_4->parent = this;

    yang_name = "au-4-atm"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4Atm::~Au4Atm()
{
}

bool Native::Controller::SONETACR::Au4Atm::has_data() const
{
    if (is_presence_container) return true;
    return (au_4 !=  nullptr && au_4->has_data());
}

bool Native::Controller::SONETACR::Au4Atm::has_operation() const
{
    return is_set(yfilter)
	|| (au_4 !=  nullptr && au_4->has_operation());
}

std::string Native::Controller::SONETACR::Au4Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "au-4")
    {
        if(au_4 == nullptr)
        {
            au_4 = std::make_shared<Native::Controller::SONETACR::Au4Atm::Au4>();
        }
        return au_4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(au_4 != nullptr)
    {
        _children["au-4"] = au_4;
    }

    return _children;
}

void Native::Controller::SONETACR::Au4Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "au-4")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4Atm::Au4::Au4()
    :
    number{YType::int8, "number"},
    atm{YType::empty, "atm"}
{

    yang_name = "au-4"; yang_parent_name = "au-4-atm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4Atm::Au4::~Au4()
{
}

bool Native::Controller::SONETACR::Au4Atm::Au4::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| atm.is_set;
}

bool Native::Controller::SONETACR::Au4Atm::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Controller::SONETACR::Au4Atm::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4Atm::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4Atm::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4Atm::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Au4Atm::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4Atm::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4Atm::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "atm")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::Au4()
    :
    number{YType::int8, "number"},
    tug_3{YType::int8, "tug-3"},
    mode{YType::enumeration, "mode"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"},
    framing{YType::enumeration, "framing"}
        ,
    cem_group_timeslots(std::make_shared<Native::Controller::SONETACR::Au4::CemGroupTimeslots>())
    , channel_group_timeslots(std::make_shared<Native::Controller::SONETACR::Au4::ChannelGroupTimeslots>())
    , cem_group_unframed(std::make_shared<Native::Controller::SONETACR::Au4::CemGroupUnframed>())
    , framing_unframed(std::make_shared<Native::Controller::SONETACR::Au4::FramingUnframed>())
    , cem_group_atm(std::make_shared<Native::Controller::SONETACR::Au4::CemGroupAtm>())
    , ima_group(std::make_shared<Native::Controller::SONETACR::Au4::ImaGroup>())
{
    cem_group_timeslots->parent = this;
    channel_group_timeslots->parent = this;
    cem_group_unframed->parent = this;
    framing_unframed->parent = this;
    cem_group_atm->parent = this;
    ima_group->parent = this;

    yang_name = "au-4"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::~Au4()
{
}

bool Native::Controller::SONETACR::Au4::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| tug_3.is_set
	|| mode.is_set
	|| cem_group.is_set
	|| unframed.is_set
	|| framing.is_set
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_data())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_data())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_data())
	|| (framing_unframed !=  nullptr && framing_unframed->has_data())
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_data())
	|| (ima_group !=  nullptr && ima_group->has_data());
}

bool Native::Controller::SONETACR::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(tug_3.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(unframed.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_operation())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_operation())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_operation())
	|| (framing_unframed !=  nullptr && framing_unframed->has_operation())
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_operation())
	|| (ima_group !=  nullptr && ima_group->has_operation());
}

std::string Native::Controller::SONETACR::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(tug_3, "tug-3");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (tug_3.is_set || is_set(tug_3.yfilter)) leaf_name_data.push_back(tug_3.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cem-group-timeslots")
    {
        if(cem_group_timeslots == nullptr)
        {
            cem_group_timeslots = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupTimeslots>();
        }
        return cem_group_timeslots;
    }

    if(child_yang_name == "channel-group-timeslots")
    {
        if(channel_group_timeslots == nullptr)
        {
            channel_group_timeslots = std::make_shared<Native::Controller::SONETACR::Au4::ChannelGroupTimeslots>();
        }
        return channel_group_timeslots;
    }

    if(child_yang_name == "cem-group-unframed")
    {
        if(cem_group_unframed == nullptr)
        {
            cem_group_unframed = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupUnframed>();
        }
        return cem_group_unframed;
    }

    if(child_yang_name == "framing-unframed")
    {
        if(framing_unframed == nullptr)
        {
            framing_unframed = std::make_shared<Native::Controller::SONETACR::Au4::FramingUnframed>();
        }
        return framing_unframed;
    }

    if(child_yang_name == "cem-group-atm")
    {
        if(cem_group_atm == nullptr)
        {
            cem_group_atm = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupAtm>();
        }
        return cem_group_atm;
    }

    if(child_yang_name == "ima-group")
    {
        if(ima_group == nullptr)
        {
            ima_group = std::make_shared<Native::Controller::SONETACR::Au4::ImaGroup>();
        }
        return ima_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cem_group_timeslots != nullptr)
    {
        _children["cem-group-timeslots"] = cem_group_timeslots;
    }

    if(channel_group_timeslots != nullptr)
    {
        _children["channel-group-timeslots"] = channel_group_timeslots;
    }

    if(cem_group_unframed != nullptr)
    {
        _children["cem-group-unframed"] = cem_group_unframed;
    }

    if(framing_unframed != nullptr)
    {
        _children["framing-unframed"] = framing_unframed;
    }

    if(cem_group_atm != nullptr)
    {
        _children["cem-group-atm"] = cem_group_atm;
    }

    if(ima_group != nullptr)
    {
        _children["ima-group"] = ima_group;
    }

    return _children;
}

void Native::Controller::SONETACR::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tug-3")
    {
        tug_3 = value;
        tug_3.value_namespace = name_space;
        tug_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "tug-3")
    {
        tug_3.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cem-group-timeslots" || name == "channel-group-timeslots" || name == "cem-group-unframed" || name == "framing-unframed" || name == "cem-group-atm" || name == "ima-group" || name == "number" || name == "tug-3" || name == "mode" || name == "cem-group" || name == "unframed" || name == "framing")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::CemGroupTimeslots()
    :
    tug_2(this, {"number", "e1", "cem_group"})
{

    yang_name = "cem-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::~CemGroupTimeslots()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-timeslots"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    ADD_KEY_TOKEN(cem_group, "cem-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::ChannelGroupTimeslots()
    :
    tug_2(this, {"number", "e1", "channel_group"})
{

    yang_name = "channel-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::~ChannelGroupTimeslots()
{
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    channel_group{YType::int32, "channel-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "channel-group-timeslots"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| channel_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(channel_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    ADD_KEY_TOKEN(channel_group, "channel-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (channel_group.is_set || is_set(channel_group.yfilter)) leaf_name_data.push_back(channel_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-group")
    {
        channel_group = value;
        channel_group.value_namespace = name_space;
        channel_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "channel-group")
    {
        channel_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "channel-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::CemGroupUnframed()
    :
    tug_2(this, {"number", "e1", "cem_group"})
{

    yang_name = "cem-group-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::~CemGroupUnframed()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::CemGroupUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::CemGroupUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-unframed"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| unframed.is_set;
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(unframed.yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    ADD_KEY_TOKEN(cem_group, "cem-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "unframed")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::FramingUnframed::FramingUnframed()
    :
    tug_2(this, {"number", "e1"})
{

    yang_name = "framing-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::FramingUnframed::~FramingUnframed()
{
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::FramingUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framing-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::FramingUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::FramingUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONETACR::Au4::FramingUnframed::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::FramingUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONETACR::Au4::FramingUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::FramingUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    framing{YType::enumeration, "framing"}
{

    yang_name = "tug-2"; yang_parent_name = "framing-unframed"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| framing.is_set;
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(framing.yfilter);
}

std::string Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "framing")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupAtm::CemGroupAtm()
    :
    tug_2(this, {"number", "e1"})
{

    yang_name = "cem-group-atm"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::CemGroupAtm::~CemGroupAtm()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupAtm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupAtm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::CemGroupAtm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::CemGroupAtm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    atm{YType::empty, "atm"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-atm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| atm.is_set;
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "atm")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ImaGroup::ImaGroup()
    :
    tug_2(this, {"number", "e1", "ima_group"})
{

    yang_name = "ima-group"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::ImaGroup::~ImaGroup()
{
}

bool Native::Controller::SONETACR::Au4::ImaGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::ImaGroup::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::ImaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ima-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ImaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::ImaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONETACR::Au4::ImaGroup::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::ImaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONETACR::Au4::ImaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::ImaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::ImaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ImaGroup::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    ima_group{YType::int32, "ima-group"}
{

    yang_name = "tug-2"; yang_parent_name = "ima-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Au4::ImaGroup::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::ImaGroup::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| ima_group.is_set;
}

bool Native::Controller::SONETACR::Au4::ImaGroup::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(ima_group.yfilter);
}

std::string Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    ADD_KEY_TOKEN(ima_group, "ima-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (ima_group.is_set || is_set(ima_group.yfilter)) leaf_name_data.push_back(ima_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Au4::ImaGroup::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ima-group")
    {
        ima_group = value;
        ima_group.value_namespace = name_space;
        ima_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::ImaGroup::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "ima-group")
    {
        ima_group.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::ImaGroup::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "ima-group")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Aps()
    :
    working{YType::int8, "working"},
    hspw_icrm_grp{YType::uint8, "hspw-icrm-grp"}
        ,
    group(std::make_shared<Native::Controller::SONETACR::Aps::Group>())
    , protect(std::make_shared<Native::Controller::SONETACR::Aps::Protect>())
    , interchassis(std::make_shared<Native::Controller::SONETACR::Aps::Interchassis>())
{
    group->parent = this;
    protect->parent = this;
    interchassis->parent = this;

    yang_name = "aps"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Aps::~Aps()
{
}

bool Native::Controller::SONETACR::Aps::has_data() const
{
    if (is_presence_container) return true;
    return working.is_set
	|| hspw_icrm_grp.is_set
	|| (group !=  nullptr && group->has_data())
	|| (protect !=  nullptr && protect->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data());
}

bool Native::Controller::SONETACR::Aps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(working.yfilter)
	|| ydk::is_set(hspw_icrm_grp.yfilter)
	|| (group !=  nullptr && group->has_operation())
	|| (protect !=  nullptr && protect->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation());
}

std::string Native::Controller::SONETACR::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (working.is_set || is_set(working.yfilter)) leaf_name_data.push_back(working.get_name_leafdata());
    if (hspw_icrm_grp.is_set || is_set(hspw_icrm_grp.yfilter)) leaf_name_data.push_back(hspw_icrm_grp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Controller::SONETACR::Aps::Group>();
        }
        return group;
    }

    if(child_yang_name == "protect")
    {
        if(protect == nullptr)
        {
            protect = std::make_shared<Native::Controller::SONETACR::Aps::Protect>();
        }
        return protect;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Controller::SONETACR::Aps::Interchassis>();
        }
        return interchassis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group != nullptr)
    {
        _children["group"] = group;
    }

    if(protect != nullptr)
    {
        _children["protect"] = protect;
    }

    if(interchassis != nullptr)
    {
        _children["interchassis"] = interchassis;
    }

    return _children;
}

void Native::Controller::SONETACR::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "working")
    {
        working = value;
        working.value_namespace = name_space;
        working.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp = value;
        hspw_icrm_grp.value_namespace = name_space;
        hspw_icrm_grp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "working")
    {
        working.yfilter = yfilter;
    }
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "protect" || name == "interchassis" || name == "working" || name == "hspw-icrm-grp")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Group::Group()
    :
    group_number{YType::uint8, "group-number"},
    acr{YType::int8, "acr"}
{

    yang_name = "group"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Aps::Group::~Group()
{
}

bool Native::Controller::SONETACR::Aps::Group::has_data() const
{
    if (is_presence_container) return true;
    return group_number.is_set
	|| acr.is_set;
}

bool Native::Controller::SONETACR::Aps::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Controller::SONETACR::Aps::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Aps::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Aps::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Aps::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-number" || name == "acr")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Protect::Protect()
    :
    number{YType::int8, "number"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "protect"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Aps::Protect::~Protect()
{
}

bool Native::Controller::SONETACR::Aps::Protect::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| ip_addr.is_set;
}

bool Native::Controller::SONETACR::Aps::Protect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Controller::SONETACR::Aps::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::Protect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Aps::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Aps::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Aps::Protect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::Protect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::Protect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "ip-addr")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Interchassis::Interchassis()
    :
    group{YType::uint8, "group"}
{

    yang_name = "interchassis"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONETACR::Aps::Interchassis::~Interchassis()
{
}

bool Native::Controller::SONETACR::Aps::Interchassis::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Controller::SONETACR::Aps::Interchassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Controller::SONETACR::Aps::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::Interchassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONETACR::Aps::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONETACR::Aps::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONETACR::Aps::Interchassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::Interchassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::Interchassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Controller::Wanphy::Wanphy()
    :
    name{YType::str, "name"}
{

    yang_name = "wanphy"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Controller::Wanphy::~Wanphy()
{
}

bool Native::Controller::Wanphy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Controller::Wanphy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Controller::Wanphy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::Wanphy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:wanphy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Wanphy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Wanphy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Wanphy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Wanphy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Wanphy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Controller::Wanphy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Controller::Vdsl::Vdsl()
    :
    name{YType::str, "name"},
    shutdown{YType::empty, "shutdown"},
    sra{YType::empty, "sra"},
    bitswap{YType::empty, "bitswap"},
    diagnostics{YType::enumeration, "diagnostics"},
    description{YType::str, "description"},
    modem{YType::str, "modem"}
        ,
    line_mode(std::make_shared<Native::Controller::Vdsl::LineMode>())
    , operating(std::make_shared<Native::Controller::Vdsl::Operating>())
    , training(std::make_shared<Native::Controller::Vdsl::Training>())
    , sync(std::make_shared<Native::Controller::Vdsl::Sync>())
{
    line_mode->parent = this;
    operating->parent = this;
    training->parent = this;
    sync->parent = this;

    yang_name = "vdsl"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Controller::Vdsl::~Vdsl()
{
}

bool Native::Controller::Vdsl::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| shutdown.is_set
	|| sra.is_set
	|| bitswap.is_set
	|| diagnostics.is_set
	|| description.is_set
	|| modem.is_set
	|| (line_mode !=  nullptr && line_mode->has_data())
	|| (operating !=  nullptr && operating->has_data())
	|| (training !=  nullptr && training->has_data())
	|| (sync !=  nullptr && sync->has_data());
}

bool Native::Controller::Vdsl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(sra.yfilter)
	|| ydk::is_set(bitswap.yfilter)
	|| ydk::is_set(diagnostics.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(modem.yfilter)
	|| (line_mode !=  nullptr && line_mode->has_operation())
	|| (operating !=  nullptr && operating->has_operation())
	|| (training !=  nullptr && training->has_operation())
	|| (sync !=  nullptr && sync->has_operation());
}

std::string Native::Controller::Vdsl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::Vdsl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:vdsl";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (sra.is_set || is_set(sra.yfilter)) leaf_name_data.push_back(sra.get_name_leafdata());
    if (bitswap.is_set || is_set(bitswap.yfilter)) leaf_name_data.push_back(bitswap.get_name_leafdata());
    if (diagnostics.is_set || is_set(diagnostics.yfilter)) leaf_name_data.push_back(diagnostics.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (modem.is_set || is_set(modem.yfilter)) leaf_name_data.push_back(modem.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-mode")
    {
        if(line_mode == nullptr)
        {
            line_mode = std::make_shared<Native::Controller::Vdsl::LineMode>();
        }
        return line_mode;
    }

    if(child_yang_name == "operating")
    {
        if(operating == nullptr)
        {
            operating = std::make_shared<Native::Controller::Vdsl::Operating>();
        }
        return operating;
    }

    if(child_yang_name == "training")
    {
        if(training == nullptr)
        {
            training = std::make_shared<Native::Controller::Vdsl::Training>();
        }
        return training;
    }

    if(child_yang_name == "sync")
    {
        if(sync == nullptr)
        {
            sync = std::make_shared<Native::Controller::Vdsl::Sync>();
        }
        return sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(line_mode != nullptr)
    {
        _children["line-mode"] = line_mode;
    }

    if(operating != nullptr)
    {
        _children["operating"] = operating;
    }

    if(training != nullptr)
    {
        _children["training"] = training;
    }

    if(sync != nullptr)
    {
        _children["sync"] = sync;
    }

    return _children;
}

void Native::Controller::Vdsl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sra")
    {
        sra = value;
        sra.value_namespace = name_space;
        sra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitswap")
    {
        bitswap = value;
        bitswap.value_namespace = name_space;
        bitswap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostics")
    {
        diagnostics = value;
        diagnostics.value_namespace = name_space;
        diagnostics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modem")
    {
        modem = value;
        modem.value_namespace = name_space;
        modem.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "sra")
    {
        sra.yfilter = yfilter;
    }
    if(value_path == "bitswap")
    {
        bitswap.yfilter = yfilter;
    }
    if(value_path == "diagnostics")
    {
        diagnostics.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "modem")
    {
        modem.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-mode" || name == "operating" || name == "training" || name == "sync" || name == "name" || name == "shutdown" || name == "sra" || name == "bitswap" || name == "diagnostics" || name == "description" || name == "modem")
        return true;
    return false;
}

Native::Controller::Vdsl::LineMode::LineMode()
    :
    bonding{YType::empty, "bonding"}
        ,
    single_wire(std::make_shared<Native::Controller::Vdsl::LineMode::SingleWire>())
{
    single_wire->parent = this;

    yang_name = "line-mode"; yang_parent_name = "vdsl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Vdsl::LineMode::~LineMode()
{
}

bool Native::Controller::Vdsl::LineMode::has_data() const
{
    if (is_presence_container) return true;
    return bonding.is_set
	|| (single_wire !=  nullptr && single_wire->has_data());
}

bool Native::Controller::Vdsl::LineMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bonding.yfilter)
	|| (single_wire !=  nullptr && single_wire->has_operation());
}

std::string Native::Controller::Vdsl::LineMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::LineMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bonding.is_set || is_set(bonding.yfilter)) leaf_name_data.push_back(bonding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::LineMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "single-wire")
    {
        if(single_wire == nullptr)
        {
            single_wire = std::make_shared<Native::Controller::Vdsl::LineMode::SingleWire>();
        }
        return single_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::LineMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(single_wire != nullptr)
    {
        _children["single-wire"] = single_wire;
    }

    return _children;
}

void Native::Controller::Vdsl::LineMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bonding")
    {
        bonding = value;
        bonding.value_namespace = name_space;
        bonding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::LineMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bonding")
    {
        bonding.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::LineMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "single-wire" || name == "bonding")
        return true;
    return false;
}

Native::Controller::Vdsl::LineMode::SingleWire::SingleWire()
    :
    line(std::make_shared<Native::Controller::Vdsl::LineMode::SingleWire::Line>())
{
    line->parent = this;

    yang_name = "single-wire"; yang_parent_name = "line-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Vdsl::LineMode::SingleWire::~SingleWire()
{
}

bool Native::Controller::Vdsl::LineMode::SingleWire::has_data() const
{
    if (is_presence_container) return true;
    return (line !=  nullptr && line->has_data());
}

bool Native::Controller::Vdsl::LineMode::SingleWire::has_operation() const
{
    return is_set(yfilter)
	|| (line !=  nullptr && line->has_operation());
}

std::string Native::Controller::Vdsl::LineMode::SingleWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-wire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::LineMode::SingleWire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::LineMode::SingleWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<Native::Controller::Vdsl::LineMode::SingleWire::Line>();
        }
        return line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::LineMode::SingleWire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(line != nullptr)
    {
        _children["line"] = line;
    }

    return _children;
}

void Native::Controller::Vdsl::LineMode::SingleWire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Vdsl::LineMode::SingleWire::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Vdsl::LineMode::SingleWire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line")
        return true;
    return false;
}

Native::Controller::Vdsl::LineMode::SingleWire::Line::Line()
    :
    zero{YType::empty, "zero"}
        ,
    one(nullptr) // presence node
{

    yang_name = "line"; yang_parent_name = "single-wire"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Vdsl::LineMode::SingleWire::Line::~Line()
{
}

bool Native::Controller::Vdsl::LineMode::SingleWire::Line::has_data() const
{
    if (is_presence_container) return true;
    return zero.is_set
	|| (one !=  nullptr && one->has_data());
}

bool Native::Controller::Vdsl::LineMode::SingleWire::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(zero.yfilter)
	|| (one !=  nullptr && one->has_operation());
}

std::string Native::Controller::Vdsl::LineMode::SingleWire::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::LineMode::SingleWire::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (zero.is_set || is_set(zero.yfilter)) leaf_name_data.push_back(zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::LineMode::SingleWire::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Native::Controller::Vdsl::LineMode::SingleWire::Line::One>();
        }
        return one;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::LineMode::SingleWire::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(one != nullptr)
    {
        _children["one"] = one;
    }

    return _children;
}

void Native::Controller::Vdsl::LineMode::SingleWire::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "zero")
    {
        zero = value;
        zero.value_namespace = name_space;
        zero.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::LineMode::SingleWire::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "zero")
    {
        zero.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::LineMode::SingleWire::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "zero")
        return true;
    return false;
}

Native::Controller::Vdsl::LineMode::SingleWire::Line::One::One()
    :
    profile{YType::enumeration, "profile"}
{

    yang_name = "one"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Controller::Vdsl::LineMode::SingleWire::Line::One::~One()
{
}

bool Native::Controller::Vdsl::LineMode::SingleWire::Line::One::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Native::Controller::Vdsl::LineMode::SingleWire::Line::One::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Controller::Vdsl::LineMode::SingleWire::Line::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::LineMode::SingleWire::Line::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::LineMode::SingleWire::Line::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::LineMode::SingleWire::Line::One::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Vdsl::LineMode::SingleWire::Line::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::LineMode::SingleWire::Line::One::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::LineMode::SingleWire::Line::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Controller::Vdsl::Operating::Operating()
    :
    mode(std::make_shared<Native::Controller::Vdsl::Operating::Mode>())
{
    mode->parent = this;

    yang_name = "operating"; yang_parent_name = "vdsl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Vdsl::Operating::~Operating()
{
}

bool Native::Controller::Vdsl::Operating::has_data() const
{
    if (is_presence_container) return true;
    return (mode !=  nullptr && mode->has_data());
}

bool Native::Controller::Vdsl::Operating::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Controller::Vdsl::Operating::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operating";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::Operating::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::Operating::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Controller::Vdsl::Operating::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::Operating::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Controller::Vdsl::Operating::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Vdsl::Operating::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Vdsl::Operating::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Controller::Vdsl::Operating::Mode::Mode()
    :
    adsl1{YType::empty, "adsl1"},
    auto_{YType::empty, "auto"},
    vdsl2{YType::empty, "vdsl2"},
    ansi{YType::empty, "ansi"}
        ,
    adsl2(nullptr) // presence node
    , adsl2plus(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "operating"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Vdsl::Operating::Mode::~Mode()
{
}

bool Native::Controller::Vdsl::Operating::Mode::has_data() const
{
    if (is_presence_container) return true;
    return adsl1.is_set
	|| auto_.is_set
	|| vdsl2.is_set
	|| ansi.is_set
	|| (adsl2 !=  nullptr && adsl2->has_data())
	|| (adsl2plus !=  nullptr && adsl2plus->has_data());
}

bool Native::Controller::Vdsl::Operating::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adsl1.yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(vdsl2.yfilter)
	|| ydk::is_set(ansi.yfilter)
	|| (adsl2 !=  nullptr && adsl2->has_operation())
	|| (adsl2plus !=  nullptr && adsl2plus->has_operation());
}

std::string Native::Controller::Vdsl::Operating::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::Operating::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adsl1.is_set || is_set(adsl1.yfilter)) leaf_name_data.push_back(adsl1.get_name_leafdata());
    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (vdsl2.is_set || is_set(vdsl2.yfilter)) leaf_name_data.push_back(vdsl2.get_name_leafdata());
    if (ansi.is_set || is_set(ansi.yfilter)) leaf_name_data.push_back(ansi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::Operating::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adsl2")
    {
        if(adsl2 == nullptr)
        {
            adsl2 = std::make_shared<Native::Controller::Vdsl::Operating::Mode::Adsl2>();
        }
        return adsl2;
    }

    if(child_yang_name == "adsl2plus")
    {
        if(adsl2plus == nullptr)
        {
            adsl2plus = std::make_shared<Native::Controller::Vdsl::Operating::Mode::Adsl2plus>();
        }
        return adsl2plus;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::Operating::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adsl2 != nullptr)
    {
        _children["adsl2"] = adsl2;
    }

    if(adsl2plus != nullptr)
    {
        _children["adsl2plus"] = adsl2plus;
    }

    return _children;
}

void Native::Controller::Vdsl::Operating::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adsl1")
    {
        adsl1 = value;
        adsl1.value_namespace = name_space;
        adsl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdsl2")
    {
        vdsl2 = value;
        vdsl2.value_namespace = name_space;
        vdsl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ansi")
    {
        ansi = value;
        ansi.value_namespace = name_space;
        ansi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::Operating::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adsl1")
    {
        adsl1.yfilter = yfilter;
    }
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "vdsl2")
    {
        vdsl2.yfilter = yfilter;
    }
    if(value_path == "ansi")
    {
        ansi.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::Operating::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adsl2" || name == "adsl2plus" || name == "adsl1" || name == "auto" || name == "vdsl2" || name == "ansi")
        return true;
    return false;
}

Native::Controller::Vdsl::Operating::Mode::Adsl2::Adsl2()
    :
    annex{YType::enumeration, "annex"}
{

    yang_name = "adsl2"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Controller::Vdsl::Operating::Mode::Adsl2::~Adsl2()
{
}

bool Native::Controller::Vdsl::Operating::Mode::Adsl2::has_data() const
{
    if (is_presence_container) return true;
    return annex.is_set;
}

bool Native::Controller::Vdsl::Operating::Mode::Adsl2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(annex.yfilter);
}

std::string Native::Controller::Vdsl::Operating::Mode::Adsl2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adsl2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::Operating::Mode::Adsl2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (annex.is_set || is_set(annex.yfilter)) leaf_name_data.push_back(annex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::Operating::Mode::Adsl2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::Operating::Mode::Adsl2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Vdsl::Operating::Mode::Adsl2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "annex")
    {
        annex = value;
        annex.value_namespace = name_space;
        annex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::Operating::Mode::Adsl2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "annex")
    {
        annex.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::Operating::Mode::Adsl2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "annex")
        return true;
    return false;
}

Native::Controller::Vdsl::Operating::Mode::Adsl2plus::Adsl2plus()
    :
    annex{YType::enumeration, "annex"}
{

    yang_name = "adsl2plus"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Controller::Vdsl::Operating::Mode::Adsl2plus::~Adsl2plus()
{
}

bool Native::Controller::Vdsl::Operating::Mode::Adsl2plus::has_data() const
{
    if (is_presence_container) return true;
    return annex.is_set;
}

bool Native::Controller::Vdsl::Operating::Mode::Adsl2plus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(annex.yfilter);
}

std::string Native::Controller::Vdsl::Operating::Mode::Adsl2plus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adsl2plus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::Operating::Mode::Adsl2plus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (annex.is_set || is_set(annex.yfilter)) leaf_name_data.push_back(annex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::Operating::Mode::Adsl2plus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::Operating::Mode::Adsl2plus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Vdsl::Operating::Mode::Adsl2plus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "annex")
    {
        annex = value;
        annex.value_namespace = name_space;
        annex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::Operating::Mode::Adsl2plus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "annex")
    {
        annex.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::Operating::Mode::Adsl2plus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "annex")
        return true;
    return false;
}

Native::Controller::Vdsl::Training::Training()
    :
    log(std::make_shared<Native::Controller::Vdsl::Training::Log>())
{
    log->parent = this;

    yang_name = "training"; yang_parent_name = "vdsl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Vdsl::Training::~Training()
{
}

bool Native::Controller::Vdsl::Training::has_data() const
{
    if (is_presence_container) return true;
    return (log !=  nullptr && log->has_data());
}

bool Native::Controller::Vdsl::Training::has_operation() const
{
    return is_set(yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Controller::Vdsl::Training::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "training";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::Training::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::Training::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Controller::Vdsl::Training::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::Training::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log != nullptr)
    {
        _children["log"] = log;
    }

    return _children;
}

void Native::Controller::Vdsl::Training::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Vdsl::Training::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Vdsl::Training::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Controller::Vdsl::Training::Log::Log()
    :
    filename{YType::str, "filename"}
{

    yang_name = "log"; yang_parent_name = "training"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Vdsl::Training::Log::~Log()
{
}

bool Native::Controller::Vdsl::Training::Log::has_data() const
{
    if (is_presence_container) return true;
    return filename.is_set;
}

bool Native::Controller::Vdsl::Training::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Native::Controller::Vdsl::Training::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::Training::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::Training::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::Training::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Vdsl::Training::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::Training::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::Training::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filename")
        return true;
    return false;
}

Native::Controller::Vdsl::Sync::Sync()
    :
    interval(std::make_shared<Native::Controller::Vdsl::Sync::Interval>())
    , mode(std::make_shared<Native::Controller::Vdsl::Sync::Mode>())
{
    interval->parent = this;
    mode->parent = this;

    yang_name = "sync"; yang_parent_name = "vdsl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Vdsl::Sync::~Sync()
{
}

bool Native::Controller::Vdsl::Sync::has_data() const
{
    if (is_presence_container) return true;
    return (interval !=  nullptr && interval->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Controller::Vdsl::Sync::has_operation() const
{
    return is_set(yfilter)
	|| (interval !=  nullptr && interval->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Controller::Vdsl::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::Sync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Controller::Vdsl::Sync::Interval>();
        }
        return interval;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Controller::Vdsl::Sync::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interval != nullptr)
    {
        _children["interval"] = interval;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Controller::Vdsl::Sync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Vdsl::Sync::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Vdsl::Sync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "mode")
        return true;
    return false;
}

Native::Controller::Vdsl::Sync::Interval::Interval()
    :
    seconds{YType::uint32, "seconds"}
{

    yang_name = "interval"; yang_parent_name = "sync"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Vdsl::Sync::Interval::~Interval()
{
}

bool Native::Controller::Vdsl::Sync::Interval::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set;
}

bool Native::Controller::Vdsl::Sync::Interval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Controller::Vdsl::Sync::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::Sync::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::Sync::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::Sync::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Vdsl::Sync::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::Sync::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::Sync::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds")
        return true;
    return false;
}

Native::Controller::Vdsl::Sync::Mode::Mode()
    :
    none{YType::empty, "none"}
        ,
    itu(nullptr) // presence node
    , ansi(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "sync"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Vdsl::Sync::Mode::~Mode()
{
}

bool Native::Controller::Vdsl::Sync::Mode::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| (itu !=  nullptr && itu->has_data())
	|| (ansi !=  nullptr && ansi->has_data());
}

bool Native::Controller::Vdsl::Sync::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (itu !=  nullptr && itu->has_operation())
	|| (ansi !=  nullptr && ansi->has_operation());
}

std::string Native::Controller::Vdsl::Sync::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::Sync::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::Sync::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "itu")
    {
        if(itu == nullptr)
        {
            itu = std::make_shared<Native::Controller::Vdsl::Sync::Mode::Itu>();
        }
        return itu;
    }

    if(child_yang_name == "ansi")
    {
        if(ansi == nullptr)
        {
            ansi = std::make_shared<Native::Controller::Vdsl::Sync::Mode::Ansi>();
        }
        return ansi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::Sync::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(itu != nullptr)
    {
        _children["itu"] = itu;
    }

    if(ansi != nullptr)
    {
        _children["ansi"] = ansi;
    }

    return _children;
}

void Native::Controller::Vdsl::Sync::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::Sync::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::Sync::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itu" || name == "ansi" || name == "none")
        return true;
    return false;
}

Native::Controller::Vdsl::Sync::Mode::Itu::Itu()
    :
    previous{YType::empty, "previous"}
{

    yang_name = "itu"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Controller::Vdsl::Sync::Mode::Itu::~Itu()
{
}

bool Native::Controller::Vdsl::Sync::Mode::Itu::has_data() const
{
    if (is_presence_container) return true;
    return previous.is_set;
}

bool Native::Controller::Vdsl::Sync::Mode::Itu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(previous.yfilter);
}

std::string Native::Controller::Vdsl::Sync::Mode::Itu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::Sync::Mode::Itu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (previous.is_set || is_set(previous.yfilter)) leaf_name_data.push_back(previous.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::Sync::Mode::Itu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::Sync::Mode::Itu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Vdsl::Sync::Mode::Itu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "previous")
    {
        previous = value;
        previous.value_namespace = name_space;
        previous.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::Sync::Mode::Itu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "previous")
    {
        previous.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::Sync::Mode::Itu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "previous")
        return true;
    return false;
}

Native::Controller::Vdsl::Sync::Mode::Ansi::Ansi()
    :
    previous{YType::empty, "previous"}
{

    yang_name = "ansi"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Controller::Vdsl::Sync::Mode::Ansi::~Ansi()
{
}

bool Native::Controller::Vdsl::Sync::Mode::Ansi::has_data() const
{
    if (is_presence_container) return true;
    return previous.is_set;
}

bool Native::Controller::Vdsl::Sync::Mode::Ansi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(previous.yfilter);
}

std::string Native::Controller::Vdsl::Sync::Mode::Ansi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ansi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Vdsl::Sync::Mode::Ansi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (previous.is_set || is_set(previous.yfilter)) leaf_name_data.push_back(previous.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Vdsl::Sync::Mode::Ansi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Vdsl::Sync::Mode::Ansi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Vdsl::Sync::Mode::Ansi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "previous")
    {
        previous = value;
        previous.value_namespace = name_space;
        previous.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Vdsl::Sync::Mode::Ansi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "previous")
    {
        previous.yfilter = yfilter;
    }
}

bool Native::Controller::Vdsl::Sync::Mode::Ansi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "previous")
        return true;
    return false;
}

Native::Vrf::Vrf()
    :
    definition(this, {"name"})
{

    yang_name = "vrf"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vrf::~Vrf()
{
}

bool Native::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<definition.len(); index++)
    {
        if(definition[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::has_operation() const
{
    for (std::size_t index=0; index<definition.len(); index++)
    {
        if(definition[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "definition")
    {
        auto ent_ = std::make_shared<Native::Vrf::Definition>();
        ent_->parent = this;
        definition.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : definition.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "definition")
        return true;
    return false;
}

Native::Vrf::Definition::Definition()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    rd{YType::str, "rd"}
        ,
    address_family(std::make_shared<Native::Vrf::Definition::AddressFamily>())
    , route_target(std::make_shared<Native::Vrf::Definition::RouteTarget>())
    , vpn(std::make_shared<Native::Vrf::Definition::Vpn>())
{
    address_family->parent = this;
    route_target->parent = this;
    vpn->parent = this;

    yang_name = "definition"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vrf::Definition::~Definition()
{
}

bool Native::Vrf::Definition::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| rd.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (route_target !=  nullptr && route_target->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::Vrf::Definition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::Vrf::Definition::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vrf::Definition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "definition";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Vrf::Definition::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::RouteTarget>();
        }
        return route_target;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::Vrf::Definition::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    if(route_target != nullptr)
    {
        _children["route-target"] = route_target;
    }

    if(vpn != nullptr)
    {
        _children["vpn"] = vpn;
    }

    return _children;
}

void Native::Vrf::Definition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "route-target" || name == "vpn" || name == "name" || name == "description" || name == "rd")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
    , ipv6(nullptr) // presence node
{

    yang_name = "address-family"; yang_parent_name = "definition"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::~AddressFamily()
{
}

bool Native::Vrf::Definition::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vrf::Definition::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Vrf::Definition::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Ipv4()
    :
    export_(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Export>())
    , maximum(nullptr) // presence node
    , mdt(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt>())
    , route_target(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget>())
    , bgp(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp>())
    , import(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Import>())
{
    export_->parent = this;
    mdt->parent = this;
    route_target->parent = this;
    bgp->parent = this;
    import->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (export_ !=  nullptr && export_->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (mdt !=  nullptr && mdt->has_data())
	|| (route_target !=  nullptr && route_target->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (export_ !=  nullptr && export_->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (mdt !=  nullptr && mdt->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Export>();
        }
        return export_;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "mdt")
    {
        if(mdt == nullptr)
        {
            mdt = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt>();
        }
        return mdt;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget>();
        }
        return route_target;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(export_ != nullptr)
    {
        _children["export"] = export_;
    }

    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    if(mdt != nullptr)
    {
        _children["mdt"] = mdt;
    }

    if(route_target != nullptr)
    {
        _children["route-target"] = route_target;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export" || name == "maximum" || name == "mdt" || name == "route-target" || name == "bgp" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Export::Export()
    :
    map{YType::str, "map"}
{

    yang_name = "export"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::Export::~Export()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Export::has_data() const
{
    if (is_presence_container) return true;
    return map.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Export::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::Maximum()
    :
    routes{YType::uint32, "routes"},
    threshold{YType::uint16, "threshold"},
    reinstall{YType::uint16, "reinstall"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::~Maximum()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::has_data() const
{
    if (is_presence_container) return true;
    return routes.is_set
	|| threshold.is_set
	|| reinstall.is_set
	|| warning_only.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routes.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(reinstall.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routes.is_set || is_set(routes.yfilter)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (reinstall.is_set || is_set(reinstall.yfilter)) leaf_name_data.push_back(reinstall.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routes")
    {
        routes = value;
        routes.value_namespace = name_space;
        routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reinstall")
    {
        reinstall = value;
        reinstall.value_namespace = name_space;
        reinstall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routes")
    {
        routes.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "reinstall")
    {
        reinstall.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "threshold" || name == "reinstall" || name == "warning-only")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Mdt()
    :
    log_reuse{YType::empty, "log-reuse"},
    mtu{YType::uint16, "mtu"},
    preference{YType::enumeration, "preference"}
        ,
    default_(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default>())
    , auto_discovery(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery>())
    , data(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data>())
    , overlay(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay>())
{
    default_->parent = this;
    auto_discovery->parent = this;
    data->parent = this;
    overlay->parent = this;

    yang_name = "mdt"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::~Mdt()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : preference.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return log_reuse.is_set
	|| mtu.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (auto_discovery !=  nullptr && auto_discovery->has_data())
	|| (data !=  nullptr && data->has_data())
	|| (overlay !=  nullptr && overlay->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::has_operation() const
{
    for (auto const & leaf : preference.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(log_reuse.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (auto_discovery !=  nullptr && auto_discovery->has_operation())
	|| (data !=  nullptr && data->has_operation())
	|| (overlay !=  nullptr && overlay->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_reuse.is_set || is_set(log_reuse.yfilter)) leaf_name_data.push_back(log_reuse.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    auto preference_name_datas = preference.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), preference_name_datas.begin(), preference_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default>();
        }
        return default_;
    }

    if(child_yang_name == "auto-discovery")
    {
        if(auto_discovery == nullptr)
        {
            auto_discovery = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery>();
        }
        return auto_discovery;
    }

    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data>();
        }
        return data;
    }

    if(child_yang_name == "overlay")
    {
        if(overlay == nullptr)
        {
            overlay = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay>();
        }
        return overlay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(auto_discovery != nullptr)
    {
        _children["auto-discovery"] = auto_discovery;
    }

    if(data != nullptr)
    {
        _children["data"] = data;
    }

    if(overlay != nullptr)
    {
        _children["overlay"] = overlay;
    }

    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-reuse")
    {
        log_reuse = value;
        log_reuse.value_namespace = name_space;
        log_reuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference.append(value);
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-reuse")
    {
        log_reuse.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "auto-discovery" || name == "data" || name == "overlay" || name == "log-reuse" || name == "mtu" || name == "preference")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Default()
    :
    address{YType::str, "address"}
        ,
    mpls(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls>())
{
    mpls->parent = this;

    yang_name = "default"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::~Default()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "address")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls::Mpls()
    :
    mldp{YType::str, "mldp"}
{

    yang_name = "mpls"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls::~Mpls()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return mldp.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mldp.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mldp.is_set || is_set(mldp.yfilter)) leaf_name_data.push_back(mldp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mldp")
    {
        mldp = value;
        mldp.value_namespace = name_space;
        mldp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mldp")
    {
        mldp.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mldp")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::AutoDiscovery()
    :
    pim{YType::empty, "pim"}
{

    yang_name = "auto-discovery"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::~AutoDiscovery()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return pim.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim.is_set || is_set(pim.yfilter)) leaf_name_data.push_back(pim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim")
    {
        pim = value;
        pim.value_namespace = name_space;
        pim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim")
    {
        pim.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pim")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Data()
    :
    list{YType::str, "list"},
    threshold{YType::uint32, "threshold"}
        ,
    multicast(this, {"address", "wildcard"})
{

    yang_name = "data"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::~Data()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multicast.len(); index++)
    {
        if(multicast[index]->has_data())
            return true;
    }
    return list.is_set
	|| threshold.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::has_operation() const
{
    for (std::size_t index=0; index<multicast.len(); index++)
    {
        if(multicast[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        auto ent_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast>();
        ent_->parent = this;
        multicast.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : multicast.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "list" || name == "threshold")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::Multicast()
    :
    address{YType::str, "address"},
    wildcard{YType::str, "wildcard"}
{

    yang_name = "multicast"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::~Multicast()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| wildcard.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(wildcard.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(wildcard, "wildcard");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.yfilter)) leaf_name_data.push_back(wildcard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
        wildcard.value_namespace = name_space;
        wildcard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "wildcard")
    {
        wildcard.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "wildcard")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::Overlay()
    :
    use_bgp{YType::empty, "use-bgp"}
{

    yang_name = "overlay"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::~Overlay()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::has_data() const
{
    if (is_presence_container) return true;
    return use_bgp.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_bgp.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overlay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_bgp.is_set || is_set(use_bgp.yfilter)) leaf_name_data.push_back(use_bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-bgp")
    {
        use_bgp = value;
        use_bgp.value_namespace = name_space;
        use_bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-bgp")
    {
        use_bgp.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "use-bgp")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::RouteTarget()
    :
    export_(this, {"asn_ip"})
    , import(this, {"asn_ip"})
{

    yang_name = "route-target"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<export_.len(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.len(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.len(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.len(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        auto ent_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export>();
        ent_->parent = this;
        export_.append(ent_);
        return ent_;
    }

    if(child_yang_name == "import")
    {
        auto ent_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import>();
        ent_->parent = this;
        import.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : export_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : import.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export::Export()
    :
    asn_ip{YType::str, "asn-ip"},
    stitching{YType::empty, "stitching"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export::~Export()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export::has_data() const
{
    if (is_presence_container) return true;
    return asn_ip.is_set
	|| stitching.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    ADD_KEY_TOKEN(asn_ip, "asn-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip" || name == "stitching")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"},
    stitching{YType::empty, "stitching"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::has_data() const
{
    if (is_presence_container) return true;
    return asn_ip.is_set
	|| stitching.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    ADD_KEY_TOKEN(asn_ip, "asn-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip" || name == "stitching")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::Bgp()
    :
    next_hop(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::~Bgp()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::NextHop()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "next-hop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::~NextHop()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return loopback.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv4::Import::Import()
    :
    map{YType::str, "map"}
{

    yang_name = "import"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv4::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Import::has_data() const
{
    if (is_presence_container) return true;
    return map.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv4::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv4::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv4::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Ipv6()
    :
    mdt(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Mdt>())
    , route_target(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget>())
    , bgp(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp>())
    , import(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Import>())
{
    mdt->parent = this;
    route_target->parent = this;
    bgp->parent = this;
    import->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::~Ipv6()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (mdt !=  nullptr && mdt->has_data())
	|| (route_target !=  nullptr && route_target->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (mdt !=  nullptr && mdt->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdt")
    {
        if(mdt == nullptr)
        {
            mdt = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Mdt>();
        }
        return mdt;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget>();
        }
        return route_target;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mdt != nullptr)
    {
        _children["mdt"] = mdt;
    }

    if(route_target != nullptr)
    {
        _children["route-target"] = route_target;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdt" || name == "route-target" || name == "bgp" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::Mdt()
    :
    mtu{YType::uint16, "mtu"}
{

    yang_name = "mdt"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::~Mdt()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::has_data() const
{
    if (is_presence_container) return true;
    return mtu.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::RouteTarget()
    :
    export_(this, {"asn_ip"})
    , import(this, {"asn_ip"})
{

    yang_name = "route-target"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<export_.len(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.len(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.len(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.len(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        auto ent_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export>();
        ent_->parent = this;
        export_.append(ent_);
        return ent_;
    }

    if(child_yang_name == "import")
    {
        auto ent_ = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import>();
        ent_->parent = this;
        import.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : export_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : import.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export::Export()
    :
    asn_ip{YType::str, "asn-ip"},
    stitching{YType::empty, "stitching"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export::~Export()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export::has_data() const
{
    if (is_presence_container) return true;
    return asn_ip.is_set
	|| stitching.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    ADD_KEY_TOKEN(asn_ip, "asn-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip" || name == "stitching")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"},
    stitching{YType::empty, "stitching"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::has_data() const
{
    if (is_presence_container) return true;
    return asn_ip.is_set
	|| stitching.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    ADD_KEY_TOKEN(asn_ip, "asn-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip" || name == "stitching")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::Bgp()
    :
    next_hop(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::~Bgp()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::NextHop()
    :
    ipv4(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4>())
    , ipv6(std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "next-hop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::~NextHop()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::Ipv4()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "ipv4"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::~Ipv4()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return loopback.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::Ipv6_()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "ipv6"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::~Ipv6_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::has_data() const
{
    if (is_presence_container) return true;
    return loopback.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Import::Import()
    :
    map{YType::str, "map"}
{

    yang_name = "import"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::AddressFamily::Ipv6::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Import::has_data() const
{
    if (is_presence_container) return true;
    return map.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Vrf::Definition::RouteTarget::RouteTarget()
    :
    export_(this, {"asn_ip"})
    , import(this, {"asn_ip"})
{

    yang_name = "route-target"; yang_parent_name = "definition"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::RouteTarget::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<export_.len(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.len(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.len(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.len(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::Definition::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        auto ent_ = std::make_shared<Native::Vrf::Definition::RouteTarget::Export>();
        ent_->parent = this;
        export_.append(ent_);
        return ent_;
    }

    if(child_yang_name == "import")
    {
        auto ent_ = std::make_shared<Native::Vrf::Definition::RouteTarget::Import>();
        ent_->parent = this;
        import.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : export_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : import.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Vrf::Definition::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::RouteTarget::Export::Export()
    :
    asn_ip{YType::str, "asn-ip"},
    stitching{YType::empty, "stitching"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::RouteTarget::Export::~Export()
{
}

bool Native::Vrf::Definition::RouteTarget::Export::has_data() const
{
    if (is_presence_container) return true;
    return asn_ip.is_set
	|| stitching.is_set;
}

bool Native::Vrf::Definition::RouteTarget::Export::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Native::Vrf::Definition::RouteTarget::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    ADD_KEY_TOKEN(asn_ip, "asn-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::RouteTarget::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::RouteTarget::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::RouteTarget::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::RouteTarget::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::RouteTarget::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::RouteTarget::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip" || name == "stitching")
        return true;
    return false;
}

Native::Vrf::Definition::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"},
    stitching{YType::empty, "stitching"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::RouteTarget::Import::has_data() const
{
    if (is_presence_container) return true;
    return asn_ip.is_set
	|| stitching.is_set;
}

bool Native::Vrf::Definition::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Native::Vrf::Definition::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    ADD_KEY_TOKEN(asn_ip, "asn-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip" || name == "stitching")
        return true;
    return false;
}

Native::Vrf::Definition::Vpn::Vpn()
    :
    id{YType::str, "id"}
{

    yang_name = "vpn"; yang_parent_name = "definition"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Vrf::Definition::Vpn::~Vpn()
{
}

bool Native::Vrf::Definition::Vpn::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Native::Vrf::Definition::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Vrf::Definition::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vrf::Definition::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vrf::Definition::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vrf::Definition::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Rmon::Rmon()
    :
    alarm(this, {"number"})
    , event(this, {"number"})
{

    yang_name = "rmon"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Rmon::~Rmon()
{
}

bool Native::Rmon::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm.len(); index++)
    {
        if(alarm[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Rmon::has_operation() const
{
    for (std::size_t index=0; index<alarm.len(); index++)
    {
        if(alarm[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Rmon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Rmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm")
    {
        auto ent_ = std::make_shared<Native::Rmon::Alarm>();
        ent_->parent = this;
        alarm.append(ent_);
        return ent_;
    }

    if(child_yang_name == "event")
    {
        auto ent_ = std::make_shared<Native::Rmon::Event>();
        ent_->parent = this;
        event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Rmon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alarm.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Rmon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Rmon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Rmon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm" || name == "event")
        return true;
    return false;
}

Native::Rmon::Alarm::Alarm()
    :
    number{YType::uint16, "number"},
    mib_object{YType::str, "mib-object"},
    sample_interval{YType::uint32, "sample-interval"},
    test_mode{YType::enumeration, "test-mode"},
    rising_threshold{YType::int32, "rising-threshold"},
    rising_event{YType::uint16, "rising-event"},
    falling_threshold{YType::int32, "falling-threshold"},
    falling_event{YType::uint16, "falling-event"},
    owner{YType::str, "owner"}
{

    yang_name = "alarm"; yang_parent_name = "rmon"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Rmon::Alarm::~Alarm()
{
}

bool Native::Rmon::Alarm::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| mib_object.is_set
	|| sample_interval.is_set
	|| test_mode.is_set
	|| rising_threshold.is_set
	|| rising_event.is_set
	|| falling_threshold.is_set
	|| falling_event.is_set
	|| owner.is_set;
}

bool Native::Rmon::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mib_object.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(test_mode.yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(rising_event.yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(falling_event.yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Native::Rmon::Alarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/rmon/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rmon::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mib_object.is_set || is_set(mib_object.yfilter)) leaf_name_data.push_back(mib_object.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.yfilter)) leaf_name_data.push_back(test_mode.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (rising_event.is_set || is_set(rising_event.yfilter)) leaf_name_data.push_back(rising_event.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (falling_event.is_set || is_set(falling_event.yfilter)) leaf_name_data.push_back(falling_event.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Rmon::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Rmon::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Rmon::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-object")
    {
        mib_object = value;
        mib_object.value_namespace = name_space;
        mib_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
        test_mode.value_namespace = name_space;
        test_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-event")
    {
        rising_event = value;
        rising_event.value_namespace = name_space;
        rising_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-event")
    {
        falling_event = value;
        falling_event.value_namespace = name_space;
        falling_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rmon::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mib-object")
    {
        mib_object.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "test-mode")
    {
        test_mode.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-event")
    {
        rising_event.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-event")
    {
        falling_event.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Native::Rmon::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mib-object" || name == "sample-interval" || name == "test-mode" || name == "rising-threshold" || name == "rising-event" || name == "falling-threshold" || name == "falling-event" || name == "owner")
        return true;
    return false;
}

Native::Rmon::Event::Event()
    :
    number{YType::uint16, "number"}
        ,
    log(nullptr) // presence node
{

    yang_name = "event"; yang_parent_name = "rmon"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Rmon::Event::~Event()
{
}

bool Native::Rmon::Event::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (log !=  nullptr && log->has_data());
}

bool Native::Rmon::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Rmon::Event::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/rmon/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Rmon::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Rmon::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Rmon::Event::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Rmon::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log != nullptr)
    {
        _children["log"] = log;
    }

    return _children;
}

void Native::Rmon::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rmon::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Rmon::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log" || name == "number")
        return true;
    return false;
}

Native::Rmon::Event::Log::Log()
    :
    trap{YType::str, "trap"},
    description{YType::str, "description"},
    owner{YType::str, "owner"}
{

    yang_name = "log"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Rmon::Event::Log::~Log()
{
}

bool Native::Rmon::Event::Log::has_data() const
{
    if (is_presence_container) return true;
    return trap.is_set
	|| description.is_set
	|| owner.is_set;
}

bool Native::Rmon::Event::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Native::Rmon::Event::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Rmon::Event::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Rmon::Event::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Rmon::Event::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Rmon::Event::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rmon::Event::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Native::Rmon::Event::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap" || name == "description" || name == "owner")
        return true;
    return false;
}

Native::Sampler::Sampler()
    :
    name{YType::str, "name"},
    description{YType::str, "Cisco-IOS-XE-flow:description"}
        ,
    mode(std::make_shared<Native::Sampler::Mode>())
    , granularity(std::make_shared<Native::Sampler::Granularity>())
{
    mode->parent = this;
    granularity->parent = this;

    yang_name = "sampler"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Sampler::~Sampler()
{
}

bool Native::Sampler::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (granularity !=  nullptr && granularity->has_data());
}

bool Native::Sampler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (granularity !=  nullptr && granularity->has_operation());
}

std::string Native::Sampler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-flow:mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Sampler::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "Cisco-IOS-XE-flow:granularity")
    {
        if(granularity == nullptr)
        {
            granularity = std::make_shared<Native::Sampler::Granularity>();
        }
        return granularity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["Cisco-IOS-XE-flow:mode"] = mode;
    }

    if(granularity != nullptr)
    {
        _children["Cisco-IOS-XE-flow:granularity"] = granularity;
    }

    return _children;
}

void Native::Sampler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-flow:description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Sampler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "granularity" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Sampler::Mode::Mode()
    :
    deterministic(std::make_shared<Native::Sampler::Mode::Deterministic>())
    , hash(std::make_shared<Native::Sampler::Mode::Hash>())
    , random(std::make_shared<Native::Sampler::Mode::Random>())
{
    deterministic->parent = this;
    hash->parent = this;
    random->parent = this;

    yang_name = "mode"; yang_parent_name = "sampler"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Sampler::Mode::~Mode()
{
}

bool Native::Sampler::Mode::has_data() const
{
    if (is_presence_container) return true;
    return (deterministic !=  nullptr && deterministic->has_data())
	|| (hash !=  nullptr && hash->has_data())
	|| (random !=  nullptr && random->has_data());
}

bool Native::Sampler::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (deterministic !=  nullptr && deterministic->has_operation())
	|| (hash !=  nullptr && hash->has_operation())
	|| (random !=  nullptr && random->has_operation());
}

std::string Native::Sampler::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Sampler::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deterministic")
    {
        if(deterministic == nullptr)
        {
            deterministic = std::make_shared<Native::Sampler::Mode::Deterministic>();
        }
        return deterministic;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Sampler::Mode::Hash>();
        }
        return hash;
    }

    if(child_yang_name == "random")
    {
        if(random == nullptr)
        {
            random = std::make_shared<Native::Sampler::Mode::Random>();
        }
        return random;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Sampler::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(deterministic != nullptr)
    {
        _children["deterministic"] = deterministic;
    }

    if(hash != nullptr)
    {
        _children["hash"] = hash;
    }

    if(random != nullptr)
    {
        _children["random"] = random;
    }

    return _children;
}

void Native::Sampler::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Sampler::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Sampler::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deterministic" || name == "hash" || name == "random")
        return true;
    return false;
}

Native::Sampler::Mode::Deterministic::Deterministic()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{

    yang_name = "deterministic"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Sampler::Mode::Deterministic::~Deterministic()
{
}

bool Native::Sampler::Mode::Deterministic::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Deterministic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(out_of.yfilter);
}

std::string Native::Sampler::Mode::Deterministic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deterministic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::Deterministic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.yfilter)) leaf_name_data.push_back(out_of.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Sampler::Mode::Deterministic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Sampler::Mode::Deterministic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Sampler::Mode::Deterministic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of")
    {
        out_of = value;
        out_of.value_namespace = name_space;
        out_of.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Mode::Deterministic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "out-of")
    {
        out_of.yfilter = yfilter;
    }
}

bool Native::Sampler::Mode::Deterministic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "out-of")
        return true;
    return false;
}

Native::Sampler::Mode::Hash::Hash()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{

    yang_name = "hash"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Sampler::Mode::Hash::~Hash()
{
}

bool Native::Sampler::Mode::Hash::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Hash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(out_of.yfilter);
}

std::string Native::Sampler::Mode::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::Hash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.yfilter)) leaf_name_data.push_back(out_of.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Sampler::Mode::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Sampler::Mode::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Sampler::Mode::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of")
    {
        out_of = value;
        out_of.value_namespace = name_space;
        out_of.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Mode::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "out-of")
    {
        out_of.yfilter = yfilter;
    }
}

bool Native::Sampler::Mode::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "out-of")
        return true;
    return false;
}

Native::Sampler::Mode::Random::Random()
    :
    number{YType::uint8, "number"},
    out_of{YType::uint16, "out-of"}
{

    yang_name = "random"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Sampler::Mode::Random::~Random()
{
}

bool Native::Sampler::Mode::Random::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| out_of.is_set;
}

bool Native::Sampler::Mode::Random::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(out_of.yfilter);
}

std::string Native::Sampler::Mode::Random::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "random";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Mode::Random::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (out_of.is_set || is_set(out_of.yfilter)) leaf_name_data.push_back(out_of.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Sampler::Mode::Random::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Sampler::Mode::Random::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Sampler::Mode::Random::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of")
    {
        out_of = value;
        out_of.value_namespace = name_space;
        out_of.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Mode::Random::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "out-of")
    {
        out_of.yfilter = yfilter;
    }
}

bool Native::Sampler::Mode::Random::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "out-of")
        return true;
    return false;
}

Native::Sampler::Granularity::Granularity()
    :
    connection{YType::empty, "connection"},
    packet{YType::empty, "packet"}
{

    yang_name = "granularity"; yang_parent_name = "sampler"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Sampler::Granularity::~Granularity()
{
}

bool Native::Sampler::Granularity::has_data() const
{
    if (is_presence_container) return true;
    return connection.is_set
	|| packet.is_set;
}

bool Native::Sampler::Granularity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection.yfilter)
	|| ydk::is_set(packet.yfilter);
}

std::string Native::Sampler::Granularity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:granularity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sampler::Granularity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection.is_set || is_set(connection.yfilter)) leaf_name_data.push_back(connection.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Sampler::Granularity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Sampler::Granularity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Sampler::Granularity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection")
    {
        connection = value;
        connection.value_namespace = name_space;
        connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sampler::Granularity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection")
    {
        connection.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
}

bool Native::Sampler::Granularity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection" || name == "packet")
        return true;
    return false;
}

Native::Flow::Flow()
    :
    record(this, {"name"})
    , exporter(this, {"name"})
    , monitor(this, {"name"})
{

    yang_name = "flow"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Flow::~Flow()
{
}

bool Native::Flow::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<record.len(); index++)
    {
        if(record[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<exporter.len(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Flow::has_operation() const
{
    for (std::size_t index=0; index<record.len(); index++)
    {
        if(record[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<exporter.len(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Flow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-flow:record")
    {
        auto ent_ = std::make_shared<Native::Flow::Record>();
        ent_->parent = this;
        record.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-flow:exporter")
    {
        auto ent_ = std::make_shared<Native::Flow::Exporter>();
        ent_->parent = this;
        exporter.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-flow:monitor")
    {
        auto ent_ = std::make_shared<Native::Flow::Monitor>();
        ent_->parent = this;
        monitor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : record.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : exporter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : monitor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "record" || name == "exporter" || name == "monitor")
        return true;
    return false;
}

Native::Flow::Record::Record()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    description{YType::str, "description"}
        ,
    collect(std::make_shared<Native::Flow::Record::Collect>())
    , default_(std::make_shared<Native::Flow::Record::Default>())
    , match(std::make_shared<Native::Flow::Record::Match>())
{
    collect->parent = this;
    default_->parent = this;
    match->parent = this;

    yang_name = "record"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Flow::Record::~Record()
{
}

bool Native::Flow::Record::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| description.is_set
	|| (collect !=  nullptr && collect->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::Flow::Record::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (collect !=  nullptr && collect->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Flow::Record::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/flow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Flow::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:record";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collect")
    {
        if(collect == nullptr)
        {
            collect = std::make_shared<Native::Flow::Record::Collect>();
        }
        return collect;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Flow::Record::Default>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Flow::Record::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(collect != nullptr)
    {
        _children["collect"] = collect;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::Flow::Record::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Flow::Record::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collect" || name == "default" || name == "match" || name == "name" || name == "type" || name == "description")
        return true;
    return false;
}

Native::Flow::Record::Collect::Collect()
    :
    application(std::make_shared<Native::Flow::Record::Collect::Application>())
    , connection(std::make_shared<Native::Flow::Record::Collect::Connection>())
    , counter(std::make_shared<Native::Flow::Record::Collect::Counter>())
    , datalink(std::make_shared<Native::Flow::Record::Collect::Datalink>())
    , flow(std::make_shared<Native::Flow::Record::Collect::Flow_>())
    , interface(std::make_shared<Native::Flow::Record::Collect::Interface>())
    , ipv4(std::make_shared<Native::Flow::Record::Collect::Ipv4>())
    , ipv6(std::make_shared<Native::Flow::Record::Collect::Ipv6>())
    , metadata(std::make_shared<Native::Flow::Record::Collect::Metadata>())
    , monitor(std::make_shared<Native::Flow::Record::Collect::Monitor>())
    , mpls(std::make_shared<Native::Flow::Record::Collect::Mpls>())
    , network(std::make_shared<Native::Flow::Record::Collect::Network>())
    , pfr(std::make_shared<Native::Flow::Record::Collect::Pfr>())
    , policy(std::make_shared<Native::Flow::Record::Collect::Policy>())
    , routing(std::make_shared<Native::Flow::Record::Collect::Routing>())
    , services(std::make_shared<Native::Flow::Record::Collect::Services>())
    , timestamp(std::make_shared<Native::Flow::Record::Collect::Timestamp>())
    , transport(std::make_shared<Native::Flow::Record::Collect::Transport>())
{
    application->parent = this;
    connection->parent = this;
    counter->parent = this;
    datalink->parent = this;
    flow->parent = this;
    interface->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    metadata->parent = this;
    monitor->parent = this;
    mpls->parent = this;
    network->parent = this;
    pfr->parent = this;
    policy->parent = this;
    routing->parent = this;
    services->parent = this;
    timestamp->parent = this;
    transport->parent = this;

    yang_name = "collect"; yang_parent_name = "record"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::~Collect()
{
}

bool Native::Flow::Record::Collect::has_data() const
{
    if (is_presence_container) return true;
    return (application !=  nullptr && application->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (counter !=  nullptr && counter->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metadata !=  nullptr && metadata->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (routing !=  nullptr && routing->has_data())
	|| (services !=  nullptr && services->has_data())
	|| (timestamp !=  nullptr && timestamp->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::has_operation() const
{
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (connection !=  nullptr && connection->has_operation())
	|| (counter !=  nullptr && counter->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metadata !=  nullptr && metadata->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (routing !=  nullptr && routing->has_operation())
	|| (services !=  nullptr && services->has_operation())
	|| (timestamp !=  nullptr && timestamp->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Flow::Record::Collect::Application>();
        }
        return application;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<Native::Flow::Record::Collect::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Flow::Record::Collect::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Collect::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Flow::Record::Collect::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metadata")
    {
        if(metadata == nullptr)
        {
            metadata = std::make_shared<Native::Flow::Record::Collect::Metadata>();
        }
        return metadata;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Flow::Record::Collect::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Flow::Record::Collect::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Network>();
        }
        return network;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::Flow::Record::Collect::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Flow::Record::Collect::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<Native::Flow::Record::Collect::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<Native::Flow::Record::Collect::Services>();
        }
        return services;
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Native::Flow::Record::Collect::Timestamp>();
        }
        return timestamp;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application != nullptr)
    {
        _children["application"] = application;
    }

    if(connection != nullptr)
    {
        _children["connection"] = connection;
    }

    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(datalink != nullptr)
    {
        _children["datalink"] = datalink;
    }

    if(flow != nullptr)
    {
        _children["flow"] = flow;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(metadata != nullptr)
    {
        _children["metadata"] = metadata;
    }

    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(pfr != nullptr)
    {
        _children["pfr"] = pfr;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(routing != nullptr)
    {
        _children["routing"] = routing;
    }

    if(services != nullptr)
    {
        _children["services"] = services;
    }

    if(timestamp != nullptr)
    {
        _children["timestamp"] = timestamp;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Collect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "connection" || name == "counter" || name == "datalink" || name == "flow" || name == "interface" || name == "ipv4" || name == "ipv6" || name == "metadata" || name == "monitor" || name == "mpls" || name == "network" || name == "pfr" || name == "policy" || name == "routing" || name == "services" || name == "timestamp" || name == "transport")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Application()
    :
    vendor{YType::empty, "vendor"},
    version{YType::empty, "version"}
        ,
    dns(std::make_shared<Native::Flow::Record::Collect::Application::Dns>())
    , http(std::make_shared<Native::Flow::Record::Collect::Application::Http>())
    , media(std::make_shared<Native::Flow::Record::Collect::Application::Media>())
    , name(nullptr) // presence node
    , nntp(std::make_shared<Native::Flow::Record::Collect::Application::Nntp>())
    , pop3(std::make_shared<Native::Flow::Record::Collect::Application::Pop3>())
    , rtmp(std::make_shared<Native::Flow::Record::Collect::Application::Rtmp>())
    , rtsp(std::make_shared<Native::Flow::Record::Collect::Application::Rtsp>())
    , sip(std::make_shared<Native::Flow::Record::Collect::Application::Sip>())
    , smtp(std::make_shared<Native::Flow::Record::Collect::Application::Smtp>())
    , ssl(std::make_shared<Native::Flow::Record::Collect::Application::Ssl>())
{
    dns->parent = this;
    http->parent = this;
    media->parent = this;
    nntp->parent = this;
    pop3->parent = this;
    rtmp->parent = this;
    rtsp->parent = this;
    sip->parent = this;
    smtp->parent = this;
    ssl->parent = this;

    yang_name = "application"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::~Application()
{
}

bool Native::Flow::Record::Collect::Application::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| version.is_set
	|| (dns !=  nullptr && dns->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (media !=  nullptr && media->has_data())
	|| (name !=  nullptr && name->has_data())
	|| (nntp !=  nullptr && nntp->has_data())
	|| (pop3 !=  nullptr && pop3->has_data())
	|| (rtmp !=  nullptr && rtmp->has_data())
	|| (rtsp !=  nullptr && rtsp->has_data())
	|| (sip !=  nullptr && sip->has_data())
	|| (smtp !=  nullptr && smtp->has_data())
	|| (ssl !=  nullptr && ssl->has_data());
}

bool Native::Flow::Record::Collect::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (dns !=  nullptr && dns->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (media !=  nullptr && media->has_operation())
	|| (name !=  nullptr && name->has_operation())
	|| (nntp !=  nullptr && nntp->has_operation())
	|| (pop3 !=  nullptr && pop3->has_operation())
	|| (rtmp !=  nullptr && rtmp->has_operation())
	|| (rtsp !=  nullptr && rtsp->has_operation())
	|| (sip !=  nullptr && sip->has_operation())
	|| (smtp !=  nullptr && smtp->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation());
}

std::string Native::Flow::Record::Collect::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Flow::Record::Collect::Application::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Flow::Record::Collect::Application::Http>();
        }
        return http;
    }

    if(child_yang_name == "media")
    {
        if(media == nullptr)
        {
            media = std::make_shared<Native::Flow::Record::Collect::Application::Media>();
        }
        return media;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Flow::Record::Collect::Application::Name>();
        }
        return name;
    }

    if(child_yang_name == "nntp")
    {
        if(nntp == nullptr)
        {
            nntp = std::make_shared<Native::Flow::Record::Collect::Application::Nntp>();
        }
        return nntp;
    }

    if(child_yang_name == "pop3")
    {
        if(pop3 == nullptr)
        {
            pop3 = std::make_shared<Native::Flow::Record::Collect::Application::Pop3>();
        }
        return pop3;
    }

    if(child_yang_name == "rtmp")
    {
        if(rtmp == nullptr)
        {
            rtmp = std::make_shared<Native::Flow::Record::Collect::Application::Rtmp>();
        }
        return rtmp;
    }

    if(child_yang_name == "rtsp")
    {
        if(rtsp == nullptr)
        {
            rtsp = std::make_shared<Native::Flow::Record::Collect::Application::Rtsp>();
        }
        return rtsp;
    }

    if(child_yang_name == "sip")
    {
        if(sip == nullptr)
        {
            sip = std::make_shared<Native::Flow::Record::Collect::Application::Sip>();
        }
        return sip;
    }

    if(child_yang_name == "smtp")
    {
        if(smtp == nullptr)
        {
            smtp = std::make_shared<Native::Flow::Record::Collect::Application::Smtp>();
        }
        return smtp;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Flow::Record::Collect::Application::Ssl>();
        }
        return ssl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dns != nullptr)
    {
        _children["dns"] = dns;
    }

    if(http != nullptr)
    {
        _children["http"] = http;
    }

    if(media != nullptr)
    {
        _children["media"] = media;
    }

    if(name != nullptr)
    {
        _children["name"] = name;
    }

    if(nntp != nullptr)
    {
        _children["nntp"] = nntp;
    }

    if(pop3 != nullptr)
    {
        _children["pop3"] = pop3;
    }

    if(rtmp != nullptr)
    {
        _children["rtmp"] = rtmp;
    }

    if(rtsp != nullptr)
    {
        _children["rtsp"] = rtsp;
    }

    if(sip != nullptr)
    {
        _children["sip"] = sip;
    }

    if(smtp != nullptr)
    {
        _children["smtp"] = smtp;
    }

    if(ssl != nullptr)
    {
        _children["ssl"] = ssl;
    }

    return _children;
}

void Native::Flow::Record::Collect::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns" || name == "http" || name == "media" || name == "name" || name == "nntp" || name == "pop3" || name == "rtmp" || name == "rtsp" || name == "sip" || name == "smtp" || name == "ssl" || name == "vendor" || name == "version")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Dns::Dns()
    :
    domain_name{YType::empty, "domain-name"}
{

    yang_name = "dns"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Dns::~Dns()
{
}

bool Native::Flow::Record::Collect::Application::Dns::has_data() const
{
    if (is_presence_container) return true;
    return domain_name.is_set;
}

bool Native::Flow::Record::Collect::Application::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Http::Http()
    :
    host{YType::empty, "host"},
    referer{YType::empty, "referer"},
    url{YType::empty, "url"},
    user_agent{YType::empty, "user-agent"}
        ,
    uri(std::make_shared<Native::Flow::Record::Collect::Application::Http::Uri>())
{
    uri->parent = this;

    yang_name = "http"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Http::~Http()
{
}

bool Native::Flow::Record::Collect::Application::Http::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| referer.is_set
	|| url.is_set
	|| user_agent.is_set
	|| (uri !=  nullptr && uri->has_data());
}

bool Native::Flow::Record::Collect::Application::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(referer.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(user_agent.yfilter)
	|| (uri !=  nullptr && uri->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (referer.is_set || is_set(referer.yfilter)) leaf_name_data.push_back(referer.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (user_agent.is_set || is_set(user_agent.yfilter)) leaf_name_data.push_back(user_agent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uri")
    {
        if(uri == nullptr)
        {
            uri = std::make_shared<Native::Flow::Record::Collect::Application::Http::Uri>();
        }
        return uri;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(uri != nullptr)
    {
        _children["uri"] = uri;
    }

    return _children;
}

void Native::Flow::Record::Collect::Application::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referer")
    {
        referer = value;
        referer.value_namespace = name_space;
        referer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-agent")
    {
        user_agent = value;
        user_agent.value_namespace = name_space;
        user_agent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "referer")
    {
        referer.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "user-agent")
    {
        user_agent.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uri" || name == "host" || name == "referer" || name == "url" || name == "user-agent")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Http::Uri::Uri()
    :
    statistics{YType::empty, "statistics"}
{

    yang_name = "uri"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Http::Uri::~Uri()
{
}

bool Native::Flow::Record::Collect::Application::Http::Uri::has_data() const
{
    if (is_presence_container) return true;
    return statistics.is_set;
}

bool Native::Flow::Record::Collect::Application::Http::Uri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistics.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Http::Uri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Http::Uri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Http::Uri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Http::Uri::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Http::Uri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Http::Uri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Http::Uri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Media()
    :
    event{YType::empty, "event"}
        ,
    bytes(std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes>())
    , packets(std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "media"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Media::~Media()
{
}

bool Native::Flow::Record::Collect::Application::Media::has_data() const
{
    if (is_presence_container) return true;
    return event.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Media::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Media::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bytes != nullptr)
    {
        _children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        _children["packets"] = packets;
    }

    return _children;
}

void Native::Flow::Record::Collect::Application::Media::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "event")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Bytes()
    :
    counter(nullptr) // presence node
    , rate(nullptr) // presence node
{

    yang_name = "bytes"; yang_parent_name = "media"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Media::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::has_data() const
{
    if (is_presence_container) return true;
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Media::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        _children["rate"] = rate;
    }

    return _children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Application::Media::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Counter::Counter()
    :
    long_{YType::empty, "long"}
{

    yang_name = "counter"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Counter::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::has_data() const
{
    if (is_presence_container) return true;
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(per_flow != nullptr)
    {
        _children["per-flow"] = per_flow;
    }

    return _children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-flow")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "per-flow"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Packets::Packets()
    :
    counter(nullptr) // presence node
    , rate(nullptr) // presence node
{

    yang_name = "packets"; yang_parent_name = "media"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Media::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::has_data() const
{
    if (is_presence_container) return true;
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Packets::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Media::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Media::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        _children["rate"] = rate;
    }

    return _children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Application::Media::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Packets::Counter::Counter()
    :
    long_{YType::empty, "long"}
{

    yang_name = "counter"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Collect::Application::Media::Packets::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Counter::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Media::Packets::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::Packets::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::Rate()
    :
    variation(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::has_data() const
{
    if (is_presence_container) return true;
    return (variation !=  nullptr && variation->has_data());
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (variation !=  nullptr && variation->has_operation());
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "variation")
    {
        if(variation == nullptr)
        {
            variation = std::make_shared<Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation>();
        }
        return variation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Media::Packets::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(variation != nullptr)
    {
        _children["variation"] = variation;
    }

    return _children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Application::Media::Packets::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "variation")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::Variation()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "variation"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::~Variation()
{
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Name::Name()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{

    yang_name = "name"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Collect::Application::Name::~Name()
{
}

bool Native::Flow::Record::Collect::Application::Name::has_data() const
{
    if (is_presence_container) return true;
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Collect::Application::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_on_resolution.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_on_resolution.is_set || is_set(account_on_resolution.yfilter)) leaf_name_data.push_back(account_on_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
        account_on_resolution.value_namespace = name_space;
        account_on_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-on-resolution")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Nntp::Nntp()
    :
    group_name{YType::empty, "group-name"}
{

    yang_name = "nntp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Nntp::~Nntp()
{
}

bool Native::Flow::Record::Collect::Application::Nntp::has_data() const
{
    if (is_presence_container) return true;
    return group_name.is_set;
}

bool Native::Flow::Record::Collect::Application::Nntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Nntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Nntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Nntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Nntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Nntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Nntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Nntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Pop3::Pop3()
    :
    server{YType::empty, "server"}
{

    yang_name = "pop3"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Pop3::~Pop3()
{
}

bool Native::Flow::Record::Collect::Application::Pop3::has_data() const
{
    if (is_presence_container) return true;
    return server.is_set;
}

bool Native::Flow::Record::Collect::Application::Pop3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Pop3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Pop3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Pop3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Pop3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Pop3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Pop3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Pop3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Rtmp::Rtmp()
    :
    pageurl{YType::empty, "pageUrl"}
{

    yang_name = "rtmp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Rtmp::~Rtmp()
{
}

bool Native::Flow::Record::Collect::Application::Rtmp::has_data() const
{
    if (is_presence_container) return true;
    return pageurl.is_set;
}

bool Native::Flow::Record::Collect::Application::Rtmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pageurl.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Rtmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Rtmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pageurl.is_set || is_set(pageurl.yfilter)) leaf_name_data.push_back(pageurl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Rtmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Rtmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Rtmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pageUrl")
    {
        pageurl = value;
        pageurl.value_namespace = name_space;
        pageurl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Rtmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pageUrl")
    {
        pageurl.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Rtmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pageUrl")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Rtsp::Rtsp()
    :
    host{YType::empty, "host"}
{

    yang_name = "rtsp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Rtsp::~Rtsp()
{
}

bool Native::Flow::Record::Collect::Application::Rtsp::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set;
}

bool Native::Flow::Record::Collect::Application::Rtsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Rtsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Rtsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Rtsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Rtsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Rtsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Rtsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Rtsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Sip::Sip()
    :
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "sip"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Sip::~Sip()
{
}

bool Native::Flow::Record::Collect::Application::Sip::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| source.is_set;
}

bool Native::Flow::Record::Collect::Application::Sip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Sip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Sip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Sip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Sip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Sip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Sip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Sip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Smtp::Smtp()
    :
    sender{YType::empty, "sender"},
    server{YType::empty, "server"}
{

    yang_name = "smtp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Smtp::~Smtp()
{
}

bool Native::Flow::Record::Collect::Application::Smtp::has_data() const
{
    if (is_presence_container) return true;
    return sender.is_set
	|| server.is_set;
}

bool Native::Flow::Record::Collect::Application::Smtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Smtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Smtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Smtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Smtp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Smtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Smtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Smtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender" || name == "server")
        return true;
    return false;
}

Native::Flow::Record::Collect::Application::Ssl::Ssl()
    :
    common_name{YType::empty, "common-name"}
{

    yang_name = "ssl"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Application::Ssl::~Ssl()
{
}

bool Native::Flow::Record::Collect::Application::Ssl::has_data() const
{
    if (is_presence_container) return true;
    return common_name.is_set;
}

bool Native::Flow::Record::Collect::Application::Ssl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_name.yfilter);
}

std::string Native::Flow::Record::Collect::Application::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Application::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_name.is_set || is_set(common_name.yfilter)) leaf_name_data.push_back(common_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Application::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Application::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Application::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-name")
    {
        common_name = value;
        common_name.value_namespace = name_space;
        common_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Application::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-name")
    {
        common_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Application::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-name")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Connection()
    :
    id{YType::empty, "id"},
    initiator{YType::empty, "initiator"},
    new_connections{YType::empty, "new-connections"},
    sum_duration{YType::empty, "sum-duration"},
    transaction_id{YType::empty, "transaction-id"}
        ,
    client(std::make_shared<Native::Flow::Record::Collect::Connection::Client>())
    , delay(std::make_shared<Native::Flow::Record::Collect::Connection::Delay>())
    , server(std::make_shared<Native::Flow::Record::Collect::Connection::Server>())
    , transaction(std::make_shared<Native::Flow::Record::Collect::Connection::Transaction>())
{
    client->parent = this;
    delay->parent = this;
    server->parent = this;
    transaction->parent = this;

    yang_name = "connection"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::~Connection()
{
}

bool Native::Flow::Record::Collect::Connection::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| initiator.is_set
	|| new_connections.is_set
	|| sum_duration.is_set
	|| transaction_id.is_set
	|| (client !=  nullptr && client->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (transaction !=  nullptr && transaction->has_data());
}

bool Native::Flow::Record::Collect::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(initiator.yfilter)
	|| ydk::is_set(new_connections.yfilter)
	|| ydk::is_set(sum_duration.yfilter)
	|| ydk::is_set(transaction_id.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (transaction !=  nullptr && transaction->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (initiator.is_set || is_set(initiator.yfilter)) leaf_name_data.push_back(initiator.get_name_leafdata());
    if (new_connections.is_set || is_set(new_connections.yfilter)) leaf_name_data.push_back(new_connections.get_name_leafdata());
    if (sum_duration.is_set || is_set(sum_duration.yfilter)) leaf_name_data.push_back(sum_duration.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.yfilter)) leaf_name_data.push_back(transaction_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Flow::Record::Collect::Connection::Client>();
        }
        return client;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Flow::Record::Collect::Connection::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Flow::Record::Collect::Connection::Server>();
        }
        return server;
    }

    if(child_yang_name == "transaction")
    {
        if(transaction == nullptr)
        {
            transaction = std::make_shared<Native::Flow::Record::Collect::Connection::Transaction>();
        }
        return transaction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    if(transaction != nullptr)
    {
        _children["transaction"] = transaction;
    }

    return _children;
}

void Native::Flow::Record::Collect::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initiator")
    {
        initiator = value;
        initiator.value_namespace = name_space;
        initiator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-connections")
    {
        new_connections = value;
        new_connections.value_namespace = name_space;
        new_connections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-duration")
    {
        sum_duration = value;
        sum_duration.value_namespace = name_space;
        sum_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
        transaction_id.value_namespace = name_space;
        transaction_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "initiator")
    {
        initiator.yfilter = yfilter;
    }
    if(value_path == "new-connections")
    {
        new_connections.yfilter = yfilter;
    }
    if(value_path == "sum-duration")
    {
        sum_duration.yfilter = yfilter;
    }
    if(value_path == "transaction-id")
    {
        transaction_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "delay" || name == "server" || name == "transaction" || name == "id" || name == "initiator" || name == "new-connections" || name == "sum-duration" || name == "transaction-id")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Client()
    :
    all{YType::empty, "all"}
        ,
    counter(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter>())
    , ipv4(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv4>())
    , ipv6(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv6>())
    , transport(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Transport>())
{
    counter->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    transport->parent = this;

    yang_name = "client"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Client::~Client()
{
}

bool Native::Flow::Record::Collect::Connection::Client::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Collect::Connection::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "ipv4" || name == "ipv6" || name == "transport" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Counter()
    :
    bytes(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes>())
    , packets(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "counter"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Client::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::has_data() const
{
    if (is_presence_container) return true;
    return (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::has_operation() const
{
    return is_set(yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Client::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bytes != nullptr)
    {
        _children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        _children["packets"] = packets;
    }

    return _children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Connection::Client::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
        ,
    network(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network>())
    , transport(std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport>())
{
    network->parent = this;
    transport->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| retransmitted.is_set
	|| (network !=  nullptr && network->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network>();
        }
        return network;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "transport" || name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::Network()
    :
    long_{YType::empty, "long"}
{

    yang_name = "network"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::~Network()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::Transport()
    :
    long_{YType::empty, "long"}
{

    yang_name = "transport"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Counter::Packets::Packets()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
{

    yang_name = "packets"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Client::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Packets::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| retransmitted.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Client::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Counter::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Counter::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Client::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Client::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Client::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Client::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Client::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Client::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Client::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Client::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Client::Transport::Transport()
    :
    port{YType::empty, "port"}
{

    yang_name = "transport"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Client::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Connection::Client::Transport::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set;
}

bool Native::Flow::Record::Collect::Connection::Client::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Client::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Client::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Client::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Client::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Client::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Client::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Client::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Delay()
    :
    all{YType::empty, "all"}
        ,
    application(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Application>())
    , network(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network>())
    , response(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response>())
{
    application->parent = this;
    network->parent = this;
    response->parent = this;

    yang_name = "delay"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::~Delay()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (application !=  nullptr && application->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Application>();
        }
        return application;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network>();
        }
        return network;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application != nullptr)
    {
        _children["application"] = application;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(response != nullptr)
    {
        _children["response"] = response;
    }

    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "network" || name == "response" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Application::Application()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "application"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Application::~Application()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Application::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::Network()
    :
    client_to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer>())
    , long_lived(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived>())
    , to_client(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToClient>())
    , to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToServer>())
{
    client_to_server->parent = this;
    long_lived->parent = this;
    to_client->parent = this;
    to_server->parent = this;

    yang_name = "network"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Network::~Network()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::has_data() const
{
    if (is_presence_container) return true;
    return (client_to_server !=  nullptr && client_to_server->has_data())
	|| (long_lived !=  nullptr && long_lived->has_data())
	|| (to_client !=  nullptr && to_client->has_data())
	|| (to_server !=  nullptr && to_server->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_server !=  nullptr && client_to_server->has_operation())
	|| (long_lived !=  nullptr && long_lived->has_operation())
	|| (to_client !=  nullptr && to_client->has_operation())
	|| (to_server !=  nullptr && to_server->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-server")
    {
        if(client_to_server == nullptr)
        {
            client_to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer>();
        }
        return client_to_server;
    }

    if(child_yang_name == "long-lived")
    {
        if(long_lived == nullptr)
        {
            long_lived = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived>();
        }
        return long_lived;
    }

    if(child_yang_name == "to-client")
    {
        if(to_client == nullptr)
        {
            to_client = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToClient>();
        }
        return to_client;
    }

    if(child_yang_name == "to-server")
    {
        if(to_server == nullptr)
        {
            to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::ToServer>();
        }
        return to_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_to_server != nullptr)
    {
        _children["client-to-server"] = client_to_server;
    }

    if(long_lived != nullptr)
    {
        _children["long-lived"] = long_lived;
    }

    if(to_client != nullptr)
    {
        _children["to-client"] = to_client;
    }

    if(to_server != nullptr)
    {
        _children["to-server"] = to_server;
    }

    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Connection::Delay::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-server" || name == "long-lived" || name == "to-client" || name == "to-server")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::ClientToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-server"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::~ClientToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::LongLived()
    :
    client_to_serve(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe>())
    , to_client(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient>())
    , to_serve(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe>())
{
    client_to_serve->parent = this;
    to_client->parent = this;
    to_serve->parent = this;

    yang_name = "long-lived"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::~LongLived()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::has_data() const
{
    if (is_presence_container) return true;
    return (client_to_serve !=  nullptr && client_to_serve->has_data())
	|| (to_client !=  nullptr && to_client->has_data())
	|| (to_serve !=  nullptr && to_serve->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_serve !=  nullptr && client_to_serve->has_operation())
	|| (to_client !=  nullptr && to_client->has_operation())
	|| (to_serve !=  nullptr && to_serve->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-lived";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-serve")
    {
        if(client_to_serve == nullptr)
        {
            client_to_serve = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe>();
        }
        return client_to_serve;
    }

    if(child_yang_name == "to-client")
    {
        if(to_client == nullptr)
        {
            to_client = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient>();
        }
        return to_client;
    }

    if(child_yang_name == "to-serve")
    {
        if(to_serve == nullptr)
        {
            to_serve = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe>();
        }
        return to_serve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_to_serve != nullptr)
    {
        _children["client-to-serve"] = client_to_serve;
    }

    if(to_client != nullptr)
    {
        _children["to-client"] = to_client;
    }

    if(to_serve != nullptr)
    {
        _children["to-serve"] = to_serve;
    }

    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-serve" || name == "to-client" || name == "to-serve")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::ClientToServe()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-serve"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::~ClientToServe()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_data() const
{
    if (is_presence_container) return true;
    return sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::ToClient()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "to-client"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::~ToClient()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::has_data() const
{
    if (is_presence_container) return true;
    return sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::ToServe()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "to-serve"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::~ToServe()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::has_data() const
{
    if (is_presence_container) return true;
    return sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::ToClient()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-client"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::~ToClient()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::ToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-server"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::~ToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Network::ToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Response::Response()
    :
    client_to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer>())
    , to_server(std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ToServer>())
{
    client_to_server->parent = this;
    to_server->parent = this;

    yang_name = "response"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Response::~Response()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::has_data() const
{
    if (is_presence_container) return true;
    return (client_to_server !=  nullptr && client_to_server->has_data())
	|| (to_server !=  nullptr && to_server->has_data());
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_server !=  nullptr && client_to_server->has_operation())
	|| (to_server !=  nullptr && to_server->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Delay::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Response::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-server")
    {
        if(client_to_server == nullptr)
        {
            client_to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer>();
        }
        return client_to_server;
    }

    if(child_yang_name == "to-server")
    {
        if(to_server == nullptr)
        {
            to_server = std::make_shared<Native::Flow::Record::Collect::Connection::Delay::Response::ToServer>();
        }
        return to_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_to_server != nullptr)
    {
        _children["client-to-server"] = client_to_server;
    }

    if(to_server != nullptr)
    {
        _children["to-server"] = to_server;
    }

    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Response::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Connection::Delay::Response::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-server" || name == "to-server")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::ClientToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-server"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::~ClientToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::ToServer()
    :
    histogram{YType::enumeration, "histogram"},
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-server"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::~ToServer()
{
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::has_data() const
{
    if (is_presence_container) return true;
    return histogram.is_set
	|| max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(histogram.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (histogram.is_set || is_set(histogram.yfilter)) leaf_name_data.push_back(histogram.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "histogram")
    {
        histogram = value;
        histogram.value_namespace = name_space;
        histogram.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "histogram")
    {
        histogram.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "histogram" || name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Server()
    :
    all{YType::empty, "all"}
        ,
    counter(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter>())
    , ipv4(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv4>())
    , ipv6(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv6>())
    , transport(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Transport>())
{
    counter->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    transport->parent = this;

    yang_name = "server"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Server::~Server()
{
}

bool Native::Flow::Record::Collect::Connection::Server::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Collect::Connection::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "ipv4" || name == "ipv6" || name == "transport" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Counter()
    :
    responses{YType::empty, "responses"}
        ,
    bytes(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes>())
    , packets(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "counter"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Server::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::has_data() const
{
    if (is_presence_container) return true;
    return responses.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(responses.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (responses.is_set || is_set(responses.yfilter)) leaf_name_data.push_back(responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Server::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bytes != nullptr)
    {
        _children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        _children["packets"] = packets;
    }

    return _children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "responses")
    {
        responses = value;
        responses.value_namespace = name_space;
        responses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "responses")
    {
        responses.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "responses")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
        ,
    network(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network>())
    , transport(std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport>())
{
    network->parent = this;
    transport->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| retransmitted.is_set
	|| (network !=  nullptr && network->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network>();
        }
        return network;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "transport" || name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::Network()
    :
    long_{YType::empty, "long"}
{

    yang_name = "network"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::~Network()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::Transport()
    :
    long_{YType::empty, "long"}
{

    yang_name = "transport"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Counter::Packets::Packets()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
{

    yang_name = "packets"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Server::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Packets::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| retransmitted.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Server::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Counter::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Counter::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Server::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Server::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Server::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Server::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Server::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Connection::Server::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Collect::Connection::Server::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Collect::Connection::Server::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Connection::Server::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Collect::Connection::Server::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Collect::Connection::Server::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Collect::Connection::Server::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Connection::Server::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Connection::Server::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

const Enum::YLeaf Native::Controller::SONET::Au4::FramingUnframed::Tug2::Framing::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::SONETACR::Framing::sonet {0, "sonet"};
const Enum::YLeaf Native::Controller::SONETACR::Framing::sdh {1, "sdh"};

const Enum::YLeaf Native::Controller::SONETACR::Clock::Source::internal {0, "internal"};
const Enum::YLeaf Native::Controller::SONETACR::Clock::Source::line {1, "line"};

const Enum::YLeaf Native::Controller::SONETACR::Aug::Mapping::au_3 {0, "au-3"};
const Enum::YLeaf Native::Controller::SONETACR::Aug::Mapping::au_4 {1, "au-4"};

const Enum::YLeaf Native::Controller::SONETACR::Au3::Overhead::Byte::j1 {0, "j1"};

const Enum::YLeaf Native::Controller::SONETACR::Au3::Mode::Mapping::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONETACR::Au3::Mode::Mapping::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONETACR::Au3::Mode::Mapping::c_2 {2, "c-2"};

const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_2 {2, "c-2"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_3 {3, "c-3"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_4 {4, "c-4"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::e3 {5, "e3"};

const Enum::YLeaf Native::Controller::SONETACR::Au4::Framing::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::Framing::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::Vdsl::Diagnostics::DELT {0, "DELT"};

const Enum::YLeaf Native::Controller::Vdsl::LineMode::SingleWire::Line::One::Profile::Y_30a {0, "30a"};

const Enum::YLeaf Native::Controller::Vdsl::Operating::Mode::Adsl2::Annex::A {0, "A"};
const Enum::YLeaf Native::Controller::Vdsl::Operating::Mode::Adsl2::Annex::M {1, "M"};

const Enum::YLeaf Native::Controller::Vdsl::Operating::Mode::Adsl2plus::Annex::A {0, "A"};
const Enum::YLeaf Native::Controller::Vdsl::Operating::Mode::Adsl2plus::Annex::M {1, "M"};

const Enum::YLeaf Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Preference::mldp {0, "mldp"};
const Enum::YLeaf Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Preference::pim {1, "pim"};

const Enum::YLeaf Native::Rmon::Alarm::TestMode::absolute {0, "absolute"};
const Enum::YLeaf Native::Rmon::Alarm::TestMode::delta {1, "delta"};

const Enum::YLeaf Native::Flow::Record::Type::performance_monitor {0, "performance-monitor"};

const Enum::YLeaf Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::Histogram::all {0, "all"};
const Enum::YLeaf Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::Histogram::bucket1 {1, "bucket1"};
const Enum::YLeaf Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::Histogram::bucket2 {2, "bucket2"};
const Enum::YLeaf Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::Histogram::bucket3 {3, "bucket3"};
const Enum::YLeaf Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::Histogram::bucket4 {4, "bucket4"};
const Enum::YLeaf Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::Histogram::bucket5 {5, "bucket5"};
const Enum::YLeaf Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::Histogram::bucket6 {6, "bucket6"};
const Enum::YLeaf Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::Histogram::bucket7 {7, "bucket7"};
const Enum::YLeaf Native::Flow::Record::Collect::Connection::Delay::Response::ToServer::Histogram::late {8, "late"};


}
}

