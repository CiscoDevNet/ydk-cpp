
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_94.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::has_data() const
{
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::has_data() const
{
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::Attribute()
    :
    allow{YType::str, "allow"},
    block{YType::str, "block"}
{

    yang_name = "attribute"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::~Attribute()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::has_data() const
{
    return allow.is_set
	|| block.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow.yfilter)
	|| ydk::is_set(block.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.yfilter)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (block.is_set || is_set(block.yfilter)) leaf_name_data.push_back(block.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "block")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::has_data() const
{
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::MessageAuthenticator()
    :
    ignore(nullptr) // presence node
{

    yang_name = "message-authenticator"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::has_data() const
{
    return (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ignore != nullptr)
    {
        children["ignore"] = ignore;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::Ignore()
    :
    accounting{YType::empty, "accounting"}
{

    yang_name = "ignore"; yang_parent_name = "message-authenticator"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::has_data() const
{
    return accounting.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::Mode()
    :
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "mode"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::~Mode()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::has_data() const
{
    return pass_through.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pass-through")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::PwlanSession()
    :
    reconnect{YType::empty, "reconnect"}
{

    yang_name = "pwlan-session"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::~PwlanSession()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::has_data() const
{
    return reconnect.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reconnect.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwlan-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reconnect")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::ReAuthentication()
    :
    do_not_apply{YType::empty, "do-not-apply"}
{

    yang_name = "re-authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::~ReAuthentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::has_data() const
{
    return do_not_apply.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_apply.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "re-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_apply.is_set || is_set(do_not_apply.yfilter)) leaf_name_data.push_back(do_not_apply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply = value;
        do_not_apply.value_namespace = name_space;
        do_not_apply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-apply")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::SessionIdentifier()
    :
    attribute{YType::uint8, "attribute"}
    	,
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa>())
{
    vsa->parent = this;

    yang_name = "session-identifier"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::~SessionIdentifier()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::has_data() const
{
    return attribute.is_set
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vsa != nullptr)
    {
        children["vsa"] = vsa;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::Vsa()
    :
    vendor{YType::uint16, "vendor"},
    type{YType::uint8, "type"}
{

    yang_name = "vsa"; yang_parent_name = "session-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::has_data() const
{
    return vendor.is_set
	|| type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor" || name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Timer()
    :
    ip_address{YType::uint16, "ip-address"},
    reconnect{YType::uint16, "reconnect"},
    request{YType::uint16, "request"},
    roaming{YType::uint16, "roaming"}
    	,
    disconnect(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect>())
{
    disconnect->parent = this;

    yang_name = "timer"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::~Timer()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::has_data() const
{
    return ip_address.is_set
	|| reconnect.is_set
	|| request.is_set
	|| roaming.is_set
	|| (disconnect !=  nullptr && disconnect->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(reconnect.yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(roaming.yfilter)
	|| (disconnect !=  nullptr && disconnect->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());
    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (roaming.is_set || is_set(roaming.yfilter)) leaf_name_data.push_back(roaming.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disconnect")
    {
        if(disconnect == nullptr)
        {
            disconnect = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect>();
        }
        return disconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disconnect != nullptr)
    {
        children["disconnect"] = disconnect;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect" || name == "ip-address" || name == "reconnect" || name == "request" || name == "roaming")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::Disconnect()
    :
    acct_stop{YType::uint16, "acct-stop"},
    reauth_fail{YType::uint16, "reauth-fail"}
{

    yang_name = "disconnect"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::~Disconnect()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::has_data() const
{
    return acct_stop.is_set
	|| reauth_fail.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_stop.yfilter)
	|| ydk::is_set(reauth_fail.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_stop.is_set || is_set(acct_stop.yfilter)) leaf_name_data.push_back(acct_stop.get_name_leafdata());
    if (reauth_fail.is_set || is_set(reauth_fail.yfilter)) leaf_name_data.push_back(reauth_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-stop" || name == "reauth-fail")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Send::Send()
    :
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::Send::Vsa>())
{
    vsa->parent = this;

    yang_name = "send"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Send::~Send()
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::has_data() const
{
    return (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Send::has_operation() const
{
    return is_set(yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::Send::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vsa != nullptr)
    {
        children["vsa"] = vsa;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::Vsa()
    :
    rpclient_source_address(nullptr) // presence node
{

    yang_name = "vsa"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::has_data() const
{
    return (rpclient_source_address !=  nullptr && rpclient_source_address->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| (rpclient_source_address !=  nullptr && rpclient_source_address->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpclient-source-address")
    {
        if(rpclient_source_address == nullptr)
        {
            rpclient_source_address = std::make_shared<Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress>();
        }
        return rpclient_source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpclient_source_address != nullptr)
    {
        children["rpclient-source-address"] = rpclient_source_address;
    }

    return children;
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpclient-source-address")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::RpclientSourceAddress()
    :
    accounting{YType::empty, "accounting"},
    authentication{YType::empty, "authentication"}
{

    yang_name = "rpclient-source-address"; yang_parent_name = "vsa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::~RpclientSourceAddress()
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::has_data() const
{
    return accounting.is_set
	|| authentication.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(authentication.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/send/vsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpclient-source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Sesm()
    :
    port{YType::uint16, "port"}
    	,
    key(std::make_shared<Native::Aaa::Server::Radius::Sesm::Key>())
	,message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Sesm::MessageAuthenticator>())
{
    key->parent = this;
    message_authenticator->parent = this;

    yang_name = "sesm"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Sesm::~Sesm()
{
}

bool Native::Aaa::Server::Radius::Sesm::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return port.is_set
	|| (key !=  nullptr && key->has_data())
	|| (message_authenticator !=  nullptr && message_authenticator->has_data());
}

bool Native::Aaa::Server::Radius::Sesm::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (key !=  nullptr && key->has_operation())
	|| (message_authenticator !=  nullptr && message_authenticator->has_operation());
}

std::string Native::Aaa::Server::Radius::Sesm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Sesm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Sesm::Key>();
        }
        return key;
    }

    if(child_yang_name == "message-authenticator")
    {
        if(message_authenticator == nullptr)
        {
            message_authenticator = std::make_shared<Native::Aaa::Server::Radius::Sesm::MessageAuthenticator>();
        }
        return message_authenticator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Sesm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
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

void Native::Aaa::Server::Radius::Sesm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "key" || name == "message-authenticator" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Client()
    :
    ip{YType::str, "ip"}
    	,
    key(std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Key>())
{
    key->parent = this;

    yang_name = "client"; yang_parent_name = "sesm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Sesm::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return ip.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Aaa::Server::Radius::Sesm::Client::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Aaa::Server::Radius::Sesm::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/sesm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Sesm::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Sesm::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Aaa::Server::Radius::Sesm::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "key" || name == "ip")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    key(std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key>())
{
    key->parent = this;

    yang_name = "vrf"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::~Vrf()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::has_data() const
{
    return name.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::has_data() const
{
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::Sesm::Client::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::Key::has_data() const
{
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::Client::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::Client::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Sesm::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Sesm::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Sesm::Client::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Sesm::Client::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Sesm::Client::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "sesm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Sesm::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Sesm::Key::has_data() const
{
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/sesm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Sesm::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Sesm::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Sesm::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Aaa::Server::Radius::Sesm::Key::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Aaa::Server::Radius::Sesm::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::MessageAuthenticator()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "message-authenticator"; yang_parent_name = "sesm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::has_data() const
{
    return ignore.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/sesm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Login::Login()
    :
    display{YType::enumeration, "display"},
    success_track_conf_time{YType::uint8, "success-track-conf-time"}
{

    yang_name = "login"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::~Login()
{
}

bool Native::Aaa::Login::has_data() const
{
    return display.is_set
	|| success_track_conf_time.is_set;
}

bool Native::Aaa::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(display.yfilter)
	|| ydk::is_set(success_track_conf_time.yfilter);
}

std::string Native::Aaa::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display.is_set || is_set(display.yfilter)) leaf_name_data.push_back(display.get_name_leafdata());
    if (success_track_conf_time.is_set || is_set(success_track_conf_time.yfilter)) leaf_name_data.push_back(success_track_conf_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display")
    {
        display = value;
        display.value_namespace = name_space;
        display.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-track-conf-time")
    {
        success_track_conf_time = value;
        success_track_conf_time.value_namespace = name_space;
        success_track_conf_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display")
    {
        display.yfilter = yfilter;
    }
    if(value_path == "success-track-conf-time")
    {
        success_track_conf_time.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "display" || name == "success-track-conf-time")
        return true;
    return false;
}

Native::Aaa::Memory::Memory()
    :
    threshold(std::make_shared<Native::Aaa::Memory::Threshold>())
{
    threshold->parent = this;

    yang_name = "memory"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Memory::~Memory()
{
}

bool Native::Aaa::Memory::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Aaa::Memory::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Aaa::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Aaa::Memory::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Aaa::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Aaa::Memory::Threshold::Threshold()
    :
    accounting(std::make_shared<Native::Aaa::Memory::Threshold::Accounting>())
	,authentication(std::make_shared<Native::Aaa::Memory::Threshold::Authentication>())
{
    accounting->parent = this;
    authentication->parent = this;

    yang_name = "threshold"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Memory::Threshold::~Threshold()
{
}

bool Native::Aaa::Memory::Threshold::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Native::Aaa::Memory::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Aaa::Memory::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Memory::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Memory::Threshold::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Memory::Threshold::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Memory::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Aaa::Memory::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Memory::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Memory::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication")
        return true;
    return false;
}

Native::Aaa::Memory::Threshold::Accounting::Accounting()
    :
    disable{YType::uint8, "disable"}
{

    yang_name = "accounting"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Memory::Threshold::Accounting::~Accounting()
{
}

bool Native::Aaa::Memory::Threshold::Accounting::has_data() const
{
    return disable.is_set;
}

bool Native::Aaa::Memory::Threshold::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Aaa::Memory::Threshold::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:memory/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::Threshold::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::Threshold::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Memory::Threshold::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Memory::Threshold::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Memory::Threshold::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Memory::Threshold::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Aaa::Memory::Threshold::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Aaa::Memory::Threshold::Authentication::Authentication()
    :
    reject{YType::uint8, "reject"}
{

    yang_name = "authentication"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Memory::Threshold::Authentication::~Authentication()
{
}

bool Native::Aaa::Memory::Threshold::Authentication::has_data() const
{
    return reject.is_set;
}

bool Native::Aaa::Memory::Threshold::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reject.yfilter);
}

std::string Native::Aaa::Memory::Threshold::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:memory/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::Threshold::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::Threshold::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reject.is_set || is_set(reject.yfilter)) leaf_name_data.push_back(reject.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Memory::Threshold::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Memory::Threshold::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Memory::Threshold::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reject")
    {
        reject = value;
        reject.value_namespace = name_space;
        reject.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Memory::Threshold::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reject")
    {
        reject.yfilter = yfilter;
    }
}

bool Native::Aaa::Memory::Threshold::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reject")
        return true;
    return false;
}

Native::Aaa::Policy::Policy()
    :
    interface_config{YType::enumeration, "interface-config"}
{

    yang_name = "policy"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Policy::~Policy()
{
}

bool Native::Aaa::Policy::has_data() const
{
    return interface_config.is_set;
}

bool Native::Aaa::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_config.yfilter);
}

std::string Native::Aaa::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_config.is_set || is_set(interface_config.yfilter)) leaf_name_data.push_back(interface_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-config")
    {
        interface_config = value;
        interface_config.value_namespace = name_space;
        interface_config.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-config")
    {
        interface_config.yfilter = yfilter;
    }
}

bool Native::Aaa::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-config")
        return true;
    return false;
}

Native::Aaa::Route::Route()
    :
    download(std::make_shared<Native::Aaa::Route::Download>())
{
    download->parent = this;

    yang_name = "route"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Route::~Route()
{
}

bool Native::Aaa::Route::has_data() const
{
    return (download !=  nullptr && download->has_data());
}

bool Native::Aaa::Route::has_operation() const
{
    return is_set(yfilter)
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::Aaa::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::Aaa::Route::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(download != nullptr)
    {
        children["download"] = download;
    }

    return children;
}

void Native::Aaa::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "download")
        return true;
    return false;
}

Native::Aaa::Route::Download::Download()
    :
    update_period{YType::uint16, "update-period"},
    authorization{YType::str, "authorization"}
{

    yang_name = "download"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Route::Download::~Download()
{
}

bool Native::Aaa::Route::Download::has_data() const
{
    return update_period.is_set
	|| authorization.is_set;
}

bool Native::Aaa::Route::Download::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_period.yfilter)
	|| ydk::is_set(authorization.yfilter);
}

std::string Native::Aaa::Route::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Route::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Route::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_period.is_set || is_set(update_period.yfilter)) leaf_name_data.push_back(update_period.get_name_leafdata());
    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Route::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Route::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Route::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-period")
    {
        update_period = value;
        update_period.value_namespace = name_space;
        update_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Route::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-period")
    {
        update_period.yfilter = yfilter;
    }
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
}

bool Native::Aaa::Route::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-period" || name == "authorization")
        return true;
    return false;
}

Native::Privilege::Privilege()
    :
    exec(std::make_shared<Native::Privilege::Exec>())
{
    exec->parent = this;

    yang_name = "privilege"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Privilege::~Privilege()
{
}

bool Native::Privilege::has_data() const
{
    return (exec !=  nullptr && exec->has_data());
}

bool Native::Privilege::has_operation() const
{
    return is_set(yfilter)
	|| (exec !=  nullptr && exec->has_operation());
}

std::string Native::Privilege::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Privilege::Exec>();
        }
        return exec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    return children;
}

void Native::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Privilege::Exec::Exec()
{

    yang_name = "exec"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Privilege::Exec::~Exec()
{
}

bool Native::Privilege::Exec::has_data() const
{
    for (std::size_t index=0; index<level.size(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Privilege::Exec::has_operation() const
{
    for (std::size_t index=0; index<level.size(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Privilege::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/privilege/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        for(auto const & c : level)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Privilege::Exec::Level>();
        c->parent = this;
        level.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : level)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Privilege::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Privilege::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Privilege::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Privilege::Exec::Level::Level()
    :
    privilege{YType::uint8, "privilege"}
{

    yang_name = "level"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Privilege::Exec::Level::~Level()
{
}

bool Native::Privilege::Exec::Level::has_data() const
{
    for (std::size_t index=0; index<command_list.size(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return privilege.is_set;
}

bool Native::Privilege::Exec::Level::has_operation() const
{
    for (std::size_t index=0; index<command_list.size(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(privilege.yfilter);
}

std::string Native::Privilege::Exec::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/privilege/exec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::Exec::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level" <<"[privilege='" <<privilege <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Exec::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::Exec::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        for(auto const & c : command_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Privilege::Exec::Level::CommandList>();
        c->parent = this;
        command_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : command_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Privilege::Exec::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Exec::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
}

bool Native::Privilege::Exec::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list" || name == "privilege")
        return true;
    return false;
}

Native::Privilege::Exec::Level::CommandList::CommandList()
    :
    command{YType::str, "command"}
{

    yang_name = "command-list"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Privilege::Exec::Level::CommandList::~CommandList()
{
}

bool Native::Privilege::Exec::Level::CommandList::has_data() const
{
    return command.is_set;
}

bool Native::Privilege::Exec::Level::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Privilege::Exec::Level::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list" <<"[command='" <<command <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Exec::Level::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::Exec::Level::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::Level::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Privilege::Exec::Level::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Exec::Level::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Privilege::Exec::Level::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Login::Login()
    :
    delay{YType::uint8, "delay"}
    	,
    on_failure(nullptr) // presence node
	,on_success(nullptr) // presence node
{

    yang_name = "login"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::~Login()
{
}

bool Native::Login::has_data() const
{
    return delay.is_set
	|| (on_failure !=  nullptr && on_failure->has_data())
	|| (on_success !=  nullptr && on_success->has_data());
}

bool Native::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| (on_failure !=  nullptr && on_failure->has_operation())
	|| (on_success !=  nullptr && on_success->has_operation());
}

std::string Native::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-failure")
    {
        if(on_failure == nullptr)
        {
            on_failure = std::make_shared<Native::Login::OnFailure>();
        }
        return on_failure;
    }

    if(child_yang_name == "on-success")
    {
        if(on_success == nullptr)
        {
            on_success = std::make_shared<Native::Login::OnSuccess>();
        }
        return on_success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_failure != nullptr)
    {
        children["on-failure"] = on_failure;
    }

    if(on_success != nullptr)
    {
        children["on-success"] = on_success;
    }

    return children;
}

void Native::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-failure" || name == "on-success" || name == "delay")
        return true;
    return false;
}

Native::Login::OnFailure::OnFailure()
    :
    log(nullptr) // presence node
{

    yang_name = "on-failure"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnFailure::~OnFailure()
{
}

bool Native::Login::OnFailure::has_data() const
{
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnFailure::has_operation() const
{
    return is_set(yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnFailure::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Login::OnFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Login::OnFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Login::OnFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Login::OnFailure::Log::Log()
    :
    every{YType::uint16, "every"}
{

    yang_name = "log"; yang_parent_name = "on-failure"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnFailure::Log::~Log()
{
}

bool Native::Login::OnFailure::Log::has_data() const
{
    return every.is_set;
}

bool Native::Login::OnFailure::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(every.yfilter);
}

std::string Native::Login::OnFailure::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/on-failure/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnFailure::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnFailure::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.yfilter)) leaf_name_data.push_back(every.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnFailure::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnFailure::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Login::OnFailure::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "every")
    {
        every = value;
        every.value_namespace = name_space;
        every.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::OnFailure::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "every")
    {
        every.yfilter = yfilter;
    }
}

bool Native::Login::OnFailure::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "every")
        return true;
    return false;
}

Native::Login::OnSuccess::OnSuccess()
    :
    log(nullptr) // presence node
{

    yang_name = "on-success"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnSuccess::~OnSuccess()
{
}

bool Native::Login::OnSuccess::has_data() const
{
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnSuccess::has_operation() const
{
    return is_set(yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnSuccess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnSuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnSuccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnSuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnSuccess::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnSuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Login::OnSuccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Login::OnSuccess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Login::OnSuccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Login::OnSuccess::Log::Log()
    :
    every{YType::uint16, "every"}
{

    yang_name = "log"; yang_parent_name = "on-success"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnSuccess::Log::~Log()
{
}

bool Native::Login::OnSuccess::Log::has_data() const
{
    return every.is_set;
}

bool Native::Login::OnSuccess::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(every.yfilter);
}

std::string Native::Login::OnSuccess::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/on-success/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnSuccess::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnSuccess::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.yfilter)) leaf_name_data.push_back(every.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnSuccess::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnSuccess::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Login::OnSuccess::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "every")
    {
        every = value;
        every.value_namespace = name_space;
        every.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::OnSuccess::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "every")
    {
        every.yfilter = yfilter;
    }
}

bool Native::Login::OnSuccess::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "every")
        return true;
    return false;
}

Native::Multilink::Multilink()
    :
    bundle_name{YType::enumeration, "Cisco-IOS-XE-ppp:bundle-name"},
    virtual_template{YType::uint16, "Cisco-IOS-XE-ppp:virtual-template"}
{

    yang_name = "multilink"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Multilink::~Multilink()
{
}

bool Native::Multilink::has_data() const
{
    return bundle_name.is_set
	|| virtual_template.is_set;
}

bool Native::Multilink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(virtual_template.yfilter);
}

std::string Native::Multilink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Multilink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Multilink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-ppp:bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ppp:virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Multilink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::Multilink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-name" || name == "virtual-template")
        return true;
    return false;
}

Native::MacAddressTable::MacAddressTable()
    :
    evc_xconnect(std::make_shared<Native::MacAddressTable::EvcXconnect>())
	,limit(std::make_shared<Native::MacAddressTable::Limit>())
	,learning(std::make_shared<Native::MacAddressTable::Learning>())
{
    evc_xconnect->parent = this;
    limit->parent = this;
    learning->parent = this;

    yang_name = "mac-address-table"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::~MacAddressTable()
{
}

bool Native::MacAddressTable::has_data() const
{
    return (evc_xconnect !=  nullptr && evc_xconnect->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (learning !=  nullptr && learning->has_data());
}

bool Native::MacAddressTable::has_operation() const
{
    return is_set(yfilter)
	|| (evc_xconnect !=  nullptr && evc_xconnect->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (learning !=  nullptr && learning->has_operation());
}

std::string Native::MacAddressTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evc-xconnect")
    {
        if(evc_xconnect == nullptr)
        {
            evc_xconnect = std::make_shared<Native::MacAddressTable::EvcXconnect>();
        }
        return evc_xconnect;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::MacAddressTable::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::MacAddressTable::Learning>();
        }
        return learning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evc_xconnect != nullptr)
    {
        children["evc-xconnect"] = evc_xconnect;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(learning != nullptr)
    {
        children["learning"] = learning;
    }

    return children;
}

void Native::MacAddressTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evc-xconnect" || name == "limit" || name == "learning")
        return true;
    return false;
}

Native::MacAddressTable::EvcXconnect::EvcXconnect()
    :
    l2pt_forward_all{YType::empty, "l2pt-forward-all"}
{

    yang_name = "evc-xconnect"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::EvcXconnect::~EvcXconnect()
{
}

bool Native::MacAddressTable::EvcXconnect::has_data() const
{
    return l2pt_forward_all.is_set;
}

bool Native::MacAddressTable::EvcXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2pt_forward_all.yfilter);
}

std::string Native::MacAddressTable::EvcXconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::EvcXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evc-xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::EvcXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2pt_forward_all.is_set || is_set(l2pt_forward_all.yfilter)) leaf_name_data.push_back(l2pt_forward_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::EvcXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::EvcXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::EvcXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2pt-forward-all")
    {
        l2pt_forward_all = value;
        l2pt_forward_all.value_namespace = name_space;
        l2pt_forward_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::EvcXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2pt-forward-all")
    {
        l2pt_forward_all.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::EvcXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2pt-forward-all")
        return true;
    return false;
}

Native::MacAddressTable::Limit::Limit()
{

    yang_name = "limit"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Limit::~Limit()
{
}

bool Native::MacAddressTable::Limit::has_data() const
{
    for (std::size_t index=0; index<bdomain.size(); index++)
    {
        if(bdomain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Limit::has_operation() const
{
    for (std::size_t index=0; index<bdomain.size(); index++)
    {
        if(bdomain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MacAddressTable::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdomain")
    {
        for(auto const & c : bdomain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::MacAddressTable::Limit::Bdomain>();
        c->parent = this;
        bdomain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bdomain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::MacAddressTable::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdomain")
        return true;
    return false;
}

Native::MacAddressTable::Limit::Bdomain::Bdomain()
    :
    number{YType::uint16, "number"},
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"}
{

    yang_name = "bdomain"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Limit::Bdomain::~Bdomain()
{
}

bool Native::MacAddressTable::Limit::Bdomain::has_data() const
{
    return number.is_set
	|| action.is_set
	|| maximum.is_set;
}

bool Native::MacAddressTable::Limit::Bdomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string Native::MacAddressTable::Limit::Bdomain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Limit::Bdomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdomain" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Limit::Bdomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Limit::Bdomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Limit::Bdomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::Limit::Bdomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::Limit::Bdomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::Limit::Bdomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "action" || name == "maximum")
        return true;
    return false;
}

Native::MacAddressTable::Learning::Learning()
{

    yang_name = "learning"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Learning::~Learning()
{
}

bool Native::MacAddressTable::Learning::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Learning::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MacAddressTable::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::MacAddressTable::Learning::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::MacAddressTable::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::MacAddressTable::Learning::Vlan::Vlan()
    :
    id{YType::uint16, "id"},
    module{YType::uint8, "module"}
{

    yang_name = "vlan"; yang_parent_name = "learning"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Learning::Vlan::~Vlan()
{
}

bool Native::MacAddressTable::Learning::Vlan::has_data() const
{
    return id.is_set
	|| module.is_set;
}

bool Native::MacAddressTable::Learning::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(module.yfilter);
}

std::string Native::MacAddressTable::Learning::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/learning/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Learning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Learning::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Learning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Learning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::Learning::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::Learning::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::Learning::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "module")
        return true;
    return false;
}

Native::Redundancy::Redundancy()
    :
    maintenance_mode{YType::empty, "maintenance-mode"},
    mode{YType::enumeration, "mode"}
    	,
    main_cpu(nullptr) // presence node
	,policy(std::make_shared<Native::Redundancy::Policy>())
	,timer(std::make_shared<Native::Redundancy::Timer>())
	,interchassis(std::make_shared<Native::Redundancy::Interchassis>())
{
    policy->parent = this;
    timer->parent = this;
    interchassis->parent = this;

    yang_name = "redundancy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::~Redundancy()
{
}

bool Native::Redundancy::has_data() const
{
    return maintenance_mode.is_set
	|| mode.is_set
	|| (main_cpu !=  nullptr && main_cpu->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data());
}

bool Native::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintenance_mode.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (main_cpu !=  nullptr && main_cpu->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation());
}

std::string Native::Redundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance_mode.is_set || is_set(maintenance_mode.yfilter)) leaf_name_data.push_back(maintenance_mode.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-cpu")
    {
        if(main_cpu == nullptr)
        {
            main_cpu = std::make_shared<Native::Redundancy::MainCpu>();
        }
        return main_cpu;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Redundancy::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Redundancy::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Redundancy::Interchassis>();
        }
        return interchassis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(main_cpu != nullptr)
    {
        children["main-cpu"] = main_cpu;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    if(interchassis != nullptr)
    {
        children["interchassis"] = interchassis;
    }

    return children;
}

void Native::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintenance-mode")
    {
        maintenance_mode = value;
        maintenance_mode.value_namespace = name_space;
        maintenance_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintenance-mode")
    {
        maintenance_mode.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-cpu" || name == "policy" || name == "timer" || name == "interchassis" || name == "maintenance-mode" || name == "mode")
        return true;
    return false;
}

Native::Redundancy::MainCpu::MainCpu()
    :
    auto_sync(std::make_shared<Native::Redundancy::MainCpu::AutoSync>())
	,standby(std::make_shared<Native::Redundancy::MainCpu::Standby>())
{
    auto_sync->parent = this;
    standby->parent = this;

    yang_name = "main-cpu"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::~MainCpu()
{
}

bool Native::Redundancy::MainCpu::has_data() const
{
    return (auto_sync !=  nullptr && auto_sync->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Native::Redundancy::MainCpu::has_operation() const
{
    return is_set(yfilter)
	|| (auto_sync !=  nullptr && auto_sync->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Native::Redundancy::MainCpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-sync")
    {
        if(auto_sync == nullptr)
        {
            auto_sync = std::make_shared<Native::Redundancy::MainCpu::AutoSync>();
        }
        return auto_sync;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Redundancy::MainCpu::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_sync != nullptr)
    {
        children["auto-sync"] = auto_sync;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void Native::Redundancy::MainCpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-sync" || name == "standby")
        return true;
    return false;
}

Native::Redundancy::MainCpu::AutoSync::AutoSync()
    :
    running_config{YType::empty, "running-config"},
    config_register{YType::empty, "config-register"},
    bootvar{YType::empty, "bootvar"},
    standard{YType::empty, "standard"}
{

    yang_name = "auto-sync"; yang_parent_name = "main-cpu"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::AutoSync::~AutoSync()
{
}

bool Native::Redundancy::MainCpu::AutoSync::has_data() const
{
    return running_config.is_set
	|| config_register.is_set
	|| bootvar.is_set
	|| standard.is_set;
}

bool Native::Redundancy::MainCpu::AutoSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(running_config.yfilter)
	|| ydk::is_set(config_register.yfilter)
	|| ydk::is_set(bootvar.yfilter)
	|| ydk::is_set(standard.yfilter);
}

std::string Native::Redundancy::MainCpu::AutoSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::AutoSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::AutoSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (running_config.is_set || is_set(running_config.yfilter)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (config_register.is_set || is_set(config_register.yfilter)) leaf_name_data.push_back(config_register.get_name_leafdata());
    if (bootvar.is_set || is_set(bootvar.yfilter)) leaf_name_data.push_back(bootvar.get_name_leafdata());
    if (standard.is_set || is_set(standard.yfilter)) leaf_name_data.push_back(standard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::AutoSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::AutoSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::AutoSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "running-config")
    {
        running_config = value;
        running_config.value_namespace = name_space;
        running_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-register")
    {
        config_register = value;
        config_register.value_namespace = name_space;
        config_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootvar")
    {
        bootvar = value;
        bootvar.value_namespace = name_space;
        bootvar.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard")
    {
        standard = value;
        standard.value_namespace = name_space;
        standard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::AutoSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "running-config")
    {
        running_config.yfilter = yfilter;
    }
    if(value_path == "config-register")
    {
        config_register.yfilter = yfilter;
    }
    if(value_path == "bootvar")
    {
        bootvar.yfilter = yfilter;
    }
    if(value_path == "standard")
    {
        standard.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::AutoSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-config" || name == "config-register" || name == "bootvar" || name == "standard")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Standby()
    :
    console(std::make_shared<Native::Redundancy::MainCpu::Standby::Console>())
	,initialization(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>())
{
    console->parent = this;
    initialization->parent = this;

    yang_name = "standby"; yang_parent_name = "main-cpu"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::~Standby()
{
}

bool Native::Redundancy::MainCpu::Standby::has_data() const
{
    return (console !=  nullptr && console->has_data())
	|| (initialization !=  nullptr && initialization->has_data());
}

bool Native::Redundancy::MainCpu::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (console !=  nullptr && console->has_operation())
	|| (initialization !=  nullptr && initialization->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Redundancy::MainCpu::Standby::Console>();
        }
        return console;
    }

    if(child_yang_name == "initialization")
    {
        if(initialization == nullptr)
        {
            initialization = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>();
        }
        return initialization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(console != nullptr)
    {
        children["console"] = console;
    }

    if(initialization != nullptr)
    {
        children["initialization"] = initialization;
    }

    return children;
}

void Native::Redundancy::MainCpu::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console" || name == "initialization")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Console::Console()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "console"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::Console::~Console()
{
}

bool Native::Redundancy::MainCpu::Standby::Console::has_data() const
{
    return enable.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Console::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Redundancy::MainCpu::Standby::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::Standby::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::Standby::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::Standby::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Initialization()
    :
    delay(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>())
{
    delay->parent = this;

    yang_name = "initialization"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::Initialization::~Initialization()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initialization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Initialization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Initialization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Initialization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::Standby::Initialization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::Delay()
    :
    second{YType::uint16, "second"},
    boot_only{YType::empty, "boot-only"}
{

    yang_name = "delay"; yang_parent_name = "initialization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::~Delay()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_data() const
{
    return second.is_set
	|| boot_only.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(boot_only.yfilter);
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/initialization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (boot_only.is_set || is_set(boot_only.yfilter)) leaf_name_data.push_back(boot_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-only")
    {
        boot_only = value;
        boot_only.value_namespace = name_space;
        boot_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::Standby::Initialization::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "boot-only")
    {
        boot_only.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "boot-only")
        return true;
    return false;
}

Native::Redundancy::Policy::Policy()
    :
    config_sync(std::make_shared<Native::Redundancy::Policy::ConfigSync>())
{
    config_sync->parent = this;

    yang_name = "policy"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::~Policy()
{
}

bool Native::Redundancy::Policy::has_data() const
{
    return (config_sync !=  nullptr && config_sync->has_data());
}

bool Native::Redundancy::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (config_sync !=  nullptr && config_sync->has_operation());
}

std::string Native::Redundancy::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-sync")
    {
        if(config_sync == nullptr)
        {
            config_sync = std::make_shared<Native::Redundancy::Policy::ConfigSync>();
        }
        return config_sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_sync != nullptr)
    {
        children["config-sync"] = config_sync;
    }

    return children;
}

void Native::Redundancy::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-sync")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::ConfigSync()
    :
    bulk(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>())
	,lbl(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>())
{
    bulk->parent = this;
    lbl->parent = this;

    yang_name = "config-sync"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::~ConfigSync()
{
}

bool Native::Redundancy::Policy::ConfigSync::has_data() const
{
    return (bulk !=  nullptr && bulk->has_data())
	|| (lbl !=  nullptr && lbl->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::has_operation() const
{
    return is_set(yfilter)
	|| (bulk !=  nullptr && bulk->has_operation())
	|| (lbl !=  nullptr && lbl->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bulk")
    {
        if(bulk == nullptr)
        {
            bulk = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>();
        }
        return bulk;
    }

    if(child_yang_name == "lbl")
    {
        if(lbl == nullptr)
        {
            lbl = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>();
        }
        return lbl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bulk != nullptr)
    {
        children["bulk"] = bulk;
    }

    if(lbl != nullptr)
    {
        children["lbl"] = lbl;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bulk" || name == "lbl")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Bulk()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>())
{
    prc->parent = this;

    yang_name = "bulk"; yang_parent_name = "config-sync"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::~Bulk()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_data() const
{
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_operation() const
{
    return is_set(yfilter)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Bulk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Bulk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::Bulk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prc")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{

    yang_name = "prc"; yang_parent_name = "bulk"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::~Prc()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_data() const
{
    return reload.is_set;
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/bulk/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Policy::ConfigSync::Bulk::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Lbl()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>())
{
    prc->parent = this;

    yang_name = "lbl"; yang_parent_name = "config-sync"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::~Lbl()
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_data() const
{
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_operation() const
{
    return is_set(yfilter)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Lbl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Lbl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Lbl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::Lbl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::Lbl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prc")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{

    yang_name = "prc"; yang_parent_name = "lbl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Prc::~Prc()
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_data() const
{
    return reload.is_set;
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/lbl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Policy::ConfigSync::Lbl::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Policy::ConfigSync::Lbl::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload")
        return true;
    return false;
}

Native::Redundancy::Timer::Timer()
    :
    rpso{YType::uint16, "rpso"}
{

    yang_name = "timer"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Timer::~Timer()
{
}

bool Native::Redundancy::Timer::has_data() const
{
    return rpso.is_set;
}

bool Native::Redundancy::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpso.yfilter);
}

std::string Native::Redundancy::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpso.is_set || is_set(rpso.yfilter)) leaf_name_data.push_back(rpso.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpso")
    {
        rpso = value;
        rpso.value_namespace = name_space;
        rpso.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpso")
    {
        rpso.yfilter = yfilter;
    }
}

bool Native::Redundancy::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpso")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Interchassis()
{

    yang_name = "interchassis"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Interchassis::~Interchassis()
{
}

bool Native::Redundancy::Interchassis::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Redundancy::Interchassis::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Redundancy::Interchassis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Redundancy::Interchassis::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Redundancy::Interchassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Interchassis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Interchassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Group()
    :
    group_number{YType::uint64, "group-number"}
    	,
    monitor(std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>())
	,member(std::make_shared<Native::Redundancy::Interchassis::Group::Member>())
	,backbone(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>())
{
    monitor->parent = this;
    member->parent = this;
    backbone->parent = this;

    yang_name = "group"; yang_parent_name = "interchassis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Interchassis::Group::~Group()
{
}

bool Native::Redundancy::Interchassis::Group::has_data() const
{
    return group_number.is_set
	|| (monitor !=  nullptr && monitor->has_data())
	|| (member !=  nullptr && member->has_data())
	|| (backbone !=  nullptr && backbone->has_data());
}

bool Native::Redundancy::Interchassis::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (member !=  nullptr && member->has_operation())
	|| (backbone !=  nullptr && backbone->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/interchassis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Interchassis::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::Redundancy::Interchassis::Group::Member>();
        }
        return member;
    }

    if(child_yang_name == "backbone")
    {
        if(backbone == nullptr)
        {
            backbone = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>();
        }
        return backbone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    if(backbone != nullptr)
    {
        children["backbone"] = backbone;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "member" || name == "backbone" || name == "group-number")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Monitor::Monitor()
    :
    peer{YType::empty, "peer"},
    bfd{YType::empty, "bfd"}
{

    yang_name = "monitor"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Monitor::~Monitor()
{
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_data() const
{
    return peer.is_set
	|| bfd.is_set;
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(bfd.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "bfd")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Member::Member()
    :
    ip{YType::str, "ip"}
{

    yang_name = "member"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Member::~Member()
{
}

bool Native::Redundancy::Interchassis::Group::Member::has_data() const
{
    return ip.is_set;
}

bool Native::Redundancy::Interchassis::Group::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Backbone()
    :
    interface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>())
{
    interface->parent = this;

    yang_name = "backbone"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::~Backbone()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::Backbone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Interchassis::Group::Backbone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backbone"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::~Interface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Scheduler::Scheduler()
    :
    runtime(std::make_shared<Native::Scheduler::Runtime>())
	,allocate(std::make_shared<Native::Scheduler::Allocate>())
{
    runtime->parent = this;
    allocate->parent = this;

    yang_name = "scheduler"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Scheduler::~Scheduler()
{
}

bool Native::Scheduler::has_data() const
{
    return (runtime !=  nullptr && runtime->has_data())
	|| (allocate !=  nullptr && allocate->has_data());
}

bool Native::Scheduler::has_operation() const
{
    return is_set(yfilter)
	|| (runtime !=  nullptr && runtime->has_operation())
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string Native::Scheduler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Scheduler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "runtime")
    {
        if(runtime == nullptr)
        {
            runtime = std::make_shared<Native::Scheduler::Runtime>();
        }
        return runtime;
    }

    if(child_yang_name == "allocate")
    {
        if(allocate == nullptr)
        {
            allocate = std::make_shared<Native::Scheduler::Allocate>();
        }
        return allocate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(runtime != nullptr)
    {
        children["runtime"] = runtime;
    }

    if(allocate != nullptr)
    {
        children["allocate"] = allocate;
    }

    return children;
}

void Native::Scheduler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Scheduler::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Scheduler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "runtime" || name == "allocate")
        return true;
    return false;
}

Native::Scheduler::Runtime::Runtime()
    :
    netinput{YType::uint16, "netinput"}
{

    yang_name = "runtime"; yang_parent_name = "scheduler"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Scheduler::Runtime::~Runtime()
{
}

bool Native::Scheduler::Runtime::has_data() const
{
    return netinput.is_set;
}

bool Native::Scheduler::Runtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netinput.yfilter);
}

std::string Native::Scheduler::Runtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netinput.is_set || is_set(netinput.yfilter)) leaf_name_data.push_back(netinput.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Scheduler::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Scheduler::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netinput")
    {
        netinput = value;
        netinput.value_namespace = name_space;
        netinput.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Scheduler::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netinput")
    {
        netinput.yfilter = yfilter;
    }
}

bool Native::Scheduler::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netinput")
        return true;
    return false;
}

Native::Scheduler::Allocate::Allocate()
    :
    interrupt_time{YType::uint16, "interrupt-time"},
    process_time{YType::uint16, "process-time"}
{

    yang_name = "allocate"; yang_parent_name = "scheduler"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Scheduler::Allocate::~Allocate()
{
}

bool Native::Scheduler::Allocate::has_data() const
{
    return interrupt_time.is_set
	|| process_time.is_set;
}

bool Native::Scheduler::Allocate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interrupt_time.yfilter)
	|| ydk::is_set(process_time.yfilter);
}

std::string Native::Scheduler::Allocate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::Allocate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interrupt_time.is_set || is_set(interrupt_time.yfilter)) leaf_name_data.push_back(interrupt_time.get_name_leafdata());
    if (process_time.is_set || is_set(process_time.yfilter)) leaf_name_data.push_back(process_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Scheduler::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Scheduler::Allocate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interrupt-time")
    {
        interrupt_time = value;
        interrupt_time.value_namespace = name_space;
        interrupt_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-time")
    {
        process_time = value;
        process_time.value_namespace = name_space;
        process_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Scheduler::Allocate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interrupt-time")
    {
        interrupt_time.yfilter = yfilter;
    }
    if(value_path == "process-time")
    {
        process_time.yfilter = yfilter;
    }
}

bool Native::Scheduler::Allocate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interrupt-time" || name == "process-time")
        return true;
    return false;
}

Native::Epm::Epm()
    :
    logging{YType::empty, "logging"}
{

    yang_name = "epm"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Epm::~Epm()
{
}

bool Native::Epm::has_data() const
{
    return logging.is_set;
}

bool Native::Epm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Native::Epm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Epm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Epm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Epm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Epm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Epm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Epm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Epm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Native::SpanningTree::SpanningTree()
    :
    backbonefast{YType::empty, "Cisco-IOS-XE-spanning-tree:backbonefast"},
    logging{YType::empty, "Cisco-IOS-XE-spanning-tree:logging"},
    mode{YType::enumeration, "Cisco-IOS-XE-spanning-tree:mode"}
    	,
    bridge(std::make_shared<Native::SpanningTree::Bridge>())
	,etherchannel(std::make_shared<Native::SpanningTree::Etherchannel>())
	,extend(std::make_shared<Native::SpanningTree::Extend>())
	,loopguard(std::make_shared<Native::SpanningTree::Loopguard>())
	,mst(std::make_shared<Native::SpanningTree::Mst>())
	,optimize(std::make_shared<Native::SpanningTree::Optimize>())
	,pathcost(std::make_shared<Native::SpanningTree::Pathcost>())
	,portfast(std::make_shared<Native::SpanningTree::Portfast>())
	,transmit(std::make_shared<Native::SpanningTree::Transmit>())
	,uplinkfast(nullptr) // presence node
{
    bridge->parent = this;
    etherchannel->parent = this;
    extend->parent = this;
    loopguard->parent = this;
    mst->parent = this;
    optimize->parent = this;
    pathcost->parent = this;
    portfast->parent = this;
    transmit->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::~SpanningTree()
{
}

bool Native::SpanningTree::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return backbonefast.is_set
	|| logging.is_set
	|| mode.is_set
	|| (bridge !=  nullptr && bridge->has_data())
	|| (etherchannel !=  nullptr && etherchannel->has_data())
	|| (extend !=  nullptr && extend->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data())
	|| (optimize !=  nullptr && optimize->has_data())
	|| (pathcost !=  nullptr && pathcost->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (transmit !=  nullptr && transmit->has_data())
	|| (uplinkfast !=  nullptr && uplinkfast->has_data());
}

bool Native::SpanningTree::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backbonefast.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (etherchannel !=  nullptr && etherchannel->has_operation())
	|| (extend !=  nullptr && extend->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation())
	|| (optimize !=  nullptr && optimize->has_operation())
	|| (pathcost !=  nullptr && pathcost->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (uplinkfast !=  nullptr && uplinkfast->has_operation());
}

std::string Native::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbonefast.is_set || is_set(backbonefast.yfilter)) leaf_name_data.push_back(backbonefast.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Native::SpanningTree::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:etherchannel")
    {
        if(etherchannel == nullptr)
        {
            etherchannel = std::make_shared<Native::SpanningTree::Etherchannel>();
        }
        return etherchannel;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::SpanningTree::Extend>();
        }
        return extend;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::SpanningTree::Mst>();
        }
        return mst;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:optimize")
    {
        if(optimize == nullptr)
        {
            optimize = std::make_shared<Native::SpanningTree::Optimize>();
        }
        return optimize;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:pathcost")
    {
        if(pathcost == nullptr)
        {
            pathcost = std::make_shared<Native::SpanningTree::Pathcost>();
        }
        return pathcost;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<Native::SpanningTree::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:uplinkfast")
    {
        if(uplinkfast == nullptr)
        {
            uplinkfast = std::make_shared<Native::SpanningTree::Uplinkfast>();
        }
        return uplinkfast;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SpanningTree::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge != nullptr)
    {
        children["Cisco-IOS-XE-spanning-tree:bridge"] = bridge;
    }

    if(etherchannel != nullptr)
    {
        children["Cisco-IOS-XE-spanning-tree:etherchannel"] = etherchannel;
    }

    if(extend != nullptr)
    {
        children["Cisco-IOS-XE-spanning-tree:extend"] = extend;
    }

    if(loopguard != nullptr)
    {
        children["Cisco-IOS-XE-spanning-tree:loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        children["Cisco-IOS-XE-spanning-tree:mst"] = mst;
    }

    if(optimize != nullptr)
    {
        children["Cisco-IOS-XE-spanning-tree:optimize"] = optimize;
    }

    if(pathcost != nullptr)
    {
        children["Cisco-IOS-XE-spanning-tree:pathcost"] = pathcost;
    }

    if(portfast != nullptr)
    {
        children["Cisco-IOS-XE-spanning-tree:portfast"] = portfast;
    }

    if(transmit != nullptr)
    {
        children["Cisco-IOS-XE-spanning-tree:transmit"] = transmit;
    }

    if(uplinkfast != nullptr)
    {
        children["Cisco-IOS-XE-spanning-tree:uplinkfast"] = uplinkfast;
    }

    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-spanning-tree:backbonefast")
    {
        backbonefast = value;
        backbonefast.value_namespace = name_space;
        backbonefast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-spanning-tree:logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-spanning-tree:mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbonefast")
    {
        backbonefast.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge" || name == "etherchannel" || name == "extend" || name == "loopguard" || name == "mst" || name == "optimize" || name == "pathcost" || name == "portfast" || name == "transmit" || name == "uplinkfast" || name == "vlan" || name == "backbonefast" || name == "logging" || name == "mode")
        return true;
    return false;
}

Native::SpanningTree::Bridge::Bridge()
    :
    priority{YType::uint8, "priority"},
    id{YType::str, "ID"},
    assurance{YType::empty, "assurance"}
{

    yang_name = "bridge"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Bridge::~Bridge()
{
}

bool Native::SpanningTree::Bridge::has_data() const
{
    return priority.is_set
	|| id.is_set
	|| assurance.is_set;
}

bool Native::SpanningTree::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(assurance.yfilter);
}

std::string Native::SpanningTree::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (assurance.is_set || is_set(assurance.yfilter)) leaf_name_data.push_back(assurance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ID")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assurance")
    {
        assurance = value;
        assurance.value_namespace = name_space;
        assurance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "ID")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "assurance")
    {
        assurance.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "ID" || name == "assurance")
        return true;
    return false;
}

Native::SpanningTree::Etherchannel::Etherchannel()
    :
    guard(std::make_shared<Native::SpanningTree::Etherchannel::Guard>())
{
    guard->parent = this;

    yang_name = "etherchannel"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Etherchannel::~Etherchannel()
{
}

bool Native::SpanningTree::Etherchannel::has_data() const
{
    return (guard !=  nullptr && guard->has_data());
}

bool Native::SpanningTree::Etherchannel::has_operation() const
{
    return is_set(yfilter)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::SpanningTree::Etherchannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Etherchannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:etherchannel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Etherchannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Etherchannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::SpanningTree::Etherchannel::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Etherchannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    return children;
}

void Native::SpanningTree::Etherchannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Etherchannel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Etherchannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::SpanningTree::Etherchannel::Guard::Guard()
    :
    misconfig{YType::empty, "misconfig"}
{

    yang_name = "guard"; yang_parent_name = "etherchannel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Etherchannel::Guard::~Guard()
{
}

bool Native::SpanningTree::Etherchannel::Guard::has_data() const
{
    return misconfig.is_set;
}

bool Native::SpanningTree::Etherchannel::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(misconfig.yfilter);
}

std::string Native::SpanningTree::Etherchannel::Guard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:etherchannel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Etherchannel::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Etherchannel::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (misconfig.is_set || is_set(misconfig.yfilter)) leaf_name_data.push_back(misconfig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Etherchannel::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Etherchannel::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Etherchannel::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "misconfig")
    {
        misconfig = value;
        misconfig.value_namespace = name_space;
        misconfig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Etherchannel::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "misconfig")
    {
        misconfig.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Etherchannel::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "misconfig")
        return true;
    return false;
}

Native::SpanningTree::Extend::Extend()
    :
    system_id{YType::empty, "system-id"}
{

    yang_name = "extend"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Extend::~Extend()
{
}

bool Native::SpanningTree::Extend::has_data() const
{
    return system_id.is_set;
}

bool Native::SpanningTree::Extend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string Native::SpanningTree::Extend::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:extend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Extend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Extend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Extend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Extend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id")
        return true;
    return false;
}

Native::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "loopguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::SpanningTree::Loopguard::has_data() const
{
    return default_.is_set;
}

bool Native::SpanningTree::Loopguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Loopguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:loopguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Loopguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Loopguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Loopguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Loopguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::SpanningTree::Mst::Mst()
    :
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    max_age{YType::uint8, "max-age"},
    max_hops{YType::uint8, "max-hops"}
    	,
    configuration(std::make_shared<Native::SpanningTree::Mst::Configuration>())
{
    configuration->parent = this;

    yang_name = "mst"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::~Mst()
{
}

bool Native::SpanningTree::Mst::has_data() const
{
    for (std::size_t index=0; index<instance_range.size(); index++)
    {
        if(instance_range[index]->has_data())
            return true;
    }
    return forward_time.is_set
	|| hello_time.is_set
	|| max_age.is_set
	|| max_hops.is_set
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Native::SpanningTree::Mst::has_operation() const
{
    for (std::size_t index=0; index<instance_range.size(); index++)
    {
        if(instance_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(forward_time.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(max_age.yfilter)
	|| ydk::is_set(max_hops.yfilter)
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::SpanningTree::Mst::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:mst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_time.is_set || is_set(forward_time.yfilter)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.yfilter)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.yfilter)) leaf_name_data.push_back(max_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-range")
    {
        for(auto const & c : instance_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SpanningTree::Mst::InstanceRange>();
        c->parent = this;
        instance_range.push_back(c);
        return c;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::SpanningTree::Mst::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance_range)
    {
        children[c->get_segment_path()] = c;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    return children;
}

void Native::SpanningTree::Mst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-time")
    {
        forward_time = value;
        forward_time.value_namespace = name_space;
        forward_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-age")
    {
        max_age = value;
        max_age.value_namespace = name_space;
        max_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
        max_hops.value_namespace = name_space;
        max_hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-time")
    {
        forward_time.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "max-age")
    {
        max_age.yfilter = yfilter;
    }
    if(value_path == "max-hops")
    {
        max_hops.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-range" || name == "configuration" || name == "forward-time" || name == "hello-time" || name == "max-age" || name == "max-hops")
        return true;
    return false;
}

Native::SpanningTree::Mst::InstanceRange::InstanceRange()
    :
    id{YType::str, "id"},
    priority{YType::uint16, "priority"},
    root{YType::enumeration, "root"}
{

    yang_name = "instance-range"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::InstanceRange::~InstanceRange()
{
}

bool Native::SpanningTree::Mst::InstanceRange::has_data() const
{
    return id.is_set
	|| priority.is_set
	|| root.is_set;
}

bool Native::SpanningTree::Mst::InstanceRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(root.yfilter);
}

std::string Native::SpanningTree::Mst::InstanceRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::InstanceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-range" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::InstanceRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (root.is_set || is_set(root.yfilter)) leaf_name_data.push_back(root.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::InstanceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::InstanceRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::InstanceRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root")
    {
        root = value;
        root.value_namespace = name_space;
        root.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::InstanceRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "root")
    {
        root.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::InstanceRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "priority" || name == "root")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::Configuration()
    :
    name{YType::str, "name"},
    revision{YType::uint16, "revision"}
    	,
    private_vlan(std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>())
{
    private_vlan->parent = this;

    yang_name = "configuration"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::Configuration::~Configuration()
{
}

bool Native::SpanningTree::Mst::Configuration::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return name.is_set
	|| revision.is_set
	|| (private_vlan !=  nullptr && private_vlan->has_data());
}

bool Native::SpanningTree::Mst::Configuration::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| (private_vlan !=  nullptr && private_vlan->has_operation());
}

std::string Native::SpanningTree::Mst::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SpanningTree::Mst::Configuration::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>();
        }
        return private_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    return children;
}

void Native::SpanningTree::Mst::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "private-vlan" || name == "name" || name == "revision")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::Instance::Instance()
    :
    id{YType::uint16, "id"},
    vlan{YType::str, "vlan"}
{

    yang_name = "instance"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::Configuration::Instance::~Instance()
{
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_data() const
{
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_operation() const
{
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::SpanningTree::Mst::Configuration::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::Configuration::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
}

void Native::SpanningTree::Mst::Configuration::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vlan")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::PrivateVlan()
    :
    synchronize{YType::empty, "synchronize"}
{

    yang_name = "private-vlan"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::~PrivateVlan()
{
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_data() const
{
    return synchronize.is_set;
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(synchronize.yfilter);
}

std::string Native::SpanningTree::Mst::Configuration::PrivateVlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (synchronize.is_set || is_set(synchronize.yfilter)) leaf_name_data.push_back(synchronize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::Configuration::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "synchronize")
    {
        synchronize = value;
        synchronize.value_namespace = name_space;
        synchronize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::Configuration::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "synchronize")
    {
        synchronize.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronize")
        return true;
    return false;
}

Native::SpanningTree::Optimize::Optimize()
    :
    bpdu(std::make_shared<Native::SpanningTree::Optimize::Bpdu>())
{
    bpdu->parent = this;

    yang_name = "optimize"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Optimize::~Optimize()
{
}

bool Native::SpanningTree::Optimize::has_data() const
{
    return (bpdu !=  nullptr && bpdu->has_data());
}

bool Native::SpanningTree::Optimize::has_operation() const
{
    return is_set(yfilter)
	|| (bpdu !=  nullptr && bpdu->has_operation());
}

std::string Native::SpanningTree::Optimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Optimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:optimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Optimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Optimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpdu")
    {
        if(bpdu == nullptr)
        {
            bpdu = std::make_shared<Native::SpanningTree::Optimize::Bpdu>();
        }
        return bpdu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Optimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpdu != nullptr)
    {
        children["bpdu"] = bpdu;
    }

    return children;
}

void Native::SpanningTree::Optimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Optimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Optimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdu")
        return true;
    return false;
}

Native::SpanningTree::Optimize::Bpdu::Bpdu()
    :
    transmission{YType::boolean, "transmission"}
{

    yang_name = "bpdu"; yang_parent_name = "optimize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Optimize::Bpdu::~Bpdu()
{
}

bool Native::SpanningTree::Optimize::Bpdu::has_data() const
{
    return transmission.is_set;
}

bool Native::SpanningTree::Optimize::Bpdu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmission.yfilter);
}

std::string Native::SpanningTree::Optimize::Bpdu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:optimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Optimize::Bpdu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpdu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Optimize::Bpdu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmission.is_set || is_set(transmission.yfilter)) leaf_name_data.push_back(transmission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Optimize::Bpdu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Optimize::Bpdu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Optimize::Bpdu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmission")
    {
        transmission = value;
        transmission.value_namespace = name_space;
        transmission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Optimize::Bpdu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmission")
    {
        transmission.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Optimize::Bpdu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmission")
        return true;
    return false;
}

Native::SpanningTree::Pathcost::Pathcost()
    :
    method(std::make_shared<Native::SpanningTree::Pathcost::Method>())
{
    method->parent = this;

    yang_name = "pathcost"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Pathcost::~Pathcost()
{
}

bool Native::SpanningTree::Pathcost::has_data() const
{
    return (method !=  nullptr && method->has_data());
}

bool Native::SpanningTree::Pathcost::has_operation() const
{
    return is_set(yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::SpanningTree::Pathcost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Pathcost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:pathcost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Pathcost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Pathcost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::SpanningTree::Pathcost::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Pathcost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::SpanningTree::Pathcost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Pathcost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Pathcost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

Native::SpanningTree::Pathcost::Method::Method()
    :
    long_{YType::empty, "long"},
    short_{YType::empty, "short"}
{

    yang_name = "method"; yang_parent_name = "pathcost"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Pathcost::Method::~Method()
{
}

bool Native::SpanningTree::Pathcost::Method::has_data() const
{
    return long_.is_set
	|| short_.is_set;
}

bool Native::SpanningTree::Pathcost::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(short_.yfilter);
}

std::string Native::SpanningTree::Pathcost::Method::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:pathcost/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Pathcost::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Pathcost::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (short_.is_set || is_set(short_.yfilter)) leaf_name_data.push_back(short_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Pathcost::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Pathcost::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Pathcost::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short")
    {
        short_ = value;
        short_.value_namespace = name_space;
        short_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Pathcost::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "short")
    {
        short_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Pathcost::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "short")
        return true;
    return false;
}

Native::SpanningTree::Portfast::Portfast()
    :
    default_{YType::empty, "default"}
    	,
    bpdufilter(std::make_shared<Native::SpanningTree::Portfast::Bpdufilter>())
	,bpduguard(std::make_shared<Native::SpanningTree::Portfast::Bpduguard>())
{
    bpdufilter->parent = this;
    bpduguard->parent = this;

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Portfast::~Portfast()
{
}

bool Native::SpanningTree::Portfast::has_data() const
{
    return default_.is_set
	|| (bpdufilter !=  nullptr && bpdufilter->has_data())
	|| (bpduguard !=  nullptr && bpduguard->has_data());
}

bool Native::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (bpdufilter !=  nullptr && bpdufilter->has_operation())
	|| (bpduguard !=  nullptr && bpduguard->has_operation());
}

std::string Native::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpdufilter")
    {
        if(bpdufilter == nullptr)
        {
            bpdufilter = std::make_shared<Native::SpanningTree::Portfast::Bpdufilter>();
        }
        return bpdufilter;
    }

    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::SpanningTree::Portfast::Bpduguard>();
        }
        return bpduguard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpdufilter != nullptr)
    {
        children["bpdufilter"] = bpdufilter;
    }

    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    return children;
}

void Native::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdufilter" || name == "bpduguard" || name == "default")
        return true;
    return false;
}

Native::SpanningTree::Portfast::Bpdufilter::Bpdufilter()
    :
    default_{YType::empty, "default"}
{

    yang_name = "bpdufilter"; yang_parent_name = "portfast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Portfast::Bpdufilter::~Bpdufilter()
{
}

bool Native::SpanningTree::Portfast::Bpdufilter::has_data() const
{
    return default_.is_set;
}

bool Native::SpanningTree::Portfast::Bpdufilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Portfast::Bpdufilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:portfast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Portfast::Bpdufilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpdufilter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Portfast::Bpdufilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Portfast::Bpdufilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Portfast::Bpdufilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Portfast::Bpdufilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Portfast::Bpdufilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Portfast::Bpdufilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::SpanningTree::Portfast::Bpduguard::Bpduguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "bpduguard"; yang_parent_name = "portfast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Portfast::Bpduguard::~Bpduguard()
{
}

bool Native::SpanningTree::Portfast::Bpduguard::has_data() const
{
    return default_.is_set;
}

bool Native::SpanningTree::Portfast::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Portfast::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:portfast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Portfast::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Portfast::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Portfast::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Portfast::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Portfast::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Portfast::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Portfast::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::SpanningTree::Transmit::Transmit()
    :
    hold_count{YType::uint8, "hold-count"}
{

    yang_name = "transmit"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Transmit::~Transmit()
{
}

bool Native::SpanningTree::Transmit::has_data() const
{
    return hold_count.is_set;
}

bool Native::SpanningTree::Transmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_count.yfilter);
}

std::string Native::SpanningTree::Transmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Transmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_count.is_set || is_set(hold_count.yfilter)) leaf_name_data.push_back(hold_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Transmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-count")
    {
        hold_count = value;
        hold_count.value_namespace = name_space;
        hold_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Transmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-count")
    {
        hold_count.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Transmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-count")
        return true;
    return false;
}

Native::SpanningTree::Uplinkfast::Uplinkfast()
    :
    max_update_rate{YType::uint32, "max-update-rate"}
{

    yang_name = "uplinkfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Uplinkfast::~Uplinkfast()
{
}

bool Native::SpanningTree::Uplinkfast::has_data() const
{
    return max_update_rate.is_set;
}

bool Native::SpanningTree::Uplinkfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_update_rate.yfilter);
}

std::string Native::SpanningTree::Uplinkfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Uplinkfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:uplinkfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Uplinkfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_update_rate.is_set || is_set(max_update_rate.yfilter)) leaf_name_data.push_back(max_update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Uplinkfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Uplinkfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Uplinkfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-update-rate")
    {
        max_update_rate = value;
        max_update_rate.value_namespace = name_space;
        max_update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Uplinkfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-update-rate")
    {
        max_update_rate.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Uplinkfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-update-rate")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Vlan()
    :
    id{YType::str, "id"},
    max_age{YType::uint8, "max-age"},
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    priority{YType::uint16, "priority"}
    	,
    root(std::make_shared<Native::SpanningTree::Vlan::Root>())
{
    root->parent = this;

    yang_name = "vlan"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Vlan::~Vlan()
{
}

bool Native::SpanningTree::Vlan::has_data() const
{
    return id.is_set
	|| max_age.is_set
	|| forward_time.is_set
	|| hello_time.is_set
	|| priority.is_set
	|| (root !=  nullptr && root->has_data());
}

bool Native::SpanningTree::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(max_age.yfilter)
	|| ydk::is_set(forward_time.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (root !=  nullptr && root->has_operation());
}

std::string Native::SpanningTree::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:vlan" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.yfilter)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (forward_time.is_set || is_set(forward_time.yfilter)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "root")
    {
        if(root == nullptr)
        {
            root = std::make_shared<Native::SpanningTree::Vlan::Root>();
        }
        return root;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(root != nullptr)
    {
        children["root"] = root;
    }

    return children;
}

void Native::SpanningTree::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-age")
    {
        max_age = value;
        max_age.value_namespace = name_space;
        max_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-time")
    {
        forward_time = value;
        forward_time.value_namespace = name_space;
        forward_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "max-age")
    {
        max_age.yfilter = yfilter;
    }
    if(value_path == "forward-time")
    {
        forward_time.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "root" || name == "id" || name == "max-age" || name == "forward-time" || name == "hello-time" || name == "priority")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Root::Root()
    :
    primary(std::make_shared<Native::SpanningTree::Vlan::Root::Primary>())
	,secondary(std::make_shared<Native::SpanningTree::Vlan::Root::Secondary>())
{
    primary->parent = this;
    secondary->parent = this;

    yang_name = "root"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SpanningTree::Vlan::Root::~Root()
{
}

bool Native::SpanningTree::Vlan::Root::has_data() const
{
    return (primary !=  nullptr && primary->has_data())
	|| (secondary !=  nullptr && secondary->has_data());
}

bool Native::SpanningTree::Vlan::Root::has_operation() const
{
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondary !=  nullptr && secondary->has_operation());
}

std::string Native::SpanningTree::Vlan::Root::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::SpanningTree::Vlan::Root::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        if(secondary == nullptr)
        {
            secondary = std::make_shared<Native::SpanningTree::Vlan::Root::Secondary>();
        }
        return secondary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    if(secondary != nullptr)
    {
        children["secondary"] = secondary;
    }

    return children;
}

void Native::SpanningTree::Vlan::Root::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Vlan::Root::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Vlan::Root::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Root::Primary::Primary()
    :
    diameter{YType::uint8, "diameter"},
    hello_time{YType::uint8, "hello-time"}
{

    yang_name = "primary"; yang_parent_name = "root"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SpanningTree::Vlan::Root::Primary::~Primary()
{
}

bool Native::SpanningTree::Vlan::Root::Primary::has_data() const
{
    return diameter.is_set
	|| hello_time.is_set;
}

bool Native::SpanningTree::Vlan::Root::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(hello_time.yfilter);
}

std::string Native::SpanningTree::Vlan::Root::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Vlan::Root::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::Root::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::Root::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diameter" || name == "hello-time")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Root::Secondary::Secondary()
    :
    diameter{YType::uint8, "diameter"},
    hello_time{YType::uint8, "hello-time"}
{

    yang_name = "secondary"; yang_parent_name = "root"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SpanningTree::Vlan::Root::Secondary::~Secondary()
{
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_data() const
{
    return diameter.is_set
	|| hello_time.is_set;
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(hello_time.yfilter);
}

std::string Native::SpanningTree::Vlan::Root::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Vlan::Root::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::Root::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diameter" || name == "hello-time")
        return true;
    return false;
}

Native::Subscriber::Subscriber()
    :
    templating{YType::empty, "templating"}
{

    yang_name = "subscriber"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Subscriber::~Subscriber()
{
}

bool Native::Subscriber::has_data() const
{
    return templating.is_set;
}

bool Native::Subscriber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(templating.yfilter);
}

std::string Native::Subscriber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Subscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (templating.is_set || is_set(templating.yfilter)) leaf_name_data.push_back(templating.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Subscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "templating")
    {
        templating = value;
        templating.value_namespace = name_space;
        templating.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Subscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "templating")
    {
        templating.yfilter = yfilter;
    }
}

bool Native::Subscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templating")
        return true;
    return false;
}

Native::Track::Track()
    :
    resolution(std::make_shared<Native::Track::Resolution>())
	,timer(std::make_shared<Native::Track::Timer>())
{
    resolution->parent = this;
    timer->parent = this;

    yang_name = "track"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::~Track()
{
}

bool Native::Track::has_data() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return (resolution !=  nullptr && resolution->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Track::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (resolution !=  nullptr && resolution->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Track::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-track:tracked-object")
    {
        for(auto const & c : tracked_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Track::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-track:resolution")
    {
        if(resolution == nullptr)
        {
            resolution = std::make_shared<Native::Track::Resolution>();
        }
        return resolution;
    }

    if(child_yang_name == "Cisco-IOS-XE-track:timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Track::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tracked_object)
    {
        children[c->get_segment_path()] = c;
    }

    if(resolution != nullptr)
    {
        children["Cisco-IOS-XE-track:resolution"] = resolution;
    }

    if(timer != nullptr)
    {
        children["Cisco-IOS-XE-track:timer"] = timer;
    }

    return children;
}

void Native::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-object" || name == "resolution" || name == "timer")
        return true;
    return false;
}

Native::Track::TrackedObject::TrackedObject()
    :
    object_number{YType::uint32, "object-number"},
    stub_object{YType::empty, "stub-object"},
    default_state{YType::enumeration, "default-state"}
    	,
    interface(std::make_shared<Native::Track::TrackedObject::Interface>())
	,ip(std::make_shared<Native::Track::TrackedObject::Ip>())
	,ipv6(std::make_shared<Native::Track::TrackedObject::Ipv6>())
	,list(std::make_shared<Native::Track::TrackedObject::List>())
	,default_(std::make_shared<Native::Track::TrackedObject::Default_>())
	,delay(std::make_shared<Native::Track::TrackedObject::Delay>())
	,ipv6_object(std::make_shared<Native::Track::TrackedObject::Ipv6Object>())
	,ip_object(std::make_shared<Native::Track::TrackedObject::IpObject>())
{
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    list->parent = this;
    default_->parent = this;
    delay->parent = this;
    ipv6_object->parent = this;
    ip_object->parent = this;

    yang_name = "tracked-object"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::TrackedObject::~TrackedObject()
{
}

bool Native::Track::TrackedObject::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return object_number.is_set
	|| stub_object.is_set
	|| default_state.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (ipv6_object !=  nullptr && ipv6_object->has_data())
	|| (ip_object !=  nullptr && ip_object->has_data());
}

bool Native::Track::TrackedObject::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object_number.yfilter)
	|| ydk::is_set(stub_object.yfilter)
	|| ydk::is_set(default_state.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (ipv6_object !=  nullptr && ipv6_object->has_operation())
	|| (ip_object !=  nullptr && ip_object->has_operation());
}

std::string Native::Track::TrackedObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:tracked-object" <<"[object-number='" <<object_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_number.is_set || is_set(object_number.yfilter)) leaf_name_data.push_back(object_number.get_name_leafdata());
    if (stub_object.is_set || is_set(stub_object.yfilter)) leaf_name_data.push_back(stub_object.get_name_leafdata());
    if (default_state.is_set || is_set(default_state.yfilter)) leaf_name_data.push_back(default_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Track::TrackedObject::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::TrackedObject::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::TrackedObject::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Track::TrackedObject::List>();
        }
        return list;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Track::TrackedObject::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Track::TrackedObject::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Track::TrackedObject::Object>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-object")
    {
        if(ipv6_object == nullptr)
        {
            ipv6_object = std::make_shared<Native::Track::TrackedObject::Ipv6Object>();
        }
        return ipv6_object;
    }

    if(child_yang_name == "ip-object")
    {
        if(ip_object == nullptr)
        {
            ip_object = std::make_shared<Native::Track::TrackedObject::IpObject>();
        }
        return ip_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    if(ipv6_object != nullptr)
    {
        children["ipv6-object"] = ipv6_object;
    }

    if(ip_object != nullptr)
    {
        children["ip-object"] = ip_object;
    }

    return children;
}

void Native::Track::TrackedObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-number")
    {
        object_number = value;
        object_number.value_namespace = name_space;
        object_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-object")
    {
        stub_object = value;
        stub_object.value_namespace = name_space;
        stub_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-state")
    {
        default_state = value;
        default_state.value_namespace = name_space;
        default_state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-number")
    {
        object_number.yfilter = yfilter;
    }
    if(value_path == "stub-object")
    {
        stub_object.yfilter = yfilter;
    }
    if(value_path == "default-state")
    {
        default_state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ip" || name == "ipv6" || name == "list" || name == "default" || name == "delay" || name == "object" || name == "ipv6-object" || name == "ip-object" || name == "object-number" || name == "stub-object" || name == "default-state")
        return true;
    return false;
}

Native::Track::TrackedObject::Interface::Interface()
    :
    name{YType::str, "name"},
    protocol{YType::enumeration, "protocol"},
    routing{YType::empty, "routing"}
{

    yang_name = "interface"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Interface::~Interface()
{
}

bool Native::Track::TrackedObject::Interface::has_data() const
{
    return name.is_set
	|| protocol.is_set
	|| routing.is_set;
}

bool Native::Track::TrackedObject::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(routing.yfilter);
}

std::string Native::Track::TrackedObject::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "protocol" || name == "routing")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Ip()
    :
    route(std::make_shared<Native::Track::TrackedObject::Ip::Route>())
	,sla(std::make_shared<Native::Track::TrackedObject::Ip::Sla>())
{
    route->parent = this;
    sla->parent = this;

    yang_name = "ip"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ip::~Ip()
{
}

bool Native::Track::TrackedObject::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data())
	|| (sla !=  nullptr && sla->has_data());
}

bool Native::Track::TrackedObject::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation())
	|| (sla !=  nullptr && sla->has_operation());
}

std::string Native::Track::TrackedObject::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::TrackedObject::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Track::TrackedObject::Ip::Sla>();
        }
        return sla;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(sla != nullptr)
    {
        children["sla"] = sla;
    }

    return children;
}

void Native::Track::TrackedObject::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "sla")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Route::Route()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    reachability{YType::empty, "reachability"},
    metric{YType::enumeration, "metric"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ip::Route::~Route()
{
}

bool Native::Track::TrackedObject::Ip::Route::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| reachability.is_set
	|| metric.is_set;
}

bool Native::Track::TrackedObject::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Track::TrackedObject::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "reachability" || name == "metric")
        return true;
    return false;
}

Native::Track::TrackedObject::Ip::Sla::Sla()
    :
    number{YType::uint32, "number"},
    reachability{YType::empty, "reachability"},
    state{YType::empty, "state"}
{

    yang_name = "sla"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ip::Sla::~Sla()
{
}

bool Native::Track::TrackedObject::Ip::Sla::has_data() const
{
    return number.is_set
	|| reachability.is_set
	|| state.is_set;
}

bool Native::Track::TrackedObject::Ip::Sla::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Native::Track::TrackedObject::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ip::Sla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "reachability" || name == "state")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6::Ipv6()
    :
    route(std::make_shared<Native::Track::TrackedObject::Ipv6::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ipv6::~Ipv6()
{
}

bool Native::Track::TrackedObject::Ipv6::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::TrackedObject::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::TrackedObject::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::TrackedObject::Ipv6::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::TrackedObject::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6::Route::Route()
    :
    address{YType::str, "address"},
    reachability{YType::empty, "reachability"},
    metric{YType::enumeration, "metric"}
{

    yang_name = "route"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ipv6::Route::~Route()
{
}

bool Native::Track::TrackedObject::Ipv6::Route::has_data() const
{
    return address.is_set
	|| reachability.is_set
	|| metric.is_set;
}

bool Native::Track::TrackedObject::Ipv6::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Track::TrackedObject::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ipv6::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ipv6::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ipv6::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "reachability" || name == "metric")
        return true;
    return false;
}

Native::Track::TrackedObject::List::List()
    :
    boolean{YType::enumeration, "boolean"},
    threshold{YType::enumeration, "threshold"}
{

    yang_name = "list"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::List::~List()
{
}

bool Native::Track::TrackedObject::List::has_data() const
{
    return boolean.is_set
	|| threshold.is_set;
}

bool Native::Track::TrackedObject::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boolean.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Track::TrackedObject::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boolean.is_set || is_set(boolean.yfilter)) leaf_name_data.push_back(boolean.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boolean")
    {
        boolean = value;
        boolean.value_namespace = name_space;
        boolean.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boolean")
    {
        boolean.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boolean" || name == "threshold")
        return true;
    return false;
}

Native::Track::TrackedObject::Default_::Default_()
    :
    default_state{YType::enumeration, "default-state"}
    	,
    delay(nullptr) // presence node
	,ip(std::make_shared<Native::Track::TrackedObject::Default_::Ip>())
	,ipv6(std::make_shared<Native::Track::TrackedObject::Default_::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "default"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::~Default_()
{
}

bool Native::Track::TrackedObject::Default_::has_data() const
{
    return default_state.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Track::TrackedObject::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_state.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Track::TrackedObject::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_state.is_set || is_set(default_state.yfilter)) leaf_name_data.push_back(default_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Track::TrackedObject::Default_::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::TrackedObject::Default_::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::TrackedObject::Default_::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Track::TrackedObject::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-state")
    {
        default_state = value;
        default_state.value_namespace = name_space;
        default_state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-state")
    {
        default_state.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "ip" || name == "ipv6" || name == "default-state")
        return true;
    return false;
}

Native::Track::TrackedObject::Default_::Delay::Delay()
{

    yang_name = "delay"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::Delay::~Delay()
{
}

bool Native::Track::TrackedObject::Default_::Delay::has_data() const
{
    return false;
}

bool Native::Track::TrackedObject::Default_::Delay::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Track::TrackedObject::Default_::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::TrackedObject::Default_::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::TrackedObject::Default_::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Track::TrackedObject::Default_::Ip::Ip()
    :
    vrf{YType::empty, "vrf"}
{

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::Ip::~Ip()
{
}

bool Native::Track::TrackedObject::Default_::Ip::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Default_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::Default_::Ipv6::Ipv6()
    :
    vrf{YType::empty, "vrf"}
{

    yang_name = "ipv6"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Default_::Ipv6::~Ipv6()
{
}

bool Native::Track::TrackedObject::Default_::Ipv6::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Default_::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Default_::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Default_::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Default_::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Default_::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::Delay::Delay()
    :
    down{YType::uint32, "down"},
    up{YType::uint32, "up"}
{

    yang_name = "delay"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Delay::~Delay()
{
}

bool Native::Track::TrackedObject::Delay::has_data() const
{
    return down.is_set
	|| up.is_set;
}

bool Native::Track::TrackedObject::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Native::Track::TrackedObject::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "up")
        return true;
    return false;
}

Native::Track::TrackedObject::Object::Object()
    :
    number{YType::uint32, "number"},
    not_{YType::empty, "not"}
{

    yang_name = "object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Object::~Object()
{
}

bool Native::Track::TrackedObject::Object::has_data() const
{
    return number.is_set
	|| not_.is_set;
}

bool Native::Track::TrackedObject::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(not_.yfilter);
}

std::string Native::Track::TrackedObject::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (not_.is_set || is_set(not_.yfilter)) leaf_name_data.push_back(not_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not")
    {
        not_ = value;
        not_.value_namespace = name_space;
        not_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "not")
    {
        not_.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "not")
        return true;
    return false;
}

Native::Track::TrackedObject::Ipv6Object::Ipv6Object()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "ipv6-object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::Ipv6Object::~Ipv6Object()
{
}

bool Native::Track::TrackedObject::Ipv6Object::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Ipv6Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::Ipv6Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::Ipv6Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ipv6Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::Ipv6Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::Ipv6Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::TrackedObject::IpObject::IpObject()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "ip-object"; yang_parent_name = "tracked-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Track::TrackedObject::IpObject::~IpObject()
{
}

bool Native::Track::TrackedObject::IpObject::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::IpObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Track::TrackedObject::IpObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::TrackedObject::IpObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::IpObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::IpObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::IpObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::TrackedObject::IpObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Track::TrackedObject::IpObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Track::Resolution::Resolution()
    :
    ip(std::make_shared<Native::Track::Resolution::Ip>())
{
    ip->parent = this;

    yang_name = "resolution"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Resolution::~Resolution()
{
}

bool Native::Track::Resolution::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Track::Resolution::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Track::Resolution::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:resolution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Resolution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::Resolution::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Track::Resolution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Resolution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Resolution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Track::Resolution::Ip::Ip()
    :
    route(std::make_shared<Native::Track::Resolution::Ip::Route>())
{
    route->parent = this;

    yang_name = "ip"; yang_parent_name = "resolution"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Resolution::Ip::~Ip()
{
}

bool Native::Track::Resolution::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::Resolution::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::Resolution::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:resolution/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Resolution::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Resolution::Ip::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::Resolution::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Resolution::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Resolution::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::Resolution::Ip::Route::Route()
    :
    bgp{YType::uint32, "bgp"},
    eigrp{YType::uint32, "eigrp"},
    isis{YType::uint32, "isis"},
    ospf{YType::uint32, "ospf"},
    static_{YType::uint32, "static"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Resolution::Ip::Route::~Route()
{
}

bool Native::Track::Resolution::Ip::Route::has_data() const
{
    return bgp.is_set
	|| eigrp.is_set
	|| isis.is_set
	|| ospf.is_set
	|| static_.is_set;
}

bool Native::Track::Resolution::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Track::Resolution::Ip::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:resolution/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Resolution::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Resolution::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Resolution::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Resolution::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Resolution::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Track::Resolution::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "isis" || name == "ospf" || name == "static")
        return true;
    return false;
}

Native::Track::Timer::Timer()
    :
    interface(std::make_shared<Native::Track::Timer::Interface>())
	,ip(std::make_shared<Native::Track::Timer::Ip>())
	,ipv6(std::make_shared<Native::Track::Timer::Ipv6>())
	,list(std::make_shared<Native::Track::Timer::List>())
	,stub_object(std::make_shared<Native::Track::Timer::StubObject>())
{
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    list->parent = this;
    stub_object->parent = this;

    yang_name = "timer"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::~Timer()
{
}

bool Native::Track::Timer::has_data() const
{
    return (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (stub_object !=  nullptr && stub_object->has_data());
}

bool Native::Track::Timer::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (stub_object !=  nullptr && stub_object->has_operation());
}

std::string Native::Track::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Track::Timer::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::Timer::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::Timer::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Track::Timer::List>();
        }
        return list;
    }

    if(child_yang_name == "stub-object")
    {
        if(stub_object == nullptr)
        {
            stub_object = std::make_shared<Native::Track::Timer::StubObject>();
        }
        return stub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(stub_object != nullptr)
    {
        children["stub-object"] = stub_object;
    }

    return children;
}

void Native::Track::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ip" || name == "ipv6" || name == "list" || name == "stub-object")
        return true;
    return false;
}

Native::Track::Timer::Interface::Interface()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "interface"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Interface::~Interface()
{
}

bool Native::Track::Timer::Interface::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::Ip::Ip()
    :
    route(std::make_shared<Native::Track::Timer::Ip::Route>())
	,sla(std::make_shared<Native::Track::Timer::Ip::Sla>())
{
    route->parent = this;
    sla->parent = this;

    yang_name = "ip"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ip::~Ip()
{
}

bool Native::Track::Timer::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data())
	|| (sla !=  nullptr && sla->has_data());
}

bool Native::Track::Timer::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation())
	|| (sla !=  nullptr && sla->has_operation());
}

std::string Native::Track::Timer::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Timer::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Track::Timer::Ip::Sla>();
        }
        return sla;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(sla != nullptr)
    {
        children["sla"] = sla;
    }

    return children;
}

void Native::Track::Timer::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "sla")
        return true;
    return false;
}

Native::Track::Timer::Ip::Route::Route()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "route"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ip::Route::~Route()
{
}

bool Native::Track::Timer::Ip::Route::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Ip::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::Ip::Sla::Sla()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "sla"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ip::Sla::~Sla()
{
}

bool Native::Track::Timer::Ip::Sla::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Ip::Sla::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Ip::Sla::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ip::Sla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::Ipv6::Ipv6()
    :
    route(std::make_shared<Native::Track::Timer::Ipv6::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ipv6::~Ipv6()
{
}

bool Native::Track::Timer::Ipv6::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::Timer::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::Timer::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Timer::Ipv6::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::Timer::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Track::Timer::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Track::Timer::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Track::Timer::Ipv6::Route::Route()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "route"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::Ipv6::Route::~Route()
{
}

bool Native::Track::Timer::Ipv6::Route::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::Ipv6::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::Ipv6::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::Ipv6::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ipv6::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::Ipv6::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::Ipv6::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::List::List()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "list"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::List::~List()
{
}

bool Native::Track::Timer::List::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Track::Timer::StubObject::StubObject()
    :
    seconds{YType::uint32, "seconds"},
    ms{YType::uint32, "ms"}
{

    yang_name = "stub-object"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Track::Timer::StubObject::~StubObject()
{
}

bool Native::Track::Timer::StubObject::has_data() const
{
    return seconds.is_set
	|| ms.is_set;
}

bool Native::Track::Timer::StubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(ms.yfilter);
}

std::string Native::Track::Timer::StubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Track::Timer::StubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Track::Timer::StubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (ms.is_set || is_set(ms.yfilter)) leaf_name_data.push_back(ms.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Track::Timer::StubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::StubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::StubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms")
    {
        ms = value;
        ms.value_namespace = name_space;
        ms.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Track::Timer::StubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "ms")
    {
        ms.yfilter = yfilter;
    }
}

bool Native::Track::Timer::StubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "ms")
        return true;
    return false;
}

Native::Dot1X::Dot1X()
    :
    system_auth_control{YType::empty, "Cisco-IOS-XE-dot1x:system-auth-control"}
    	,
    critical(std::make_shared<Native::Dot1X::Critical>())
	,test(std::make_shared<Native::Dot1X::Test>())
	,supplicant(std::make_shared<Native::Dot1X::Supplicant>())
{
    critical->parent = this;
    test->parent = this;
    supplicant->parent = this;

    yang_name = "dot1x"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::~Dot1X()
{
}

bool Native::Dot1X::has_data() const
{
    for (std::size_t index=0; index<credentials.size(); index++)
    {
        if(credentials[index]->has_data())
            return true;
    }
    return system_auth_control.is_set
	|| (critical !=  nullptr && critical->has_data())
	|| (test !=  nullptr && test->has_data())
	|| (supplicant !=  nullptr && supplicant->has_data());
}

bool Native::Dot1X::has_operation() const
{
    for (std::size_t index=0; index<credentials.size(); index++)
    {
        if(credentials[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(system_auth_control.yfilter)
	|| (critical !=  nullptr && critical->has_operation())
	|| (test !=  nullptr && test->has_operation())
	|| (supplicant !=  nullptr && supplicant->has_operation());
}

std::string Native::Dot1X::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_auth_control.is_set || is_set(system_auth_control.yfilter)) leaf_name_data.push_back(system_auth_control.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dot1x:credentials")
    {
        for(auto const & c : credentials)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Dot1X::Credentials>();
        c->parent = this;
        credentials.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-dot1x:critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Native::Dot1X::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "Cisco-IOS-XE-dot1x:test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Dot1X::Test>();
        }
        return test;
    }

    if(child_yang_name == "Cisco-IOS-XE-dot1x:supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Native::Dot1X::Supplicant>();
        }
        return supplicant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : credentials)
    {
        children[c->get_segment_path()] = c;
    }

    if(critical != nullptr)
    {
        children["Cisco-IOS-XE-dot1x:critical"] = critical;
    }

    if(test != nullptr)
    {
        children["Cisco-IOS-XE-dot1x:test"] = test;
    }

    if(supplicant != nullptr)
    {
        children["Cisco-IOS-XE-dot1x:supplicant"] = supplicant;
    }

    return children;
}

void Native::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-dot1x:system-auth-control")
    {
        system_auth_control = value;
        system_auth_control.value_namespace = name_space;
        system_auth_control.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-auth-control")
    {
        system_auth_control.yfilter = yfilter;
    }
}

bool Native::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "credentials" || name == "critical" || name == "test" || name == "supplicant" || name == "system-auth-control")
        return true;
    return false;
}

Native::Dot1X::Credentials::Credentials()
    :
    profile_name{YType::str, "profile-name"},
    username{YType::str, "username"},
    pki_trustpoint{YType::str, "pki-trustpoint"}
    	,
    password(std::make_shared<Native::Dot1X::Credentials::Password>())
{
    password->parent = this;

    yang_name = "credentials"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Credentials::~Credentials()
{
}

bool Native::Dot1X::Credentials::has_data() const
{
    return profile_name.is_set
	|| username.is_set
	|| pki_trustpoint.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Dot1X::Credentials::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(pki_trustpoint.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Dot1X::Credentials::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Credentials::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:credentials" <<"[profile-name='" <<profile_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Credentials::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (pki_trustpoint.is_set || is_set(pki_trustpoint.yfilter)) leaf_name_data.push_back(pki_trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Credentials::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Dot1X::Credentials::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Credentials::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Dot1X::Credentials::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint = value;
        pki_trustpoint.value_namespace = name_space;
        pki_trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Credentials::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint.yfilter = yfilter;
    }
}

bool Native::Dot1X::Credentials::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "profile-name" || name == "username" || name == "pki-trustpoint")
        return true;
    return false;
}

Native::Dot1X::Credentials::Password::Password()
    :
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "password"; yang_parent_name = "credentials"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Dot1X::Credentials::Password::~Password()
{
}

bool Native::Dot1X::Credentials::Password::has_data() const
{
    return type.is_set
	|| secret.is_set;
}

bool Native::Dot1X::Credentials::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Dot1X::Credentials::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Credentials::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Credentials::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Credentials::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Credentials::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Credentials::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Dot1X::Credentials::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "secret")
        return true;
    return false;
}

Native::Dot1X::Critical::Critical()
    :
    eapol{YType::empty, "eapol"}
    	,
    recovery(std::make_shared<Native::Dot1X::Critical::Recovery>())
{
    recovery->parent = this;

    yang_name = "critical"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Critical::~Critical()
{
}

bool Native::Dot1X::Critical::has_data() const
{
    return eapol.is_set
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Dot1X::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eapol.yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Dot1X::Critical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eapol.is_set || is_set(eapol.yfilter)) leaf_name_data.push_back(eapol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Dot1X::Critical::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Dot1X::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eapol")
    {
        eapol = value;
        eapol.value_namespace = name_space;
        eapol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eapol")
    {
        eapol.yfilter = yfilter;
    }
}

bool Native::Dot1X::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery" || name == "eapol")
        return true;
    return false;
}

Native::Dot1X::Critical::Recovery::Recovery()
    :
    delay{YType::uint16, "delay"}
{

    yang_name = "recovery"; yang_parent_name = "critical"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Critical::Recovery::~Recovery()
{
}

bool Native::Dot1X::Critical::Recovery::has_data() const
{
    return delay.is_set;
}

bool Native::Dot1X::Critical::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Dot1X::Critical::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/Cisco-IOS-XE-dot1x:critical/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Critical::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Critical::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Critical::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Critical::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Critical::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Critical::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Dot1X::Critical::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Dot1X::Test::Test()
    :
    timeout{YType::uint16, "timeout"}
{

    yang_name = "test"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Test::~Test()
{
}

bool Native::Dot1X::Test::has_data() const
{
    return timeout.is_set;
}

bool Native::Dot1X::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Dot1X::Test::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Dot1X::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Dot1X::Supplicant::Supplicant()
    :
    force_multicast{YType::empty, "force-multicast"}
{

    yang_name = "supplicant"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Supplicant::~Supplicant()
{
}

bool Native::Dot1X::Supplicant::has_data() const
{
    return force_multicast.is_set;
}

bool Native::Dot1X::Supplicant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force_multicast.yfilter);
}

std::string Native::Dot1X::Supplicant::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:supplicant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Supplicant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force_multicast.is_set || is_set(force_multicast.yfilter)) leaf_name_data.push_back(force_multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Supplicant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force-multicast")
    {
        force_multicast = value;
        force_multicast.value_namespace = name_space;
        force_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Supplicant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force-multicast")
    {
        force_multicast.yfilter = yfilter;
    }
}

bool Native::Dot1X::Supplicant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "force-multicast")
        return true;
    return false;
}

Native::Fallback::Fallback()
    :
    profile(std::make_shared<Native::Fallback::Profile>())
{
    profile->parent = this;

    yang_name = "fallback"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fallback::~Fallback()
{
}

bool Native::Fallback::has_data() const
{
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dot1x:profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Fallback::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile != nullptr)
    {
        children["Cisco-IOS-XE-dot1x:profile"] = profile;
    }

    return children;
}

void Native::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Fallback::Profile::Profile()
{

    yang_name = "profile"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fallback::Profile::~Profile()
{
}

bool Native::Fallback::Profile::has_data() const
{
    for (std::size_t index=0; index<fallback_list.size(); index++)
    {
        if(fallback_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Fallback::Profile::has_operation() const
{
    for (std::size_t index=0; index<fallback_list.size(); index++)
    {
        if(fallback_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Fallback::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback-list")
    {
        for(auto const & c : fallback_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Fallback::Profile::FallbackList>();
        c->parent = this;
        fallback_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fallback_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Fallback::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fallback::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fallback::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback-list")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::FallbackList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    ip(std::make_shared<Native::Fallback::Profile::FallbackList::Ip>())
{
    ip->parent = this;

    yang_name = "fallback-list"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fallback::Profile::FallbackList::~FallbackList()
{
}

bool Native::Fallback::Profile::FallbackList::has_data() const
{
    return name.is_set
	|| description.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Fallback::Profile::FallbackList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Fallback::Profile::FallbackList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fallback/Cisco-IOS-XE-dot1x:profile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::Profile::FallbackList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Fallback::Profile::FallbackList::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Fallback::Profile::FallbackList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Fallback::Profile::FallbackList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Fallback::Profile::FallbackList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::Ip::Ip()
    :
    admission{YType::str, "admission"}
{

    yang_name = "ip"; yang_parent_name = "fallback-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Fallback::Profile::FallbackList::Ip::~Ip()
{
}

bool Native::Fallback::Profile::FallbackList::Ip::has_data() const
{
    for (std::size_t index=0; index<access_group.size(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return admission.is_set;
}

bool Native::Fallback::Profile::FallbackList::Ip::has_operation() const
{
    for (std::size_t index=0; index<access_group.size(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter);
}

std::string Native::Fallback::Profile::FallbackList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        for(auto const & c : access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Fallback::Profile::FallbackList::Ip::AccessGroup>();
        c->parent = this;
        access_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Fallback::Profile::FallbackList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fallback::Profile::FallbackList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
}

bool Native::Fallback::Profile::FallbackList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "admission")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::Ip::AccessGroup::AccessGroup()
    :
    name{YType::str, "name"},
    in{YType::empty, "in"}
{

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Fallback::Profile::FallbackList::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_data() const
{
    return name.is_set
	|| in.is_set;
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fallback::Profile::FallbackList::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fallback::Profile::FallbackList::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "in")
        return true;
    return false;
}

Native::ParameterMap::ParameterMap()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    parameter_map_type{YType::enumeration, "parameter-map-type"},
    alert{YType::enumeration, "Cisco-IOS-XE-policy:alert"},
    application_inspect{YType::enumeration, "Cisco-IOS-XE-policy:application-inspect"},
    audit_trail{YType::enumeration, "Cisco-IOS-XE-policy:audit-trail"},
    dns_timeout{YType::uint32, "Cisco-IOS-XE-policy:dns-timeout"},
    max_destination{YType::uint32, "Cisco-IOS-XE-policy:max-destination"},
    zone_mismatch{YType::enumeration, "Cisco-IOS-XE-policy:zone-mismatch"}
    	,
    regex(std::make_shared<Native::ParameterMap::Regex>())
	,timeout(std::make_shared<Native::ParameterMap::Timeout>())
	,watch_list(std::make_shared<Native::ParameterMap::WatchList>())
	,aggressive_aging(std::make_shared<Native::ParameterMap::AggressiveAging>())
	,global(std::make_shared<Native::ParameterMap::Global>())
	,icmp(std::make_shared<Native::ParameterMap::Icmp>())
	,lisp(std::make_shared<Native::ParameterMap::Lisp>())
	,log(std::make_shared<Native::ParameterMap::Log>())
	,max_incomplete(std::make_shared<Native::ParameterMap::MaxIncomplete>())
	,one_minute(std::make_shared<Native::ParameterMap::OneMinute>())
	,sessions(std::make_shared<Native::ParameterMap::Sessions>())
	,tcp_inspect(std::make_shared<Native::ParameterMap::TcpInspect>())
	,tcp_inspect_zone(std::make_shared<Native::ParameterMap::TcpInspectZone>())
	,threat_detection(std::make_shared<Native::ParameterMap::ThreatDetection>())
	,udp(std::make_shared<Native::ParameterMap::Udp>())
	,vrf(std::make_shared<Native::ParameterMap::Vrf>())
	,umbrella_global(std::make_shared<Native::ParameterMap::UmbrellaGlobal>())
{
    regex->parent = this;
    timeout->parent = this;
    watch_list->parent = this;
    aggressive_aging->parent = this;
    global->parent = this;
    icmp->parent = this;
    lisp->parent = this;
    log->parent = this;
    max_incomplete->parent = this;
    one_minute->parent = this;
    sessions->parent = this;
    tcp_inspect->parent = this;
    tcp_inspect_zone->parent = this;
    threat_detection->parent = this;
    udp->parent = this;
    vrf->parent = this;
    umbrella_global->parent = this;

    yang_name = "parameter-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ParameterMap::~ParameterMap()
{
}

bool Native::ParameterMap::has_data() const
{
    return name.is_set
	|| type.is_set
	|| parameter_map_type.is_set
	|| alert.is_set
	|| application_inspect.is_set
	|| audit_trail.is_set
	|| dns_timeout.is_set
	|| max_destination.is_set
	|| zone_mismatch.is_set
	|| (regex !=  nullptr && regex->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (watch_list !=  nullptr && watch_list->has_data())
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (one_minute !=  nullptr && one_minute->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (tcp_inspect !=  nullptr && tcp_inspect->has_data())
	|| (tcp_inspect_zone !=  nullptr && tcp_inspect_zone->has_data())
	|| (threat_detection !=  nullptr && threat_detection->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (umbrella_global !=  nullptr && umbrella_global->has_data());
}

bool Native::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(parameter_map_type.yfilter)
	|| ydk::is_set(alert.yfilter)
	|| ydk::is_set(application_inspect.yfilter)
	|| ydk::is_set(audit_trail.yfilter)
	|| ydk::is_set(dns_timeout.yfilter)
	|| ydk::is_set(max_destination.yfilter)
	|| ydk::is_set(zone_mismatch.yfilter)
	|| (regex !=  nullptr && regex->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (watch_list !=  nullptr && watch_list->has_operation())
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (one_minute !=  nullptr && one_minute->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (tcp_inspect !=  nullptr && tcp_inspect->has_operation())
	|| (tcp_inspect_zone !=  nullptr && tcp_inspect_zone->has_operation())
	|| (threat_detection !=  nullptr && threat_detection->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (umbrella_global !=  nullptr && umbrella_global->has_operation());
}

std::string Native::ParameterMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (parameter_map_type.is_set || is_set(parameter_map_type.yfilter)) leaf_name_data.push_back(parameter_map_type.get_name_leafdata());
    if (alert.is_set || is_set(alert.yfilter)) leaf_name_data.push_back(alert.get_name_leafdata());
    if (application_inspect.is_set || is_set(application_inspect.yfilter)) leaf_name_data.push_back(application_inspect.get_name_leafdata());
    if (audit_trail.is_set || is_set(audit_trail.yfilter)) leaf_name_data.push_back(audit_trail.get_name_leafdata());
    if (dns_timeout.is_set || is_set(dns_timeout.yfilter)) leaf_name_data.push_back(dns_timeout.get_name_leafdata());
    if (max_destination.is_set || is_set(max_destination.yfilter)) leaf_name_data.push_back(max_destination.get_name_leafdata());
    if (zone_mismatch.is_set || is_set(zone_mismatch.yfilter)) leaf_name_data.push_back(zone_mismatch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-policy:regex")
    {
        if(regex == nullptr)
        {
            regex = std::make_shared<Native::ParameterMap::Regex>();
        }
        return regex;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::ParameterMap::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:watch-list")
    {
        if(watch_list == nullptr)
        {
            watch_list = std::make_shared<Native::ParameterMap::WatchList>();
        }
        return watch_list;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::AggressiveAging>();
        }
        return aggressive_aging;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::ParameterMap::Global>();
        }
        return global;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::ParameterMap::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::ParameterMap::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::ParameterMap::Log>();
        }
        return log;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:one-minute")
    {
        if(one_minute == nullptr)
        {
            one_minute = std::make_shared<Native::ParameterMap::OneMinute>();
        }
        return one_minute;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Native::ParameterMap::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:tcp-inspect")
    {
        if(tcp_inspect == nullptr)
        {
            tcp_inspect = std::make_shared<Native::ParameterMap::TcpInspect>();
        }
        return tcp_inspect;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:tcp-inspect-zone")
    {
        if(tcp_inspect_zone == nullptr)
        {
            tcp_inspect_zone = std::make_shared<Native::ParameterMap::TcpInspectZone>();
        }
        return tcp_inspect_zone;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:threat-detection")
    {
        if(threat_detection == nullptr)
        {
            threat_detection = std::make_shared<Native::ParameterMap::ThreatDetection>();
        }
        return threat_detection;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::ParameterMap::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "Cisco-IOS-XE-umbrella:umbrella-global")
    {
        if(umbrella_global == nullptr)
        {
            umbrella_global = std::make_shared<Native::ParameterMap::UmbrellaGlobal>();
        }
        return umbrella_global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(regex != nullptr)
    {
        children["Cisco-IOS-XE-policy:regex"] = regex;
    }

    if(timeout != nullptr)
    {
        children["Cisco-IOS-XE-policy:timeout"] = timeout;
    }

    if(watch_list != nullptr)
    {
        children["Cisco-IOS-XE-policy:watch-list"] = watch_list;
    }

    if(aggressive_aging != nullptr)
    {
        children["Cisco-IOS-XE-policy:aggressive-aging"] = aggressive_aging;
    }

    if(global != nullptr)
    {
        children["Cisco-IOS-XE-policy:global"] = global;
    }

    if(icmp != nullptr)
    {
        children["Cisco-IOS-XE-policy:icmp"] = icmp;
    }

    if(lisp != nullptr)
    {
        children["Cisco-IOS-XE-policy:lisp"] = lisp;
    }

    if(log != nullptr)
    {
        children["Cisco-IOS-XE-policy:log"] = log;
    }

    if(max_incomplete != nullptr)
    {
        children["Cisco-IOS-XE-policy:max-incomplete"] = max_incomplete;
    }

    if(one_minute != nullptr)
    {
        children["Cisco-IOS-XE-policy:one-minute"] = one_minute;
    }

    if(sessions != nullptr)
    {
        children["Cisco-IOS-XE-policy:sessions"] = sessions;
    }

    if(tcp_inspect != nullptr)
    {
        children["Cisco-IOS-XE-policy:tcp-inspect"] = tcp_inspect;
    }

    if(tcp_inspect_zone != nullptr)
    {
        children["Cisco-IOS-XE-policy:tcp-inspect-zone"] = tcp_inspect_zone;
    }

    if(threat_detection != nullptr)
    {
        children["Cisco-IOS-XE-policy:threat-detection"] = threat_detection;
    }

    if(udp != nullptr)
    {
        children["Cisco-IOS-XE-policy:udp"] = udp;
    }

    if(vrf != nullptr)
    {
        children["Cisco-IOS-XE-policy:vrf"] = vrf;
    }

    if(umbrella_global != nullptr)
    {
        children["Cisco-IOS-XE-umbrella:umbrella-global"] = umbrella_global;
    }

    return children;
}

void Native::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "parameter-map-type")
    {
        parameter_map_type = value;
        parameter_map_type.value_namespace = name_space;
        parameter_map_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-policy:alert")
    {
        alert = value;
        alert.value_namespace = name_space;
        alert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-policy:application-inspect")
    {
        application_inspect = value;
        application_inspect.value_namespace = name_space;
        application_inspect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-policy:audit-trail")
    {
        audit_trail = value;
        audit_trail.value_namespace = name_space;
        audit_trail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-policy:dns-timeout")
    {
        dns_timeout = value;
        dns_timeout.value_namespace = name_space;
        dns_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-policy:max-destination")
    {
        max_destination = value;
        max_destination.value_namespace = name_space;
        max_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-policy:zone-mismatch")
    {
        zone_mismatch = value;
        zone_mismatch.value_namespace = name_space;
        zone_mismatch.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "parameter-map-type")
    {
        parameter_map_type.yfilter = yfilter;
    }
    if(value_path == "alert")
    {
        alert.yfilter = yfilter;
    }
    if(value_path == "application-inspect")
    {
        application_inspect.yfilter = yfilter;
    }
    if(value_path == "audit-trail")
    {
        audit_trail.yfilter = yfilter;
    }
    if(value_path == "dns-timeout")
    {
        dns_timeout.yfilter = yfilter;
    }
    if(value_path == "max-destination")
    {
        max_destination.yfilter = yfilter;
    }
    if(value_path == "zone-mismatch")
    {
        zone_mismatch.yfilter = yfilter;
    }
}

bool Native::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex" || name == "timeout" || name == "watch-list" || name == "aggressive-aging" || name == "global" || name == "icmp" || name == "lisp" || name == "log" || name == "max-incomplete" || name == "one-minute" || name == "sessions" || name == "tcp-inspect" || name == "tcp-inspect-zone" || name == "threat-detection" || name == "udp" || name == "vrf" || name == "umbrella-global" || name == "name" || name == "type" || name == "parameter-map-type" || name == "alert" || name == "application-inspect" || name == "audit-trail" || name == "dns-timeout" || name == "max-destination" || name == "zone-mismatch")
        return true;
    return false;
}

Native::ParameterMap::Regex::Regex()
{

    yang_name = "regex"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Regex::~Regex()
{
}

bool Native::ParameterMap::Regex::has_data() const
{
    for (std::size_t index=0; index<pattern.size(); index++)
    {
        if(pattern[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ParameterMap::Regex::has_operation() const
{
    for (std::size_t index=0; index<pattern.size(); index++)
    {
        if(pattern[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ParameterMap::Regex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Regex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Regex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pattern")
    {
        for(auto const & c : pattern)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ParameterMap::Regex::Pattern>();
        c->parent = this;
        pattern.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Regex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pattern)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ParameterMap::Regex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Regex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Regex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pattern")
        return true;
    return false;
}

Native::ParameterMap::Regex::Pattern::Pattern()
    :
    regexp{YType::str, "regexp"}
{

    yang_name = "pattern"; yang_parent_name = "regex"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Regex::Pattern::~Pattern()
{
}

bool Native::ParameterMap::Regex::Pattern::has_data() const
{
    return regexp.is_set;
}

bool Native::ParameterMap::Regex::Pattern::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regexp.yfilter);
}

std::string Native::ParameterMap::Regex::Pattern::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pattern" <<"[regexp='" <<regexp <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Regex::Pattern::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regexp.is_set || is_set(regexp.yfilter)) leaf_name_data.push_back(regexp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Regex::Pattern::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Regex::Pattern::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Regex::Pattern::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regexp")
    {
        regexp = value;
        regexp.value_namespace = name_space;
        regexp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Regex::Pattern::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regexp")
    {
        regexp.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Regex::Pattern::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regexp")
        return true;
    return false;
}

Native::ParameterMap::Timeout::Timeout()
    :
    init_state(nullptr) // presence node
	,fin_wait(std::make_shared<Native::ParameterMap::Timeout::FinWait>())
{
    fin_wait->parent = this;

    yang_name = "timeout"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Timeout::~Timeout()
{
}

bool Native::ParameterMap::Timeout::has_data() const
{
    return (init_state !=  nullptr && init_state->has_data())
	|| (fin_wait !=  nullptr && fin_wait->has_data());
}

bool Native::ParameterMap::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| (init_state !=  nullptr && init_state->has_operation())
	|| (fin_wait !=  nullptr && fin_wait->has_operation());
}

std::string Native::ParameterMap::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "init-state")
    {
        if(init_state == nullptr)
        {
            init_state = std::make_shared<Native::ParameterMap::Timeout::InitState>();
        }
        return init_state;
    }

    if(child_yang_name == "fin-wait")
    {
        if(fin_wait == nullptr)
        {
            fin_wait = std::make_shared<Native::ParameterMap::Timeout::FinWait>();
        }
        return fin_wait;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(init_state != nullptr)
    {
        children["init-state"] = init_state;
    }

    if(fin_wait != nullptr)
    {
        children["fin-wait"] = fin_wait;
    }

    return children;
}

void Native::ParameterMap::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-state" || name == "fin-wait")
        return true;
    return false;
}

Native::ParameterMap::Timeout::InitState::InitState()
    :
    sec{YType::uint32, "sec"}
{

    yang_name = "init-state"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Timeout::InitState::~InitState()
{
}

bool Native::ParameterMap::Timeout::InitState::has_data() const
{
    return sec.is_set;
}

bool Native::ParameterMap::Timeout::InitState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sec.yfilter);
}

std::string Native::ParameterMap::Timeout::InitState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Timeout::InitState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sec.is_set || is_set(sec.yfilter)) leaf_name_data.push_back(sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::InitState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::InitState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Timeout::InitState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sec")
    {
        sec = value;
        sec.value_namespace = name_space;
        sec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Timeout::InitState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sec")
    {
        sec.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Timeout::InitState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec")
        return true;
    return false;
}

Native::ParameterMap::Timeout::FinWait::FinWait()
    :
    msec{YType::uint32, "msec"}
{

    yang_name = "fin-wait"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Timeout::FinWait::~FinWait()
{
}

bool Native::ParameterMap::Timeout::FinWait::has_data() const
{
    return msec.is_set;
}

bool Native::ParameterMap::Timeout::FinWait::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::ParameterMap::Timeout::FinWait::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fin-wait";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Timeout::FinWait::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::FinWait::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::FinWait::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Timeout::FinWait::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Timeout::FinWait::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Timeout::FinWait::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec")
        return true;
    return false;
}

Native::ParameterMap::WatchList::WatchList()
    :
    enabled{YType::empty, "enabled"},
    dynamic_expiry_timeout{YType::uint32, "dynamic-expiry-timeout"}
    	,
    add_item(std::make_shared<Native::ParameterMap::WatchList::AddItem>())
{
    add_item->parent = this;

    yang_name = "watch-list"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::WatchList::~WatchList()
{
}

bool Native::ParameterMap::WatchList::has_data() const
{
    return enabled.is_set
	|| dynamic_expiry_timeout.is_set
	|| (add_item !=  nullptr && add_item->has_data());
}

bool Native::ParameterMap::WatchList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(dynamic_expiry_timeout.yfilter)
	|| (add_item !=  nullptr && add_item->has_operation());
}

std::string Native::ParameterMap::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:watch-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::WatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (dynamic_expiry_timeout.is_set || is_set(dynamic_expiry_timeout.yfilter)) leaf_name_data.push_back(dynamic_expiry_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "add-item")
    {
        if(add_item == nullptr)
        {
            add_item = std::make_shared<Native::ParameterMap::WatchList::AddItem>();
        }
        return add_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(add_item != nullptr)
    {
        children["add-item"] = add_item;
    }

    return children;
}

void Native::ParameterMap::WatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-expiry-timeout")
    {
        dynamic_expiry_timeout = value;
        dynamic_expiry_timeout.value_namespace = name_space;
        dynamic_expiry_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::WatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "dynamic-expiry-timeout")
    {
        dynamic_expiry_timeout.yfilter = yfilter;
    }
}

bool Native::ParameterMap::WatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add-item" || name == "enabled" || name == "dynamic-expiry-timeout")
        return true;
    return false;
}

Native::ParameterMap::WatchList::AddItem::AddItem()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "add-item"; yang_parent_name = "watch-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::WatchList::AddItem::~AddItem()
{
}

bool Native::ParameterMap::WatchList::AddItem::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::ParameterMap::WatchList::AddItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::ParameterMap::WatchList::AddItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::WatchList::AddItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::WatchList::AddItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::WatchList::AddItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::WatchList::AddItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::WatchList::AddItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::ParameterMap::WatchList::AddItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::ParameterMap::AggressiveAging::AggressiveAging()
    :
    high(std::make_shared<Native::ParameterMap::AggressiveAging::High>())
{
    high->parent = this;

    yang_name = "aggressive-aging"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::AggressiveAging::has_data() const
{
    return (high !=  nullptr && high->has_data());
}

bool Native::ParameterMap::AggressiveAging::has_operation() const
{
    return is_set(yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::ParameterMap::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:aggressive-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::ParameterMap::AggressiveAging::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::ParameterMap::AggressiveAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::AggressiveAging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::AggressiveAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high")
        return true;
    return false;
}

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Login::Display::last_failure {0, "last-failure"};
const Enum::YLeaf Native::Aaa::Login::Display::last_success {1, "last-success"};
const Enum::YLeaf Native::Aaa::Login::Display::number_failures {2, "number-failures"};

const Enum::YLeaf Native::Aaa::Policy::InterfaceConfig::allow_subinterface {0, "allow-subinterface"};

const Enum::YLeaf Native::Multilink::BundleName::authenticated {0, "authenticated"};
const Enum::YLeaf Native::Multilink::BundleName::both {1, "both"};
const Enum::YLeaf Native::Multilink::BundleName::endpoint {2, "endpoint"};
const Enum::YLeaf Native::Multilink::BundleName::rfc {3, "rfc"};

const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::warning {0, "warning"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::limit {1, "limit"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Redundancy::Mode::rpr {0, "rpr"};
const Enum::YLeaf Native::Redundancy::Mode::rpr_plus {1, "rpr-plus"};
const Enum::YLeaf Native::Redundancy::Mode::sso {2, "sso"};
const Enum::YLeaf Native::Redundancy::Mode::none {3, "none"};

const Enum::YLeaf Native::SpanningTree::Mode::mst {0, "mst"};
const Enum::YLeaf Native::SpanningTree::Mode::pvst {1, "pvst"};
const Enum::YLeaf Native::SpanningTree::Mode::rapid_pvst {2, "rapid-pvst"};

const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::Root::primary {0, "primary"};
const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::Root::secondary {1, "secondary"};

const Enum::YLeaf Native::Track::TrackedObject::DefaultState::down {0, "down"};
const Enum::YLeaf Native::Track::TrackedObject::DefaultState::up {1, "up"};

const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::ip {0, "ip"};
const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Track::TrackedObject::Interface::Protocol::line_protocol {2, "line-protocol"};

const Enum::YLeaf Native::Track::TrackedObject::Ip::Route::Metric::threshold {0, "threshold"};

const Enum::YLeaf Native::Track::TrackedObject::Ipv6::Route::Metric::threshold {0, "threshold"};

const Enum::YLeaf Native::Track::TrackedObject::List::Boolean::and_ {0, "and"};
const Enum::YLeaf Native::Track::TrackedObject::List::Boolean::or_ {1, "or"};

const Enum::YLeaf Native::Track::TrackedObject::List::Threshold::percentage {0, "percentage"};
const Enum::YLeaf Native::Track::TrackedObject::List::Threshold::weight {1, "weight"};

const Enum::YLeaf Native::Track::TrackedObject::Default_::DefaultState::down {0, "down"};
const Enum::YLeaf Native::Track::TrackedObject::Default_::DefaultState::up {1, "up"};

const Enum::YLeaf Native::Dot1X::Credentials::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Dot1X::Credentials::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::ParameterMap::Name::global {0, "global"};
const Enum::YLeaf Native::ParameterMap::Name::gtp {1, "gtp"};

const Enum::YLeaf Native::ParameterMap::Type::cws_tunnel {0, "cws-tunnel"};
const Enum::YLeaf Native::ParameterMap::Type::inspect {1, "inspect"};
const Enum::YLeaf Native::ParameterMap::Type::inspect_global {2, "inspect-global"};
const Enum::YLeaf Native::ParameterMap::Type::webauth {3, "webauth"};
const Enum::YLeaf Native::ParameterMap::Type::inspect_vrf {4, "inspect-vrf"};
const Enum::YLeaf Native::ParameterMap::Type::inspect_zone {5, "inspect-zone"};
const Enum::YLeaf Native::ParameterMap::Type::regex {6, "regex"};
const Enum::YLeaf Native::ParameterMap::Type::authbypass {7, "authbypass"};
const Enum::YLeaf Native::ParameterMap::Type::umbrella {8, "umbrella"};

const Enum::YLeaf Native::ParameterMap::ParameterMapType::webauth {0, "webauth"};
const Enum::YLeaf Native::ParameterMap::ParameterMapType::authbypass {1, "authbypass"};

const Enum::YLeaf Native::ParameterMap::Alert::off {0, "off"};
const Enum::YLeaf Native::ParameterMap::Alert::on {1, "on"};

const Enum::YLeaf Native::ParameterMap::ApplicationInspect::all {0, "all"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::dns {1, "dns"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::exec {2, "exec"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::ftp {3, "ftp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::gtp {4, "gtp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::h323 {5, "h323"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::http {6, "http"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::imap {7, "imap"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::login {8, "login"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::msrpc {9, "msrpc"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::netbios {10, "netbios"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::pop3 {11, "pop3"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::rtsp {12, "rtsp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::shell {13, "shell"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::sip {14, "sip"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::skinny {15, "skinny"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::smtp {16, "smtp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::sunrpc {17, "sunrpc"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::tftp {18, "tftp"};

const Enum::YLeaf Native::ParameterMap::AuditTrail::off {0, "off"};
const Enum::YLeaf Native::ParameterMap::AuditTrail::on {1, "on"};

const Enum::YLeaf Native::ParameterMap::ZoneMismatch::drop {0, "drop"};


}
}

