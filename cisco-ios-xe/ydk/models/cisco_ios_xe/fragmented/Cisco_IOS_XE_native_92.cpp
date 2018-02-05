
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_92.hpp"
#include "Cisco_IOS_XE_native_93.hpp"
#include "Cisco_IOS_XE_native_94.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Aaa::Authorization::Exec::Exec()
    :
    name{YType::str, "name"}
    	,
    a1(std::make_shared<Native::Aaa::Authorization::Exec::A1>())
	,a2(std::make_shared<Native::Aaa::Authorization::Exec::A2>())
	,a3(std::make_shared<Native::Aaa::Authorization::Exec::A3>())
	,a4(std::make_shared<Native::Aaa::Authorization::Exec::A4>())
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
    path_buffer << "exec" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    path_buffer << "eventmanager" <<"[name='" <<name <<"']";
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Eventmanager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Eventmanager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,a2(std::make_shared<Native::Aaa::Authorization::Network::A2>())
	,a3(std::make_shared<Native::Aaa::Authorization::Network::A3>())
	,a4(std::make_shared<Native::Aaa::Authorization::Network::A4>())
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
    path_buffer << "network" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
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
    group(std::make_shared<Native::Aaa::Authorization::AuthProxy::Default::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "auth-proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthProxy::Default::~Default()
{
}

bool Native::Aaa::Authorization::AuthProxy::Default::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authorization::AuthProxy::Default::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
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


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authorization::AuthProxy::Default::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authorization::AuthProxy::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::AuthProxy::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::AuthProxy::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthProxy::Default::Group::Group()
    :
    radius{YType::empty, "radius"},
    group_name{YType::str, "group-name"}
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthProxy::Default::Group::~Group()
{
}

bool Native::Aaa::Authorization::AuthProxy::Default::Group::has_data() const
{
    return radius.is_set
	|| group_name.is_set;
}

bool Native::Aaa::Authorization::AuthProxy::Default::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(radius.yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Native::Aaa::Authorization::AuthProxy::Default::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-proxy/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthProxy::Default::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthProxy::Default::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (radius.is_set || is_set(radius.yfilter)) leaf_name_data.push_back(radius.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::Default::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::Default::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Authorization::AuthProxy::Default::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "radius")
    {
        radius = value;
        radius.value_namespace = name_space;
        radius.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::AuthProxy::Default::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "radius")
    {
        radius.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::AuthProxy::Default::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius" || name == "group-name")
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
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
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Onep::Default::Group::~Group()
{
}

bool Native::Aaa::Authorization::Onep::Default::Group::has_data() const
{
    for (std::size_t index=0; index<group_word.size(); index++)
    {
        if(group_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Authorization::Onep::Default::Group::has_operation() const
{
    for (std::size_t index=0; index<group_word.size(); index++)
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-word")
    {
        auto c = std::make_shared<Native::Aaa::Authorization::Onep::Default::Group::GroupWord>();
        c->parent = this;
        group_word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : group_word)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "group-word" <<"[group-word='" <<group_word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::Default::Group::GroupWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_word.is_set || is_set(group_word.yfilter)) leaf_name_data.push_back(group_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default::Group::GroupWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default::Group::GroupWord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    delay_start(std::make_shared<Native::Aaa::Accounting::DelayStart>())
	,exec_submode(std::make_shared<Native::Aaa::Accounting::ExecSubmode>())
	,send(std::make_shared<Native::Aaa::Accounting::Send>())
	,system(std::make_shared<Native::Aaa::Accounting::System>())
	,update(std::make_shared<Native::Aaa::Accounting::Update>())
	,auth_proxy(std::make_shared<Native::Aaa::Accounting::AuthProxy>())
{
    delay_start->parent = this;
    exec_submode->parent = this;
    send->parent = this;
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
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connection.size(); index++)
    {
        if(connection[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return (delay_start !=  nullptr && delay_start->has_data())
	|| (exec_submode !=  nullptr && exec_submode->has_data())
	|| (send !=  nullptr && send->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (update !=  nullptr && update->has_data())
	|| (auth_proxy !=  nullptr && auth_proxy->has_data());
}

bool Native::Aaa::Accounting::has_operation() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connection.size(); index++)
    {
        if(connection[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (delay_start !=  nullptr && delay_start->has_operation())
	|| (exec_submode !=  nullptr && exec_submode->has_operation())
	|| (send !=  nullptr && send->has_operation())
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

std::shared_ptr<Entity> Native::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "commands")
    {
        auto c = std::make_shared<Native::Aaa::Accounting::Commands>();
        c->parent = this;
        commands.push_back(c);
        return c;
    }

    if(child_yang_name == "connection")
    {
        auto c = std::make_shared<Native::Aaa::Accounting::Connection>();
        c->parent = this;
        connection.push_back(c);
        return c;
    }

    if(child_yang_name == "delay-start")
    {
        if(delay_start == nullptr)
        {
            delay_start = std::make_shared<Native::Aaa::Accounting::DelayStart>();
        }
        return delay_start;
    }

    if(child_yang_name == "identity")
    {
        auto c = std::make_shared<Native::Aaa::Accounting::Identity>();
        c->parent = this;
        identity.push_back(c);
        return c;
    }

    if(child_yang_name == "exec")
    {
        auto c = std::make_shared<Native::Aaa::Accounting::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
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
        auto c = std::make_shared<Native::Aaa::Accounting::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Aaa::Accounting::Send>();
        }
        return send;
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : commands)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : connection)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(delay_start != nullptr)
    {
        children["delay-start"] = delay_start;
    }

    count = 0;
    for (auto const & c : identity)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : exec)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(exec_submode != nullptr)
    {
        children["exec-submode"] = exec_submode;
    }

    count = 0;
    for (auto const & c : network)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    if(auth_proxy != nullptr)
    {
        children["auth-proxy"] = auth_proxy;
    }

    return children;
}

void Native::Aaa::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commands" || name == "connection" || name == "delay-start" || name == "identity" || name == "exec" || name == "exec-submode" || name == "network" || name == "send" || name == "system" || name == "update" || name == "auth-proxy")
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
    path_buffer << "commands" <<"[level='" <<level <<"']" <<"[list-name='" <<list_name <<"']";
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Commands::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,stop_only(std::make_shared<Native::Aaa::Accounting::Connection::StopOnly>())
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
    path_buffer << "connection" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::DelayStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::DelayStart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

Native::Aaa::Accounting::Identity::Identity()
    :
    name{YType::str, "name"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::Identity::StartStop>())
{
    start_stop->parent = this;

    yang_name = "identity"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Identity::~Identity()
{
}

bool Native::Aaa::Accounting::Identity::has_data() const
{
    return name.is_set
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
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
    path_buffer << "identity" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Identity::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "name")
        return true;
    return false;
}

Native::Aaa::Accounting::Identity::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Identity::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Identity::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Identity::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Identity::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Identity::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Identity::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Identity::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Accounting::Identity::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Accounting::Identity::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Accounting::Identity::StartStop::has_leaf_or_child_of_name(const std::string & name) const
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
	,stop_only(std::make_shared<Native::Aaa::Accounting::Exec::StopOnly>())
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
    path_buffer << "exec" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "exec-submode"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::ExecSubmode::~ExecSubmode()
{
}

bool Native::Aaa::Accounting::ExecSubmode::has_data() const
{
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Accounting::ExecSubmode::has_operation() const
{
    for (std::size_t index=0; index<exec.size(); index++)
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

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        auto c = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : exec)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "exec" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(action_type != nullptr)
    {
        children["action-type"] = action_type;
    }

    return children;
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
	,stop_only(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly>())
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

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,a1(std::make_shared<Native::Aaa::Accounting::Network::A1>())
	,a2(std::make_shared<Native::Aaa::Accounting::Network::A2>())
	,a3(std::make_shared<Native::Aaa::Accounting::Network::A3>())
	,a4(std::make_shared<Native::Aaa::Accounting::Network::A4>())
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
    path_buffer << "network" <<"[id='" <<id <<"']";
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,stop_record(std::make_shared<Native::Aaa::Accounting::Send::StopRecord>())
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(stop_record != nullptr)
    {
        children["stop-record"] = stop_record;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
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
	,success(std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success>())
{
    success->parent = this;

    yang_name = "authentication"; yang_parent_name = "stop-record"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::~Authentication()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    if(success != nullptr)
    {
        children["success"] = success;
    }

    return children;
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

    yang_name = "failure"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::~Failure()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remote_server != nullptr)
    {
        children["remote-server"] = remote_server;
    }

    return children;
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

    yang_name = "remote-server"; yang_parent_name = "success"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::~RemoteServer()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
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

    yang_name = "default"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::System::Default::~Default()
{
}

bool Native::Aaa::Accounting::System::Default::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Accounting::System::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::System::Default::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::Default::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::Default::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::Default::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    return children;
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
	,policy_device(nullptr) // presence node
	,proxy(nullptr) // presence node
	,sesm(nullptr) // presence node
{

    yang_name = "radius"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::~Radius()
{
}

bool Native::Aaa::Server::Radius::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dynamic_author != nullptr)
    {
        children["dynamic-author"] = dynamic_author;
    }

    if(policy_device != nullptr)
    {
        children["policy-device"] = policy_device;
    }

    if(proxy != nullptr)
    {
        children["proxy"] = proxy;
    }

    if(sesm != nullptr)
    {
        children["sesm"] = sesm;
    }

    return children;
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
    server_key(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::ServerKey>())
	,domain(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain>())
	,ignore(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Ignore>())
{
    server_key->parent = this;
    domain->parent = this;
    ignore->parent = this;

    yang_name = "dynamic-author"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::~DynamicAuthor()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
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
    for (std::size_t index=0; index<client.size(); index++)
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto c = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : client)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(server_key != nullptr)
    {
        children["server-key"] = server_key;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(ignore != nullptr)
    {
        children["ignore"] = ignore;
    }

    return children;
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
    server_key(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey>())
{
    server_key->parent = this;

    yang_name = "client"; yang_parent_name = "dynamic-author"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
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
    for (std::size_t index=0; index<vrf.size(); index++)
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
    path_buffer << "client" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (dtls.is_set || is_set(dtls.yfilter)) leaf_name_data.push_back(dtls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(server_key != nullptr)
    {
        children["server-key"] = server_key;
    }

    return children;
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
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (dtls.is_set || is_set(dtls.yfilter)) leaf_name_data.push_back(dtls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(server_key != nullptr)
    {
        children["server-key"] = server_key;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stripping != nullptr)
    {
        children["stripping"] = stripping;
    }

    return children;
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

    yang_name = "stripping"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::~Stripping()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,authentication(std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Authentication>())
	,key(std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Key>())
	,message_authenticator(std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator>())
{
    accounting->parent = this;
    authentication->parent = this;
    key->parent = this;
    message_authenticator->parent = this;

    yang_name = "policy-device"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::PolicyDevice::~PolicyDevice()
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
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
    for (std::size_t index=0; index<client.size(); index++)
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::PolicyDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::PolicyDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    count = 0;
    for (auto const & c : client)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(message_authenticator != nullptr)
    {
        children["message-authenticator"] = message_authenticator;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::PolicyDevice::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::PolicyDevice::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::PolicyDevice::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::PolicyDevice::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    key(std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Client::Key>())
{
    key->parent = this;

    yang_name = "client"; yang_parent_name = "policy-device"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::PolicyDevice::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::PolicyDevice::Client::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
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
    for (std::size_t index=0; index<vrf.size(); index++)
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
    path_buffer << "client" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::PolicyDevice::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::PolicyDevice::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::PolicyDevice::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
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
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::PolicyDevice::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::PolicyDevice::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::PolicyDevice::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::PolicyDevice::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::Authentication>())
	,calling_station_id(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId>())
	,eap_user(std::make_shared<Native::Aaa::Server::Radius::Proxy::EapUser>())
	,filter(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter>())
	,key(std::make_shared<Native::Aaa::Server::Radius::Proxy::Key>())
	,message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Proxy::MessageAuthenticator>())
	,mode(std::make_shared<Native::Aaa::Server::Radius::Proxy::Mode>())
	,pwlan_session(std::make_shared<Native::Aaa::Server::Radius::Proxy::PwlanSession>())
	,re_authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ReAuthentication>())
	,session_identifier(std::make_shared<Native::Aaa::Server::Radius::Proxy::SessionIdentifier>())
	,timer(std::make_shared<Native::Aaa::Server::Radius::Proxy::Timer>())
	,client_ip(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp>())
	,client_ip_mask(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask>())
	,client_ip_vrf(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf>())
	,client_ip_mask_vrf(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf>())
	,send(std::make_shared<Native::Aaa::Server::Radius::Proxy::Send>())
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

    yang_name = "proxy"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::~Proxy()
{
}

bool Native::Aaa::Server::Radius::Proxy::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(calling_station_id != nullptr)
    {
        children["calling-station-id"] = calling_station_id;
    }

    if(eap_user != nullptr)
    {
        children["eap-user"] = eap_user;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(message_authenticator != nullptr)
    {
        children["message-authenticator"] = message_authenticator;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(pwlan_session != nullptr)
    {
        children["pwlan-session"] = pwlan_session;
    }

    if(re_authentication != nullptr)
    {
        children["re-authentication"] = re_authentication;
    }

    if(session_identifier != nullptr)
    {
        children["session-identifier"] = session_identifier;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    if(client_ip != nullptr)
    {
        children["client-ip"] = client_ip;
    }

    if(client_ip_mask != nullptr)
    {
        children["client-ip-mask"] = client_ip_mask;
    }

    if(client_ip_vrf != nullptr)
    {
        children["client-ip-vrf"] = client_ip_vrf;
    }

    if(client_ip_mask_vrf != nullptr)
    {
        children["client-ip-mask-vrf"] = client_ip_mask_vrf;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(method_list != nullptr)
    {
        children["method-list"] = method_list;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Accounting::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(method_list != nullptr)
    {
        children["method-list"] = method_list;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Authentication::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(format != nullptr)
    {
        children["format"] = format;
    }

    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
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
	,ietf(nullptr) // presence node
	,one_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte>())
	,three_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte>())
	,two_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte>())
	,unformatted(nullptr) // presence node
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(ietf != nullptr)
    {
        children["ietf"] = ietf;
    }

    if(one_byte != nullptr)
    {
        children["one-byte"] = one_byte;
    }

    if(three_byte != nullptr)
    {
        children["three-byte"] = three_byte;
    }

    if(two_byte != nullptr)
    {
        children["two-byte"] = two_byte;
    }

    if(unformatted != nullptr)
    {
        children["unformatted"] = unformatted;
    }

    return children;
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

    yang_name = "default"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::~Default()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "ietf"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::~Ietf()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(delimiter != nullptr)
    {
        children["delimiter"] = delimiter;
    }

    return children;
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
	,dot(nullptr) // presence node
	,hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "one-byte"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(colon != nullptr)
    {
        children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        children["hyphen"] = hyphen;
    }

    return children;
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

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(delimiter != nullptr)
    {
        children["delimiter"] = delimiter;
    }

    return children;
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
	,dot(nullptr) // presence node
	,hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "three-byte"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(colon != nullptr)
    {
        children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        children["hyphen"] = hyphen;
    }

    return children;
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

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(delimiter != nullptr)
    {
        children["delimiter"] = delimiter;
    }

    return children;
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
	,dot(nullptr) // presence node
	,hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "two-byte"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(colon != nullptr)
    {
        children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        children["hyphen"] = hyphen;
    }

    return children;
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

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "unformatted"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::~Unformatted()
{
}

bool Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::has_data() const
{
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::EapUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::EapUser::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

Native::Aaa::Server::Radius::Proxy::Filter::Filter()
    :
    access(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Access>())
	,accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Accounting>())
	,attribute(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Attribute>())
{
    access->parent = this;
    accounting->parent = this;
    attribute->parent = this;

    yang_name = "filter"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Filter::~Filter()
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::has_data() const
{
    return (access !=  nullptr && access->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Access>();
        }
        return access;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "accounting" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Access::Access()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack>())
	,drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop>())
	,ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "access"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Access::~Access()
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::has_data() const
{
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Filter::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Filter::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ack != nullptr)
    {
        children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        children["ignore"] = ignore;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::Filter::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::Filter::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::has_data() const
{
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/filter/access/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::has_data() const
{
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/filter/access/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::has_data() const
{
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/filter/access/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Accounting()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack>())
	,drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop>())
	,ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "accounting"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::has_data() const
{
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Filter::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ack != nullptr)
    {
        children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        children["ignore"] = ignore;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::Filter::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::Filter::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::has_data() const
{
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/filter/accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::has_data() const
{
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/filter/accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::has_data() const
{
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/filter/accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Attribute::Attribute()
    :
    allow{YType::str, "allow"},
    block{YType::str, "block"}
{

    yang_name = "attribute"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Filter::Attribute::~Attribute()
{
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Attribute::has_data() const
{
    return allow.is_set
	|| block.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow.yfilter)
	|| ydk::is_set(block.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Filter::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Filter::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.yfilter)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (block.is_set || is_set(block.yfilter)) leaf_name_data.push_back(block.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Filter::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::Filter::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow")
    {
        allow = value;
        allow.value_namespace = name_space;
        allow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block")
    {
        block = value;
        block.value_namespace = name_space;
        block.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Filter::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow")
    {
        allow.yfilter = yfilter;
    }
    if(value_path == "block")
    {
        block.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Filter::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "block")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Proxy::Key::has_data() const
{
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::MessageAuthenticator()
    :
    ignore(nullptr) // presence node
{

    yang_name = "message-authenticator"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::has_data() const
{
    return (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ignore != nullptr)
    {
        children["ignore"] = ignore;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::Ignore()
    :
    accounting{YType::empty, "accounting"}
{

    yang_name = "ignore"; yang_parent_name = "message-authenticator"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::has_data() const
{
    return accounting.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/message-authenticator/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Mode::Mode()
    :
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "mode"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Mode::~Mode()
{
}

bool Native::Aaa::Server::Radius::Proxy::Mode::has_data() const
{
    return pass_through.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pass-through")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::PwlanSession::PwlanSession()
    :
    reconnect{YType::empty, "reconnect"}
{

    yang_name = "pwlan-session"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::PwlanSession::~PwlanSession()
{
}

bool Native::Aaa::Server::Radius::Proxy::PwlanSession::has_data() const
{
    return reconnect.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::PwlanSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reconnect.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::PwlanSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::PwlanSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwlan-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::PwlanSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::PwlanSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::PwlanSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::PwlanSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::PwlanSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::PwlanSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reconnect")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ReAuthentication::ReAuthentication()
    :
    do_not_apply{YType::empty, "do-not-apply"}
{

    yang_name = "re-authentication"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::ReAuthentication::~ReAuthentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ReAuthentication::has_data() const
{
    return do_not_apply.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ReAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_apply.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ReAuthentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ReAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "re-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ReAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_apply.is_set || is_set(do_not_apply.yfilter)) leaf_name_data.push_back(do_not_apply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ReAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ReAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ReAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply = value;
        do_not_apply.value_namespace = name_space;
        do_not_apply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ReAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ReAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-apply")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::SessionIdentifier::SessionIdentifier()
    :
    attribute{YType::uint8, "attribute"}
    	,
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa>())
{
    vsa->parent = this;

    yang_name = "session-identifier"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::SessionIdentifier::~SessionIdentifier()
{
}

bool Native::Aaa::Server::Radius::Proxy::SessionIdentifier::has_data() const
{
    return attribute.is_set
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::SessionIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::SessionIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::SessionIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::SessionIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::SessionIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::SessionIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vsa != nullptr)
    {
        children["vsa"] = vsa;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::SessionIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::SessionIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::SessionIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::Vsa()
    :
    vendor{YType::uint16, "vendor"},
    type{YType::uint8, "type"}
{

    yang_name = "vsa"; yang_parent_name = "session-identifier"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::has_data() const
{
    return vendor.is_set
	|| type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/session-identifier/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor" || name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Timer::Timer()
    :
    ip_address{YType::uint16, "ip-address"},
    reconnect{YType::uint16, "reconnect"},
    request{YType::uint16, "request"},
    roaming{YType::uint16, "roaming"}
    	,
    disconnect(std::make_shared<Native::Aaa::Server::Radius::Proxy::Timer::Disconnect>())
{
    disconnect->parent = this;

    yang_name = "timer"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Timer::~Timer()
{
}

bool Native::Aaa::Server::Radius::Proxy::Timer::has_data() const
{
    return ip_address.is_set
	|| reconnect.is_set
	|| request.is_set
	|| roaming.is_set
	|| (disconnect !=  nullptr && disconnect->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(reconnect.yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(roaming.yfilter)
	|| (disconnect !=  nullptr && disconnect->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());
    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (roaming.is_set || is_set(roaming.yfilter)) leaf_name_data.push_back(roaming.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disconnect")
    {
        if(disconnect == nullptr)
        {
            disconnect = std::make_shared<Native::Aaa::Server::Radius::Proxy::Timer::Disconnect>();
        }
        return disconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disconnect != nullptr)
    {
        children["disconnect"] = disconnect;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "roaming")
    {
        roaming = value;
        roaming.value_namespace = name_space;
        roaming.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
    if(value_path == "roaming")
    {
        roaming.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect" || name == "ip-address" || name == "reconnect" || name == "request" || name == "roaming")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::Disconnect()
    :
    acct_stop{YType::uint16, "acct-stop"},
    reauth_fail{YType::uint16, "reauth-fail"}
{

    yang_name = "disconnect"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::~Disconnect()
{
}

bool Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::has_data() const
{
    return acct_stop.is_set
	|| reauth_fail.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_stop.yfilter)
	|| ydk::is_set(reauth_fail.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_stop.is_set || is_set(acct_stop.yfilter)) leaf_name_data.push_back(acct_stop.get_name_leafdata());
    if (reauth_fail.is_set || is_set(reauth_fail.yfilter)) leaf_name_data.push_back(reauth_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acct-stop")
    {
        acct_stop = value;
        acct_stop.value_namespace = name_space;
        acct_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail = value;
        reauth_fail.value_namespace = name_space;
        reauth_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acct-stop")
    {
        acct_stop.yfilter = yfilter;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-stop" || name == "reauth-fail")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::ClientIp()
{

    yang_name = "client-ip"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::~ClientIp()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto c = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : client)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Client()
    :
    ip{YType::str, "ip"}
    	,
    accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting>())
	,authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication>())
	,calling_station_id(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId>())
	,eap_user(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser>())
	,filter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter>())
	,key(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key>())
	,message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator>())
	,mode(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode>())
	,pwlan_session(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession>())
	,re_authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication>())
	,session_identifier(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier>())
	,timer(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer>())
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

    yang_name = "client"; yang_parent_name = "client-ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::has_data() const
{
    return ip.is_set
	|| (accounting !=  nullptr && accounting->has_data())
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
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
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
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/client-ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "calling-station-id")
    {
        if(calling_station_id == nullptr)
        {
            calling_station_id = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId>();
        }
        return calling_station_id;
    }

    if(child_yang_name == "eap-user")
    {
        if(eap_user == nullptr)
        {
            eap_user = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser>();
        }
        return eap_user;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key>();
        }
        return key;
    }

    if(child_yang_name == "message-authenticator")
    {
        if(message_authenticator == nullptr)
        {
            message_authenticator = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator>();
        }
        return message_authenticator;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "pwlan-session")
    {
        if(pwlan_session == nullptr)
        {
            pwlan_session = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession>();
        }
        return pwlan_session;
    }

    if(child_yang_name == "re-authentication")
    {
        if(re_authentication == nullptr)
        {
            re_authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication>();
        }
        return re_authentication;
    }

    if(child_yang_name == "session-identifier")
    {
        if(session_identifier == nullptr)
        {
            session_identifier = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier>();
        }
        return session_identifier;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(calling_station_id != nullptr)
    {
        children["calling-station-id"] = calling_station_id;
    }

    if(eap_user != nullptr)
    {
        children["eap-user"] = eap_user;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(message_authenticator != nullptr)
    {
        children["message-authenticator"] = message_authenticator;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(pwlan_session != nullptr)
    {
        children["pwlan-session"] = pwlan_session;
    }

    if(re_authentication != nullptr)
    {
        children["re-authentication"] = re_authentication;
    }

    if(session_identifier != nullptr)
    {
        children["session-identifier"] = session_identifier;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "calling-station-id" || name == "eap-user" || name == "filter" || name == "key" || name == "message-authenticator" || name == "mode" || name == "pwlan-session" || name == "re-authentication" || name == "session-identifier" || name == "timer" || name == "ip")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::Accounting()
    :
    port{YType::uint16, "port"}
    	,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList>())
{
    method_list->parent = this;

    yang_name = "accounting"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::has_data() const
{
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(method_list != nullptr)
    {
        children["method-list"] = method_list;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::has_data() const
{
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::Authentication()
    :
    port{YType::uint16, "port"}
    	,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList>())
{
    method_list->parent = this;

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::~Authentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::has_data() const
{
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(method_list != nullptr)
    {
        children["method-list"] = method_list;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::has_data() const
{
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::CallingStationId()
    :
    format(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format>())
{
    format->parent = this;

    yang_name = "calling-station-id"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::~CallingStationId()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::has_data() const
{
    return (format !=  nullptr && format->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::has_operation() const
{
    return is_set(yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calling-station-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(format != nullptr)
    {
        children["format"] = format;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::Format()
    :
    msisdn{YType::empty, "msisdn"}
    	,
    mac_address(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "format"; yang_parent_name = "calling-station-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::~Format()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::has_data() const
{
    return msisdn.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msisdn.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msisdn.is_set || is_set(msisdn.yfilter)) leaf_name_data.push_back(msisdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msisdn")
    {
        msisdn = value;
        msisdn.value_namespace = name_space;
        msisdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msisdn")
    {
        msisdn.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "msisdn")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::MacAddress()
    :
    none{YType::empty, "none"}
    	,
    default_(nullptr) // presence node
	,ietf(nullptr) // presence node
	,one_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte>())
	,three_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte>())
	,two_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte>())
	,unformatted(nullptr) // presence node
{
    one_byte->parent = this;
    three_byte->parent = this;
    two_byte->parent = this;

    yang_name = "mac-address"; yang_parent_name = "format"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::~MacAddress()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::has_data() const
{
    return none.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (ietf !=  nullptr && ietf->has_data())
	|| (one_byte !=  nullptr && one_byte->has_data())
	|| (three_byte !=  nullptr && three_byte->has_data())
	|| (two_byte !=  nullptr && two_byte->has_data())
	|| (unformatted !=  nullptr && unformatted->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::has_operation() const
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

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default>();
        }
        return default_;
    }

    if(child_yang_name == "ietf")
    {
        if(ietf == nullptr)
        {
            ietf = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf>();
        }
        return ietf;
    }

    if(child_yang_name == "one-byte")
    {
        if(one_byte == nullptr)
        {
            one_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte>();
        }
        return one_byte;
    }

    if(child_yang_name == "three-byte")
    {
        if(three_byte == nullptr)
        {
            three_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte>();
        }
        return three_byte;
    }

    if(child_yang_name == "two-byte")
    {
        if(two_byte == nullptr)
        {
            two_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte>();
        }
        return two_byte;
    }

    if(child_yang_name == "unformatted")
    {
        if(unformatted == nullptr)
        {
            unformatted = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted>();
        }
        return unformatted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(ietf != nullptr)
    {
        children["ietf"] = ietf;
    }

    if(one_byte != nullptr)
    {
        children["one-byte"] = one_byte;
    }

    if(three_byte != nullptr)
    {
        children["three-byte"] = three_byte;
    }

    if(two_byte != nullptr)
    {
        children["two-byte"] = two_byte;
    }

    if(unformatted != nullptr)
    {
        children["unformatted"] = unformatted;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "ietf" || name == "one-byte" || name == "three-byte" || name == "two-byte" || name == "unformatted" || name == "none")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::Default()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "default"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::~Default()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::Ietf()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "ietf"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::~Ietf()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::OneByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "one-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::~OneByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::has_data() const
{
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(delimiter != nullptr)
    {
        children["delimiter"] = delimiter;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
	,dot(nullptr) // presence node
	,hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "one-byte"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_data() const
{
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(colon != nullptr)
    {
        children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        children["hyphen"] = hyphen;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::ThreeByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "three-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::~ThreeByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::has_data() const
{
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(delimiter != nullptr)
    {
        children["delimiter"] = delimiter;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
	,dot(nullptr) // presence node
	,hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "three-byte"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_data() const
{
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(colon != nullptr)
    {
        children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        children["hyphen"] = hyphen;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::TwoByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "two-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::~TwoByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::has_data() const
{
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(delimiter != nullptr)
    {
        children["delimiter"] = delimiter;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
	,dot(nullptr) // presence node
	,hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "two-byte"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_data() const
{
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(colon != nullptr)
    {
        children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        children["hyphen"] = hyphen;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::Unformatted()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "unformatted"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::~Unformatted()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::has_data() const
{
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unformatted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::EapUser()
    :
    ignore_open_session{YType::empty, "ignore-open-session"}
{

    yang_name = "eap-user"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::~EapUser()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::has_data() const
{
    return ignore_open_session.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_open_session.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap-user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_open_session.is_set || is_set(ignore_open_session.yfilter)) leaf_name_data.push_back(ignore_open_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session = value;
        ignore_open_session.value_namespace = name_space;
        ignore_open_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-open-session")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Filter()
    :
    access(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access>())
	,accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting>())
	,attribute(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute>())
{
    access->parent = this;
    accounting->parent = this;
    attribute->parent = this;

    yang_name = "filter"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::~Filter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::has_data() const
{
    return (access !=  nullptr && access->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access>();
        }
        return access;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "accounting" || name == "attribute")
        return true;
    return false;
}

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

const Enum::YLeaf Native::Aaa::Accounting::Commands::ListName::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::none {0, "none"};
const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::start_stop {1, "start-stop"};
const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::stop_only {2, "stop-only"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::Group::tacacs__PLUS__ {0, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Connection::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Connection::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Connection::StopOnly::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Connection::StopOnly::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Identity::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Identity::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

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

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::Type::upper_case {1, "upper-case"};


}
}

