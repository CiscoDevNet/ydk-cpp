
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_118.hpp"
#include "Cisco_IOS_XE_native_120.hpp"
#include "Cisco_IOS_XE_native_119.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Aaa::Attribute::List::List()
    :
    name{YType::str, "name"}
        ,
    attribute(std::make_shared<Native::Aaa::Attribute::List::Attribute_>())
{
    attribute->parent = this;

    yang_name = "list"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Attribute::List::~List()
{
}

bool Native::Aaa::Attribute::List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Aaa::Attribute::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Aaa::Attribute::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Attribute::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Attribute::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Attribute::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Aaa::Attribute::List::Attribute_>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Attribute::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Aaa::Attribute::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Attribute::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Attribute::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "name")
        return true;
    return false;
}

Native::Aaa::Attribute::List::Attribute_::Attribute_()
    :
    type(std::make_shared<Native::Aaa::Attribute::List::Attribute_::Type>())
{
    type->parent = this;

    yang_name = "attribute"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Attribute::List::Attribute_::~Attribute_()
{
}

bool Native::Aaa::Attribute::List::Attribute_::has_data() const
{
    if (is_presence_container) return true;
    return (type !=  nullptr && type->has_data());
}

bool Native::Aaa::Attribute::List::Attribute_::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Aaa::Attribute::List::Attribute_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Attribute::List::Attribute_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Attribute::List::Attribute_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Aaa::Attribute::List::Attribute_::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Attribute::List::Attribute_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Aaa::Attribute::List::Attribute_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Attribute::List::Attribute_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Attribute::List::Attribute_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Attribute::List::Attribute_::Type::Type()
    :
    password{YType::str, "password"},
    mandatory{YType::empty, "mandatory"},
    tag{YType::uint8, "tag"}
{

    yang_name = "type"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Attribute::List::Attribute_::Type::~Type()
{
}

bool Native::Aaa::Attribute::List::Attribute_::Type::has_data() const
{
    if (is_presence_container) return true;
    return password.is_set
	|| mandatory.is_set
	|| tag.is_set;
}

bool Native::Aaa::Attribute::List::Attribute_::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(mandatory.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Aaa::Attribute::List::Attribute_::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Attribute::List::Attribute_::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.yfilter)) leaf_name_data.push_back(mandatory.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Attribute::List::Attribute_::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Attribute::List::Attribute_::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Attribute::List::Attribute_::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
        mandatory.value_namespace = name_space;
        mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Attribute::List::Attribute_::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "mandatory")
    {
        mandatory.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Aaa::Attribute::List::Attribute_::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "mandatory" || name == "tag")
        return true;
    return false;
}

