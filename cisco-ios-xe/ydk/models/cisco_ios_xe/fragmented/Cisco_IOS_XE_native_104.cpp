
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_104.hpp"
#include "Cisco_IOS_XE_native_105.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Mpls::Ldp::Enable2::Password::Password()
    :
    fallback(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Fallback>())
	,option(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option>())
	,required(nullptr) // presence node
	,rollover(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Rollover>())
{
    fallback->parent = this;
    option->parent = this;
    rollover->parent = this;

    yang_name = "password"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Password::has_data() const
{
    return (fallback !=  nullptr && fallback->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (required !=  nullptr && required->has_data())
	|| (rollover !=  nullptr && rollover->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::has_operation() const
{
    return is_set(yfilter)
	|| (fallback !=  nullptr && fallback->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (required !=  nullptr && required->has_operation())
	|| (rollover !=  nullptr && rollover->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Fallback>();
        }
        return fallback;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option>();
        }
        return option;
    }

    if(child_yang_name == "required")
    {
        if(required == nullptr)
        {
            required = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Required>();
        }
        return required;
    }

    if(child_yang_name == "rollover")
    {
        if(rollover == nullptr)
        {
            rollover = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Rollover>();
        }
        return rollover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(required != nullptr)
    {
        children["required"] = required;
    }

    if(rollover != nullptr)
    {
        children["rollover"] = rollover;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "option" || name == "required" || name == "rollover")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Fallback::Fallback()
    :
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
    	,
    key_chain(nullptr) // presence node
{

    yang_name = "fallback"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Password::Fallback::~Fallback()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::has_data() const
{
    return encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(line.yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption-type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption-type")
    {
        encryption_type.yfilter = yfilter;
    }
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "encryption-type" || name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{

    yang_name = "key-chain"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::has_data() const
{
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Option::Option()
{

    yang_name = "option"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Password::Option::~Option()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::has_data() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Password::Option::has_operation() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-num")
    {
        for(auto const & c : seq_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum>();
        c->parent = this;
        seq_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : seq_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Password::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-num")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::SeqNum()
    :
    seq_num{YType::uint16, "seq-num"}
    	,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_>())
{
    for_->parent = this;

    yang_name = "seq-num"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::~SeqNum()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::has_data() const
{
    return seq_num.is_set
	|| (for_ !=  nullptr && for_->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| (for_ !=  nullptr && for_->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/option/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-num" <<"[seq-num='" <<seq_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_>();
        }
        return for_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "seq-num")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::For_()
{

    yang_name = "for"; yang_parent_name = "seq-num"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::~For_()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::has_data() const
{
    for (std::size_t index=0; index<line.size(); index++)
    {
        if(line[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::has_operation() const
{
    for (std::size_t index=0; index<line.size(); index++)
    {
        if(line[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LINE")
    {
        for(auto const & c : line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE>();
        c->parent = this;
        line.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : line)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::LINE()
    :
    acl_name{YType::str, "acl-name"},
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
    	,
    key_chain(nullptr) // presence node
{

    yang_name = "LINE"; yang_parent_name = "for"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::~LINE()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::has_data() const
{
    return acl_name.is_set
	|| encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(line.yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LINE" <<"[acl-name='" <<acl_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "encryption-type")
    {
        encryption_type.yfilter = yfilter;
    }
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "acl-name" || name == "encryption-type" || name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{

    yang_name = "key-chain"; yang_parent_name = "LINE"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain::has_data() const
{
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Required::Required()
    :
    for_{YType::str, "for"}
{

    yang_name = "required"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Password::Required::~Required()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Required::has_data() const
{
    return for_.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Required::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(for_.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Required::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Required::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "required";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Required::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.yfilter)) leaf_name_data.push_back(for_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Required::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Required::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Required::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "for")
    {
        for_ = value;
        for_.value_namespace = name_space;
        for_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Required::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "for")
    {
        for_.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Required::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Password::Rollover::Rollover()
    :
    duration{YType::uint16, "duration"}
{

    yang_name = "rollover"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Password::Rollover::~Rollover()
{
}

bool Native::Mpls::Ldp::Enable2::Password::Rollover::has_data() const
{
    return duration.is_set;
}

bool Native::Mpls::Ldp::Enable2::Password::Rollover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Password::Rollover::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Password::Rollover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Password::Rollover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Password::Rollover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Password::Rollover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Password::Rollover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Password::Rollover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Password::Rollover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RequestLabels::RequestLabels()
    :
    for_{YType::str, "for"}
{

    yang_name = "request-labels"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::RequestLabels::~RequestLabels()
{
}

bool Native::Mpls::Ldp::Enable2::RequestLabels::has_data() const
{
    return for_.is_set;
}

bool Native::Mpls::Ldp::Enable2::RequestLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(for_.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RequestLabels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RequestLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RequestLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.yfilter)) leaf_name_data.push_back(for_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RequestLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RequestLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RequestLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "for")
    {
        for_ = value;
        for_.value_namespace = name_space;
        for_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RequestLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "for")
    {
        for_.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RequestLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::RouterId()
    :
    interface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface>())
{
    interface->parent = this;

    yang_name = "router-id"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::RouterId::~RouterId()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Mpls::Ldp::Enable2::RouterId::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::RouterId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface>();
        }
        return interface;
    }

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
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::Interface()
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
    vasiright{YType::uint16, "vasiright"},
    force{YType::empty, "force"}
    	,
    atm_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::has_data() const
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
	|| force.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::has_operation() const
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
	|| ydk::is_set(force.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Interface::get_name_leaf_data() const
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
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::get_children() const
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

void Native::Mpls::Ldp::Enable2::RouterId::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright" || name == "force")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    interface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface>())
{
    interface->parent = this;

    yang_name = "vrf"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/router-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "vrf-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::Interface()
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
    vasiright{YType::uint16, "vasiright"},
    force{YType::empty, "force"}
    	,
    atm_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::has_data() const
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
	|| force.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::has_operation() const
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
	|| ydk::is_set(force.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::get_name_leaf_data() const
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
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::get_children() const
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

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright" || name == "force")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Tcp::Tcp()
    :
    pak_priority{YType::empty, "pak-priority"}
{

    yang_name = "tcp"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Tcp::~Tcp()
{
}

bool Native::Mpls::Ldp::Enable2::Tcp::has_data() const
{
    return pak_priority.is_set;
}

bool Native::Mpls::Ldp::Enable2::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pak_priority.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pak_priority.is_set || is_set(pak_priority.yfilter)) leaf_name_data.push_back(pak_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pak-priority")
    {
        pak_priority = value;
        pak_priority.value_namespace = name_space;
        pak_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pak-priority")
    {
        pak_priority.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pak-priority")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    password(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password>())
{
    password->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::has_data() const
{
    return vrf_name.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "vrf-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Password()
    :
    fallback(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback>())
	,option(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option>())
	,required(nullptr) // presence node
	,rollover(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover>())
{
    fallback->parent = this;
    option->parent = this;
    rollover->parent = this;

    yang_name = "password"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::has_data() const
{
    return (fallback !=  nullptr && fallback->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (required !=  nullptr && required->has_data())
	|| (rollover !=  nullptr && rollover->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::has_operation() const
{
    return is_set(yfilter)
	|| (fallback !=  nullptr && fallback->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (required !=  nullptr && required->has_operation())
	|| (rollover !=  nullptr && rollover->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback>();
        }
        return fallback;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option>();
        }
        return option;
    }

    if(child_yang_name == "required")
    {
        if(required == nullptr)
        {
            required = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required>();
        }
        return required;
    }

    if(child_yang_name == "rollover")
    {
        if(rollover == nullptr)
        {
            rollover = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover>();
        }
        return rollover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(required != nullptr)
    {
        children["required"] = required;
    }

    if(rollover != nullptr)
    {
        children["rollover"] = rollover;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "option" || name == "required" || name == "rollover")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::Fallback()
    :
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
    	,
    key_chain(nullptr) // presence node
{

    yang_name = "fallback"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::~Fallback()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::has_data() const
{
    return encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(line.yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption-type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption-type")
    {
        encryption_type.yfilter = yfilter;
    }
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "encryption-type" || name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{

    yang_name = "key-chain"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::has_data() const
{
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::Option()
{

    yang_name = "option"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::~Option()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::has_data() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::has_operation() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-num")
    {
        for(auto const & c : seq_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum>();
        c->parent = this;
        seq_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : seq_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-num")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::SeqNum()
    :
    seq_num{YType::uint16, "seq-num"}
    	,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_>())
{
    for_->parent = this;

    yang_name = "seq-num"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::~SeqNum()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::has_data() const
{
    return seq_num.is_set
	|| (for_ !=  nullptr && for_->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| (for_ !=  nullptr && for_->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-num" <<"[seq-num='" <<seq_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_>();
        }
        return for_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "seq-num")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::For_()
{

    yang_name = "for"; yang_parent_name = "seq-num"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::~For_()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::has_data() const
{
    for (std::size_t index=0; index<line.size(); index++)
    {
        if(line[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::has_operation() const
{
    for (std::size_t index=0; index<line.size(); index++)
    {
        if(line[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LINE")
    {
        for(auto const & c : line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE>();
        c->parent = this;
        line.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : line)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::LINE()
    :
    acl_name{YType::str, "acl-name"},
    encryption_type{YType::uint8, "encryption-type"},
    line{YType::str, "LINE"}
    	,
    key_chain(nullptr) // presence node
{

    yang_name = "LINE"; yang_parent_name = "for"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::~LINE()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::has_data() const
{
    return acl_name.is_set
	|| encryption_type.is_set
	|| line.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(line.yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LINE" <<"[acl-name='" <<acl_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "encryption-type")
    {
        encryption_type.yfilter = yfilter;
    }
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "acl-name" || name == "encryption-type" || name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain::KeyChain()
    :
    line{YType::str, "LINE"}
{

    yang_name = "key-chain"; yang_parent_name = "LINE"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain::~KeyChain()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain::has_data() const
{
    return line.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LINE")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LINE")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LINE")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::Required()
    :
    for_{YType::str, "for"}
{

    yang_name = "required"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::~Required()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::has_data() const
{
    return for_.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(for_.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "required";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.yfilter)) leaf_name_data.push_back(for_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "for")
    {
        for_ = value;
        for_.value_namespace = name_space;
        for_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "for")
    {
        for_.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::Rollover()
    :
    duration{YType::uint16, "duration"}
{

    yang_name = "rollover"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::~Rollover()
{
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::has_data() const
{
    return duration.is_set;
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Session()
    :
    protection(nullptr) // presence node
{

    yang_name = "session"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Session::~Session()
{
}

bool Native::Mpls::Ldp::Session::has_data() const
{
    return (protection !=  nullptr && protection->has_data());
}

bool Native::Mpls::Ldp::Session::has_operation() const
{
    return is_set(yfilter)
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Mpls::Ldp::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Mpls::Ldp::Session::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void Native::Mpls::Ldp::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Protection()
    :
    duration(std::make_shared<Native::Mpls::Ldp::Session::Protection::Duration>())
	,for_(std::make_shared<Native::Mpls::Ldp::Session::Protection::For_>())
	,vrf(std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf>())
{
    duration->parent = this;
    for_->parent = this;
    vrf->parent = this;

    yang_name = "protection"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Session::Protection::~Protection()
{
}

bool Native::Mpls::Ldp::Session::Protection::has_data() const
{
    return (duration !=  nullptr && duration->has_data())
	|| (for_ !=  nullptr && for_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::has_operation() const
{
    return is_set(yfilter)
	|| (duration !=  nullptr && duration->has_operation())
	|| (for_ !=  nullptr && for_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Mpls::Ldp::Session::Protection::Duration>();
        }
        return duration;
    }

    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Session::Protection::For_>();
        }
        return for_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Session::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Session::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "for" || name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Duration::Duration()
    :
    holdup_time{YType::uint32, "holdup-time"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "duration"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Session::Protection::Duration::~Duration()
{
}

bool Native::Mpls::Ldp::Session::Protection::Duration::has_data() const
{
    return holdup_time.is_set
	|| infinite.is_set;
}

bool Native::Mpls::Ldp::Session::Protection::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdup_time.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Mpls::Ldp::Session::Protection::Duration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdup_time.is_set || is_set(holdup_time.yfilter)) leaf_name_data.push_back(holdup_time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Session::Protection::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdup-time")
    {
        holdup_time = value;
        holdup_time.value_namespace = name_space;
        holdup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdup-time")
    {
        holdup_time.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdup-time" || name == "infinite")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::For_::For_()
    :
    acl_name{YType::str, "acl-name"}
    	,
    duration(std::make_shared<Native::Mpls::Ldp::Session::Protection::For_::Duration>())
{
    duration->parent = this;

    yang_name = "for"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Session::Protection::For_::~For_()
{
}

bool Native::Mpls::Ldp::Session::Protection::For_::has_data() const
{
    return acl_name.is_set
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::For_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::For_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::For_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Mpls::Ldp::Session::Protection::For_::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::For_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::For_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::For_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "acl-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::For_::Duration::Duration()
    :
    holdup_time{YType::uint32, "holdup-time"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "duration"; yang_parent_name = "for"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Session::Protection::For_::Duration::~Duration()
{
}

bool Native::Mpls::Ldp::Session::Protection::For_::Duration::has_data() const
{
    return holdup_time.is_set
	|| infinite.is_set;
}

bool Native::Mpls::Ldp::Session::Protection::For_::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdup_time.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Mpls::Ldp::Session::Protection::For_::Duration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/for/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::For_::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::For_::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdup_time.is_set || is_set(holdup_time.yfilter)) leaf_name_data.push_back(holdup_time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::For_::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::For_::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Session::Protection::For_::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdup-time")
    {
        holdup_time = value;
        holdup_time.value_namespace = name_space;
        holdup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::For_::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdup-time")
    {
        holdup_time.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::For_::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdup-time" || name == "infinite")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Session::Protection::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    for_(std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_>())
	,duration(std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration>())
{
    for_->parent = this;
    duration->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::has_data() const
{
    return vrf_name.is_set
	|| (for_ !=  nullptr && for_->has_data())
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (for_ !=  nullptr && for_->has_operation())
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/session/protection/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_>();
        }
        return for_;
    }

    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "duration" || name == "vrf-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::For_()
    :
    acl_name{YType::str, "acl-name"}
    	,
    duration(std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration>())
{
    duration->parent = this;

    yang_name = "for"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::~For_()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::has_data() const
{
    return acl_name.is_set
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    return children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "acl-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration::Duration()
    :
    holdup_time{YType::uint32, "holdup-time"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "duration"; yang_parent_name = "for"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration::~Duration()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration::has_data() const
{
    return holdup_time.is_set
	|| infinite.is_set;
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdup_time.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdup_time.is_set || is_set(holdup_time.yfilter)) leaf_name_data.push_back(holdup_time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdup-time")
    {
        holdup_time = value;
        holdup_time.value_namespace = name_space;
        holdup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdup-time")
    {
        holdup_time.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdup-time" || name == "infinite")
        return true;
    return false;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::Duration()
    :
    holdup_time{YType::uint32, "holdup-time"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "duration"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::~Duration()
{
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::has_data() const
{
    return holdup_time.is_set
	|| infinite.is_set;
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdup_time.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdup_time.is_set || is_set(holdup_time.yfilter)) leaf_name_data.push_back(holdup_time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdup-time")
    {
        holdup_time = value;
        holdup_time.value_namespace = name_space;
        holdup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdup-time")
    {
        holdup_time.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdup-time" || name == "infinite")
        return true;
    return false;
}

Native::Mpls::PrefixMap::PrefixMap()
    :
    nr{YType::uint8, "nr"},
    access_list{YType::uint8, "access-list"},
    cos_map{YType::uint8, "cos-map"}
{

    yang_name = "prefix-map"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::PrefixMap::~PrefixMap()
{
}

bool Native::Mpls::PrefixMap::has_data() const
{
    return nr.is_set
	|| access_list.is_set
	|| cos_map.is_set;
}

bool Native::Mpls::PrefixMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nr.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(cos_map.yfilter);
}

std::string Native::Mpls::PrefixMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::PrefixMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:prefix-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::PrefixMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nr.is_set || is_set(nr.yfilter)) leaf_name_data.push_back(nr.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (cos_map.is_set || is_set(cos_map.yfilter)) leaf_name_data.push_back(cos_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::PrefixMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::PrefixMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::PrefixMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nr")
    {
        nr = value;
        nr.value_namespace = name_space;
        nr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-map")
    {
        cos_map = value;
        cos_map.value_namespace = name_space;
        cos_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::PrefixMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nr")
    {
        nr.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "cos-map")
    {
        cos_map.yfilter = yfilter;
    }
}

bool Native::Mpls::PrefixMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nr" || name == "access-list" || name == "cos-map")
        return true;
    return false;
}

Native::Mpls::Static_::Static_()
    :
    binding(std::make_shared<Native::Mpls::Static_::Binding>())
{
    binding->parent = this;

    yang_name = "static"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Static_::~Static_()
{
}

bool Native::Mpls::Static_::has_data() const
{
    return (binding !=  nullptr && binding->has_data());
}

bool Native::Mpls::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (binding !=  nullptr && binding->has_operation());
}

std::string Native::Mpls::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        if(binding == nullptr)
        {
            binding = std::make_shared<Native::Mpls::Static_::Binding>();
        }
        return binding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(binding != nullptr)
    {
        children["binding"] = binding;
    }

    return children;
}

void Native::Mpls::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

Native::Mpls::Static_::Binding::Binding()
    :
    ipv4(std::make_shared<Native::Mpls::Static_::Binding::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "binding"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Static_::Binding::~Binding()
{
}

bool Native::Mpls::Static_::Binding::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Mpls::Static_::Binding::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Mpls::Static_::Binding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Static_::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static_::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Mpls::Static_::Binding::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Mpls::Static_::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Static_::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Static_::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Mpls::Static_::Binding::Ipv4::Ipv4()
{

    yang_name = "ipv4"; yang_parent_name = "binding"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Static_::Binding::Ipv4::~Ipv4()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::has_data() const
{
    for (std::size_t index=0; index<global.size(); index++)
    {
        if(global[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Static_::Binding::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<global.size(); index++)
    {
        if(global[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Static_::Binding::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/binding/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Static_::Binding::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static_::Binding::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        for(auto const & c : global)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Global>();
        c->parent = this;
        global.push_back(c);
        return c;
    }

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
        auto c = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : global)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Static_::Binding::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Static_::Binding::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf")
        return true;
    return false;
}

Native::Mpls::Static_::Binding::Ipv4::Global::Global()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    label{YType::uint32, "label"}
    	,
    input(std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Global::Input>())
	,output(std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Global::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "global"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Static_::Binding::Ipv4::Global::~Global()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| label.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(label.yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Mpls::Static_::Binding::Ipv4::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/binding/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Static_::Binding::Ipv4::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global" <<"[address='" <<address <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static_::Binding::Ipv4::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Global::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Global::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static_::Binding::Ipv4::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "address" || name == "mask" || name == "label")
        return true;
    return false;
}

Native::Mpls::Static_::Binding::Ipv4::Global::Input::Input()
    :
    label{YType::uint32, "label"}
{

    yang_name = "input"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Static_::Binding::Ipv4::Global::Input::~Input()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::Input::has_data() const
{
    return label.is_set;
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Mpls::Static_::Binding::Ipv4::Global::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static_::Binding::Ipv4::Global::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Global::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Global::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Global::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static_::Binding::Ipv4::Global::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Mpls::Static_::Binding::Ipv4::Global::Output::Output()
    :
    dst_next_hop{YType::str, "dst-next-hop"},
    label{YType::str, "label"}
{

    yang_name = "output"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Static_::Binding::Ipv4::Global::Output::~Output()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::Output::has_data() const
{
    return dst_next_hop.is_set
	|| label.is_set;
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_next_hop.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Mpls::Static_::Binding::Ipv4::Global::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static_::Binding::Ipv4::Global::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_next_hop.is_set || is_set(dst_next_hop.yfilter)) leaf_name_data.push_back(dst_next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Global::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Global::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Global::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-next-hop")
    {
        dst_next_hop = value;
        dst_next_hop.value_namespace = name_space;
        dst_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static_::Binding::Ipv4::Global::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-next-hop")
    {
        dst_next_hop.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static_::Binding::Ipv4::Global::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-next-hop" || name == "label")
        return true;
    return false;
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::Vrf()
    :
    name{YType::str, "name"},
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    label{YType::uint32, "label"}
    	,
    input(std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Vrf::Input>())
	,output(std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Vrf::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "vrf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::~Vrf()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::has_data() const
{
    return name.is_set
	|| address.is_set
	|| mask.is_set
	|| label.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(label.yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Mpls::Static_::Binding::Ipv4::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:static/binding/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Static_::Binding::Ipv4::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']" <<"[address='" <<address <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static_::Binding::Ipv4::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Vrf::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Mpls::Static_::Binding::Ipv4::Vrf::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static_::Binding::Ipv4::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "name" || name == "address" || name == "mask" || name == "label")
        return true;
    return false;
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::Input()
    :
    label{YType::uint32, "label"}
{

    yang_name = "input"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::~Input()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::has_data() const
{
    return label.is_set;
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::Output()
    :
    dst_next_hop{YType::str, "dst-next-hop"},
    label{YType::str, "label"}
{

    yang_name = "output"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::~Output()
{
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::has_data() const
{
    return dst_next_hop.is_set
	|| label.is_set;
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_next_hop.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_next_hop.is_set || is_set(dst_next_hop.yfilter)) leaf_name_data.push_back(dst_next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-next-hop")
    {
        dst_next_hop = value;
        dst_next_hop.value_namespace = name_space;
        dst_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-next-hop")
    {
        dst_next_hop.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-next-hop" || name == "label")
        return true;
    return false;
}

Native::Mpls::TrafficEng::TrafficEng()
    :
    fault_oam{YType::empty, "fault-oam"},
    nsr{YType::empty, "nsr"},
    tunnels{YType::empty, "tunnels"}
    	,
    auto_bw(std::make_shared<Native::Mpls::TrafficEng::AutoBw>())
	,auto_tunnel(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel>())
	,ds_te(std::make_shared<Native::Mpls::TrafficEng::DsTe>())
	,fast_reroute(std::make_shared<Native::Mpls::TrafficEng::FastReroute>())
	,link_management(std::make_shared<Native::Mpls::TrafficEng::LinkManagement>())
	,logging(std::make_shared<Native::Mpls::TrafficEng::Logging>())
	,lsp(std::make_shared<Native::Mpls::TrafficEng::Lsp>())
	,path_option(std::make_shared<Native::Mpls::TrafficEng::PathOption>())
	,path_selection(std::make_shared<Native::Mpls::TrafficEng::PathSelection>())
	,pcc(std::make_shared<Native::Mpls::TrafficEng::Pcc>())
	,reoptimize(std::make_shared<Native::Mpls::TrafficEng::Reoptimize>())
	,signalling(std::make_shared<Native::Mpls::TrafficEng::Signalling>())
	,topology(std::make_shared<Native::Mpls::TrafficEng::Topology>())
	,trace(std::make_shared<Native::Mpls::TrafficEng::Trace>())
{
    auto_bw->parent = this;
    auto_tunnel->parent = this;
    ds_te->parent = this;
    fast_reroute->parent = this;
    link_management->parent = this;
    logging->parent = this;
    lsp->parent = this;
    path_option->parent = this;
    path_selection->parent = this;
    pcc->parent = this;
    reoptimize->parent = this;
    signalling->parent = this;
    topology->parent = this;
    trace->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Mpls::TrafficEng::has_data() const
{
    return fault_oam.is_set
	|| nsr.is_set
	|| tunnels.is_set
	|| (auto_bw !=  nullptr && auto_bw->has_data())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (ds_te !=  nullptr && ds_te->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (link_management !=  nullptr && link_management->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (lsp !=  nullptr && lsp->has_data())
	|| (path_option !=  nullptr && path_option->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (pcc !=  nullptr && pcc->has_data())
	|| (reoptimize !=  nullptr && reoptimize->has_data())
	|| (signalling !=  nullptr && signalling->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (trace !=  nullptr && trace->has_data());
}

bool Native::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fault_oam.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| (auto_bw !=  nullptr && auto_bw->has_operation())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (ds_te !=  nullptr && ds_te->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (link_management !=  nullptr && link_management->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (lsp !=  nullptr && lsp->has_operation())
	|| (path_option !=  nullptr && path_option->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (pcc !=  nullptr && pcc->has_operation())
	|| (reoptimize !=  nullptr && reoptimize->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (trace !=  nullptr && trace->has_operation());
}

std::string Native::Mpls::TrafficEng::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fault_oam.is_set || is_set(fault_oam.yfilter)) leaf_name_data.push_back(fault_oam.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-bw")
    {
        if(auto_bw == nullptr)
        {
            auto_bw = std::make_shared<Native::Mpls::TrafficEng::AutoBw>();
        }
        return auto_bw;
    }

    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel == nullptr)
        {
            auto_tunnel = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel>();
        }
        return auto_tunnel;
    }

    if(child_yang_name == "ds-te")
    {
        if(ds_te == nullptr)
        {
            ds_te = std::make_shared<Native::Mpls::TrafficEng::DsTe>();
        }
        return ds_te;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Mpls::TrafficEng::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "link-management")
    {
        if(link_management == nullptr)
        {
            link_management = std::make_shared<Native::Mpls::TrafficEng::LinkManagement>();
        }
        return link_management;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Mpls::TrafficEng::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "lsp")
    {
        if(lsp == nullptr)
        {
            lsp = std::make_shared<Native::Mpls::TrafficEng::Lsp>();
        }
        return lsp;
    }

    if(child_yang_name == "path-option")
    {
        if(path_option == nullptr)
        {
            path_option = std::make_shared<Native::Mpls::TrafficEng::PathOption>();
        }
        return path_option;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<Native::Mpls::TrafficEng::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "pcc")
    {
        if(pcc == nullptr)
        {
            pcc = std::make_shared<Native::Mpls::TrafficEng::Pcc>();
        }
        return pcc;
    }

    if(child_yang_name == "reoptimize")
    {
        if(reoptimize == nullptr)
        {
            reoptimize = std::make_shared<Native::Mpls::TrafficEng::Reoptimize>();
        }
        return reoptimize;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Native::Mpls::TrafficEng::Signalling>();
        }
        return signalling;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Mpls::TrafficEng::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Mpls::TrafficEng::Trace>();
        }
        return trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_bw != nullptr)
    {
        children["auto-bw"] = auto_bw;
    }

    if(auto_tunnel != nullptr)
    {
        children["auto-tunnel"] = auto_tunnel;
    }

    if(ds_te != nullptr)
    {
        children["ds-te"] = ds_te;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(link_management != nullptr)
    {
        children["link-management"] = link_management;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(lsp != nullptr)
    {
        children["lsp"] = lsp;
    }

    if(path_option != nullptr)
    {
        children["path-option"] = path_option;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(pcc != nullptr)
    {
        children["pcc"] = pcc;
    }

    if(reoptimize != nullptr)
    {
        children["reoptimize"] = reoptimize;
    }

    if(signalling != nullptr)
    {
        children["signalling"] = signalling;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(trace != nullptr)
    {
        children["trace"] = trace;
    }

    return children;
}

void Native::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fault-oam")
    {
        fault_oam = value;
        fault_oam.value_namespace = name_space;
        fault_oam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fault-oam")
    {
        fault_oam.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-bw" || name == "auto-tunnel" || name == "ds-te" || name == "fast-reroute" || name == "link-management" || name == "logging" || name == "lsp" || name == "path-option" || name == "path-selection" || name == "pcc" || name == "reoptimize" || name == "signalling" || name == "topology" || name == "trace" || name == "fault-oam" || name == "nsr" || name == "tunnels")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoBw::AutoBw()
    :
    timers(nullptr) // presence node
{

    yang_name = "auto-bw"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoBw::~AutoBw()
{
}

bool Native::Mpls::TrafficEng::AutoBw::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::AutoBw::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoBw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::AutoBw::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoBw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoBw::Timers::Timers()
    :
    frequency{YType::uint32, "frequency"}
{

    yang_name = "timers"; yang_parent_name = "auto-bw"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoBw::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::AutoBw::Timers::has_data() const
{
    return frequency.is_set;
}

bool Native::Mpls::TrafficEng::AutoBw::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoBw::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-bw/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoBw::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoBw::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoBw::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoBw::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoBw::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoBw::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoBw::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::AutoTunnel()
    :
    backup(nullptr) // presence node
	,mesh(nullptr) // presence node
	,p2p(nullptr) // presence node
	,primary(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary>())
{
    primary->parent = this;

    yang_name = "auto-tunnel"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::~AutoTunnel()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::has_data() const
{
    return (backup !=  nullptr && backup->has_data())
	|| (mesh !=  nullptr && mesh->has_data())
	|| (p2p !=  nullptr && p2p->has_data())
	|| (primary !=  nullptr && primary->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (backup !=  nullptr && backup->has_operation())
	|| (mesh !=  nullptr && mesh->has_operation())
	|| (p2p !=  nullptr && p2p->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "mesh")
    {
        if(mesh == nullptr)
        {
            mesh = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh>();
        }
        return mesh;
    }

    if(child_yang_name == "p2p")
    {
        if(p2p == nullptr)
        {
            p2p = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P>();
        }
        return p2p;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary>();
        }
        return primary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(mesh != nullptr)
    {
        children["mesh"] = mesh;
    }

    if(p2p != nullptr)
    {
        children["p2p"] = p2p;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "mesh" || name == "p2p" || name == "primary")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Backup()
    :
    nhop_only{YType::empty, "nhop-only"}
    	,
    config(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config>())
	,srlg(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers>())
	,tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum>())
{
    config->parent = this;
    srlg->parent = this;
    timers->parent = this;
    tunnel_num->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::~Backup()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::has_data() const
{
    return nhop_only.is_set
	|| (config !=  nullptr && config->has_data())
	|| (srlg !=  nullptr && srlg->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhop_only.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (srlg !=  nullptr && srlg->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhop_only.is_set || is_set(nhop_only.yfilter)) leaf_name_data.push_back(nhop_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config>();
        }
        return config;
    }

    if(child_yang_name == "srlg")
    {
        if(srlg == nullptr)
        {
            srlg = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg>();
        }
        return srlg;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(srlg != nullptr)
    {
        children["srlg"] = srlg;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tunnel_num != nullptr)
    {
        children["tunnel-num"] = tunnel_num;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhop-only")
    {
        nhop_only = value;
        nhop_only.value_namespace = name_space;
        nhop_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhop-only")
    {
        nhop_only.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "srlg" || name == "timers" || name == "tunnel-num" || name == "nhop-only")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Config()
    :
    affinity_mask(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask>())
	,unnumbered_interface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface>())
{
    affinity_mask->parent = this;
    unnumbered_interface->parent = this;

    yang_name = "config"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::~Config()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::has_data() const
{
    return (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::has_operation() const
{
    return is_set(yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "unnumbered-interface")
    {
        if(unnumbered_interface == nullptr)
        {
            unnumbered_interface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface>();
        }
        return unnumbered_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(unnumbered_interface != nullptr)
    {
        children["unnumbered-interface"] = unnumbered_interface;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "unnumbered-interface")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::~AffinityMask()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::UnnumberedInterface()
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
    atm_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "unnumbered-interface"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::~UnnumberedInterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::has_data() const
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

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::has_operation() const
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

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::get_children() const
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

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Srlg()
    :
    exclude{YType::enumeration, "exclude"}
{

    yang_name = "srlg"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::~Srlg()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::has_data() const
{
    return exclude.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclude.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude.is_set || is_set(exclude.yfilter)) leaf_name_data.push_back(exclude.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude")
    {
        exclude = value;
        exclude.value_namespace = name_space;
        exclude.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude")
    {
        exclude.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Timers()
    :
    removal(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal>())
{
    removal->parent = this;

    yang_name = "timers"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::has_data() const
{
    return (removal !=  nullptr && removal->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Removal()
    :
    unused(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused>())
{
    unused->parent = this;

    yang_name = "removal"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::~Removal()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::has_data() const
{
    return (unused !=  nullptr && unused->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::has_operation() const
{
    return is_set(yfilter)
	|| (unused !=  nullptr && unused->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unused")
    {
        if(unused == nullptr)
        {
            unused = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused>();
        }
        return unused;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unused != nullptr)
    {
        children["unused"] = unused;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unused")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::Unused()
    :
    interval{YType::uint32, "interval"},
    duration{YType::uint32, "duration"}
{

    yang_name = "unused"; yang_parent_name = "removal"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::~Unused()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::has_data() const
{
    return interval.is_set
	|| duration.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/timers/removal/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "duration")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::TunnelNum()
    :
    min_max(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax>())
{
    min_max->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::has_data() const
{
    return (min_max !=  nullptr && min_max->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::has_operation() const
{
    return is_set(yfilter)
	|| (min_max !=  nullptr && min_max->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-max")
    {
        if(min_max == nullptr)
        {
            min_max = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax>();
        }
        return min_max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min_max != nullptr)
    {
        children["min-max"] = min_max;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::MinMax()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "min-max"; yang_parent_name = "tunnel-num"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::~MinMax()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/tunnel-num/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::Mesh()
    :
    tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum>())
{
    tunnel_num->parent = this;

    yang_name = "mesh"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::~Mesh()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::has_data() const
{
    return (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_num != nullptr)
    {
        children["tunnel-num"] = tunnel_num;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::TunnelNum()
    :
    min_max(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax>())
{
    min_max->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::has_data() const
{
    return (min_max !=  nullptr && min_max->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::has_operation() const
{
    return is_set(yfilter)
	|| (min_max !=  nullptr && min_max->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-max")
    {
        if(min_max == nullptr)
        {
            min_max = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax>();
        }
        return min_max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min_max != nullptr)
    {
        children["min-max"] = min_max;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::MinMax()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "min-max"; yang_parent_name = "tunnel-num"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::~MinMax()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/mesh/tunnel-num/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::P2P()
    :
    config(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config>())
	,tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum>())
{
    config->parent = this;
    tunnel_num->parent = this;

    yang_name = "p2p"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::~P2P()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2P::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config>();
        }
        return config;
    }

    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(tunnel_num != nullptr)
    {
        children["tunnel-num"] = tunnel_num;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "tunnel-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::Config()
    :
    unnumbered_interface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface>())
{
    unnumbered_interface->parent = this;

    yang_name = "config"; yang_parent_name = "p2p"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::~Config()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::has_data() const
{
    return (unnumbered_interface !=  nullptr && unnumbered_interface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::has_operation() const
{
    return is_set(yfilter)
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unnumbered-interface")
    {
        if(unnumbered_interface == nullptr)
        {
            unnumbered_interface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface>();
        }
        return unnumbered_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unnumbered_interface != nullptr)
    {
        children["unnumbered-interface"] = unnumbered_interface;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unnumbered-interface")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::UnnumberedInterface()
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
    atm_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "unnumbered-interface"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::~UnnumberedInterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::has_data() const
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

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::has_operation() const
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

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::get_children() const
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

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::TunnelNum()
    :
    min_max(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax>())
{
    min_max->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "p2p"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::has_data() const
{
    return (min_max !=  nullptr && min_max->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::has_operation() const
{
    return is_set(yfilter)
	|| (min_max !=  nullptr && min_max->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-max")
    {
        if(min_max == nullptr)
        {
            min_max = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax>();
        }
        return min_max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min_max != nullptr)
    {
        children["min-max"] = min_max;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::MinMax()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "min-max"; yang_parent_name = "tunnel-num"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::~MinMax()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/tunnel-num/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Primary()
    :
    onehop{YType::empty, "onehop"}
    	,
    config(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers>())
	,tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum>())
{
    config->parent = this;
    timers->parent = this;
    tunnel_num->parent = this;

    yang_name = "primary"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::~Primary()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::has_data() const
{
    return onehop.is_set
	|| (config !=  nullptr && config->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(onehop.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (onehop.is_set || is_set(onehop.yfilter)) leaf_name_data.push_back(onehop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config>();
        }
        return config;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tunnel_num != nullptr)
    {
        children["tunnel-num"] = tunnel_num;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "onehop")
    {
        onehop = value;
        onehop.value_namespace = name_space;
        onehop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "onehop")
    {
        onehop.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "timers" || name == "tunnel-num" || name == "onehop")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Config()
    :
    mpls(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_>())
	,unnumbered_interface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface>())
{
    mpls->parent = this;
    unnumbered_interface->parent = this;

    yang_name = "config"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::~Config()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::has_operation() const
{
    return is_set(yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_>();
        }
        return mpls;
    }

    if(child_yang_name == "unnumbered-interface")
    {
        if(unnumbered_interface == nullptr)
        {
            unnumbered_interface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface>();
        }
        return unnumbered_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(unnumbered_interface != nullptr)
    {
        children["unnumbered-interface"] = unnumbered_interface;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "unnumbered-interface")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::Mpls_()
    :
    ip{YType::empty, "ip"}
{

    yang_name = "mpls"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::~Mpls_()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::has_data() const
{
    return ip.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::UnnumberedInterface()
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
    atm_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "unnumbered-interface"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::~UnnumberedInterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::has_data() const
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

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::has_operation() const
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

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_children() const
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

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "unnumbered-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Timers()
    :
    removal(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal>())
{
    removal->parent = this;

    yang_name = "timers"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::has_data() const
{
    return (removal !=  nullptr && removal->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::Removal()
    :
    rerouted{YType::uint32, "rerouted"}
{

    yang_name = "removal"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::~Removal()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::has_data() const
{
    return rerouted.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rerouted.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rerouted.is_set || is_set(rerouted.yfilter)) leaf_name_data.push_back(rerouted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rerouted")
    {
        rerouted = value;
        rerouted.value_namespace = name_space;
        rerouted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rerouted")
    {
        rerouted.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rerouted")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::TunnelNum()
    :
    min_max(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax>())
{
    min_max->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::has_data() const
{
    return (min_max !=  nullptr && min_max->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::has_operation() const
{
    return is_set(yfilter)
	|| (min_max !=  nullptr && min_max->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-max")
    {
        if(min_max == nullptr)
        {
            min_max = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax>();
        }
        return min_max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min_max != nullptr)
    {
        children["min-max"] = min_max;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::MinMax()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "min-max"; yang_parent_name = "tunnel-num"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::~MinMax()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/tunnel-num/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::DsTe()
    :
    bc_model{YType::enumeration, "bc-model"},
    mode{YType::enumeration, "mode"}
    	,
    te_classes(nullptr) // presence node
{

    yang_name = "ds-te"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::DsTe::~DsTe()
{
}

bool Native::Mpls::TrafficEng::DsTe::has_data() const
{
    return bc_model.is_set
	|| mode.is_set
	|| (te_classes !=  nullptr && te_classes->has_data());
}

bool Native::Mpls::TrafficEng::DsTe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bc_model.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (te_classes !=  nullptr && te_classes->has_operation());
}

std::string Native::Mpls::TrafficEng::DsTe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::DsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::DsTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bc_model.is_set || is_set(bc_model.yfilter)) leaf_name_data.push_back(bc_model.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-classes")
    {
        if(te_classes == nullptr)
        {
            te_classes = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses>();
        }
        return te_classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_classes != nullptr)
    {
        children["te-classes"] = te_classes;
    }

    return children;
}

void Native::Mpls::TrafficEng::DsTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bc-model")
    {
        bc_model = value;
        bc_model.value_namespace = name_space;
        bc_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::DsTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bc-model")
    {
        bc_model.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::DsTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-classes" || name == "bc-model" || name == "mode")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClasses()
{

    yang_name = "te-classes"; yang_parent_name = "ds-te"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::~TeClasses()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::has_data() const
{
    for (std::size_t index=0; index<te_class.size(); index++)
    {
        if(te_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::has_operation() const
{
    for (std::size_t index=0; index<te_class.size(); index++)
    {
        if(te_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::DsTe::TeClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-class")
    {
        for(auto const & c : te_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass>();
        c->parent = this;
        te_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-class")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::TeClass()
    :
    te_idx{YType::uint8, "te-idx"},
    unused{YType::empty, "unused"}
    	,
    class_type(std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType>())
{
    class_type->parent = this;

    yang_name = "te-class"; yang_parent_name = "te-classes"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::~TeClass()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::has_data() const
{
    return te_idx.is_set
	|| unused.is_set
	|| (class_type !=  nullptr && class_type->has_data());
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_idx.yfilter)
	|| ydk::is_set(unused.yfilter)
	|| (class_type !=  nullptr && class_type->has_operation());
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/te-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-class" <<"[te-idx='" <<te_idx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_idx.is_set || is_set(te_idx.yfilter)) leaf_name_data.push_back(te_idx.get_name_leafdata());
    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType>();
        }
        return class_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_type != nullptr)
    {
        children["class-type"] = class_type;
    }

    return children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-idx")
    {
        te_idx = value;
        te_idx.value_namespace = name_space;
        te_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-idx")
    {
        te_idx.yfilter = yfilter;
    }
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "te-idx" || name == "unused")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::ClassType()
    :
    type{YType::uint8, "type"},
    priority{YType::uint8, "priority"}
{

    yang_name = "class-type"; yang_parent_name = "te-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::~ClassType()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::has_data() const
{
    return type.is_set
	|| priority.is_set;
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "priority")
        return true;
    return false;
}

Native::Mpls::TrafficEng::FastReroute::FastReroute()
    :
    backup_prot_preempt(std::make_shared<Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::FastReroute::Timers>())
{
    backup_prot_preempt->parent = this;
    timers->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::FastReroute::~FastReroute()
{
}

bool Native::Mpls::TrafficEng::FastReroute::has_data() const
{
    return (backup_prot_preempt !=  nullptr && backup_prot_preempt->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (backup_prot_preempt !=  nullptr && backup_prot_preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::FastReroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-prot-preempt")
    {
        if(backup_prot_preempt == nullptr)
        {
            backup_prot_preempt = std::make_shared<Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt>();
        }
        return backup_prot_preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::FastReroute::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_prot_preempt != nullptr)
    {
        children["backup-prot-preempt"] = backup_prot_preempt;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-prot-preempt" || name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::BackupProtPreempt()
    :
    optimize_bw{YType::empty, "optimize-bw"}
{

    yang_name = "backup-prot-preempt"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::~BackupProtPreempt()
{
}

bool Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::has_data() const
{
    return optimize_bw.is_set;
}

bool Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optimize_bw.yfilter);
}

std::string Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-prot-preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optimize_bw.is_set || is_set(optimize_bw.yfilter)) leaf_name_data.push_back(optimize_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optimize-bw")
    {
        optimize_bw = value;
        optimize_bw.value_namespace = name_space;
        optimize_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optimize-bw")
    {
        optimize_bw.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optimize-bw")
        return true;
    return false;
}

Native::Mpls::TrafficEng::FastReroute::Timers::Timers()
    :
    promotion{YType::uint32, "promotion"}
{

    yang_name = "timers"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::FastReroute::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::FastReroute::Timers::has_data() const
{
    return promotion.is_set;
}

bool Native::Mpls::TrafficEng::FastReroute::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(promotion.yfilter);
}

std::string Native::Mpls::TrafficEng::FastReroute::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::FastReroute::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::FastReroute::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (promotion.is_set || is_set(promotion.yfilter)) leaf_name_data.push_back(promotion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::FastReroute::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::FastReroute::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::FastReroute::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "promotion")
    {
        promotion = value;
        promotion.value_namespace = name_space;
        promotion.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::FastReroute::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "promotion")
    {
        promotion.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::FastReroute::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "promotion")
        return true;
    return false;
}

Native::Mpls::TrafficEng::LinkManagement::LinkManagement()
    :
    timers(std::make_shared<Native::Mpls::TrafficEng::LinkManagement::Timers>())
{
    timers->parent = this;

    yang_name = "link-management"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::LinkManagement::~LinkManagement()
{
}

bool Native::Mpls::TrafficEng::LinkManagement::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::LinkManagement::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::LinkManagement::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::LinkManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-management";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::LinkManagement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::LinkManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::LinkManagement::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::LinkManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::LinkManagement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::LinkManagement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::LinkManagement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::LinkManagement::Timers::Timers()
    :
    bandwidth_hold{YType::uint16, "bandwidth-hold"},
    periodic_flooding{YType::uint16, "periodic-flooding"}
{

    yang_name = "timers"; yang_parent_name = "link-management"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::LinkManagement::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::LinkManagement::Timers::has_data() const
{
    return bandwidth_hold.is_set
	|| periodic_flooding.is_set;
}

bool Native::Mpls::TrafficEng::LinkManagement::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_hold.yfilter)
	|| ydk::is_set(periodic_flooding.yfilter);
}

std::string Native::Mpls::TrafficEng::LinkManagement::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/link-management/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::LinkManagement::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::LinkManagement::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_hold.is_set || is_set(bandwidth_hold.yfilter)) leaf_name_data.push_back(bandwidth_hold.get_name_leafdata());
    if (periodic_flooding.is_set || is_set(periodic_flooding.yfilter)) leaf_name_data.push_back(periodic_flooding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::LinkManagement::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::LinkManagement::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::LinkManagement::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-hold")
    {
        bandwidth_hold = value;
        bandwidth_hold.value_namespace = name_space;
        bandwidth_hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-flooding")
    {
        periodic_flooding = value;
        periodic_flooding.value_namespace = name_space;
        periodic_flooding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::LinkManagement::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-hold")
    {
        bandwidth_hold.yfilter = yfilter;
    }
    if(value_path == "periodic-flooding")
    {
        periodic_flooding.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::LinkManagement::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-hold" || name == "periodic-flooding")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Logging()
    :
    lsp(std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp>())
	,tunnel(std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel>())
{
    lsp->parent = this;
    tunnel->parent = this;

    yang_name = "logging"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::~Logging()
{
}

bool Native::Mpls::TrafficEng::Logging::has_data() const
{
    return (lsp !=  nullptr && lsp->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Mpls::TrafficEng::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (lsp !=  nullptr && lsp->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        if(lsp == nullptr)
        {
            lsp = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp>();
        }
        return lsp;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp != nullptr)
    {
        children["lsp"] = lsp;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp" || name == "tunnel")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Lsp()
    :
    path_errors(nullptr) // presence node
	,preemption(nullptr) // presence node
	,reservation_errors(nullptr) // presence node
	,setups(nullptr) // presence node
	,teardowns(nullptr) // presence node
{

    yang_name = "lsp"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::Lsp::~Lsp()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::has_data() const
{
    return (path_errors !=  nullptr && path_errors->has_data())
	|| (preemption !=  nullptr && preemption->has_data())
	|| (reservation_errors !=  nullptr && reservation_errors->has_data())
	|| (setups !=  nullptr && setups->has_data())
	|| (teardowns !=  nullptr && teardowns->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| (path_errors !=  nullptr && path_errors->has_operation())
	|| (preemption !=  nullptr && preemption->has_operation())
	|| (reservation_errors !=  nullptr && reservation_errors->has_operation())
	|| (setups !=  nullptr && setups->has_operation())
	|| (teardowns !=  nullptr && teardowns->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-errors")
    {
        if(path_errors == nullptr)
        {
            path_errors = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::PathErrors>();
        }
        return path_errors;
    }

    if(child_yang_name == "preemption")
    {
        if(preemption == nullptr)
        {
            preemption = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Preemption>();
        }
        return preemption;
    }

    if(child_yang_name == "reservation-errors")
    {
        if(reservation_errors == nullptr)
        {
            reservation_errors = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors>();
        }
        return reservation_errors;
    }

    if(child_yang_name == "setups")
    {
        if(setups == nullptr)
        {
            setups = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Setups>();
        }
        return setups;
    }

    if(child_yang_name == "teardowns")
    {
        if(teardowns == nullptr)
        {
            teardowns = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Teardowns>();
        }
        return teardowns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_errors != nullptr)
    {
        children["path-errors"] = path_errors;
    }

    if(preemption != nullptr)
    {
        children["preemption"] = preemption;
    }

    if(reservation_errors != nullptr)
    {
        children["reservation-errors"] = reservation_errors;
    }

    if(setups != nullptr)
    {
        children["setups"] = setups;
    }

    if(teardowns != nullptr)
    {
        children["teardowns"] = teardowns;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-errors" || name == "preemption" || name == "reservation-errors" || name == "setups" || name == "teardowns")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::PathErrors()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "path-errors"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::~PathErrors()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Preemption::Preemption()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "preemption"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Preemption::~Preemption()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Preemption::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Preemption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Preemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::Preemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Preemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::ReservationErrors()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "reservation-errors"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::~ReservationErrors()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Setups::Setups()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "setups"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Setups::~Setups()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Setups::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Setups::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Setups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::Setups::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Setups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::Teardowns()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "teardowns"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::~Teardowns()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "teardowns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Tunnel()
    :
    lsp_selection(nullptr) // presence node
	,lsp_switchover(nullptr) // presence node
	,path(std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path>())
{
    path->parent = this;

    yang_name = "tunnel"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::~Tunnel()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::has_data() const
{
    return (lsp_selection !=  nullptr && lsp_selection->has_data())
	|| (lsp_switchover !=  nullptr && lsp_switchover->has_data())
	|| (path !=  nullptr && path->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| (lsp_selection !=  nullptr && lsp_selection->has_operation())
	|| (lsp_switchover !=  nullptr && lsp_switchover->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-selection")
    {
        if(lsp_selection == nullptr)
        {
            lsp_selection = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection>();
        }
        return lsp_selection;
    }

    if(child_yang_name == "lsp-switchover")
    {
        if(lsp_switchover == nullptr)
        {
            lsp_switchover = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover>();
        }
        return lsp_switchover;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_selection != nullptr)
    {
        children["lsp-selection"] = lsp_selection;
    }

    if(lsp_switchover != nullptr)
    {
        children["lsp-switchover"] = lsp_switchover;
    }

    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-selection" || name == "lsp-switchover" || name == "path")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::LspSelection()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "lsp-selection"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::~LspSelection()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::LspSwitchover()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "lsp-switchover"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::~LspSwitchover()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-switchover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Path()
    :
    change(nullptr) // presence node
{

    yang_name = "path"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::~Path()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::has_data() const
{
    return (change !=  nullptr && change->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::has_operation() const
{
    return is_set(yfilter)
	|| (change !=  nullptr && change->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change")
    {
        if(change == nullptr)
        {
            change = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change>();
        }
        return change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change != nullptr)
    {
        children["change"] = change;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::Change()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "change"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::~Change()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/path/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Lsp()
{

    yang_name = "lsp"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Lsp::~Lsp()
{
}

bool Native::Mpls::TrafficEng::Lsp::has_data() const
{
    for (std::size_t index=0; index<attributes.size(); index++)
    {
        if(attributes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::Lsp::has_operation() const
{
    for (std::size_t index=0; index<attributes.size(); index++)
    {
        if(attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        for(auto const & c : attributes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes>();
        c->parent = this;
        attributes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attributes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::Attributes()
    :
    name{YType::str, "name"}
    	,
    mpls_te_mode_config_lsp_attr(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr>())
{
    mpls_te_mode_config_lsp_attr->parent = this;

    yang_name = "attributes"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::~Attributes()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::has_data() const
{
    return name.is_set
	|| (mpls_te_mode_config_lsp_attr !=  nullptr && mpls_te_mode_config_lsp_attr->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (mpls_te_mode_config_lsp_attr !=  nullptr && mpls_te_mode_config_lsp_attr->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-mode-config-lsp-attr")
    {
        if(mpls_te_mode_config_lsp_attr == nullptr)
        {
            mpls_te_mode_config_lsp_attr = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr>();
        }
        return mpls_te_mode_config_lsp_attr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_te_mode_config_lsp_attr != nullptr)
    {
        children["mpls-te-mode-config-lsp-attr"] = mpls_te_mode_config_lsp_attr;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-mode-config-lsp-attr" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::MplsTeModeConfigLspAttr()
    :
    record_route{YType::empty, "record-route"}
    	,
    affinity_mask(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask>())
	,auto_bw(nullptr) // presence node
	,bandwidth(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth>())
	,bfd_reverse_path(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath>())
	,lockdown(nullptr) // presence node
	,path_selection(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection>())
	,pce(nullptr) // presence node
	,priority(nullptr) // presence node
	,protection(nullptr) // presence node
{
    affinity_mask->parent = this;
    bandwidth->parent = this;
    bfd_reverse_path->parent = this;
    path_selection->parent = this;

    yang_name = "mpls-te-mode-config-lsp-attr"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::~MplsTeModeConfigLspAttr()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::has_data() const
{
    return record_route.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_bw !=  nullptr && auto_bw->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data())
	|| (lockdown !=  nullptr && lockdown->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (pce !=  nullptr && pce->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_bw !=  nullptr && auto_bw->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation())
	|| (lockdown !=  nullptr && lockdown->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (pce !=  nullptr && pce->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-mode-config-lsp-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "auto-bw")
    {
        if(auto_bw == nullptr)
        {
            auto_bw = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw>();
        }
        return auto_bw;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "lockdown")
    {
        if(lockdown == nullptr)
        {
            lockdown = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown>();
        }
        return lockdown;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce>();
        }
        return pce;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(auto_bw != nullptr)
    {
        children["auto-bw"] = auto_bw;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    if(lockdown != nullptr)
    {
        children["lockdown"] = lockdown;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "auto-bw" || name == "bandwidth" || name == "bfd-reverse-path" || name == "lockdown" || name == "path-selection" || name == "pce" || name == "priority" || name == "protection" || name == "record-route")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::~AffinityMask()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::AutoBw()
    :
    frequency{YType::uint32, "frequency"},
    collect_bw{YType::empty, "collect-bw"},
    adjustment_threshold{YType::uint8, "adjustment-threshold"},
    max_bw{YType::uint32, "max-bw"},
    min_bw{YType::uint32, "min-bw"}
    	,
    overflow_limit(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit>())
{
    overflow_limit->parent = this;

    yang_name = "auto-bw"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::~AutoBw()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::has_data() const
{
    return frequency.is_set
	|| collect_bw.is_set
	|| adjustment_threshold.is_set
	|| max_bw.is_set
	|| min_bw.is_set
	|| (overflow_limit !=  nullptr && overflow_limit->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(collect_bw.yfilter)
	|| ydk::is_set(adjustment_threshold.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(min_bw.yfilter)
	|| (overflow_limit !=  nullptr && overflow_limit->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (collect_bw.is_set || is_set(collect_bw.yfilter)) leaf_name_data.push_back(collect_bw.get_name_leafdata());
    if (adjustment_threshold.is_set || is_set(adjustment_threshold.yfilter)) leaf_name_data.push_back(adjustment_threshold.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overflow-limit")
    {
        if(overflow_limit == nullptr)
        {
            overflow_limit = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit>();
        }
        return overflow_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(overflow_limit != nullptr)
    {
        children["overflow-limit"] = overflow_limit;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collect-bw")
    {
        collect_bw = value;
        collect_bw.value_namespace = name_space;
        collect_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold = value;
        adjustment_threshold.value_namespace = name_space;
        adjustment_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
        max_bw.value_namespace = name_space;
        max_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
        min_bw.value_namespace = name_space;
        min_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "collect-bw")
    {
        collect_bw.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold.yfilter = yfilter;
    }
    if(value_path == "max-bw")
    {
        max_bw.yfilter = yfilter;
    }
    if(value_path == "min-bw")
    {
        min_bw.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overflow-limit" || name == "frequency" || name == "collect-bw" || name == "adjustment-threshold" || name == "max-bw" || name == "min-bw")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::OverflowLimit()
    :
    limit{YType::uint8, "limit"},
    overflow_threshold{YType::uint8, "overflow-threshold"}
{

    yang_name = "overflow-limit"; yang_parent_name = "auto-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::~OverflowLimit()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::has_data() const
{
    return limit.is_set
	|| overflow_threshold.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold = value;
        overflow_threshold.value_namespace = name_space;
        overflow_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "overflow-threshold")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::Bandwidth()
    :
    bw{YType::uint32, "bw"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::~Bandwidth()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::has_data() const
{
    return bw.is_set
	|| sub_pool.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw" || name == "sub-pool")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::~BfdReversePath()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_data() const
{
    return binding_label.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-label")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::Lockdown()
    :
    sticky{YType::empty, "sticky"}
{

    yang_name = "lockdown"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::~Lockdown()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_data() const
{
    return sticky.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sticky.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sticky")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"}
    	,
    invalidation(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation>())
	,segment_routing(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting>())
{
    invalidation->parent = this;
    segment_routing->parent = this;

    yang_name = "path-selection"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::~PathSelection()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_data() const
{
    return metric.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "segment-routing" || name == "metric")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::Invalidation()
    :
    value_{YType::int32, "value"},
    drop{YType::empty, "drop"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_data() const
{
    return value_.is_set
	|| drop.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "drop")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::SegmentRouting()
    :
    adjacency{YType::enumeration, "adjacency"}
{

    yang_name = "segment-routing"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::~SegmentRouting()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_data() const
{
    return adjacency.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency.is_set || is_set(adjacency.yfilter)) leaf_name_data.push_back(adjacency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency")
    {
        adjacency = value;
        adjacency.value_namespace = name_space;
        adjacency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency")
    {
        adjacency.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::Pce()
    :
    disjoint_path(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath>())
{
    disjoint_path->parent = this;

    yang_name = "pce"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::~Pce()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_data() const
{
    return (disjoint_path !=  nullptr && disjoint_path->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_operation() const
{
    return is_set(yfilter)
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path == nullptr)
        {
            disjoint_path = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath>();
        }
        return disjoint_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disjoint_path != nullptr)
    {
        children["disjoint-path"] = disjoint_path;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disjoint-path")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::DisjointPath()
    :
    source{YType::str, "source"},
    type{YType::enumeration, "type"},
    group_id{YType::uint32, "group-id"}
{

    yang_name = "disjoint-path"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::~DisjointPath()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_data() const
{
    return source.is_set
	|| type.is_set
	|| group_id.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(group_id.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "type" || name == "group-id")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::Priority()
    :
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::~Priority()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_data() const
{
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::Protection()
    :
    fast_reroute(nullptr) // presence node
{

    yang_name = "protection"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::~Protection()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_data() const
{
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_operation() const
{
    return is_set(yfilter)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::FastReroute()
    :
    bw_protect{YType::empty, "bw-protect"}
{

    yang_name = "fast-reroute"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::~FastReroute()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_data() const
{
    return bw_protect.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_protect.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_protect.is_set || is_set(bw_protect.yfilter)) leaf_name_data.push_back(bw_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-protect")
    {
        bw_protect = value;
        bw_protect.value_namespace = name_space;
        bw_protect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-protect")
    {
        bw_protect.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-protect")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::PathOption()
    :
    list(std::make_shared<Native::Mpls::TrafficEng::PathOption::List>())
{
    list->parent = this;

    yang_name = "path-option"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathOption::~PathOption()
{
}

bool Native::Mpls::TrafficEng::PathOption::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Mpls::TrafficEng::PathOption::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::List()
{

    yang_name = "list"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathOption::List::~List()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::has_data() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::PathOption::List::has_operation() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        for(auto const & c : identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier>();
        c->parent = this;
        identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : identifier)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::Identifier()
    :
    pol_num{YType::uint16, "pol-num"}
{

    yang_name = "identifier"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::~Identifier()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return pol_num.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pol_num.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier" <<"[pol-num='" <<pol_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pol_num.is_set || is_set(pol_num.yfilter)) leaf_name_data.push_back(pol_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pol-num")
    {
        pol_num = value;
        pol_num.value_namespace = name_space;
        pol_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pol-num")
    {
        pol_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option" || name == "pol-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::PathOption_()
    :
    po_num{YType::uint16, "po-num"}
    	,
    explicit_(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_>())
{
    explicit_->parent = this;

    yang_name = "path-option"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::~PathOption_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_data() const
{
    return po_num.is_set
	|| (explicit_ !=  nullptr && explicit_->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(po_num.yfilter)
	|| (explicit_ !=  nullptr && explicit_->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[po-num='" <<po_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (po_num.is_set || is_set(po_num.yfilter)) leaf_name_data.push_back(po_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_>();
        }
        return explicit_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "po-num")
    {
        po_num = value;
        po_num.value_namespace = name_space;
        po_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "po-num")
    {
        po_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit" || name == "po-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Explicit_()
    :
    identifier(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_>())
	,name(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name>())
{
    identifier->parent = this;
    name->parent = this;

    yang_name = "explicit"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::~Explicit_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::has_data() const
{
    return (identifier !=  nullptr && identifier->has_data())
	|| (name !=  nullptr && name->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::has_operation() const
{
    return is_set(yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_>();
        }
        return identifier;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::Identifier_()
    :
    pnum{YType::uint16, "pnum"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "identifier"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::~Identifier_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::has_data() const
{
    return pnum.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pnum.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pnum.is_set || is_set(pnum.yfilter)) leaf_name_data.push_back(pnum.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pnum")
    {
        pnum = value;
        pnum.value_namespace = name_space;
        pnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pnum")
    {
        pnum.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pnum" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::Name()
    :
    pname{YType::str, "pname"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "name"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::~Name()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::has_data() const
{
    return pname.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pname.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pname.is_set || is_set(pname.yfilter)) leaf_name_data.push_back(pname.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pname")
    {
        pname = value;
        pname.value_namespace = name_space;
        pname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pname")
    {
        pname.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pname" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::Name()
    :
    pol_name{YType::str, "pol-name"}
{

    yang_name = "name"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::~Name()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return pol_name.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pol_name.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[pol-name='" <<pol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pol_name.is_set || is_set(pol_name.yfilter)) leaf_name_data.push_back(pol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pol-name")
    {
        pol_name = value;
        pol_name.value_namespace = name_space;
        pol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pol-name")
    {
        pol_name.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option" || name == "pol-name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::PathOption_()
    :
    po_num{YType::uint16, "po-num"}
    	,
    explicit_(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_>())
{
    explicit_->parent = this;

    yang_name = "path-option"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::~PathOption_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_data() const
{
    return po_num.is_set
	|| (explicit_ !=  nullptr && explicit_->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(po_num.yfilter)
	|| (explicit_ !=  nullptr && explicit_->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[po-num='" <<po_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (po_num.is_set || is_set(po_num.yfilter)) leaf_name_data.push_back(po_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_>();
        }
        return explicit_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "po-num")
    {
        po_num = value;
        po_num.value_namespace = name_space;
        po_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "po-num")
    {
        po_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit" || name == "po-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Explicit_()
    :
    identifier(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier>())
	,name(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_>())
{
    identifier->parent = this;
    name->parent = this;

    yang_name = "explicit"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::~Explicit_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::has_data() const
{
    return (identifier !=  nullptr && identifier->has_data())
	|| (name !=  nullptr && name->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::has_operation() const
{
    return is_set(yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::Identifier()
    :
    pnum{YType::uint16, "pnum"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "identifier"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::~Identifier()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::has_data() const
{
    return pnum.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pnum.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pnum.is_set || is_set(pnum.yfilter)) leaf_name_data.push_back(pnum.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pnum")
    {
        pnum = value;
        pnum.value_namespace = name_space;
        pnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pnum")
    {
        pnum.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pnum" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::Name_()
    :
    pname{YType::str, "pname"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "name"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::~Name_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::has_data() const
{
    return pname.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pname.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pname.is_set || is_set(pname.yfilter)) leaf_name_data.push_back(pname.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pname")
    {
        pname = value;
        pname.value_namespace = name_space;
        pname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pname")
    {
        pname.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pname" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    invalidation(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Invalidation>())
	,overload(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload>())
{
    invalidation->parent = this;
    overload->parent = this;

    yang_name = "path-selection"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathSelection::~PathSelection()
{
}

bool Native::Mpls::TrafficEng::PathSelection::has_data() const
{
    return metric.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Mpls::TrafficEng::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Mpls::TrafficEng::PathSelection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload>();
        }
        return overload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "overload" || name == "metric" || name == "tiebreaker")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::Invalidation::Invalidation()
    :
    value_{YType::int32, "value"},
    drop{YType::empty, "drop"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_data() const
{
    return value_.is_set
	|| drop.is_set;
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Mpls::TrafficEng::PathSelection::Invalidation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "drop")
        return true;
    return false;
}

const Enum::YLeaf Native::Mpls::Static_::Binding::Ipv4::Global::Output::Label::explicit_null {0, "explicit-null"};
const Enum::YLeaf Native::Mpls::Static_::Binding::Ipv4::Global::Output::Label::implicit_null {1, "implicit-null"};

const Enum::YLeaf Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::Label::explicit_null {0, "explicit-null"};
const Enum::YLeaf Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::Label::implicit_null {1, "implicit-null"};

const Enum::YLeaf Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::force {0, "force"};
const Enum::YLeaf Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::preferred {1, "preferred"};

const Enum::YLeaf Native::Mpls::TrafficEng::DsTe::BcModel::mam {0, "mam"};

const Enum::YLeaf Native::Mpls::TrafficEng::DsTe::Mode::ietf {0, "ietf"};
const Enum::YLeaf Native::Mpls::TrafficEng::DsTe::Mode::migration {1, "migration"};

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Metric::te {1, "te"};

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::Adjacency::protected_ {0, "protected"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::Adjacency::unprotected {1, "unprotected"};

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::link {0, "link"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::node {1, "node"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::srlg {2, "srlg"};

const Enum::YLeaf Native::Mpls::TrafficEng::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Mpls::TrafficEng::PathSelection::Metric::te {1, "te"};


}
}

