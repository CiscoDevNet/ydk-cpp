
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_119.hpp"
#include "Cisco_IOS_XE_native_120.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Aaa::Server::Radius::Proxy::Filter::Filter()
    :
    access(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Access>())
    , accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Accounting>())
    , attribute(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Attribute>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
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
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Filter::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Filter::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Filter::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
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

    yang_name = "ignore"; yang_parent_name = "message-authenticator"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::PwlanSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::PwlanSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ReAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ReAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::SessionIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::SessionIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsa != nullptr)
    {
        _children["vsa"] = vsa;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disconnect != nullptr)
    {
        _children["disconnect"] = disconnect;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Timer::Disconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    client(this, {"ip"})
{

    yang_name = "client-ip"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::~ClientIp()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::get_children() const
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

    return _children;
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
    , authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication>())
    , calling_station_id(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId>())
    , eap_user(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser>())
    , filter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter>())
    , key(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key>())
    , message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator>())
    , mode(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode>())
    , pwlan_session(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession>())
    , re_authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication>())
    , session_identifier(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier>())
    , timer(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer>())
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
    if (is_presence_container) return true;
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
    path_buffer << "client";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::get_children() const
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

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(format != nullptr)
    {
        _children["format"] = format;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
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
    , ietf(nullptr) // presence node
    , one_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte>())
    , three_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte>())
    , two_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte>())
    , unformatted(nullptr) // presence node
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::get_children() const
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

    yang_name = "default"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::~Default()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "ietf"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::~Ietf()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
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
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "one-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_children() const
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

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
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
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "three-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_children() const
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

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
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
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "two-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_children() const
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

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "unformatted"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::~Unformatted()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting>())
    , attribute(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
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

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Access()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "access"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::~Access()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Accounting()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "accounting"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute::Attribute()
    :
    allow{YType::str, "allow"},
    block{YType::str, "block"}
{

    yang_name = "attribute"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute::~Attribute()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return allow.is_set
	|| block.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow.yfilter)
	|| ydk::is_set(block.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.yfilter)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (block.is_set || is_set(block.yfilter)) leaf_name_data.push_back(block.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "block")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::MessageAuthenticator()
    :
    ignore(nullptr) // presence node
{

    yang_name = "message-authenticator"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::has_data() const
{
    if (is_presence_container) return true;
    return (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore::Ignore()
    :
    accounting{YType::empty, "accounting"}
{

    yang_name = "ignore"; yang_parent_name = "message-authenticator"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode::Mode()
    :
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "mode"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode::~Mode()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode::has_data() const
{
    if (is_presence_container) return true;
    return pass_through.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pass-through")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession::PwlanSession()
    :
    reconnect{YType::empty, "reconnect"}
{

    yang_name = "pwlan-session"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession::~PwlanSession()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession::has_data() const
{
    if (is_presence_container) return true;
    return reconnect.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reconnect.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwlan-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reconnect")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication::ReAuthentication()
    :
    do_not_apply{YType::empty, "do-not-apply"}
{

    yang_name = "re-authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication::~ReAuthentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return do_not_apply.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_apply.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "re-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_apply.is_set || is_set(do_not_apply.yfilter)) leaf_name_data.push_back(do_not_apply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply = value;
        do_not_apply.value_namespace = name_space;
        do_not_apply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-apply")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::SessionIdentifier()
    :
    attribute{YType::uint8, "attribute"}
        ,
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa>())
{
    vsa->parent = this;

    yang_name = "session-identifier"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::~SessionIdentifier()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return attribute.is_set
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsa != nullptr)
    {
        _children["vsa"] = vsa;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa::Vsa()
    :
    vendor{YType::uint16, "vendor"},
    type{YType::uint8, "type"}
{

    yang_name = "vsa"; yang_parent_name = "session-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor" || name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Timer()
    :
    ip_address{YType::uint16, "ip-address"},
    reconnect{YType::uint16, "reconnect"},
    request{YType::uint16, "request"},
    roaming{YType::uint16, "roaming"}
        ,
    disconnect(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect>())
{
    disconnect->parent = this;

    yang_name = "timer"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::~Timer()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| reconnect.is_set
	|| request.is_set
	|| roaming.is_set
	|| (disconnect !=  nullptr && disconnect->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(reconnect.yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(roaming.yfilter)
	|| (disconnect !=  nullptr && disconnect->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());
    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (roaming.is_set || is_set(roaming.yfilter)) leaf_name_data.push_back(roaming.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disconnect")
    {
        if(disconnect == nullptr)
        {
            disconnect = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect>();
        }
        return disconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disconnect != nullptr)
    {
        _children["disconnect"] = disconnect;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect" || name == "ip-address" || name == "reconnect" || name == "request" || name == "roaming")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect::Disconnect()
    :
    acct_stop{YType::uint16, "acct-stop"},
    reauth_fail{YType::uint16, "reauth-fail"}
{

    yang_name = "disconnect"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect::~Disconnect()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect::has_data() const
{
    if (is_presence_container) return true;
    return acct_stop.is_set
	|| reauth_fail.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_stop.yfilter)
	|| ydk::is_set(reauth_fail.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_stop.is_set || is_set(acct_stop.yfilter)) leaf_name_data.push_back(acct_stop.get_name_leafdata());
    if (reauth_fail.is_set || is_set(reauth_fail.yfilter)) leaf_name_data.push_back(reauth_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-stop" || name == "reauth-fail")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::ClientIpMask()
    :
    client(this, {"ip", "mask"})
{

    yang_name = "client-ip-mask"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::~ClientIpMask()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-ip-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::get_children() const
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

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Client()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"}
        ,
    accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting>())
    , authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication>())
    , calling_station_id(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId>())
    , eap_user(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser>())
    , filter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter>())
    , key(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key>())
    , message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator>())
    , mode(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode>())
    , pwlan_session(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession>())
    , re_authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication>())
    , session_identifier(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier>())
    , timer(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer>())
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

    yang_name = "client"; yang_parent_name = "client-ip-mask"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| mask.is_set
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
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

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/client-ip-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "calling-station-id")
    {
        if(calling_station_id == nullptr)
        {
            calling_station_id = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId>();
        }
        return calling_station_id;
    }

    if(child_yang_name == "eap-user")
    {
        if(eap_user == nullptr)
        {
            eap_user = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser>();
        }
        return eap_user;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key>();
        }
        return key;
    }

    if(child_yang_name == "message-authenticator")
    {
        if(message_authenticator == nullptr)
        {
            message_authenticator = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator>();
        }
        return message_authenticator;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "pwlan-session")
    {
        if(pwlan_session == nullptr)
        {
            pwlan_session = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession>();
        }
        return pwlan_session;
    }

    if(child_yang_name == "re-authentication")
    {
        if(re_authentication == nullptr)
        {
            re_authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication>();
        }
        return re_authentication;
    }

    if(child_yang_name == "session-identifier")
    {
        if(session_identifier == nullptr)
        {
            session_identifier = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier>();
        }
        return session_identifier;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::get_children() const
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

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "calling-station-id" || name == "eap-user" || name == "filter" || name == "key" || name == "message-authenticator" || name == "mode" || name == "pwlan-session" || name == "re-authentication" || name == "session-identifier" || name == "timer" || name == "ip" || name == "mask")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::Accounting()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList>())
{
    method_list->parent = this;

    yang_name = "accounting"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::Authentication()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList>())
{
    method_list->parent = this;

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::~Authentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::CallingStationId()
    :
    format(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format>())
{
    format->parent = this;

    yang_name = "calling-station-id"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::~CallingStationId()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::has_data() const
{
    if (is_presence_container) return true;
    return (format !=  nullptr && format->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::has_operation() const
{
    return is_set(yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calling-station-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(format != nullptr)
    {
        _children["format"] = format;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::Format()
    :
    msisdn{YType::empty, "msisdn"}
        ,
    mac_address(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "format"; yang_parent_name = "calling-station-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::~Format()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::has_data() const
{
    if (is_presence_container) return true;
    return msisdn.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msisdn.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msisdn.is_set || is_set(msisdn.yfilter)) leaf_name_data.push_back(msisdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msisdn")
    {
        msisdn = value;
        msisdn.value_namespace = name_space;
        msisdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msisdn")
    {
        msisdn.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "msisdn")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::MacAddress()
    :
    none{YType::empty, "none"}
        ,
    default_(nullptr) // presence node
    , ietf(nullptr) // presence node
    , one_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte>())
    , three_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte>())
    , two_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte>())
    , unformatted(nullptr) // presence node
{
    one_byte->parent = this;
    three_byte->parent = this;
    two_byte->parent = this;

    yang_name = "mac-address"; yang_parent_name = "format"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::~MacAddress()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::has_data() const
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::has_operation() const
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

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default>();
        }
        return default_;
    }

    if(child_yang_name == "ietf")
    {
        if(ietf == nullptr)
        {
            ietf = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf>();
        }
        return ietf;
    }

    if(child_yang_name == "one-byte")
    {
        if(one_byte == nullptr)
        {
            one_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte>();
        }
        return one_byte;
    }

    if(child_yang_name == "three-byte")
    {
        if(three_byte == nullptr)
        {
            three_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte>();
        }
        return three_byte;
    }

    if(child_yang_name == "two-byte")
    {
        if(two_byte == nullptr)
        {
            two_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte>();
        }
        return two_byte;
    }

    if(child_yang_name == "unformatted")
    {
        if(unformatted == nullptr)
        {
            unformatted = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted>();
        }
        return unformatted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::get_children() const
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "ietf" || name == "one-byte" || name == "three-byte" || name == "two-byte" || name == "unformatted" || name == "none")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::Default()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "default"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::~Default()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::Ietf()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "ietf"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::~Ietf()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::OneByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "one-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::~OneByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "one-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_children() const
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::ThreeByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "three-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::~ThreeByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "three-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_children() const
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::TwoByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "two-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::~TwoByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "two-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_children() const
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::Unformatted()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "unformatted"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::~Unformatted()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unformatted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser::EapUser()
    :
    ignore_open_session{YType::empty, "ignore-open-session"}
{

    yang_name = "eap-user"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser::~EapUser()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser::has_data() const
{
    if (is_presence_container) return true;
    return ignore_open_session.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_open_session.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap-user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_open_session.is_set || is_set(ignore_open_session.yfilter)) leaf_name_data.push_back(ignore_open_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session = value;
        ignore_open_session.value_namespace = name_space;
        ignore_open_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-open-session")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Filter()
    :
    access(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access>())
    , accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting>())
    , attribute(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute>())
{
    access->parent = this;
    accounting->parent = this;
    attribute->parent = this;

    yang_name = "filter"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::~Filter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (access !=  nullptr && access->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access>();
        }
        return access;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "accounting" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Access()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "access"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::~Access()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Accounting()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "accounting"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute::Attribute()
    :
    allow{YType::str, "allow"},
    block{YType::str, "block"}
{

    yang_name = "attribute"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute::~Attribute()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return allow.is_set
	|| block.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow.yfilter)
	|| ydk::is_set(block.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.yfilter)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (block.is_set || is_set(block.yfilter)) leaf_name_data.push_back(block.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "block")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::MessageAuthenticator()
    :
    ignore(nullptr) // presence node
{

    yang_name = "message-authenticator"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::has_data() const
{
    if (is_presence_container) return true;
    return (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore::Ignore()
    :
    accounting{YType::empty, "accounting"}
{

    yang_name = "ignore"; yang_parent_name = "message-authenticator"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode::Mode()
    :
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "mode"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode::~Mode()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode::has_data() const
{
    if (is_presence_container) return true;
    return pass_through.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pass-through")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession::PwlanSession()
    :
    reconnect{YType::empty, "reconnect"}
{

    yang_name = "pwlan-session"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession::~PwlanSession()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession::has_data() const
{
    if (is_presence_container) return true;
    return reconnect.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reconnect.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwlan-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reconnect")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::ReAuthentication()
    :
    do_not_apply{YType::empty, "do-not-apply"}
{

    yang_name = "re-authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::~ReAuthentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return do_not_apply.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_apply.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "re-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_apply.is_set || is_set(do_not_apply.yfilter)) leaf_name_data.push_back(do_not_apply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply = value;
        do_not_apply.value_namespace = name_space;
        do_not_apply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-apply")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::SessionIdentifier()
    :
    attribute{YType::uint8, "attribute"}
        ,
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa>())
{
    vsa->parent = this;

    yang_name = "session-identifier"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::~SessionIdentifier()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return attribute.is_set
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsa != nullptr)
    {
        _children["vsa"] = vsa;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::Vsa()
    :
    vendor{YType::uint16, "vendor"},
    type{YType::uint8, "type"}
{

    yang_name = "vsa"; yang_parent_name = "session-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor" || name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Timer()
    :
    ip_address{YType::uint16, "ip-address"},
    reconnect{YType::uint16, "reconnect"},
    request{YType::uint16, "request"},
    roaming{YType::uint16, "roaming"}
        ,
    disconnect(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect>())
{
    disconnect->parent = this;

    yang_name = "timer"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::~Timer()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| reconnect.is_set
	|| request.is_set
	|| roaming.is_set
	|| (disconnect !=  nullptr && disconnect->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(reconnect.yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(roaming.yfilter)
	|| (disconnect !=  nullptr && disconnect->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());
    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (roaming.is_set || is_set(roaming.yfilter)) leaf_name_data.push_back(roaming.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disconnect")
    {
        if(disconnect == nullptr)
        {
            disconnect = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect>();
        }
        return disconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disconnect != nullptr)
    {
        _children["disconnect"] = disconnect;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect" || name == "ip-address" || name == "reconnect" || name == "request" || name == "roaming")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::Disconnect()
    :
    acct_stop{YType::uint16, "acct-stop"},
    reauth_fail{YType::uint16, "reauth-fail"}
{

    yang_name = "disconnect"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::~Disconnect()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::has_data() const
{
    if (is_presence_container) return true;
    return acct_stop.is_set
	|| reauth_fail.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_stop.yfilter)
	|| ydk::is_set(reauth_fail.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_stop.is_set || is_set(acct_stop.yfilter)) leaf_name_data.push_back(acct_stop.get_name_leafdata());
    if (reauth_fail.is_set || is_set(reauth_fail.yfilter)) leaf_name_data.push_back(reauth_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-stop" || name == "reauth-fail")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::ClientIpVrf()
    :
    client(this, {"ip", "vrf"})
{

    yang_name = "client-ip-vrf"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::~ClientIpVrf()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::get_children() const
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

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Client()
    :
    ip{YType::str, "ip"},
    vrf{YType::str, "vrf"}
        ,
    accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting>())
    , authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication>())
    , calling_station_id(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId>())
    , eap_user(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser>())
    , filter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter>())
    , key(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key>())
    , message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator>())
    , mode(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode>())
    , pwlan_session(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession>())
    , re_authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication>())
    , session_identifier(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier>())
    , timer(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer>())
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

    yang_name = "client"; yang_parent_name = "client-ip-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| vrf.is_set
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(vrf.yfilter)
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

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/client-ip-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "calling-station-id")
    {
        if(calling_station_id == nullptr)
        {
            calling_station_id = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId>();
        }
        return calling_station_id;
    }

    if(child_yang_name == "eap-user")
    {
        if(eap_user == nullptr)
        {
            eap_user = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser>();
        }
        return eap_user;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key>();
        }
        return key;
    }

    if(child_yang_name == "message-authenticator")
    {
        if(message_authenticator == nullptr)
        {
            message_authenticator = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator>();
        }
        return message_authenticator;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "pwlan-session")
    {
        if(pwlan_session == nullptr)
        {
            pwlan_session = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession>();
        }
        return pwlan_session;
    }

    if(child_yang_name == "re-authentication")
    {
        if(re_authentication == nullptr)
        {
            re_authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication>();
        }
        return re_authentication;
    }

    if(child_yang_name == "session-identifier")
    {
        if(session_identifier == nullptr)
        {
            session_identifier = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier>();
        }
        return session_identifier;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::get_children() const
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

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "calling-station-id" || name == "eap-user" || name == "filter" || name == "key" || name == "message-authenticator" || name == "mode" || name == "pwlan-session" || name == "re-authentication" || name == "session-identifier" || name == "timer" || name == "ip" || name == "vrf")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::Accounting()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList>())
{
    method_list->parent = this;

    yang_name = "accounting"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::Authentication()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList>())
{
    method_list->parent = this;

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::~Authentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::CallingStationId()
    :
    format(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format>())
{
    format->parent = this;

    yang_name = "calling-station-id"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::~CallingStationId()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::has_data() const
{
    if (is_presence_container) return true;
    return (format !=  nullptr && format->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::has_operation() const
{
    return is_set(yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calling-station-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(format != nullptr)
    {
        _children["format"] = format;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::Format()
    :
    msisdn{YType::empty, "msisdn"}
        ,
    mac_address(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "format"; yang_parent_name = "calling-station-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::~Format()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::has_data() const
{
    if (is_presence_container) return true;
    return msisdn.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msisdn.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msisdn.is_set || is_set(msisdn.yfilter)) leaf_name_data.push_back(msisdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msisdn")
    {
        msisdn = value;
        msisdn.value_namespace = name_space;
        msisdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msisdn")
    {
        msisdn.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "msisdn")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::MacAddress()
    :
    none{YType::empty, "none"}
        ,
    default_(nullptr) // presence node
    , ietf(nullptr) // presence node
    , one_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte>())
    , three_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte>())
    , two_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte>())
    , unformatted(nullptr) // presence node
{
    one_byte->parent = this;
    three_byte->parent = this;
    two_byte->parent = this;

    yang_name = "mac-address"; yang_parent_name = "format"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::~MacAddress()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::has_data() const
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::has_operation() const
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

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default>();
        }
        return default_;
    }

    if(child_yang_name == "ietf")
    {
        if(ietf == nullptr)
        {
            ietf = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf>();
        }
        return ietf;
    }

    if(child_yang_name == "one-byte")
    {
        if(one_byte == nullptr)
        {
            one_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte>();
        }
        return one_byte;
    }

    if(child_yang_name == "three-byte")
    {
        if(three_byte == nullptr)
        {
            three_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte>();
        }
        return three_byte;
    }

    if(child_yang_name == "two-byte")
    {
        if(two_byte == nullptr)
        {
            two_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte>();
        }
        return two_byte;
    }

    if(child_yang_name == "unformatted")
    {
        if(unformatted == nullptr)
        {
            unformatted = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted>();
        }
        return unformatted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::get_children() const
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

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "ietf" || name == "one-byte" || name == "three-byte" || name == "two-byte" || name == "unformatted" || name == "none")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::Default()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "default"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::~Default()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::Ietf()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "ietf"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::~Ietf()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::OneByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "one-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::~OneByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "one-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_children() const
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

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::ThreeByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "three-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::~ThreeByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "three-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_children() const
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

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::TwoByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "two-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::~TwoByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "two-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_children() const
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

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Unformatted()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "unformatted"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::~Unformatted()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unformatted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::EapUser()
    :
    ignore_open_session{YType::empty, "ignore-open-session"}
{

    yang_name = "eap-user"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::~EapUser()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::has_data() const
{
    if (is_presence_container) return true;
    return ignore_open_session.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_open_session.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap-user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_open_session.is_set || is_set(ignore_open_session.yfilter)) leaf_name_data.push_back(ignore_open_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session = value;
        ignore_open_session.value_namespace = name_space;
        ignore_open_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-open-session")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Filter()
    :
    access(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access>())
    , accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting>())
    , attribute(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute>())
{
    access->parent = this;
    accounting->parent = this;
    attribute->parent = this;

    yang_name = "filter"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::~Filter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (access !=  nullptr && access->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access>();
        }
        return access;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "accounting" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Access()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "access"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::~Access()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Accounting()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "accounting"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

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

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type::upper_case {1, "upper-case"};


}
}