Native::Aaa::Authentication::Authentication()
    :
    attempts(std::make_shared<Native::Aaa::Authentication::Attempts>())
    , dot1x(std::make_shared<Native::Aaa::Authentication::Dot1x>())
    , enable(std::make_shared<Native::Aaa::Authentication::Enable>())
    , eou(std::make_shared<Native::Aaa::Authentication::Eou>())
    , login(this, {"name"})
    , onep(std::make_shared<Native::Aaa::Authentication::Onep>())
    , ppp(this, {"id"})
{
    attempts->parent = this;
    dot1x->parent = this;
    enable->parent = this;
    eou->parent = this;
    onep->parent = this;

    yang_name = "authentication"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::~Authentication()
{
}

bool Native::Aaa::Authentication::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<login.len(); index++)
    {
        if(login[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ppp.len(); index++)
    {
        if(ppp[index]->has_data())
            return true;
    }
    return (attempts !=  nullptr && attempts->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (eou !=  nullptr && eou->has_data())
	|| (onep !=  nullptr && onep->has_data());
}

bool Native::Aaa::Authentication::has_operation() const
{
    for (std::size_t index=0; index<login.len(); index++)
    {
        if(login[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ppp.len(); index++)
    {
        if(ppp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (attempts !=  nullptr && attempts->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (eou !=  nullptr && eou->has_operation())
	|| (onep !=  nullptr && onep->has_operation());
}

std::string Native::Aaa::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attempts")
    {
        if(attempts == nullptr)
        {
            attempts = std::make_shared<Native::Aaa::Authentication::Attempts>();
        }
        return attempts;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Aaa::Authentication::Dot1x>();
        }
        return dot1x;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Aaa::Authentication::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "eou")
    {
        if(eou == nullptr)
        {
            eou = std::make_shared<Native::Aaa::Authentication::Eou>();
        }
        return eou;
    }

    if(child_yang_name == "login")
    {
        auto ent_ = std::make_shared<Native::Aaa::Authentication::Login>();
        ent_->parent = this;
        login.append(ent_);
        return ent_;
    }

    if(child_yang_name == "onep")
    {
        if(onep == nullptr)
        {
            onep = std::make_shared<Native::Aaa::Authentication::Onep>();
        }
        return onep;
    }

    if(child_yang_name == "ppp")
    {
        auto ent_ = std::make_shared<Native::Aaa::Authentication::Ppp>();
        ent_->parent = this;
        ppp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attempts != nullptr)
    {
        _children["attempts"] = attempts;
    }

    if(dot1x != nullptr)
    {
        _children["dot1x"] = dot1x;
    }

    if(enable != nullptr)
    {
        _children["enable"] = enable;
    }

    if(eou != nullptr)
    {
        _children["eou"] = eou;
    }

    count_ = 0;
    for (auto ent_ : login.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(onep != nullptr)
    {
        _children["onep"] = onep;
    }

    count_ = 0;
    for (auto ent_ : ppp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Aaa::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attempts" || name == "dot1x" || name == "enable" || name == "eou" || name == "login" || name == "onep" || name == "ppp")
        return true;
    return false;
}

Native::Aaa::Authentication::Attempts::Attempts()
    :
    login{YType::uint8, "login"}
{

    yang_name = "attempts"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Attempts::~Attempts()
{
}

bool Native::Aaa::Authentication::Attempts::has_data() const
{
    if (is_presence_container) return true;
    return login.is_set;
}

bool Native::Aaa::Authentication::Attempts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Native::Aaa::Authentication::Attempts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Attempts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attempts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Attempts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Attempts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Attempts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Attempts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Attempts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Attempts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Native::Aaa::Authentication::Dot1x::Dot1x()
    :
    dot1x_list(this, {"name"})
    , default_(std::make_shared<Native::Aaa::Authentication::Dot1x::Default>())
{
    default_->parent = this;

    yang_name = "dot1x"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Dot1x::~Dot1x()
{
}

bool Native::Aaa::Authentication::Dot1x::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1x_list.len(); index++)
    {
        if(dot1x_list[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Dot1x::has_operation() const
{
    for (std::size_t index=0; index<dot1x_list.len(); index++)
    {
        if(dot1x_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Dot1x::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Dot1x::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Dot1x::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Dot1x::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x-list")
    {
        auto ent_ = std::make_shared<Native::Aaa::Authentication::Dot1x::Dot1xList>();
        ent_->parent = this;
        dot1x_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Dot1x::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Dot1x::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1x_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Aaa::Authentication::Dot1x::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Dot1x::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Dot1x::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x-list" || name == "default")
        return true;
    return false;
}

Native::Aaa::Authentication::Dot1x::Dot1xList::Dot1xList()
    :
    name{YType::str, "name"},
    group{YType::str, "group"},
    local{YType::empty, "local"},
    cache{YType::str, "cache"}
{

    yang_name = "dot1x-list"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Dot1x::Dot1xList::~Dot1xList()
{
}

bool Native::Aaa::Authentication::Dot1x::Dot1xList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| group.is_set
	|| local.is_set
	|| cache.is_set;
}

bool Native::Aaa::Authentication::Dot1x::Dot1xList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(cache.yfilter);
}

std::string Native::Aaa::Authentication::Dot1x::Dot1xList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Dot1x::Dot1xList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Dot1x::Dot1xList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Dot1x::Dot1xList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Dot1x::Dot1xList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Dot1x::Dot1xList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Dot1x::Dot1xList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Dot1x::Dot1xList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "group" || name == "local" || name == "cache")
        return true;
    return false;
}

Native::Aaa::Authentication::Dot1x::Default::Default()
    :
    group{YType::str, "group"},
    local{YType::empty, "local"},
    cache{YType::str, "cache"}
{

    yang_name = "default"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Dot1x::Default::~Default()
{
}

bool Native::Aaa::Authentication::Dot1x::Default::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| local.is_set
	|| cache.is_set;
}

bool Native::Aaa::Authentication::Dot1x::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(cache.yfilter);
}

std::string Native::Aaa::Authentication::Dot1x::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Dot1x::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Dot1x::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Dot1x::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Dot1x::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Dot1x::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Dot1x::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Dot1x::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "local" || name == "cache")
        return true;
    return false;
}

Native::Aaa::Authentication::Enable::Enable()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Enable::Default>())
{
    default_->parent = this;

    yang_name = "enable"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Enable::~Enable()
{
}

bool Native::Aaa::Authentication::Enable::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Enable::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Aaa::Authentication::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authentication::Enable::Default::Default()
    :
    group{YType::str, "group"},
    enable{YType::empty, "enable"},
    line{YType::empty, "line"},
    none{YType::empty, "none"}
{

    yang_name = "default"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Enable::Default::~Default()
{
}

bool Native::Aaa::Authentication::Enable::Default::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| enable.is_set
	|| line.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Enable::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authentication::Enable::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Enable::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Enable::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Enable::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Enable::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Enable::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Enable::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Enable::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "enable" || name == "line" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authentication::Eou::Eou()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Eou::Default>())
{
    default_->parent = this;

    yang_name = "eou"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Eou::~Eou()
{
}

bool Native::Aaa::Authentication::Eou::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Eou::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Eou::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Eou::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eou";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Eou::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Eou::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Eou::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Eou::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Aaa::Authentication::Eou::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Eou::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Eou::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authentication::Eou::Default::Default()
    :
    group(std::make_shared<Native::Aaa::Authentication::Eou::Default::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "eou"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Eou::Default::~Default()
{
}

bool Native::Aaa::Authentication::Eou::Default::has_data() const
{
    if (is_presence_container) return true;
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authentication::Eou::Default::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authentication::Eou::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/eou/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Eou::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Eou::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Eou::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authentication::Eou::Default::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Eou::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group != nullptr)
    {
        _children["group"] = group;
    }

    return _children;
}

void Native::Aaa::Authentication::Eou::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Eou::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Eou::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authentication::Eou::Default::Group::Group()
    :
    radius{YType::empty, "radius"}
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Eou::Default::Group::~Group()
{
}

bool Native::Aaa::Authentication::Eou::Default::Group::has_data() const
{
    if (is_presence_container) return true;
    return radius.is_set;
}

bool Native::Aaa::Authentication::Eou::Default::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(radius.yfilter);
}

std::string Native::Aaa::Authentication::Eou::Default::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/eou/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Eou::Default::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Eou::Default::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (radius.is_set || is_set(radius.yfilter)) leaf_name_data.push_back(radius.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Eou::Default::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Eou::Default::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Eou::Default::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "radius")
    {
        radius = value;
        radius.value_namespace = name_space;
        radius.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Eou::Default::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "radius")
    {
        radius.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Eou::Default::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::Login()
    :
    name{YType::str, "name"}
        ,
    a1(std::make_shared<Native::Aaa::Authentication::Login::A1>())
    , a2(std::make_shared<Native::Aaa::Authentication::Login::A2>())
    , a3(std::make_shared<Native::Aaa::Authentication::Login::A3>())
    , a4(std::make_shared<Native::Aaa::Authentication::Login::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "login"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Login::~Login()
{
}

bool Native::Aaa::Authentication::Login::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authentication::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authentication::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authentication::Login::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authentication::Login::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authentication::Login::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authentication::Login::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(a1 != nullptr)
    {
        _children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        _children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        _children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        _children["a4"] = a4;
    }

    return _children;
}

void Native::Aaa::Authentication::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "name")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A1::A1()
    :
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    enable{YType::empty, "enable"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    group{YType::str, "group"},
    cache{YType::str, "cache"}
{

    yang_name = "a1"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authentication::Login::A1::~A1()
{
}

bool Native::Aaa::Authentication::Login::A1::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| enable.is_set
	|| local.is_set
	|| local_case.is_set
	|| group.is_set
	|| cache.is_set;
}

bool Native::Aaa::Authentication::Login::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter);
}

std::string Native::Aaa::Authentication::Login::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Login::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Login::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Login::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "enable" || name == "local" || name == "local-case" || name == "group" || name == "cache")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A2::A2()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    enable{YType::empty, "enable"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a2"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authentication::Login::A2::~A2()
{
}

bool Native::Aaa::Authentication::Login::A2::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| enable.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Login::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Login::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Login::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Login::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Login::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "enable" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A3::A3()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    enable{YType::empty, "enable"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a3"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authentication::Login::A3::~A3()
{
}

bool Native::Aaa::Authentication::Login::A3::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| enable.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Login::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Login::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Login::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Login::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Login::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "enable" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A4::A4()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    enable{YType::empty, "enable"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a4"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authentication::Login::A4::~A4()
{
}

bool Native::Aaa::Authentication::Login::A4::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| enable.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Login::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Login::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Login::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Login::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Login::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "enable" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Authentication::Onep::Onep()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Onep::Default>())
{
    default_->parent = this;

    yang_name = "onep"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Onep::~Onep()
{
}

bool Native::Aaa::Authentication::Onep::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Onep::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Onep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Onep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Onep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Onep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Onep::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Onep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Aaa::Authentication::Onep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Onep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Onep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authentication::Onep::Default::Default()
    :
    local(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "onep"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Onep::Default::~Default()
{
}

bool Native::Aaa::Authentication::Onep::Default::has_data() const
{
    if (is_presence_container) return true;
    return (local !=  nullptr && local->has_data());
}

bool Native::Aaa::Authentication::Onep::Default::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Aaa::Authentication::Onep::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/onep/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Onep::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Onep::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Onep::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Aaa::Authentication::Onep::Default::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Onep::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void Native::Aaa::Authentication::Onep::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Onep::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Onep::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Aaa::Authentication::Onep::Default::Local::Local()
{

    yang_name = "local"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Authentication::Onep::Default::Local::~Local()
{
}

bool Native::Aaa::Authentication::Onep::Default::Local::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Aaa::Authentication::Onep::Default::Local::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Aaa::Authentication::Onep::Default::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/onep/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Onep::Default::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Onep::Default::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Onep::Default::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Onep::Default::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Onep::Default::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Onep::Default::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Onep::Default::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Aaa::Authentication::Ppp::Ppp()
    :
    id{YType::str, "id"}
        ,
    a1(std::make_shared<Native::Aaa::Authentication::Ppp::A1>())
    , a2(std::make_shared<Native::Aaa::Authentication::Ppp::A2>())
    , a3(std::make_shared<Native::Aaa::Authentication::Ppp::A3>())
    , a4(std::make_shared<Native::Aaa::Authentication::Ppp::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "ppp"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authentication::Ppp::~Ppp()
{
}

bool Native::Aaa::Authentication::Ppp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authentication::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authentication::Ppp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authentication::Ppp::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authentication::Ppp::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authentication::Ppp::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authentication::Ppp::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(a1 != nullptr)
    {
        _children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        _children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        _children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        _children["a4"] = a4;
    }

    return _children;
}

void Native::Aaa::Authentication::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "id")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A1::A1()
    :
    if_needed{YType::empty, "if-needed"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    group{YType::str, "group"},
    cache{YType::str, "cache"}
{

    yang_name = "a1"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authentication::Ppp::A1::~A1()
{
}

bool Native::Aaa::Authentication::Ppp::A1::has_data() const
{
    if (is_presence_container) return true;
    return if_needed.is_set
	|| none.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set
	|| group.is_set
	|| cache.is_set;
}

bool Native::Aaa::Authentication::Ppp::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_needed.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_needed.is_set || is_set(if_needed.yfilter)) leaf_name_data.push_back(if_needed.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Ppp::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Ppp::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Ppp::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-needed")
    {
        if_needed = value;
        if_needed.value_namespace = name_space;
        if_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-needed")
    {
        if_needed.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-needed" || name == "none" || name == "krb5" || name == "local" || name == "local-case" || name == "group" || name == "cache")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A2::A2()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a2"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authentication::Ppp::A2::~A2()
{
}

bool Native::Aaa::Authentication::Ppp::A2::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Ppp::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Ppp::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Ppp::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Ppp::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A3::A3()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a3"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authentication::Ppp::A3::~A3()
{
}

bool Native::Aaa::Authentication::Ppp::A3::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Ppp::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Ppp::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Ppp::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Ppp::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A4::A4()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a4"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authentication::Ppp::A4::~A4()
{
}

bool Native::Aaa::Authentication::Ppp::A4::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Ppp::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authentication::Ppp::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authentication::Ppp::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authentication::Ppp::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Local::Local()
    :
    authentication(std::make_shared<Native::Aaa::Local::Authentication>())
{
    authentication->parent = this;

    yang_name = "local"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Local::~Local()
{
}

bool Native::Aaa::Local::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Aaa::Local::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Aaa::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Local::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void Native::Aaa::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Aaa::Local::Authentication::Authentication()
    :
    authorization(std::make_shared<Native::Aaa::Local::Authentication::Authorization>())
    , attempts(std::make_shared<Native::Aaa::Local::Authentication::Attempts>())
{
    authorization->parent = this;
    attempts->parent = this;

    yang_name = "authentication"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Local::Authentication::~Authentication()
{
}

bool Native::Aaa::Local::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (authorization !=  nullptr && authorization->has_data())
	|| (attempts !=  nullptr && attempts->has_data());
}

bool Native::Aaa::Local::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (attempts !=  nullptr && attempts->has_operation());
}

std::string Native::Aaa::Local::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:local/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Local::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Local::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Local::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Aaa::Local::Authentication::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "attempts")
    {
        if(attempts == nullptr)
        {
            attempts = std::make_shared<Native::Aaa::Local::Authentication::Attempts>();
        }
        return attempts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Local::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    if(attempts != nullptr)
    {
        _children["attempts"] = attempts;
    }

    return _children;
}

void Native::Aaa::Local::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Local::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Local::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "attempts")
        return true;
    return false;
}

Native::Aaa::Local::Authentication::Authorization::Authorization()
    :
    authen_type{YType::str, "authen-type"},
    authorization{YType::str, "authorization"}
{

    yang_name = "authorization"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Local::Authentication::Authorization::~Authorization()
{
}

bool Native::Aaa::Local::Authentication::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return authen_type.is_set
	|| authorization.is_set;
}

bool Native::Aaa::Local::Authentication::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authen_type.yfilter)
	|| ydk::is_set(authorization.yfilter);
}

std::string Native::Aaa::Local::Authentication::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:local/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Local::Authentication::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Local::Authentication::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_type.is_set || is_set(authen_type.yfilter)) leaf_name_data.push_back(authen_type.get_name_leafdata());
    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Local::Authentication::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Local::Authentication::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Local::Authentication::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-type")
    {
        authen_type = value;
        authen_type.value_namespace = name_space;
        authen_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Local::Authentication::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-type")
    {
        authen_type.yfilter = yfilter;
    }
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
}

bool Native::Aaa::Local::Authentication::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-type" || name == "authorization")
        return true;
    return false;
}

Native::Aaa::Local::Authentication::Attempts::Attempts()
    :
    max_fail{YType::uint16, "max-fail"}
{

    yang_name = "attempts"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Local::Authentication::Attempts::~Attempts()
{
}

bool Native::Aaa::Local::Authentication::Attempts::has_data() const
{
    if (is_presence_container) return true;
    return max_fail.is_set;
}

bool Native::Aaa::Local::Authentication::Attempts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_fail.yfilter);
}

std::string Native::Aaa::Local::Authentication::Attempts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:local/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Local::Authentication::Attempts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attempts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Local::Authentication::Attempts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_fail.is_set || is_set(max_fail.yfilter)) leaf_name_data.push_back(max_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Local::Authentication::Attempts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Local::Authentication::Attempts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Local::Authentication::Attempts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-fail")
    {
        max_fail = value;
        max_fail.value_namespace = name_space;
        max_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Local::Authentication::Attempts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-fail")
    {
        max_fail.yfilter = yfilter;
    }
}

bool Native::Aaa::Local::Authentication::Attempts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-fail")
        return true;
    return false;
}

Native::Aaa::Authorization::Authorization()
    :
    console{YType::empty, "console"},
    config_commands{YType::empty, "config-commands"}
        ,
    auth_type(std::make_shared<Native::Aaa::Authorization::AuthType>())
    , commands(this, {"level", "list_name"})
    , configuration(std::make_shared<Native::Aaa::Authorization::Configuration>())
    , credential_download(std::make_shared<Native::Aaa::Authorization::CredentialDownload>())
    , exec(this, {"name"})
    , eventmanager(this, {"name"})
    , network(this, {"id"})
    , auth_proxy(std::make_shared<Native::Aaa::Authorization::AuthProxy>())
    , onep(std::make_shared<Native::Aaa::Authorization::Onep>())
{
    auth_type->parent = this;
    configuration->parent = this;
    credential_download->parent = this;
    auth_proxy->parent = this;
    onep->parent = this;

    yang_name = "authorization"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::~Authorization()
{
}

bool Native::Aaa::Authorization::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<commands.len(); index++)
    {
        if(commands[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<exec.len(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eventmanager.len(); index++)
    {
        if(eventmanager[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return console.is_set
	|| config_commands.is_set
	|| (auth_type !=  nullptr && auth_type->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (credential_download !=  nullptr && credential_download->has_data())
	|| (auth_proxy !=  nullptr && auth_proxy->has_data())
	|| (onep !=  nullptr && onep->has_data());
}

bool Native::Aaa::Authorization::has_operation() const
{
    for (std::size_t index=0; index<commands.len(); index++)
    {
        if(commands[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<exec.len(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eventmanager.len(); index++)
    {
        if(eventmanager[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(console.yfilter)
	|| ydk::is_set(config_commands.yfilter)
	|| (auth_type !=  nullptr && auth_type->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (credential_download !=  nullptr && credential_download->has_operation())
	|| (auth_proxy !=  nullptr && auth_proxy->has_operation())
	|| (onep !=  nullptr && onep->has_operation());
}

std::string Native::Aaa::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (console.is_set || is_set(console.yfilter)) leaf_name_data.push_back(console.get_name_leafdata());
    if (config_commands.is_set || is_set(config_commands.yfilter)) leaf_name_data.push_back(config_commands.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-type")
    {
        if(auth_type == nullptr)
        {
            auth_type = std::make_shared<Native::Aaa::Authorization::AuthType>();
        }
        return auth_type;
    }

    if(child_yang_name == "commands")
    {
        auto ent_ = std::make_shared<Native::Aaa::Authorization::Commands>();
        ent_->parent = this;
        commands.append(ent_);
        return ent_;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Aaa::Authorization::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "credential-download")
    {
        if(credential_download == nullptr)
        {
            credential_download = std::make_shared<Native::Aaa::Authorization::CredentialDownload>();
        }
        return credential_download;
    }

    if(child_yang_name == "exec")
    {
        auto ent_ = std::make_shared<Native::Aaa::Authorization::Exec>();
        ent_->parent = this;
        exec.append(ent_);
        return ent_;
    }

    if(child_yang_name == "eventmanager")
    {
        auto ent_ = std::make_shared<Native::Aaa::Authorization::Eventmanager>();
        ent_->parent = this;
        eventmanager.append(ent_);
        return ent_;
    }

    if(child_yang_name == "network")
    {
        auto ent_ = std::make_shared<Native::Aaa::Authorization::Network>();
        ent_->parent = this;
        network.append(ent_);
        return ent_;
    }

    if(child_yang_name == "auth-proxy")
    {
        if(auth_proxy == nullptr)
        {
            auth_proxy = std::make_shared<Native::Aaa::Authorization::AuthProxy>();
        }
        return auth_proxy;
    }

    if(child_yang_name == "onep")
    {
        if(onep == nullptr)
        {
            onep = std::make_shared<Native::Aaa::Authorization::Onep>();
        }
        return onep;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auth_type != nullptr)
    {
        _children["auth-type"] = auth_type;
    }

    count_ = 0;
    for (auto ent_ : commands.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    if(credential_download != nullptr)
    {
        _children["credential-download"] = credential_download;
    }

    count_ = 0;
    for (auto ent_ : exec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : eventmanager.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(auth_proxy != nullptr)
    {
        _children["auth-proxy"] = auth_proxy;
    }

    if(onep != nullptr)
    {
        _children["onep"] = onep;
    }

    return _children;
}

void Native::Aaa::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "console")
    {
        console = value;
        console.value_namespace = name_space;
        console.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-commands")
    {
        config_commands = value;
        config_commands.value_namespace = name_space;
        config_commands.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "console")
    {
        console.yfilter = yfilter;
    }
    if(value_path == "config-commands")
    {
        config_commands.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "commands" || name == "configuration" || name == "credential-download" || name == "exec" || name == "eventmanager" || name == "network" || name == "auth-proxy" || name == "onep" || name == "console" || name == "config-commands")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthType::AuthType()
    :
    default_(std::make_shared<Native::Aaa::Authorization::AuthType::Default>())
{
    default_->parent = this;

    yang_name = "auth-type"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::AuthType::~AuthType()
{
}

bool Native::Aaa::Authorization::AuthType::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::AuthType::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::AuthType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::AuthType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::AuthType::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::AuthType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Aaa::Authorization::AuthType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::AuthType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::AuthType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthType::Default::Default()
    :
    group{YType::enumeration, "group"}
{

    yang_name = "default"; yang_parent_name = "auth-type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::AuthType::Default::~Default()
{
}

bool Native::Aaa::Authorization::AuthType::Default::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Aaa::Authorization::AuthType::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Authorization::AuthType::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthType::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthType::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::AuthType::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::AuthType::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::AuthType::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::AuthType::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::AuthType::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::Commands::Commands()
    :
    level{YType::uint8, "level"},
    list_name{YType::str, "list-name"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "commands"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Commands::~Commands()
{
}

bool Native::Aaa::Authorization::Commands::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| list_name.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Commands::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(list_name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Commands::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Commands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commands";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(list_name, "list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Commands::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.yfilter)) leaf_name_data.push_back(list_name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Commands::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Commands::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-name")
    {
        list_name = value;
        list_name.value_namespace = name_space;
        list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Commands::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "list-name")
    {
        list_name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Commands::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "list-name" || name == "group" || name == "if-authenticated" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Configuration()
    :
    default_(std::make_shared<Native::Aaa::Authorization::Configuration::Default>())
{
    default_->parent = this;

    yang_name = "configuration"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Configuration::~Configuration()
{
}

bool Native::Aaa::Authorization::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::Configuration::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Aaa::Authorization::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Default::Default()
    :
    group(std::make_shared<Native::Aaa::Authorization::Configuration::Default::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Configuration::Default::~Default()
{
}

bool Native::Aaa::Authorization::Configuration::Default::has_data() const
{
    if (is_presence_container) return true;
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authorization::Configuration::Default::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authorization::Configuration::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Configuration::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authorization::Configuration::Default::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Configuration::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group != nullptr)
    {
        _children["group"] = group;
    }

    return _children;
}

void Native::Aaa::Authorization::Configuration::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Configuration::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Configuration::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Default::Group::Group()
    :
    group_name(this, {"group_name"})
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Configuration::Default::Group::~Group()
{
}

bool Native::Aaa::Authorization::Configuration::Default::Group::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_name.len(); index++)
    {
        if(group_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Authorization::Configuration::Default::Group::has_operation() const
{
    for (std::size_t index=0; index<group_name.len(); index++)
    {
        if(group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Authorization::Configuration::Default::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/configuration/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::Default::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::Default::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Configuration::Default::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-name")
    {
        auto ent_ = std::make_shared<Native::Aaa::Authorization::Configuration::Default::Group::GroupName>();
        ent_->parent = this;
        group_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Configuration::Default::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Aaa::Authorization::Configuration::Default::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Configuration::Default::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Configuration::Default::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Default::Group::GroupName::GroupName()
    :
    group_name{YType::str, "group-name"}
{

    yang_name = "group-name"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Configuration::Default::Group::GroupName::~GroupName()
{
}

bool Native::Aaa::Authorization::Configuration::Default::Group::GroupName::has_data() const
{
    if (is_presence_container) return true;
    return group_name.is_set;
}

bool Native::Aaa::Authorization::Configuration::Default::Group::GroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Native::Aaa::Authorization::Configuration::Default::Group::GroupName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/configuration/default/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::Default::Group::GroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-name";
    ADD_KEY_TOKEN(group_name, "group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::Default::Group::GroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Configuration::Default::Group::GroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Configuration::Default::Group::GroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Configuration::Default::Group::GroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Configuration::Default::Group::GroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Configuration::Default::Group::GroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Native::Aaa::Authorization::CredentialDownload::CredentialDownload()
    :
    default_(std::make_shared<Native::Aaa::Authorization::CredentialDownload::Default>())
    , authorization_list(this, {"name"})
{
    default_->parent = this;

    yang_name = "credential-download"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::CredentialDownload::~CredentialDownload()
{
}

bool Native::Aaa::Authorization::CredentialDownload::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<authorization_list.len(); index++)
    {
        if(authorization_list[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::CredentialDownload::has_operation() const
{
    for (std::size_t index=0; index<authorization_list.len(); index++)
    {
        if(authorization_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::CredentialDownload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::CredentialDownload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "credential-download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::CredentialDownload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::CredentialDownload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::CredentialDownload::Default>();
        }
        return default_;
    }

    if(child_yang_name == "authorization-list")
    {
        auto ent_ = std::make_shared<Native::Aaa::Authorization::CredentialDownload::AuthorizationList>();
        ent_->parent = this;
        authorization_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::CredentialDownload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    count_ = 0;
    for (auto ent_ : authorization_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Aaa::Authorization::CredentialDownload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::CredentialDownload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::CredentialDownload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "authorization-list")
        return true;
    return false;
}

Native::Aaa::Authorization::CredentialDownload::Default::Default()
    :
    local{YType::empty, "local"},
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    none{YType::empty, "none"}
{

    yang_name = "default"; yang_parent_name = "credential-download"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::CredentialDownload::Default::~Default()
{
}

bool Native::Aaa::Authorization::CredentialDownload::Default::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::CredentialDownload::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::CredentialDownload::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/credential-download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::CredentialDownload::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::CredentialDownload::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::CredentialDownload::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::CredentialDownload::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::CredentialDownload::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::CredentialDownload::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::CredentialDownload::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "cache" || name == "group" || name == "if-authenticated" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::CredentialDownload::AuthorizationList::AuthorizationList()
    :
    name{YType::str, "name"},
    local{YType::empty, "local"},
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    none{YType::empty, "none"}
{

    yang_name = "authorization-list"; yang_parent_name = "credential-download"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::CredentialDownload::AuthorizationList::~AuthorizationList()
{
}

bool Native::Aaa::Authorization::CredentialDownload::AuthorizationList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| local.is_set
	|| cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::CredentialDownload::AuthorizationList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::CredentialDownload::AuthorizationList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/credential-download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::CredentialDownload::AuthorizationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::CredentialDownload::AuthorizationList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::CredentialDownload::AuthorizationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::CredentialDownload::AuthorizationList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::CredentialDownload::AuthorizationList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::CredentialDownload::AuthorizationList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::CredentialDownload::AuthorizationList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "local" || name == "cache" || name == "group" || name == "if-authenticated" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::Exec()
    :
    name{YType::str, "name"}
        ,
    a1(std::make_shared<Native::Aaa::Authorization::Exec::A1>())
    , a2(std::make_shared<Native::Aaa::Authorization::Exec::A2>())
    , a3(std::make_shared<Native::Aaa::Authorization::Exec::A3>())
    , a4(std::make_shared<Native::Aaa::Authorization::Exec::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "exec"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Exec::~Exec()
{
}

bool Native::Aaa::Authorization::Exec::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authorization::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authorization::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authorization::Exec::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authorization::Exec::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authorization::Exec::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authorization::Exec::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(a1 != nullptr)
    {
        _children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        _children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        _children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        _children["a4"] = a4;
    }

    return _children;
}

void Native::Aaa::Authorization::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "name")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A1::A1()
    :
    if_authenticated{YType::empty, "if-authenticated"},
    none{YType::empty, "none"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"},
    group{YType::str, "group"},
    cache{YType::str, "cache"}
{

    yang_name = "a1"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authorization::Exec::A1::~A1()
{
}

bool Native::Aaa::Authorization::Exec::A1::has_data() const
{
    if (is_presence_container) return true;
    return if_authenticated.is_set
	|| none.is_set
	|| krb5_instance.is_set
	|| local.is_set
	|| group.is_set
	|| cache.is_set;
}

bool Native::Aaa::Authorization::Exec::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Exec::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Exec::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Exec::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-authenticated" || name == "none" || name == "krb5-instance" || name == "local" || name == "group" || name == "cache")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A2::A2()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    if_authenticated{YType::empty, "if-authenticated"},
    none{YType::empty, "none"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"}
{

    yang_name = "a2"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authorization::Exec::A2::~A2()
{
}

bool Native::Aaa::Authorization::Exec::A2::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| if_authenticated.is_set
	|| none.is_set
	|| krb5_instance.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Exec::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Exec::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Exec::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Exec::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "if-authenticated" || name == "none" || name == "krb5-instance" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A3::A3()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"}
{

    yang_name = "a3"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authorization::Exec::A3::~A3()
{
}

bool Native::Aaa::Authorization::Exec::A3::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Exec::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Exec::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Exec::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Exec::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "if-authenticated" || name == "krb5-instance" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A4::A4()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"}
{

    yang_name = "a4"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authorization::Exec::A4::~A4()
{
}

bool Native::Aaa::Authorization::Exec::A4::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Exec::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Exec::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Exec::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Exec::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "if-authenticated" || name == "krb5-instance" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::Eventmanager::Eventmanager()
    :
    name{YType::str, "name"},
    group{YType::str, "group"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "eventmanager"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Eventmanager::~Eventmanager()
{
}

bool Native::Aaa::Authorization::Eventmanager::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| group.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Eventmanager::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Eventmanager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Eventmanager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventmanager";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Eventmanager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Eventmanager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Eventmanager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Eventmanager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Eventmanager::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Eventmanager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "group" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::Network()
    :
    id{YType::str, "id"}
        ,
    a1(std::make_shared<Native::Aaa::Authorization::Network::A1>())
    , a2(std::make_shared<Native::Aaa::Authorization::Network::A2>())
    , a3(std::make_shared<Native::Aaa::Authorization::Network::A3>())
    , a4(std::make_shared<Native::Aaa::Authorization::Network::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "network"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Network::~Network()
{
}

bool Native::Aaa::Authorization::Network::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authorization::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authorization::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authorization::Network::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authorization::Network::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authorization::Network::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authorization::Network::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(a1 != nullptr)
    {
        _children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        _children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        _children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        _children["a4"] = a4;
    }

    return _children;
}

void Native::Aaa::Authorization::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "id")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A1::A1()
    :
    if_authenticated{YType::empty, "if-authenticated"},
    none{YType::empty, "none"},
    local{YType::empty, "local"},
    group{YType::str, "group"},
    cache{YType::str, "cache"}
{

    yang_name = "a1"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authorization::Network::A1::~A1()
{
}

bool Native::Aaa::Authorization::Network::A1::has_data() const
{
    if (is_presence_container) return true;
    return if_authenticated.is_set
	|| none.is_set
	|| local.is_set
	|| group.is_set
	|| cache.is_set;
}

bool Native::Aaa::Authorization::Network::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter);
}

std::string Native::Aaa::Authorization::Network::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Network::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Network::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Network::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-authenticated" || name == "none" || name == "local" || name == "group" || name == "cache")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A2::A2()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    if_authenticated{YType::empty, "if-authenticated"},
    none{YType::empty, "none"},
    local{YType::empty, "local"}
{

    yang_name = "a2"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authorization::Network::A2::~A2()
{
}

bool Native::Aaa::Authorization::Network::A2::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| if_authenticated.is_set
	|| none.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Network::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Network::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Network::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Network::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Network::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "if-authenticated" || name == "none" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A3::A3()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"}
{

    yang_name = "a3"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authorization::Network::A3::~A3()
{
}

bool Native::Aaa::Authorization::Network::A3::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| if_authenticated.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Network::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Network::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Network::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Network::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Network::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "if-authenticated" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A4::A4()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"}
{

    yang_name = "a4"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Authorization::Network::A4::~A4()
{
}

bool Native::Aaa::Authorization::Network::A4::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| if_authenticated.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Network::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Network::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Network::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Network::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Network::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "if-authenticated" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthProxy::AuthProxy()
    :
    default_(std::make_shared<Native::Aaa::Authorization::AuthProxy::Default>())
{
    default_->parent = this;

    yang_name = "auth-proxy"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::AuthProxy::~AuthProxy()
{
}

bool Native::Aaa::Authorization::AuthProxy::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::AuthProxy::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::AuthProxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthProxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::AuthProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::AuthProxy::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::AuthProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Aaa::Authorization::AuthProxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::AuthProxy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::AuthProxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthProxy::Default::Default()
    :
    local{YType::empty, "local"},
    group{YType::str, "group"}
{

    yang_name = "default"; yang_parent_name = "auth-proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::AuthProxy::Default::~Default()
{
}

bool Native::Aaa::Authorization::AuthProxy::Default::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| group.is_set;
}

bool Native::Aaa::Authorization::AuthProxy::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Authorization::AuthProxy::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthProxy::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthProxy::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::AuthProxy::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::AuthProxy::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::AuthProxy::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::AuthProxy::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::AuthProxy::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Onep()
    :
    default_(std::make_shared<Native::Aaa::Authorization::Onep::Default>())
{
    default_->parent = this;

    yang_name = "onep"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Onep::~Onep()
{
}

bool Native::Aaa::Authorization::Onep::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::Onep::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::Onep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Onep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::Onep::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Onep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Aaa::Authorization::Onep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Onep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Onep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Default::Default()
    :
    group(std::make_shared<Native::Aaa::Authorization::Onep::Default::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "onep"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Onep::Default::~Default()
{
}

bool Native::Aaa::Authorization::Onep::Default::has_data() const
{
    if (is_presence_container) return true;
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authorization::Onep::Default::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authorization::Onep::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Onep::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authorization::Onep::Default::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Onep::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group != nullptr)
    {
        _children["group"] = group;
    }

    return _children;
}

void Native::Aaa::Authorization::Onep::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Onep::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Onep::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Default::Group::Group()
    :
    group_word(this, {"group_word"})
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Onep::Default::Group::~Group()
{
}

bool Native::Aaa::Authorization::Onep::Default::Group::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_word.len(); index++)
    {
        if(group_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Authorization::Onep::Default::Group::has_operation() const
{
    for (std::size_t index=0; index<group_word.len(); index++)
    {
        if(group_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Authorization::Onep::Default::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::Default::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::Default::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Onep::Default::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-word")
    {
        auto ent_ = std::make_shared<Native::Aaa::Authorization::Onep::Default::Group::GroupWord>();
        ent_->parent = this;
        group_word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Onep::Default::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Aaa::Authorization::Onep::Default::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Onep::Default::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Onep::Default::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-word")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Default::Group::GroupWord::GroupWord()
    :
    group_word{YType::str, "group-word"}
{

    yang_name = "group-word"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Authorization::Onep::Default::Group::GroupWord::~GroupWord()
{
}

bool Native::Aaa::Authorization::Onep::Default::Group::GroupWord::has_data() const
{
    if (is_presence_container) return true;
    return group_word.is_set;
}

bool Native::Aaa::Authorization::Onep::Default::Group::GroupWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_word.yfilter);
}

std::string Native::Aaa::Authorization::Onep::Default::Group::GroupWord::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/default/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::Default::Group::GroupWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-word";
    ADD_KEY_TOKEN(group_word, "group-word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::Default::Group::GroupWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_word.is_set || is_set(group_word.yfilter)) leaf_name_data.push_back(group_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Authorization::Onep::Default::Group::GroupWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Authorization::Onep::Default::Group::GroupWord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Authorization::Onep::Default::Group::GroupWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-word")
    {
        group_word = value;
        group_word.value_namespace = name_space;
        group_word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Onep::Default::Group::GroupWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-word")
    {
        group_word.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Onep::Default::Group::GroupWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-word")
        return true;
    return false;
}

Native::Aaa::Accounting::Accounting()
    :
    commands(this, {"level", "list_name"})
    , connection(this, {"name"})
    , delay_start(std::make_shared<Native::Aaa::Accounting::DelayStart>())
    , dot1x(std::make_shared<Native::Aaa::Accounting::Dot1x>())
    , identity(std::make_shared<Native::Aaa::Accounting::Identity>())
    , exec(this, {"name"})
    , exec_submode(std::make_shared<Native::Aaa::Accounting::ExecSubmode>())
    , network(this, {"id"})
    , send(std::make_shared<Native::Aaa::Accounting::Send>())
    , suppress(std::make_shared<Native::Aaa::Accounting::Suppress>())
    , system(std::make_shared<Native::Aaa::Accounting::System>())
    , update(std::make_shared<Native::Aaa::Accounting::Update>())
    , auth_proxy(std::make_shared<Native::Aaa::Accounting::AuthProxy>())
{
    delay_start->parent = this;
    dot1x->parent = this;
    identity->parent = this;
    exec_submode->parent = this;
    send->parent = this;
    suppress->parent = this;
    system->parent = this;
    update->parent = this;
    auth_proxy->parent = this;

    yang_name = "accounting"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::~Accounting()
{
}

bool Native::Aaa::Accounting::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<commands.len(); index++)
    {
        if(commands[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connection.len(); index++)
    {
        if(connection[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<exec.len(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return (delay_start !=  nullptr && delay_start->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (exec_submode !=  nullptr && exec_submode->has_data())
	|| (send !=  nullptr && send->has_data())
	|| (suppress !=  nullptr && suppress->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (update !=  nullptr && update->has_data())
	|| (auth_proxy !=  nullptr && auth_proxy->has_data());
}

bool Native::Aaa::Accounting::has_operation() const
{
    for (std::size_t index=0; index<commands.len(); index++)
    {
        if(commands[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connection.len(); index++)
    {
        if(connection[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<exec.len(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (delay_start !=  nullptr && delay_start->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (exec_submode !=  nullptr && exec_submode->has_operation())
	|| (send !=  nullptr && send->has_operation())
	|| (suppress !=  nullptr && suppress->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (update !=  nullptr && update->has_operation())
	|| (auth_proxy !=  nullptr && auth_proxy->has_operation());
}

std::string Native::Aaa::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "commands")
    {
        auto ent_ = std::make_shared<Native::Aaa::Accounting::Commands>();
        ent_->parent = this;
        commands.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connection")
    {
        auto ent_ = std::make_shared<Native::Aaa::Accounting::Connection>();
        ent_->parent = this;
        connection.append(ent_);
        return ent_;
    }

    if(child_yang_name == "delay-start")
    {
        if(delay_start == nullptr)
        {
            delay_start = std::make_shared<Native::Aaa::Accounting::DelayStart>();
        }
        return delay_start;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Aaa::Accounting::Dot1x>();
        }
        return dot1x;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Aaa::Accounting::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "exec")
    {
        auto ent_ = std::make_shared<Native::Aaa::Accounting::Exec>();
        ent_->parent = this;
        exec.append(ent_);
        return ent_;
    }

    if(child_yang_name == "exec-submode")
    {
        if(exec_submode == nullptr)
        {
            exec_submode = std::make_shared<Native::Aaa::Accounting::ExecSubmode>();
        }
        return exec_submode;
    }

    if(child_yang_name == "network")
    {
        auto ent_ = std::make_shared<Native::Aaa::Accounting::Network>();
        ent_->parent = this;
        network.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Aaa::Accounting::Send>();
        }
        return send;
    }

    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Aaa::Accounting::Suppress>();
        }
        return suppress;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Native::Aaa::Accounting::System>();
        }
        return system;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::Aaa::Accounting::Update>();
        }
        return update;
    }

    if(child_yang_name == "auth-proxy")
    {
        if(auth_proxy == nullptr)
        {
            auth_proxy = std::make_shared<Native::Aaa::Accounting::AuthProxy>();
        }
        return auth_proxy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : commands.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : connection.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(delay_start != nullptr)
    {
        _children["delay-start"] = delay_start;
    }

    if(dot1x != nullptr)
    {
        _children["dot1x"] = dot1x;
    }

    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    count_ = 0;
    for (auto ent_ : exec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(exec_submode != nullptr)
    {
        _children["exec-submode"] = exec_submode;
    }

    count_ = 0;
    for (auto ent_ : network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send != nullptr)
    {
        _children["send"] = send;
    }

    if(suppress != nullptr)
    {
        _children["suppress"] = suppress;
    }

    if(system != nullptr)
    {
        _children["system"] = system;
    }

    if(update != nullptr)
    {
        _children["update"] = update;
    }

    if(auth_proxy != nullptr)
    {
        _children["auth-proxy"] = auth_proxy;
    }

    return _children;
}

void Native::Aaa::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commands" || name == "connection" || name == "delay-start" || name == "dot1x" || name == "identity" || name == "exec" || name == "exec-submode" || name == "network" || name == "send" || name == "suppress" || name == "system" || name == "update" || name == "auth-proxy")
        return true;
    return false;
}

Native::Aaa::Accounting::Commands::Commands()
    :
    level{YType::uint8, "level"},
    list_name{YType::str, "list-name"},
    action_type{YType::enumeration, "action-type"},
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "commands"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Commands::~Commands()
{
}

bool Native::Aaa::Accounting::Commands::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| list_name.is_set
	|| action_type.is_set
	|| broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Commands::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(list_name.yfilter)
	|| ydk::is_set(action_type.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Commands::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Commands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commands";
    ADD_KEY_TOKEN(level, "level");
    ADD_KEY_TOKEN(list_name, "list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Commands::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.yfilter)) leaf_name_data.push_back(list_name.get_name_leafdata());
    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Commands::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Commands::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-name")
    {
        list_name = value;
        list_name.value_namespace = name_space;
        list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Commands::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "list-name")
    {
        list_name.yfilter = yfilter;
    }
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Commands::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "list-name" || name == "action-type" || name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Connection::Connection()
    :
    name{YType::str, "name"},
    none{YType::empty, "none"}
        ,
    start_stop(std::make_shared<Native::Aaa::Accounting::Connection::StartStop>())
    , stop_only(std::make_shared<Native::Aaa::Accounting::Connection::StopOnly>())
{
    start_stop->parent = this;
    stop_only->parent = this;

    yang_name = "connection"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Connection::~Connection()
{
}

bool Native::Aaa::Accounting::Connection::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(none.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::Connection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Connection::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::Connection::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_stop != nullptr)
    {
        _children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        _children["stop-only"] = stop_only;
    }

    return _children;
}

void Native::Aaa::Accounting::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "stop-only" || name == "name" || name == "none")
        return true;
    return false;
}

Native::Aaa::Accounting::Connection::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::Connection::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Connection::StartStop::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Connection::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Connection::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Connection::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Connection::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Connection::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Connection::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Connection::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Connection::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Connection::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "stop-only"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::Connection::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::Connection::StopOnly::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Connection::StopOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Connection::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Connection::StopOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Connection::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Connection::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Connection::StopOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Connection::StopOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Connection::StopOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::DelayStart::DelayStart()
    :
    extended_delay{YType::uint8, "extended-delay"},
    all{YType::empty, "all"}
{

    yang_name = "delay-start"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::DelayStart::~DelayStart()
{
}

bool Native::Aaa::Accounting::DelayStart::has_data() const
{
    if (is_presence_container) return true;
    return extended_delay.is_set
	|| all.is_set;
}

bool Native::Aaa::Accounting::DelayStart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_delay.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Aaa::Accounting::DelayStart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::DelayStart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::DelayStart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_delay.is_set || is_set(extended_delay.yfilter)) leaf_name_data.push_back(extended_delay.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::DelayStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::DelayStart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::DelayStart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-delay")
    {
        extended_delay = value;
        extended_delay.value_namespace = name_space;
        extended_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::DelayStart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-delay")
    {
        extended_delay.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::DelayStart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-delay" || name == "all")
        return true;
    return false;
}

Native::Aaa::Accounting::Dot1x::Dot1x()
    :
    default_(std::make_shared<Native::Aaa::Accounting::Dot1x::Default>())
    , accounting_list(this, {"name"})
{
    default_->parent = this;

    yang_name = "dot1x"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Dot1x::~Dot1x()
{
}

bool Native::Aaa::Accounting::Dot1x::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<accounting_list.len(); index++)
    {
        if(accounting_list[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Accounting::Dot1x::has_operation() const
{
    for (std::size_t index=0; index<accounting_list.len(); index++)
    {
        if(accounting_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Accounting::Dot1x::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Dot1x::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Dot1x::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Dot1x::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Accounting::Dot1x::Default>();
        }
        return default_;
    }

    if(child_yang_name == "accounting-list")
    {
        auto ent_ = std::make_shared<Native::Aaa::Accounting::Dot1x::AccountingList>();
        ent_->parent = this;
        accounting_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Dot1x::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    count_ = 0;
    for (auto ent_ : accounting_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Aaa::Accounting::Dot1x::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Dot1x::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Dot1x::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "accounting-list")
        return true;
    return false;
}

Native::Aaa::Accounting::Dot1x::Default::Default()
    :
    start_stop(std::make_shared<Native::Aaa::Accounting::Dot1x::Default::StartStop>())
{
    start_stop->parent = this;

    yang_name = "default"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Dot1x::Default::~Default()
{
}

bool Native::Aaa::Accounting::Dot1x::Default::has_data() const
{
    if (is_presence_container) return true;
    return (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::Dot1x::Default::has_operation() const
{
    return is_set(yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::Dot1x::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Dot1x::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Dot1x::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Dot1x::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Dot1x::Default::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Dot1x::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_stop != nullptr)
    {
        _children["start-stop"] = start_stop;
    }

    return _children;
}

void Native::Aaa::Accounting::Dot1x::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Dot1x::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Dot1x::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop")
        return true;
    return false;
}

Native::Aaa::Accounting::Dot1x::Default::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Dot1x::Default::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Dot1x::Default::StartStop::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Dot1x::Default::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Dot1x::Default::StartStop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/dot1x/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Dot1x::Default::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Dot1x::Default::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Dot1x::Default::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Dot1x::Default::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Dot1x::Default::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Dot1x::Default::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Dot1x::Default::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Dot1x::AccountingList::AccountingList()
    :
    name{YType::str, "name"}
        ,
    start_stop(std::make_shared<Native::Aaa::Accounting::Dot1x::AccountingList::StartStop>())
{
    start_stop->parent = this;

    yang_name = "accounting-list"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Dot1x::AccountingList::~AccountingList()
{
}

bool Native::Aaa::Accounting::Dot1x::AccountingList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::Dot1x::AccountingList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::Dot1x::AccountingList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Dot1x::AccountingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Dot1x::AccountingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Dot1x::AccountingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Dot1x::AccountingList::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Dot1x::AccountingList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_stop != nullptr)
    {
        _children["start-stop"] = start_stop;
    }

    return _children;
}

void Native::Aaa::Accounting::Dot1x::AccountingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Dot1x::AccountingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Dot1x::AccountingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "name")
        return true;
    return false;
}

Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "accounting-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Identity::Identity()
    :
    default_(std::make_shared<Native::Aaa::Accounting::Identity::Default>())
    , accounting_list(this, {"name"})
{
    default_->parent = this;

    yang_name = "identity"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Identity::~Identity()
{
}

bool Native::Aaa::Accounting::Identity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<accounting_list.len(); index++)
    {
        if(accounting_list[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Accounting::Identity::has_operation() const
{
    for (std::size_t index=0; index<accounting_list.len(); index++)
    {
        if(accounting_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Accounting::Identity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Accounting::Identity::Default>();
        }
        return default_;
    }

    if(child_yang_name == "accounting-list")
    {
        auto ent_ = std::make_shared<Native::Aaa::Accounting::Identity::AccountingList>();
        ent_->parent = this;
        accounting_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    count_ = 0;
    for (auto ent_ : accounting_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Aaa::Accounting::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "accounting-list")
        return true;
    return false;
}

Native::Aaa::Accounting::Identity::Default::Default()
    :
    start_stop(std::make_shared<Native::Aaa::Accounting::Identity::Default::StartStop>())
{
    start_stop->parent = this;

    yang_name = "default"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Identity::Default::~Default()
{
}

bool Native::Aaa::Accounting::Identity::Default::has_data() const
{
    if (is_presence_container) return true;
    return (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::Identity::Default::has_operation() const
{
    return is_set(yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::Identity::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/identity/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Identity::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Identity::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Identity::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Identity::Default::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Identity::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_stop != nullptr)
    {
        _children["start-stop"] = start_stop;
    }

    return _children;
}

void Native::Aaa::Accounting::Identity::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Identity::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Identity::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop")
        return true;
    return false;
}

Native::Aaa::Accounting::Identity::Default::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Identity::Default::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Identity::Default::StartStop::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Identity::Default::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Identity::Default::StartStop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/identity/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Identity::Default::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Identity::Default::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Identity::Default::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Identity::Default::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Identity::Default::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Identity::Default::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Identity::Default::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Identity::AccountingList::AccountingList()
    :
    name{YType::str, "name"}
        ,
    start_stop(std::make_shared<Native::Aaa::Accounting::Identity::AccountingList::StartStop>())
{
    start_stop->parent = this;

    yang_name = "accounting-list"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Identity::AccountingList::~AccountingList()
{
}

bool Native::Aaa::Accounting::Identity::AccountingList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::Identity::AccountingList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::Identity::AccountingList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/identity/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Identity::AccountingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Identity::AccountingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Identity::AccountingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Identity::AccountingList::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Identity::AccountingList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_stop != nullptr)
    {
        _children["start-stop"] = start_stop;
    }

    return _children;
}

void Native::Aaa::Accounting::Identity::AccountingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Identity::AccountingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Identity::AccountingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "name")
        return true;
    return false;
}

Native::Aaa::Accounting::Identity::AccountingList::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "accounting-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::Identity::AccountingList::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Identity::AccountingList::StartStop::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Identity::AccountingList::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Identity::AccountingList::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Identity::AccountingList::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Identity::AccountingList::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Identity::AccountingList::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Identity::AccountingList::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Identity::AccountingList::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Identity::AccountingList::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Exec::Exec()
    :
    name{YType::str, "name"},
    none{YType::empty, "none"}
        ,
    start_stop(std::make_shared<Native::Aaa::Accounting::Exec::StartStop>())
    , stop_only(std::make_shared<Native::Aaa::Accounting::Exec::StopOnly>())
{
    start_stop->parent = this;
    stop_only->parent = this;

    yang_name = "exec"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Exec::~Exec()
{
}

bool Native::Aaa::Accounting::Exec::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(none.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Exec::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::Exec::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_stop != nullptr)
    {
        _children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        _children["stop-only"] = stop_only;
    }

    return _children;
}

void Native::Aaa::Accounting::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "stop-only" || name == "name" || name == "none")
        return true;
    return false;
}

Native::Aaa::Accounting::Exec::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::Exec::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Exec::StartStop::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Exec::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Exec::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Exec::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Exec::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Exec::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Exec::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Exec::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Exec::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Exec::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "stop-only"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::Exec::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::Exec::StopOnly::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Exec::StopOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Exec::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Exec::StopOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Exec::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Exec::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Exec::StopOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Exec::StopOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Exec::StopOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::ExecSubmode()
    :
    exec(this, {"name"})
{

    yang_name = "exec-submode"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::ExecSubmode::~ExecSubmode()
{
}

bool Native::Aaa::Accounting::ExecSubmode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exec.len(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Accounting::ExecSubmode::has_operation() const
{
    for (std::size_t index=0; index<exec.len(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Accounting::ExecSubmode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::ExecSubmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-submode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::ExecSubmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        auto ent_ = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec>();
        ent_->parent = this;
        exec.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::ExecSubmode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : exec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Aaa::Accounting::ExecSubmode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::ExecSubmode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::ExecSubmode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::Exec()
    :
    name{YType::str, "name"}
        ,
    action_type(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType>())
{
    action_type->parent = this;

    yang_name = "exec"; yang_parent_name = "exec-submode"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::ExecSubmode::Exec::~Exec()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (action_type !=  nullptr && action_type->has_data());
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (action_type !=  nullptr && action_type->has_operation());
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/exec-submode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::ExecSubmode::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType>();
        }
        return action_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action_type != nullptr)
    {
        _children["action-type"] = action_type;
    }

    return _children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type" || name == "name")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::ActionType()
    :
    none{YType::empty, "none"}
        ,
    start_stop(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop>())
    , stop_only(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly>())
{
    start_stop->parent = this;
    stop_only->parent = this;

    yang_name = "action-type"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::~ActionType()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_stop != nullptr)
    {
        _children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        _children["stop-only"] = stop_only;
    }

    return _children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "stop-only" || name == "none")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "action-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "stop-only"; yang_parent_name = "action-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::Network()
    :
    id{YType::str, "id"},
    none{YType::empty, "none"},
    mode{YType::enumeration, "mode"},
    broadcast{YType::empty, "broadcast"}
        ,
    start_stop(std::make_shared<Native::Aaa::Accounting::Network::StartStop>())
    , a1(std::make_shared<Native::Aaa::Accounting::Network::A1>())
    , a2(std::make_shared<Native::Aaa::Accounting::Network::A2>())
    , a3(std::make_shared<Native::Aaa::Accounting::Network::A3>())
    , a4(std::make_shared<Native::Aaa::Accounting::Network::A4>())
{
    start_stop->parent = this;
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "network"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Network::~Network()
{
}

bool Native::Aaa::Accounting::Network::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| none.is_set
	|| mode.is_set
	|| broadcast.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Accounting::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Accounting::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Network::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Accounting::Network::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Accounting::Network::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Accounting::Network::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Accounting::Network::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_stop != nullptr)
    {
        _children["start-stop"] = start_stop;
    }

    if(a1 != nullptr)
    {
        _children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        _children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        _children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        _children["a4"] = a4;
    }

    return _children;
}

void Native::Aaa::Accounting::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "id" || name == "none" || name == "mode" || name == "broadcast")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::StartStop::StartStop()
    :
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::Network::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Network::StartStop::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Network::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Network::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Network::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A1::A1()
    :
    group{YType::str, "group"}
{

    yang_name = "a1"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::Network::A1::~A1()
{
}

bool Native::Aaa::Accounting::Network::A1::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Network::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Network::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Network::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A2::A2()
    :
    group{YType::str, "group"}
{

    yang_name = "a2"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::Network::A2::~A2()
{
}

bool Native::Aaa::Accounting::Network::A2::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Network::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Network::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Network::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A3::A3()
    :
    group{YType::str, "group"}
{

    yang_name = "a3"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::Network::A3::~A3()
{
}

bool Native::Aaa::Accounting::Network::A3::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Network::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Network::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Network::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A4::A4()
    :
    group{YType::str, "group"}
{

    yang_name = "a4"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Accounting::Network::A4::~A4()
{
}

bool Native::Aaa::Accounting::Network::A4::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Network::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Network::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Network::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::Send()
    :
    counters(std::make_shared<Native::Aaa::Accounting::Send::Counters>())
    , stop_record(std::make_shared<Native::Aaa::Accounting::Send::StopRecord>())
{
    counters->parent = this;
    stop_record->parent = this;

    yang_name = "send"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Send::~Send()
{
}

bool Native::Aaa::Accounting::Send::has_data() const
{
    if (is_presence_container) return true;
    return (counters !=  nullptr && counters->has_data())
	|| (stop_record !=  nullptr && stop_record->has_data());
}

bool Native::Aaa::Accounting::Send::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (stop_record !=  nullptr && stop_record->has_operation());
}

std::string Native::Aaa::Accounting::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Native::Aaa::Accounting::Send::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "stop-record")
    {
        if(stop_record == nullptr)
        {
            stop_record = std::make_shared<Native::Aaa::Accounting::Send::StopRecord>();
        }
        return stop_record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    if(stop_record != nullptr)
    {
        _children["stop-record"] = stop_record;
    }

    return _children;
}

void Native::Aaa::Accounting::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "stop-record")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::Counters::Counters()
    :
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "counters"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Send::Counters::~Counters()
{
}

bool Native::Aaa::Accounting::Send::Counters::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set;
}

bool Native::Aaa::Accounting::Send::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Aaa::Accounting::Send::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Send::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Send::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Send::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::StopRecord()
    :
    always{YType::empty, "always"}
        ,
    authentication(std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication>())
{
    authentication->parent = this;

    yang_name = "stop-record"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Send::StopRecord::~StopRecord()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::has_data() const
{
    if (is_presence_container) return true;
    return always.is_set
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Send::StopRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Send::StopRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void Native::Aaa::Accounting::Send::StopRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::StopRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::StopRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "always")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Authentication()
    :
    failure(nullptr) // presence node
    , success(std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success>())
{
    success->parent = this;

    yang_name = "authentication"; yang_parent_name = "stop-record"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::~Authentication()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (failure !=  nullptr && failure->has_data())
	|| (success !=  nullptr && success->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation())
	|| (success !=  nullptr && success->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure>();
        }
        return failure;
    }

    if(child_yang_name == "success")
    {
        if(success == nullptr)
        {
            success = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success>();
        }
        return success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(failure != nullptr)
    {
        _children["failure"] = failure;
    }

    if(success != nullptr)
    {
        _children["success"] = success;
    }

    return _children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "success")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::Failure()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "failure"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::~Failure()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set;
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::Success()
    :
    remote_server(nullptr) // presence node
{

    yang_name = "success"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::~Success()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::has_data() const
{
    if (is_presence_container) return true;
    return (remote_server !=  nullptr && remote_server->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::has_operation() const
{
    return is_set(yfilter)
	|| (remote_server !=  nullptr && remote_server->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-server")
    {
        if(remote_server == nullptr)
        {
            remote_server = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer>();
        }
        return remote_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_server != nullptr)
    {
        _children["remote-server"] = remote_server;
    }

    return _children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-server")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::RemoteServer()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "remote-server"; yang_parent_name = "success"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::~RemoteServer()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set;
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/success/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Aaa::Accounting::Suppress::Suppress()
    :
    null_username{YType::empty, "null-username"}
{

    yang_name = "suppress"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Suppress::~Suppress()
{
}

bool Native::Aaa::Accounting::Suppress::has_data() const
{
    if (is_presence_container) return true;
    return null_username.is_set;
}

bool Native::Aaa::Accounting::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null_username.yfilter);
}

std::string Native::Aaa::Accounting::Suppress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_username.is_set || is_set(null_username.yfilter)) leaf_name_data.push_back(null_username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null-username")
    {
        null_username = value;
        null_username.value_namespace = name_space;
        null_username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null-username")
    {
        null_username.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null-username")
        return true;
    return false;
}

Native::Aaa::Accounting::System::System()
    :
    guarantee_first{YType::boolean, "guarantee-first"}
        ,
    default_(nullptr) // presence node
{

    yang_name = "system"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::System::~System()
{
}

bool Native::Aaa::Accounting::System::has_data() const
{
    if (is_presence_container) return true;
    return guarantee_first.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Accounting::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(guarantee_first.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Accounting::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (guarantee_first.is_set || is_set(guarantee_first.yfilter)) leaf_name_data.push_back(guarantee_first.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Accounting::System::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::System::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Aaa::Accounting::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "guarantee-first")
    {
        guarantee_first = value;
        guarantee_first.value_namespace = name_space;
        guarantee_first.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "guarantee-first")
    {
        guarantee_first.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "guarantee-first")
        return true;
    return false;
}

Native::Aaa::Accounting::System::Default::Default()
    :
    none{YType::empty, "none"},
    vrf{YType::str, "vrf"}
        ,
    start_stop(std::make_shared<Native::Aaa::Accounting::System::Default::StartStop>())
{
    start_stop->parent = this;

    yang_name = "default"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Accounting::System::Default::~Default()
{
}

bool Native::Aaa::Accounting::System::Default::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| vrf.is_set
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::System::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::System::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::System::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::System::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::System::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::System::Default::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::System::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_stop != nullptr)
    {
        _children["start-stop"] = start_stop;
    }

    return _children;
}

void Native::Aaa::Accounting::System::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::System::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::System::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "none" || name == "vrf")
        return true;
    return false;
}

Native::Aaa::Accounting::System::Default::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::System::Default::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::System::Default::StartStop::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::System::Default::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::System::Default::StartStop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/system/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::System::Default::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::System::Default::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::System::Default::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::System::Default::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::System::Default::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::System::Default::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::System::Default::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Update::Update()
    :
    periodic{YType::uint32, "periodic"}
{

    yang_name = "update"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::Update::~Update()
{
}

bool Native::Aaa::Accounting::Update::has_data() const
{
    if (is_presence_container) return true;
    return periodic.is_set;
}

bool Native::Aaa::Accounting::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(periodic.yfilter);
}

std::string Native::Aaa::Accounting::Update::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic")
        return true;
    return false;
}

Native::Aaa::Accounting::AuthProxy::AuthProxy()
    :
    default_(std::make_shared<Native::Aaa::Accounting::AuthProxy::Default>())
{
    default_->parent = this;

    yang_name = "auth-proxy"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::AuthProxy::~AuthProxy()
{
}

bool Native::Aaa::Accounting::AuthProxy::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Accounting::AuthProxy::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Accounting::AuthProxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::AuthProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::AuthProxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::AuthProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Accounting::AuthProxy::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::AuthProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Aaa::Accounting::AuthProxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::AuthProxy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::AuthProxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Accounting::AuthProxy::Default::Default()
    :
    start_stop(std::make_shared<Native::Aaa::Accounting::AuthProxy::Default::StartStop>())
{
    start_stop->parent = this;

    yang_name = "default"; yang_parent_name = "auth-proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::AuthProxy::Default::~Default()
{
}

bool Native::Aaa::Accounting::AuthProxy::Default::has_data() const
{
    if (is_presence_container) return true;
    return (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::AuthProxy::Default::has_operation() const
{
    return is_set(yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::AuthProxy::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/auth-proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::AuthProxy::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::AuthProxy::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::AuthProxy::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::AuthProxy::Default::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::AuthProxy::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_stop != nullptr)
    {
        _children["start-stop"] = start_stop;
    }

    return _children;
}

void Native::Aaa::Accounting::AuthProxy::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::AuthProxy::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::AuthProxy::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop")
        return true;
    return false;
}

Native::Aaa::Accounting::AuthProxy::Default::StartStop::StartStop()
    :
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Accounting::AuthProxy::Default::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::AuthProxy::Default::StartStop::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Aaa::Accounting::AuthProxy::Default::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::AuthProxy::Default::StartStop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/auth-proxy/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::AuthProxy::Default::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::AuthProxy::Default::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Accounting::AuthProxy::Default::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Accounting::AuthProxy::Default::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Accounting::AuthProxy::Default::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::AuthProxy::Default::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::AuthProxy::Default::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Server::Server()
    :
    radius(std::make_shared<Native::Aaa::Server::Radius>())
{
    radius->parent = this;

    yang_name = "server"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::~Server()
{
}

bool Native::Aaa::Server::has_data() const
{
    if (is_presence_container) return true;
    return (radius !=  nullptr && radius->has_data());
}

bool Native::Aaa::Server::has_operation() const
{
    return is_set(yfilter)
	|| (radius !=  nullptr && radius->has_operation());
}

std::string Native::Aaa::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Aaa::Server::Radius>();
        }
        return radius;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(radius != nullptr)
    {
        _children["radius"] = radius;
    }

    return _children;
}

void Native::Aaa::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Radius()
    :
    dynamic_author(nullptr) // presence node
    , policy_device(nullptr) // presence node
    , proxy(nullptr) // presence node
    , sesm(nullptr) // presence node
{

    yang_name = "radius"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::~Radius()
{
}

bool Native::Aaa::Server::Radius::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic_author !=  nullptr && dynamic_author->has_data())
	|| (policy_device !=  nullptr && policy_device->has_data())
	|| (proxy !=  nullptr && proxy->has_data())
	|| (sesm !=  nullptr && sesm->has_data());
}

bool Native::Aaa::Server::Radius::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic_author !=  nullptr && dynamic_author->has_operation())
	|| (policy_device !=  nullptr && policy_device->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation())
	|| (sesm !=  nullptr && sesm->has_operation());
}

std::string Native::Aaa::Server::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-author")
    {
        if(dynamic_author == nullptr)
        {
            dynamic_author = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor>();
        }
        return dynamic_author;
    }

    if(child_yang_name == "policy-device")
    {
        if(policy_device == nullptr)
        {
            policy_device = std::make_shared<Native::Aaa::Server::Radius::PolicyDevice>();
        }
        return policy_device;
    }

    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Native::Aaa::Server::Radius::Proxy>();
        }
        return proxy;
    }

    if(child_yang_name == "sesm")
    {
        if(sesm == nullptr)
        {
            sesm = std::make_shared<Native::Aaa::Server::Radius::Sesm>();
        }
        return sesm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic_author != nullptr)
    {
        _children["dynamic-author"] = dynamic_author;
    }

    if(policy_device != nullptr)
    {
        _children["policy-device"] = policy_device;
    }

    if(proxy != nullptr)
    {
        _children["proxy"] = proxy;
    }

    if(sesm != nullptr)
    {
        _children["sesm"] = sesm;
    }

    return _children;
}

void Native::Aaa::Server::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-author" || name == "policy-device" || name == "proxy" || name == "sesm")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::DynamicAuthor()
    :
    port{YType::uint16, "port"},
    auth_type{YType::enumeration, "auth-type"}
        ,
    client(this, {"ip"})
    , server_key(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::ServerKey>())
    , domain(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Ignore>())
{
    server_key->parent = this;
    domain->parent = this;
    ignore->parent = this;

    yang_name = "dynamic-author"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::DynamicAuthor::~DynamicAuthor()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return port.is_set
	|| auth_type.is_set
	|| (server_key !=  nullptr && server_key->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| (server_key !=  nullptr && server_key->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-author";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::DynamicAuthor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    if(child_yang_name == "server-key")
    {
        if(server_key == nullptr)
        {
            server_key = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::ServerKey>();
        }
        return server_key;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::DynamicAuthor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(server_key != nullptr)
    {
        _children["server-key"] = server_key;
    }

    if(domain != nullptr)
    {
        _children["domain"] = domain;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "server-key" || name == "domain" || name == "ignore" || name == "port" || name == "auth-type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Client()
    :
    ip{YType::str, "ip"},
    dtls{YType::empty, "dtls"}
        ,
    vrf(this, {"name"})
    , server_key(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey>())
{
    server_key->parent = this;

    yang_name = "client"; yang_parent_name = "dynamic-author"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return ip.is_set
	|| dtls.is_set
	|| (server_key !=  nullptr && server_key->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(dtls.yfilter)
	|| (server_key !=  nullptr && server_key->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (dtls.is_set || is_set(dtls.yfilter)) leaf_name_data.push_back(dtls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "server-key")
    {
        if(server_key == nullptr)
        {
            server_key = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey>();
        }
        return server_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(server_key != nullptr)
    {
        _children["server-key"] = server_key;
    }

    return _children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtls")
    {
        dtls = value;
        dtls.value_namespace = name_space;
        dtls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "dtls")
    {
        dtls.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "server-key" || name == "ip" || name == "dtls")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::Vrf()
    :
    name{YType::str, "name"},
    dtls{YType::empty, "dtls"}
        ,
    server_key(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey>())
{
    server_key->parent = this;

    yang_name = "vrf"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::~Vrf()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| dtls.is_set
	|| (server_key !=  nullptr && server_key->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(dtls.yfilter)
	|| (server_key !=  nullptr && server_key->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (dtls.is_set || is_set(dtls.yfilter)) leaf_name_data.push_back(dtls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-key")
    {
        if(server_key == nullptr)
        {
            server_key = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey>();
        }
        return server_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(server_key != nullptr)
    {
        _children["server-key"] = server_key;
    }

    return _children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtls")
    {
        dtls = value;
        dtls.value_namespace = name_space;
        dtls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "dtls")
    {
        dtls.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-key" || name == "name" || name == "dtls")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::ServerKey()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "server-key"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::~ServerKey()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::ServerKey()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "server-key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::~ServerKey()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::ServerKey()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "server-key"; yang_parent_name = "dynamic-author"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::~ServerKey()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Domain()
    :
    delimiter{YType::str, "delimiter"}
        ,
    stripping(nullptr) // presence node
{

    yang_name = "domain"; yang_parent_name = "dynamic-author"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::~Domain()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::has_data() const
{
    if (is_presence_container) return true;
    return delimiter.is_set
	|| (stripping !=  nullptr && stripping->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delimiter.yfilter)
	|| (stripping !=  nullptr && stripping->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delimiter.is_set || is_set(delimiter.yfilter)) leaf_name_data.push_back(delimiter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stripping")
    {
        if(stripping == nullptr)
        {
            stripping = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping>();
        }
        return stripping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stripping != nullptr)
    {
        _children["stripping"] = stripping;
    }

    return _children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delimiter")
    {
        delimiter = value;
        delimiter.value_namespace = name_space;
        delimiter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delimiter")
    {
        delimiter.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stripping" || name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::Stripping()
    :
    right_to_left{YType::empty, "right-to-left"}
{

    yang_name = "stripping"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::~Stripping()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_data() const
{
    if (is_presence_container) return true;
    return right_to_left.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(right_to_left.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stripping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (right_to_left.is_set || is_set(right_to_left.yfilter)) leaf_name_data.push_back(right_to_left.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "right-to-left")
    {
        right_to_left = value;
        right_to_left.value_namespace = name_space;
        right_to_left.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "right-to-left")
    {
        right_to_left.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "right-to-left")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Ignore::Ignore()
    :
    retransmission{YType::empty, "retransmission"},
    server_key{YType::empty, "server-key"},
    session_key{YType::empty, "session-key"}
{

    yang_name = "ignore"; yang_parent_name = "dynamic-author"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::DynamicAuthor::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return retransmission.is_set
	|| server_key.is_set
	|| session_key.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retransmission.yfilter)
	|| ydk::is_set(server_key.yfilter)
	|| ydk::is_set(session_key.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Ignore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retransmission.is_set || is_set(retransmission.yfilter)) leaf_name_data.push_back(retransmission.get_name_leafdata());
    if (server_key.is_set || is_set(server_key.yfilter)) leaf_name_data.push_back(server_key.get_name_leafdata());
    if (session_key.is_set || is_set(session_key.yfilter)) leaf_name_data.push_back(session_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::DynamicAuthor::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retransmission")
    {
        retransmission = value;
        retransmission.value_namespace = name_space;
        retransmission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-key")
    {
        server_key = value;
        server_key.value_namespace = name_space;
        server_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-key")
    {
        session_key = value;
        session_key.value_namespace = name_space;
        session_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retransmission")
    {
        retransmission.yfilter = yfilter;
    }
    if(value_path == "server-key")
    {
        server_key.yfilter = yfilter;
    }
    if(value_path == "session-key")
    {
        session_key.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission" || name == "server-key" || name == "session-key")
        return true;
    return false;
}

Native::Aaa::Server::Radius::PolicyDevice::PolicyDevice()
    :
    accounting(std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Accounting>())
    , authentication(std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Authentication>())
    , client(this, {"ip"})
    , key(std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Key>())
    , message_authenticator(std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator>())
{
    accounting->parent = this;
    authentication->parent = this;
    key->parent = this;
    message_authenticator->parent = this;

    yang_name = "policy-device"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::PolicyDevice::~PolicyDevice()
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (message_authenticator !=  nullptr && message_authenticator->has_data());
}

bool Native::Aaa::Server::Radius::PolicyDevice::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (message_authenticator !=  nullptr && message_authenticator->has_operation());
}

std::string Native::Aaa::Server::Radius::PolicyDevice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::PolicyDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::PolicyDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::PolicyDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Key>();
        }
        return key;
    }

    if(child_yang_name == "message-authenticator")
    {
        if(message_authenticator == nullptr)
        {
            message_authenticator = std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator>();
        }
        return message_authenticator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::PolicyDevice::get_children() const
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

    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(message_authenticator != nullptr)
    {
        _children["message-authenticator"] = message_authenticator;
    }

    return _children;
}

void Native::Aaa::Server::Radius::PolicyDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::PolicyDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "client" || name == "key" || name == "message-authenticator")
        return true;
    return false;
}

Native::Aaa::Server::Radius::PolicyDevice::Accounting::Accounting()
    :
    port{YType::uint16, "port"}
{

    yang_name = "accounting"; yang_parent_name = "policy-device"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::PolicyDevice::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set;
}

bool Native::Aaa::Server::Radius::PolicyDevice::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Aaa::Server::Radius::PolicyDevice::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/policy-device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::PolicyDevice::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::PolicyDevice::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::PolicyDevice::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::PolicyDevice::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::PolicyDevice::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::PolicyDevice::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::PolicyDevice::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::PolicyDevice::Authentication::Authentication()
    :
    port{YType::uint16, "port"}
{

    yang_name = "authentication"; yang_parent_name = "policy-device"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::PolicyDevice::Authentication::~Authentication()
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set;
}

bool Native::Aaa::Server::Radius::PolicyDevice::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Aaa::Server::Radius::PolicyDevice::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/policy-device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::PolicyDevice::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::PolicyDevice::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::PolicyDevice::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::PolicyDevice::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::PolicyDevice::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::PolicyDevice::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::PolicyDevice::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::PolicyDevice::Client::Client()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
        ,
    vrf(this, {"name"})
    , key(std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Client::Key>())
{
    key->parent = this;

    yang_name = "client"; yang_parent_name = "policy-device"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::PolicyDevice::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return ip.is_set
	|| port.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Aaa::Server::Radius::PolicyDevice::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/policy-device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::PolicyDevice::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::PolicyDevice::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::PolicyDevice::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Client::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::PolicyDevice::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Aaa::Server::Radius::PolicyDevice::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::PolicyDevice::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "key" || name == "ip" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Vrf()
    :
    name{YType::str, "name"},
    port{YType::uint16, "port"}
        ,
    key(std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key>())
{
    key->parent = this;

    yang_name = "vrf"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::~Vrf()
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| port.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::PolicyDevice::Client::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::PolicyDevice::Client::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::PolicyDevice::Client::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::PolicyDevice::Client::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::PolicyDevice::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::PolicyDevice::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::PolicyDevice::Client::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::PolicyDevice::Client::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::PolicyDevice::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "policy-device"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::PolicyDevice::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::PolicyDevice::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::PolicyDevice::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/policy-device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::PolicyDevice::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::PolicyDevice::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::PolicyDevice::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::PolicyDevice::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::PolicyDevice::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::PolicyDevice::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::PolicyDevice::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::MessageAuthenticator()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "message-authenticator"; yang_parent_name = "policy-device"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/policy-device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Proxy()
    :
    accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::Accounting>())
    , authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::Authentication>())
    , calling_station_id(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId>())
    , eap_user(std::make_shared<Native::Aaa::Server::Radius::Proxy::EapUser>())
    , filter(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter>())
    , key(std::make_shared<Native::Aaa::Server::Radius::Proxy::Key>())
    , message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Proxy::MessageAuthenticator>())
    , mode(std::make_shared<Native::Aaa::Server::Radius::Proxy::Mode>())
    , pwlan_session(std::make_shared<Native::Aaa::Server::Radius::Proxy::PwlanSession>())
    , re_authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ReAuthentication>())
    , session_identifier(std::make_shared<Native::Aaa::Server::Radius::Proxy::SessionIdentifier>())
    , timer(std::make_shared<Native::Aaa::Server::Radius::Proxy::Timer>())
    , client_ip(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp>())
    , client_ip_mask(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask>())
    , client_ip_vrf(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf>())
    , client_ip_mask_vrf(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf>())
    , send(std::make_shared<Native::Aaa::Server::Radius::Proxy::Send>())
{
    accounting->parent = this;
    authentication->parent = this;
    calling_station_id->parent = this;
    eap_user->parent = this;
    filter->parent = this;
    key->parent = this;
    message_authenticator->parent = this;
    mode->parent = this;
    pwlan_session->parent = this;
    re_authentication->parent = this;
    session_identifier->parent = this;
    timer->parent = this;
    client_ip->parent = this;
    client_ip_mask->parent = this;
    client_ip_vrf->parent = this;
    client_ip_mask_vrf->parent = this;
    send->parent = this;

    yang_name = "proxy"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::~Proxy()
{
}

bool Native::Aaa::Server::Radius::Proxy::has_data() const
{
    if (is_presence_container) return true;
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (calling_station_id !=  nullptr && calling_station_id->has_data())
	|| (eap_user !=  nullptr && eap_user->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (message_authenticator !=  nullptr && message_authenticator->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (pwlan_session !=  nullptr && pwlan_session->has_data())
	|| (re_authentication !=  nullptr && re_authentication->has_data())
	|| (session_identifier !=  nullptr && session_identifier->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (client_ip !=  nullptr && client_ip->has_data())
	|| (client_ip_mask !=  nullptr && client_ip_mask->has_data())
	|| (client_ip_vrf !=  nullptr && client_ip_vrf->has_data())
	|| (client_ip_mask_vrf !=  nullptr && client_ip_mask_vrf->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (calling_station_id !=  nullptr && calling_station_id->has_operation())
	|| (eap_user !=  nullptr && eap_user->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (message_authenticator !=  nullptr && message_authenticator->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (pwlan_session !=  nullptr && pwlan_session->has_operation())
	|| (re_authentication !=  nullptr && re_authentication->has_operation())
	|| (session_identifier !=  nullptr && session_identifier->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (client_ip !=  nullptr && client_ip->has_operation())
	|| (client_ip_mask !=  nullptr && client_ip_mask->has_operation())
	|| (client_ip_vrf !=  nullptr && client_ip_vrf->has_operation())
	|| (client_ip_mask_vrf !=  nullptr && client_ip_mask_vrf->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "calling-station-id")
    {
        if(calling_station_id == nullptr)
        {
            calling_station_id = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId>();
        }
        return calling_station_id;
    }

    if(child_yang_name == "eap-user")
    {
        if(eap_user == nullptr)
        {
            eap_user = std::make_shared<Native::Aaa::Server::Radius::Proxy::EapUser>();
        }
        return eap_user;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Proxy::Key>();
        }
        return key;
    }

    if(child_yang_name == "message-authenticator")
    {
        if(message_authenticator == nullptr)
        {
            message_authenticator = std::make_shared<Native::Aaa::Server::Radius::Proxy::MessageAuthenticator>();
        }
        return message_authenticator;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Aaa::Server::Radius::Proxy::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "pwlan-session")
    {
        if(pwlan_session == nullptr)
        {
            pwlan_session = std::make_shared<Native::Aaa::Server::Radius::Proxy::PwlanSession>();
        }
        return pwlan_session;
    }

    if(child_yang_name == "re-authentication")
    {
        if(re_authentication == nullptr)
        {
            re_authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ReAuthentication>();
        }
        return re_authentication;
    }

    if(child_yang_name == "session-identifier")
    {
        if(session_identifier == nullptr)
        {
            session_identifier = std::make_shared<Native::Aaa::Server::Radius::Proxy::SessionIdentifier>();
        }
        return session_identifier;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Aaa::Server::Radius::Proxy::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "client-ip")
    {
        if(client_ip == nullptr)
        {
            client_ip = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp>();
        }
        return client_ip;
    }

    if(child_yang_name == "client-ip-mask")
    {
        if(client_ip_mask == nullptr)
        {
            client_ip_mask = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask>();
        }
        return client_ip_mask;
    }

    if(child_yang_name == "client-ip-vrf")
    {
        if(client_ip_vrf == nullptr)
        {
            client_ip_vrf = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf>();
        }
        return client_ip_vrf;
    }

    if(child_yang_name == "client-ip-mask-vrf")
    {
        if(client_ip_mask_vrf == nullptr)
        {
            client_ip_mask_vrf = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf>();
        }
        return client_ip_mask_vrf;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Aaa::Server::Radius::Proxy::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::get_children() const
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

    if(calling_station_id != nullptr)
    {
        _children["calling-station-id"] = calling_station_id;
    }

    if(eap_user != nullptr)
    {
        _children["eap-user"] = eap_user;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(message_authenticator != nullptr)
    {
        _children["message-authenticator"] = message_authenticator;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(pwlan_session != nullptr)
    {
        _children["pwlan-session"] = pwlan_session;
    }

    if(re_authentication != nullptr)
    {
        _children["re-authentication"] = re_authentication;
    }

    if(session_identifier != nullptr)
    {
        _children["session-identifier"] = session_identifier;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    if(client_ip != nullptr)
    {
        _children["client-ip"] = client_ip;
    }

    if(client_ip_mask != nullptr)
    {
        _children["client-ip-mask"] = client_ip_mask;
    }

    if(client_ip_vrf != nullptr)
    {
        _children["client-ip-vrf"] = client_ip_vrf;
    }

    if(client_ip_mask_vrf != nullptr)
    {
        _children["client-ip-mask-vrf"] = client_ip_mask_vrf;
    }

    if(send != nullptr)
    {
        _children["send"] = send;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "calling-station-id" || name == "eap-user" || name == "filter" || name == "key" || name == "message-authenticator" || name == "mode" || name == "pwlan-session" || name == "re-authentication" || name == "session-identifier" || name == "timer" || name == "client-ip" || name == "client-ip-mask" || name == "client-ip-vrf" || name == "client-ip-mask-vrf" || name == "send")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Accounting::Accounting()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::Accounting::MethodList>())
{
    method_list->parent = this;

    yang_name = "accounting"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::Accounting::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-name")
    {
        method_name = value;
        method_name.value_namespace = name_space;
        method_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-name")
    {
        method_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Authentication::Authentication()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::Authentication::MethodList>())
{
    method_list->parent = this;

    yang_name = "authentication"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::Authentication::~Authentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::Authentication::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-name")
    {
        method_name = value;
        method_name.value_namespace = name_space;
        method_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-name")
    {
        method_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::CallingStationId()
    :
    format(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format>())
{
    format->parent = this;

    yang_name = "calling-station-id"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::~CallingStationId()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::has_data() const
{
    if (is_presence_container) return true;
    return (format !=  nullptr && format->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::has_operation() const
{
    return is_set(yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calling-station-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(format != nullptr)
    {
        _children["format"] = format;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::Format()
    :
    msisdn{YType::empty, "msisdn"}
        ,
    mac_address(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "format"; yang_parent_name = "calling-station-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::~Format()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::has_data() const
{
    if (is_presence_container) return true;
    return msisdn.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msisdn.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msisdn.is_set || is_set(msisdn.yfilter)) leaf_name_data.push_back(msisdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msisdn")
    {
        msisdn = value;
        msisdn.value_namespace = name_space;
        msisdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msisdn")
    {
        msisdn.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "msisdn")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::MacAddress()
    :
    none{YType::empty, "none"}
        ,
    default_(nullptr) // presence node
    , ietf(nullptr) // presence node
    , one_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte>())
    , three_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte>())
    , two_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte>())
    , unformatted(nullptr) // presence node
{
    one_byte->parent = this;
    three_byte->parent = this;
    two_byte->parent = this;

    yang_name = "mac-address"; yang_parent_name = "format"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::~MacAddress()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (ietf !=  nullptr && ietf->has_data())
	|| (one_byte !=  nullptr && one_byte->has_data())
	|| (three_byte !=  nullptr && three_byte->has_data())
	|| (two_byte !=  nullptr && two_byte->has_data())
	|| (unformatted !=  nullptr && unformatted->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (ietf !=  nullptr && ietf->has_operation())
	|| (one_byte !=  nullptr && one_byte->has_operation())
	|| (three_byte !=  nullptr && three_byte->has_operation())
	|| (two_byte !=  nullptr && two_byte->has_operation())
	|| (unformatted !=  nullptr && unformatted->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default>();
        }
        return default_;
    }

    if(child_yang_name == "ietf")
    {
        if(ietf == nullptr)
        {
            ietf = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf>();
        }
        return ietf;
    }

    if(child_yang_name == "one-byte")
    {
        if(one_byte == nullptr)
        {
            one_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte>();
        }
        return one_byte;
    }

    if(child_yang_name == "three-byte")
    {
        if(three_byte == nullptr)
        {
            three_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte>();
        }
        return three_byte;
    }

    if(child_yang_name == "two-byte")
    {
        if(two_byte == nullptr)
        {
            two_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte>();
        }
        return two_byte;
    }

    if(child_yang_name == "unformatted")
    {
        if(unformatted == nullptr)
        {
            unformatted = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted>();
        }
        return unformatted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(ietf != nullptr)
    {
        _children["ietf"] = ietf;
    }

    if(one_byte != nullptr)
    {
        _children["one-byte"] = one_byte;
    }

    if(three_byte != nullptr)
    {
        _children["three-byte"] = three_byte;
    }

    if(two_byte != nullptr)
    {
        _children["two-byte"] = two_byte;
    }

    if(unformatted != nullptr)
    {
        _children["unformatted"] = unformatted;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "ietf" || name == "one-byte" || name == "three-byte" || name == "two-byte" || name == "unformatted" || name == "none")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::Default()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "default"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::~Default()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::Ietf()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "ietf"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::~Ietf()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::OneByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "one-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::~OneByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "one-byte"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/one-byte/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/one-byte/delimiter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/one-byte/delimiter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/one-byte/delimiter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::ThreeByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "three-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::~ThreeByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "three-byte"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/three-byte/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/three-byte/delimiter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/three-byte/delimiter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/three-byte/delimiter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::TwoByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "two-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::~TwoByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "two-byte"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/two-byte/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/two-byte/delimiter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/two-byte/delimiter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/two-byte/delimiter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::Unformatted()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "unformatted"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::~Unformatted()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/calling-station-id/format/mac-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unformatted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::EapUser::EapUser()
    :
    ignore_open_session{YType::empty, "ignore-open-session"}
{

    yang_name = "eap-user"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::EapUser::~EapUser()
{
}

bool Native::Aaa::Server::Radius::Proxy::EapUser::has_data() const
{
    if (is_presence_container) return true;
    return ignore_open_session.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::EapUser::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_open_session.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::EapUser::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::EapUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap-user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::EapUser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_open_session.is_set || is_set(ignore_open_session.yfilter)) leaf_name_data.push_back(ignore_open_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::EapUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::EapUser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::EapUser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session = value;
        ignore_open_session.value_namespace = name_space;
        ignore_open_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::EapUser::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::EapUser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-open-session")
        return true;
    return false;
}

const Enum::YLeaf Native::Aaa::Authentication::Dot1x::Dot1xList::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Dot1x::Dot1xList::Group::ldap {1, "ldap"};

const Enum::YLeaf Native::Aaa::Authentication::Dot1x::Dot1xList::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Dot1x::Dot1xList::Cache::ldap {1, "ldap"};

const Enum::YLeaf Native::Aaa::Authentication::Dot1x::Default::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Dot1x::Default::Group::ldap {1, "ldap"};

const Enum::YLeaf Native::Aaa::Authentication::Dot1x::Default::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Dot1x::Default::Cache::ldap {1, "ldap"};

const Enum::YLeaf Native::Aaa::Authentication::Enable::Default::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Enable::Default::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::Name::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Local::Authentication::Authorization::AuthenType::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Local::Authentication::Authorization::Authorization_::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authorization::AuthType::Default::Group::radius {0, "radius"};

const Enum::YLeaf Native::Aaa::Authorization::Commands::ListName::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authorization::Commands::Group::tacacs__PLUS__ {0, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::Default::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::Default::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::Default::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::Default::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::Default::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::Default::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::AuthorizationList::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::AuthorizationList::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::AuthorizationList::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::AuthorizationList::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::AuthorizationList::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::CredentialDownload::AuthorizationList::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Authorization::Network::Id::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::AuthProxy::Default::Group::radius {0, "radius"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::ListName::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::none {0, "none"};
const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::start_stop {1, "start-stop"};
const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::stop_only {2, "stop-only"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::Group::tacacs__PLUS__ {0, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Connection::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Connection::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Connection::StopOnly::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Connection::StopOnly::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Dot1x::Default::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Dot1x::Default::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Dot1x::AccountingList::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Identity::Default::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Identity::Default::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Identity::AccountingList::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Identity::AccountingList::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Exec::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Exec::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Exec::StopOnly::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Exec::StopOnly::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Network::Id::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Accounting::Network::Mode::start_stop {0, "start-stop"};
const Enum::YLeaf Native::Aaa::Accounting::Network::Mode::stop_only {1, "stop-only"};

const Enum::YLeaf Native::Aaa::Accounting::Network::StartStop::Group::radius {0, "radius"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A1::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A1::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A1::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A2::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A2::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A2::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A3::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A3::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A3::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A4::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A4::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A4::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::System::Default::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::System::Default::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthType::all {0, "all"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthType::any {1, "any"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthType::session_key {2, "session-key"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::Key::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::Key::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::PolicyDevice::Client::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::PolicyDevice::Client::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::PolicyDevice::Client::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::PolicyDevice::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::PolicyDevice::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::PolicyDevice::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::Type::upper_case {1, "upper-case"};


}
}

