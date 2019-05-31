
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_107.hpp"
#include "Cisco_IOS_XE_native_108.hpp"
#include "Cisco_IOS_XE_native_110.hpp"
#include "Cisco_IOS_XE_native_109.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Tunnel::Crypto::Map::Map()
    :
    tag{YType::str, "tag"},
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"}
{

    yang_name = "map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Crypto::Map::~Map()
{
}

bool Native::Interface::Tunnel::Crypto::Map::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| redundancy.is_set
	|| stateful.is_set;
}

bool Native::Interface::Tunnel::Crypto::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Interface::Tunnel::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Crypto::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Crypto::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Crypto::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Crypto::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "redundancy" || name == "stateful")
        return true;
    return false;
}

Native::Interface::Tunnel::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::Tunnel::Crypto::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::Tunnel::Crypto::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Native::Interface::Tunnel::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "fragmentation")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Cts()
    :
    sgt{YType::enumeration, "sgt"}
        ,
    manual(nullptr) // presence node
    , role_based(std::make_shared<Native::Interface::Tunnel::Cts::RoleBased>())
{
    role_based->parent = this;

    yang_name = "cts"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Cts::~Cts()
{
}

bool Native::Interface::Tunnel::Cts::has_data() const
{
    if (is_presence_container) return true;
    return sgt.is_set
	|| (manual !=  nullptr && manual->has_data())
	|| (role_based !=  nullptr && role_based->has_data());
}

bool Native::Interface::Tunnel::Cts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| (manual !=  nullptr && manual->has_operation())
	|| (role_based !=  nullptr && role_based->has_operation());
}

std::string Native::Interface::Tunnel::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Interface::Tunnel::Cts::Manual>();
        }
        return manual;
    }

    if(child_yang_name == "role-based")
    {
        if(role_based == nullptr)
        {
            role_based = std::make_shared<Native::Interface::Tunnel::Cts::RoleBased>();
        }
        return role_based;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(manual != nullptr)
    {
        _children["manual"] = manual;
    }

    if(role_based != nullptr)
    {
        _children["role-based"] = role_based;
    }

    return _children;
}

void Native::Interface::Tunnel::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual" || name == "role-based" || name == "sgt")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Manual()
    :
    policy(std::make_shared<Native::Interface::Tunnel::Cts::Manual::Policy>())
    , sap(std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap>())
    , propagate(std::make_shared<Native::Interface::Tunnel::Cts::Manual::Propagate>())
{
    policy->parent = this;
    sap->parent = this;
    propagate->parent = this;

    yang_name = "manual"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Cts::Manual::~Manual()
{
}

bool Native::Interface::Tunnel::Cts::Manual::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data())
	|| (sap !=  nullptr && sap->has_data())
	|| (propagate !=  nullptr && propagate->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (sap !=  nullptr && sap->has_operation())
	|| (propagate !=  nullptr && propagate->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "sap")
    {
        if(sap == nullptr)
        {
            sap = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap>();
        }
        return sap;
    }

    if(child_yang_name == "propagate")
    {
        if(propagate == nullptr)
        {
            propagate = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Propagate>();
        }
        return propagate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(sap != nullptr)
    {
        _children["sap"] = sap;
    }

    if(propagate != nullptr)
    {
        _children["propagate"] = propagate;
    }

    return _children;
}

void Native::Interface::Tunnel::Cts::Manual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "sap" || name == "propagate")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Policy::Policy()
    :
    static_(std::make_shared<Native::Interface::Tunnel::Cts::Manual::Policy::Static>())
{
    static_->parent = this;

    yang_name = "policy"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Cts::Manual::Policy::~Policy()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::Manual::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Policy::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::Manual::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Interface::Tunnel::Cts::Manual::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Policy::Static::Static()
    :
    sgt{YType::uint16, "sgt"},
    trusted{YType::empty, "trusted"}
{

    yang_name = "static"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Cts::Manual::Policy::Static::~Static()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::Static::has_data() const
{
    if (is_presence_container) return true;
    return sgt.is_set
	|| trusted.is_set;
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string Native::Interface::Tunnel::Cts::Manual::Policy::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Policy::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::Manual::Policy::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::Manual::Policy::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Cts::Manual::Policy::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::Manual::Policy::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt" || name == "trusted")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Sap()
    :
    pmk(this, {"word"})
{

    yang_name = "sap"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Cts::Manual::Sap::~Sap()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pmk.len(); index++)
    {
        if(pmk[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::has_operation() const
{
    for (std::size_t index=0; index<pmk.len(); index++)
    {
        if(pmk[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::Manual::Sap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmk")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk>();
        ent_->parent = this;
        pmk.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pmk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::Sap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmk")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::Pmk()
    :
    word{YType::str, "word"}
        ,
    mode_list(std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList>())
{
    mode_list->parent = this;

    yang_name = "pmk"; yang_parent_name = "sap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::~Pmk()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| (mode_list !=  nullptr && mode_list->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (mode_list !=  nullptr && mode_list->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-list")
    {
        if(mode_list == nullptr)
        {
            mode_list = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList>();
        }
        return mode_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode_list != nullptr)
    {
        _children["mode-list"] = mode_list;
    }

    return _children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-list" || name == "word")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::ModeList()
    :
    gcm_encrypt(nullptr) // presence node
    , no_encap(nullptr) // presence node
{

    yang_name = "mode-list"; yang_parent_name = "pmk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::~ModeList()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::has_data() const
{
    if (is_presence_container) return true;
    return (gcm_encrypt !=  nullptr && gcm_encrypt->has_data())
	|| (no_encap !=  nullptr && no_encap->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::has_operation() const
{
    return is_set(yfilter)
	|| (gcm_encrypt !=  nullptr && gcm_encrypt->has_operation())
	|| (no_encap !=  nullptr && no_encap->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gcm-encrypt")
    {
        if(gcm_encrypt == nullptr)
        {
            gcm_encrypt = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt>();
        }
        return gcm_encrypt;
    }

    if(child_yang_name == "no-encap")
    {
        if(no_encap == nullptr)
        {
            no_encap = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap>();
        }
        return no_encap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gcm_encrypt != nullptr)
    {
        _children["gcm-encrypt"] = gcm_encrypt;
    }

    if(no_encap != nullptr)
    {
        _children["no-encap"] = no_encap;
    }

    return _children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt" || name == "no-encap")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::GcmEncrypt()
    :
    gmac(nullptr) // presence node
{

    yang_name = "gcm-encrypt"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::~GcmEncrypt()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_data() const
{
    if (is_presence_container) return true;
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcm-encrypt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gmac != nullptr)
    {
        _children["gmac"] = gmac;
    }

    return _children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::Gmac()
    :
    null{YType::empty, "null"}
{

    yang_name = "gmac"; yang_parent_name = "gcm-encrypt"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::~Gmac()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_data() const
{
    if (is_presence_container) return true;
    return null.is_set;
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::NoEncap()
    :
    gmac(nullptr) // presence node
{

    yang_name = "no-encap"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::~NoEncap()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_data() const
{
    if (is_presence_container) return true;
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gmac != nullptr)
    {
        _children["gmac"] = gmac;
    }

    return _children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::Gmac()
    :
    gcm_encrypt{YType::empty, "gcm-encrypt"}
{

    yang_name = "gmac"; yang_parent_name = "no-encap"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::~Gmac()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_data() const
{
    if (is_presence_container) return true;
    return gcm_encrypt.is_set;
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gcm_encrypt.yfilter);
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_encrypt.is_set || is_set(gcm_encrypt.yfilter)) leaf_name_data.push_back(gcm_encrypt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt = value;
        gcm_encrypt.value_namespace = name_space;
        gcm_encrypt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Propagate::Propagate()
    :
    sgt{YType::boolean, "sgt"}
{

    yang_name = "propagate"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Cts::Manual::Propagate::~Propagate()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Propagate::has_data() const
{
    if (is_presence_container) return true;
    return sgt.is_set;
}

bool Native::Interface::Tunnel::Cts::Manual::Propagate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::Tunnel::Cts::Manual::Propagate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Propagate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::Manual::Propagate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::Manual::Propagate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Cts::Manual::Propagate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::Manual::Propagate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::Manual::Propagate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::RoleBased::RoleBased()
    :
    sgt_cache{YType::enumeration, "sgt-cache"},
    enforcement{YType::empty, "enforcement"}
        ,
    sgt_map(std::make_shared<Native::Interface::Tunnel::Cts::RoleBased::SgtMap>())
{
    sgt_map->parent = this;

    yang_name = "role-based"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Cts::RoleBased::~RoleBased()
{
}

bool Native::Interface::Tunnel::Cts::RoleBased::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : sgt_cache.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enforcement.is_set
	|| (sgt_map !=  nullptr && sgt_map->has_data());
}

bool Native::Interface::Tunnel::Cts::RoleBased::has_operation() const
{
    for (auto const & leaf : sgt_cache.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sgt_cache.yfilter)
	|| ydk::is_set(enforcement.yfilter)
	|| (sgt_map !=  nullptr && sgt_map->has_operation());
}

std::string Native::Interface::Tunnel::Cts::RoleBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role-based";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::RoleBased::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enforcement.is_set || is_set(enforcement.yfilter)) leaf_name_data.push_back(enforcement.get_name_leafdata());

    auto sgt_cache_name_datas = sgt_cache.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sgt_cache_name_datas.begin(), sgt_cache_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sgt-map")
    {
        if(sgt_map == nullptr)
        {
            sgt_map = std::make_shared<Native::Interface::Tunnel::Cts::RoleBased::SgtMap>();
        }
        return sgt_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sgt_map != nullptr)
    {
        _children["sgt-map"] = sgt_map;
    }

    return _children;
}

void Native::Interface::Tunnel::Cts::RoleBased::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt-cache")
    {
        sgt_cache.append(value);
    }
    if(value_path == "enforcement")
    {
        enforcement = value;
        enforcement.value_namespace = name_space;
        enforcement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::RoleBased::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt-cache")
    {
        sgt_cache.yfilter = yfilter;
    }
    if(value_path == "enforcement")
    {
        enforcement.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::RoleBased::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt-map" || name == "sgt-cache" || name == "enforcement")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::RoleBased::SgtMap::SgtMap()
    :
    security_group{YType::str, "security-group"},
    sgt{YType::uint16, "sgt"}
{

    yang_name = "sgt-map"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Cts::RoleBased::SgtMap::~SgtMap()
{
}

bool Native::Interface::Tunnel::Cts::RoleBased::SgtMap::has_data() const
{
    if (is_presence_container) return true;
    return security_group.is_set
	|| sgt.is_set;
}

bool Native::Interface::Tunnel::Cts::RoleBased::SgtMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security_group.yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::Tunnel::Cts::RoleBased::SgtMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgt-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::RoleBased::SgtMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security_group.is_set || is_set(security_group.yfilter)) leaf_name_data.push_back(security_group.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cts::RoleBased::SgtMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cts::RoleBased::SgtMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Cts::RoleBased::SgtMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security-group")
    {
        security_group = value;
        security_group.value_namespace = name_space;
        security_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::RoleBased::SgtMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security-group")
    {
        security_group.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::RoleBased::SgtMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group" || name == "sgt")
        return true;
    return false;
}

Native::Interface::Tunnel::EtAnalytics::EtAnalytics()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "et-analytics"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::EtAnalytics::~EtAnalytics()
{
}

bool Native::Interface::Tunnel::EtAnalytics::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::Tunnel::EtAnalytics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Tunnel::EtAnalytics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eta:et-analytics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::EtAnalytics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::EtAnalytics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::EtAnalytics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::EtAnalytics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::EtAnalytics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::EtAnalytics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Tunnel::Performance::Performance()
    :
    monitor(std::make_shared<Native::Interface::Tunnel::Performance::Monitor>())
{
    monitor->parent = this;

    yang_name = "performance"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Performance::~Performance()
{
}

bool Native::Interface::Tunnel::Performance::has_data() const
{
    if (is_presence_container) return true;
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::Tunnel::Performance::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::Tunnel::Performance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ezpm:performance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Performance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Performance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::Tunnel::Performance::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Performance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    return _children;
}

void Native::Interface::Tunnel::Performance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Performance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Performance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Interface::Tunnel::Performance::Monitor::Monitor()
    :
    context{YType::str, "context"}
{

    yang_name = "monitor"; yang_parent_name = "performance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Performance::Monitor::~Monitor()
{
}

bool Native::Interface::Tunnel::Performance::Monitor::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Performance::Monitor::has_operation() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter);
}

std::string Native::Interface::Tunnel::Performance::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Performance::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto context_name_datas = context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), context_name_datas.begin(), context_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Performance::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Performance::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Performance::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context.append(value);
    }
}

void Native::Interface::Tunnel::Performance::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Performance::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
        ,
    type(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Tunnel::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::Tunnel::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::Tunnel::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Interface::Tunnel::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "history" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::Control>())
    , performance_monitor(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor>())
    , service_chain(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;
    performance_monitor->parent = this;
    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::has_data() const
{
    if (is_presence_container) return true;
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::Tunnel::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(control != nullptr)
    {
        _children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        _children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        _children["service-chain"] = service_chain;
    }

    return _children;
}

void Native::Interface::Tunnel::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "performance-monitor" || name == "service-chain")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{

    yang_name = "control"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::Control::has_data() const
{
    if (is_presence_container) return true;
    return subscriber.is_set;
}

bool Native::Interface::Tunnel::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber.yfilter);
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::ServicePolicy::Type::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::ServicePolicy::Type::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::ServicePolicy::Type::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "performance-monitor"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input>())
    , output(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
        ,
    mobility(std::make_shared<Native::Interface::Tunnel::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Lisp::~Lisp()
{
}

bool Native::Interface::Tunnel::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::Tunnel::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_subnet_mode.yfilter)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::Tunnel::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.yfilter)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::Tunnel::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mobility != nullptr)
    {
        _children["mobility"] = mobility;
    }

    return _children;
}

void Native::Interface::Tunnel::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
        extended_subnet_mode.value_namespace = name_space;
        extended_subnet_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobility" || name == "extended-subnet-mode")
        return true;
    return false;
}

Native::Interface::Tunnel::Lisp::Mobility::Mobility()
    :
    dynamic_eid(this, {"dynamic_eid_name"})
    , discover(std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::Discover>())
    , liveness(std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::Liveness>())
{
    discover->parent = this;
    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::Tunnel::Lisp::Mobility::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_data())
            return true;
    }
    return (discover !=  nullptr && discover->has_data())
	|| (liveness !=  nullptr && liveness->has_data());
}

bool Native::Interface::Tunnel::Lisp::Mobility::has_operation() const
{
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (discover !=  nullptr && discover->has_operation())
	|| (liveness !=  nullptr && liveness->has_operation());
}

std::string Native::Interface::Tunnel::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Lisp::Mobility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-eid")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::DynamicEid>();
        ent_->parent = this;
        dynamic_eid.append(ent_);
        return ent_;
    }

    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Lisp::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dynamic_eid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(discover != nullptr)
    {
        _children["discover"] = discover;
    }

    if(liveness != nullptr)
    {
        _children["liveness"] = liveness;
    }

    return _children;
}

void Native::Interface::Tunnel::Lisp::Mobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Lisp::Mobility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Lisp::Mobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-eid" || name == "discover" || name == "liveness")
        return true;
    return false;
}

Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"}
        ,
    nbr_proxy_reply(nullptr) // presence node
{

    yang_name = "dynamic-eid"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::has_data() const
{
    if (is_presence_container) return true;
    return dynamic_eid_name.is_set
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_data());
}

bool Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_eid_name.yfilter)
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_operation());
}

std::string Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";
    ADD_KEY_TOKEN(dynamic_eid_name, "dynamic-eid-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.yfilter)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-proxy-reply")
    {
        if(nbr_proxy_reply == nullptr)
        {
            nbr_proxy_reply = std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply>();
        }
        return nbr_proxy_reply;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nbr_proxy_reply != nullptr)
    {
        _children["nbr-proxy-reply"] = nbr_proxy_reply;
    }

    return _children;
}

void Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name = value;
        dynamic_eid_name.value_namespace = name_space;
        dynamic_eid_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-proxy-reply" || name == "dynamic-eid-name")
        return true;
    return false;
}

Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply::NbrProxyReply()
    :
    requests{YType::uint8, "requests"}
{

    yang_name = "nbr-proxy-reply"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply::~NbrProxyReply()
{
}

bool Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply::has_data() const
{
    if (is_presence_container) return true;
    return requests.is_set;
}

bool Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-proxy-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::NbrProxyReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests")
        return true;
    return false;
}

Native::Interface::Tunnel::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{

    yang_name = "discover"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::Tunnel::Lisp::Mobility::Discover::has_data() const
{
    if (is_presence_container) return true;
    return arp.is_set;
}

bool Native::Interface::Tunnel::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter);
}

std::string Native::Interface::Tunnel::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Lisp::Mobility::Discover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Lisp::Mobility::Discover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Lisp::Mobility::Discover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Lisp::Mobility::Discover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp")
        return true;
    return false;
}

Native::Interface::Tunnel::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{

    yang_name = "liveness"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::Tunnel::Lisp::Mobility::Liveness::has_data() const
{
    if (is_presence_container) return true;
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::Tunnel::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Interface::Tunnel::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Lisp::Mobility::Liveness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.yfilter)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Lisp::Mobility::Liveness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test")
    {
        test = value;
        test.value_namespace = name_space;
        test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Lisp::Mobility::Liveness::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test")
    {
        test.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Lisp::Mobility::Liveness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "ttl")
        return true;
    return false;
}

Native::Interface::Tunnel::AnalysisModule::AnalysisModule()
    :
    monitoring(std::make_shared<Native::Interface::Tunnel::AnalysisModule::Monitoring>())
{
    monitoring->parent = this;

    yang_name = "analysis-module"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::AnalysisModule::~AnalysisModule()
{
}

bool Native::Interface::Tunnel::AnalysisModule::has_data() const
{
    if (is_presence_container) return true;
    return (monitoring !=  nullptr && monitoring->has_data());
}

bool Native::Interface::Tunnel::AnalysisModule::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring !=  nullptr && monitoring->has_operation());
}

std::string Native::Interface::Tunnel::AnalysisModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nam:analysis-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::AnalysisModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::AnalysisModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring")
    {
        if(monitoring == nullptr)
        {
            monitoring = std::make_shared<Native::Interface::Tunnel::AnalysisModule::Monitoring>();
        }
        return monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::AnalysisModule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitoring != nullptr)
    {
        _children["monitoring"] = monitoring;
    }

    return _children;
}

void Native::Interface::Tunnel::AnalysisModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::AnalysisModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::AnalysisModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring")
        return true;
    return false;
}

Native::Interface::Tunnel::AnalysisModule::Monitoring::Monitoring()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "monitoring"; yang_parent_name = "analysis-module"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::AnalysisModule::Monitoring::~Monitoring()
{
}

bool Native::Interface::Tunnel::AnalysisModule::Monitoring::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Native::Interface::Tunnel::AnalysisModule::Monitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Interface::Tunnel::AnalysisModule::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::AnalysisModule::Monitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::AnalysisModule::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::AnalysisModule::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::AnalysisModule::Monitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::AnalysisModule::Monitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::AnalysisModule::Monitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Native::Interface::Tunnel::Ntp::Ntp()
    :
    broadcast{YType::empty, "broadcast"}
        ,
    broadcast_option(std::make_shared<Native::Interface::Tunnel::Ntp::BroadcastOption>())
{
    broadcast_option->parent = this;

    yang_name = "ntp"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ntp::~Ntp()
{
}

bool Native::Interface::Tunnel::Ntp::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| (broadcast_option !=  nullptr && broadcast_option->has_data());
}

bool Native::Interface::Tunnel::Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| (broadcast_option !=  nullptr && broadcast_option->has_operation());
}

std::string Native::Interface::Tunnel::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-option")
    {
        if(broadcast_option == nullptr)
        {
            broadcast_option = std::make_shared<Native::Interface::Tunnel::Ntp::BroadcastOption>();
        }
        return broadcast_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast_option != nullptr)
    {
        _children["broadcast-option"] = broadcast_option;
    }

    return _children;
}

void Native::Interface::Tunnel::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-option" || name == "broadcast")
        return true;
    return false;
}

Native::Interface::Tunnel::Ntp::BroadcastOption::BroadcastOption()
    :
    broadcast(std::make_shared<Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast>())
{
    broadcast->parent = this;

    yang_name = "broadcast-option"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ntp::BroadcastOption::~BroadcastOption()
{
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::has_data() const
{
    if (is_presence_container) return true;
    return (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Interface::Tunnel::Ntp::BroadcastOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ntp::BroadcastOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ntp::BroadcastOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ntp::BroadcastOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast != nullptr)
    {
        _children["broadcast"] = broadcast;
    }

    return _children;
}

void Native::Interface::Tunnel::Ntp::BroadcastOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ntp::BroadcastOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast")
        return true;
    return false;
}

Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::Broadcast()
    :
    client{YType::empty, "client"}
{

    yang_name = "broadcast"; yang_parent_name = "broadcast-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::~Broadcast()
{
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::has_data() const
{
    if (is_presence_container) return true;
    return client.is_set;
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter);
}

std::string Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Interface::Tunnel::Udld::Udld()
    :
    port(nullptr) // presence node
{

    yang_name = "udld"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Udld::~Udld()
{
}

bool Native::Interface::Tunnel::Udld::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::Tunnel::Udld::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::Tunnel::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:udld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Udld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::Tunnel::Udld::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::Tunnel::Udld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Udld::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Udld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::Tunnel::Udld::Port::Port()
    :
    aggressive{YType::empty, "aggressive"},
    disable{YType::empty, "disable"}
{

    yang_name = "port"; yang_parent_name = "udld"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Udld::Port::~Port()
{
}

bool Native::Interface::Tunnel::Udld::Port::has_data() const
{
    if (is_presence_container) return true;
    return aggressive.is_set
	|| disable.is_set;
}

bool Native::Interface::Tunnel::Udld::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Udld::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Udld::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Udld::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Udld::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Udld::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Udld::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Udld::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive" || name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Umbrella::Umbrella()
    :
    out{YType::empty, "out"},
    in{YType::str, "in"}
{

    yang_name = "umbrella"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Umbrella::~Umbrella()
{
}

bool Native::Interface::Tunnel::Umbrella::has_data() const
{
    if (is_presence_container) return true;
    return out.is_set
	|| in.is_set;
}

bool Native::Interface::Tunnel::Umbrella::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Tunnel::Umbrella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-umbrella:umbrella";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Umbrella::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Umbrella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Umbrella::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Umbrella::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Umbrella::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Umbrella::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::Tunnel::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Utd::~Utd()
{
}

bool Native::Interface::Tunnel::Utd::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::Tunnel::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Tunnel::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Tunnel::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::Tunnel::ZoneMember::has_data() const
{
    if (is_presence_container) return true;
    return security.is_set;
}

bool Native::Interface::Tunnel::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::Tunnel::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::VirtualTemplate()
    :
    name{YType::uint16, "name"},
    type{YType::enumeration, "type"},
    description{YType::str, "description"},
    mac_address{YType::str, "mac-address"},
    shutdown{YType::empty, "shutdown"},
    keepalive{YType::boolean, "keepalive"},
    if_state{YType::enumeration, "if-state"},
    delay{YType::uint32, "delay"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"},
    channel_protocol{YType::enumeration, "Cisco-IOS-XE-ethernet:channel-protocol"},
    duplex{YType::enumeration, "Cisco-IOS-XE-ethernet:duplex"}
        ,
    switchport_conf(std::make_shared<Native::Interface::VirtualTemplate::SwitchportConf>())
    , switchport(std::make_shared<Native::Interface::VirtualTemplate::Switchport>())
    , stackwise_virtual(std::make_shared<Native::Interface::VirtualTemplate::StackwiseVirtual>())
    , arp(std::make_shared<Native::Interface::VirtualTemplate::Arp>())
    , backup(std::make_shared<Native::Interface::VirtualTemplate::Backup>())
    , cemoudp(std::make_shared<Native::Interface::VirtualTemplate::Cemoudp>())
    , cws_tunnel(std::make_shared<Native::Interface::VirtualTemplate::CwsTunnel>())
    , l2protocol_tunnel(nullptr) // presence node
    , encapsulation(std::make_shared<Native::Interface::VirtualTemplate::Encapsulation>())
    , fair_queue_conf(std::make_shared<Native::Interface::VirtualTemplate::FairQueueConf>())
    , fair_queue(std::make_shared<Native::Interface::VirtualTemplate::FairQueue>())
    , flowcontrol(std::make_shared<Native::Interface::VirtualTemplate::Flowcontrol>())
    , isis(std::make_shared<Native::Interface::VirtualTemplate::Isis>())
    , keepalive_settings(std::make_shared<Native::Interface::VirtualTemplate::KeepaliveSettings>())
    , bfd(std::make_shared<Native::Interface::VirtualTemplate::Bfd>())
    , bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Bandwidth>())
    , dampening(std::make_shared<Native::Interface::VirtualTemplate::Dampening>())
    , domain(std::make_shared<Native::Interface::VirtualTemplate::Domain>())
    , hold_queue(this, {"direction"})
    , mpls(std::make_shared<Native::Interface::VirtualTemplate::Mpls>())
    , ip_vrf(std::make_shared<Native::Interface::VirtualTemplate::IpVrf>())
    , vrf(std::make_shared<Native::Interface::VirtualTemplate::Vrf>())
    , ip(std::make_shared<Native::Interface::VirtualTemplate::Ip>())
    , ipv6(std::make_shared<Native::Interface::VirtualTemplate::Ipv6>())
    , logging(std::make_shared<Native::Interface::VirtualTemplate::Logging>())
    , mdix(std::make_shared<Native::Interface::VirtualTemplate::Mdix>())
    , mop(std::make_shared<Native::Interface::VirtualTemplate::Mop>())
    , interface_qos(std::make_shared<Native::Interface::VirtualTemplate::InterfaceQos>())
    , source(std::make_shared<Native::Interface::VirtualTemplate::Source>())
    , standby(std::make_shared<Native::Interface::VirtualTemplate::Standby>())
    , access_session(std::make_shared<Native::Interface::VirtualTemplate::AccessSession>())
    , storm_control(std::make_shared<Native::Interface::VirtualTemplate::StormControl>())
    , trust(std::make_shared<Native::Interface::VirtualTemplate::Trust>())
    , priority_queue(std::make_shared<Native::Interface::VirtualTemplate::PriorityQueue>())
    , rcv_queue(std::make_shared<Native::Interface::VirtualTemplate::RcvQueue>())
    , peer(std::make_shared<Native::Interface::VirtualTemplate::Peer>())
    , pm_path(std::make_shared<Native::Interface::VirtualTemplate::PmPath>())
    , carrier_delay(std::make_shared<Native::Interface::VirtualTemplate::CarrierDelay>())
    , channel_group(std::make_shared<Native::Interface::VirtualTemplate::ChannelGroup>())
    , ethernet(std::make_shared<Native::Interface::VirtualTemplate::Ethernet>())
    , eapol(std::make_shared<Native::Interface::VirtualTemplate::Eapol>())
    , synchronous(std::make_shared<Native::Interface::VirtualTemplate::Synchronous>())
    , speed(std::make_shared<Native::Interface::VirtualTemplate::Speed>())
    , negotiation(std::make_shared<Native::Interface::VirtualTemplate::Negotiation>())
    , plim(std::make_shared<Native::Interface::VirtualTemplate::Plim>())
    , pppoe(std::make_shared<Native::Interface::VirtualTemplate::Pppoe>())
    , service(std::make_shared<Native::Interface::VirtualTemplate::Service>())
    , lacp(std::make_shared<Native::Interface::VirtualTemplate::Lacp>())
    , snmp(std::make_shared<Native::Interface::VirtualTemplate::Snmp>())
    , cdp(std::make_shared<Native::Interface::VirtualTemplate::Cdp>())
    , nhrp(std::make_shared<Native::Interface::VirtualTemplate::Nhrp>())
    , tunnel(std::make_shared<Native::Interface::VirtualTemplate::Tunnel>())
    , crypto(std::make_shared<Native::Interface::VirtualTemplate::Crypto>())
    , cts(std::make_shared<Native::Interface::VirtualTemplate::Cts>())
    , et_analytics(std::make_shared<Native::Interface::VirtualTemplate::EtAnalytics>())
    , service_policy(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy>())
    , ntp(std::make_shared<Native::Interface::VirtualTemplate::Ntp>())
    , ppp(std::make_shared<Native::Interface::VirtualTemplate::Ppp>())
    , mab(nullptr) // presence node
    , umbrella(std::make_shared<Native::Interface::VirtualTemplate::Umbrella>())
    , utd(std::make_shared<Native::Interface::VirtualTemplate::Utd>())
    , zone_member(std::make_shared<Native::Interface::VirtualTemplate::ZoneMember>())
{
    switchport_conf->parent = this;
    switchport->parent = this;
    stackwise_virtual->parent = this;
    arp->parent = this;
    backup->parent = this;
    cemoudp->parent = this;
    cws_tunnel->parent = this;
    encapsulation->parent = this;
    fair_queue_conf->parent = this;
    fair_queue->parent = this;
    flowcontrol->parent = this;
    isis->parent = this;
    keepalive_settings->parent = this;
    bfd->parent = this;
    bandwidth->parent = this;
    dampening->parent = this;
    domain->parent = this;
    mpls->parent = this;
    ip_vrf->parent = this;
    vrf->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    mdix->parent = this;
    mop->parent = this;
    interface_qos->parent = this;
    source->parent = this;
    standby->parent = this;
    access_session->parent = this;
    storm_control->parent = this;
    trust->parent = this;
    priority_queue->parent = this;
    rcv_queue->parent = this;
    peer->parent = this;
    pm_path->parent = this;
    carrier_delay->parent = this;
    channel_group->parent = this;
    ethernet->parent = this;
    eapol->parent = this;
    synchronous->parent = this;
    speed->parent = this;
    negotiation->parent = this;
    plim->parent = this;
    pppoe->parent = this;
    service->parent = this;
    lacp->parent = this;
    snmp->parent = this;
    cdp->parent = this;
    nhrp->parent = this;
    tunnel->parent = this;
    crypto->parent = this;
    cts->parent = this;
    et_analytics->parent = this;
    service_policy->parent = this;
    ntp->parent = this;
    ppp->parent = this;
    umbrella->parent = this;
    utd->parent = this;
    zone_member->parent = this;

    yang_name = "Virtual-Template"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Interface::VirtualTemplate::~VirtualTemplate()
{
}

bool Native::Interface::VirtualTemplate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_data())
            return true;
    }
    return name.is_set
	|| type.is_set
	|| description.is_set
	|| mac_address.is_set
	|| shutdown.is_set
	|| keepalive.is_set
	|| if_state.is_set
	|| delay.is_set
	|| load_interval.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| channel_protocol.is_set
	|| duplex.is_set
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (access_session !=  nullptr && access_session->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (channel_group !=  nullptr && channel_group->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (eapol !=  nullptr && eapol->has_data())
	|| (synchronous !=  nullptr && synchronous->has_data())
	|| (speed !=  nullptr && speed->has_data())
	|| (negotiation !=  nullptr && negotiation->has_data())
	|| (plim !=  nullptr && plim->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (nhrp !=  nullptr && nhrp->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (et_analytics !=  nullptr && et_analytics->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (umbrella !=  nullptr && umbrella->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (zone_member !=  nullptr && zone_member->has_data());
}

bool Native::Interface::VirtualTemplate::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(max_reserved_bandwidth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(service_insertion.yfilter)
	|| ydk::is_set(channel_protocol.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (channel_group !=  nullptr && channel_group->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (eapol !=  nullptr && eapol->has_operation())
	|| (synchronous !=  nullptr && synchronous->has_operation())
	|| (speed !=  nullptr && speed->has_operation())
	|| (negotiation !=  nullptr && negotiation->has_operation())
	|| (plim !=  nullptr && plim->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (nhrp !=  nullptr && nhrp->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (et_analytics !=  nullptr && et_analytics->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (umbrella !=  nullptr && umbrella->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (zone_member !=  nullptr && zone_member->has_operation());
}

std::string Native::Interface::VirtualTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::VirtualTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Virtual-Template";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.yfilter)) leaf_name_data.push_back(service_insertion.get_name_leafdata());
    if (channel_protocol.is_set || is_set(channel_protocol.yfilter)) leaf_name_data.push_back(channel_protocol.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::VirtualTemplate::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::VirtualTemplate::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "stackwise-virtual")
    {
        if(stackwise_virtual == nullptr)
        {
            stackwise_virtual = std::make_shared<Native::Interface::VirtualTemplate::StackwiseVirtual>();
        }
        return stackwise_virtual;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::VirtualTemplate::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::VirtualTemplate::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::VirtualTemplate::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::VirtualTemplate::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::VirtualTemplate::L2protocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::VirtualTemplate::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::VirtualTemplate::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::VirtualTemplate::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::VirtualTemplate::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::VirtualTemplate::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::VirtualTemplate::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::VirtualTemplate::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::VirtualTemplate::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::VirtualTemplate::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "hold-queue")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::HoldQueue>();
        ent_->parent = this;
        hold_queue.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::VirtualTemplate::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::VirtualTemplate::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::VirtualTemplate::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::VirtualTemplate::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::VirtualTemplate::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::VirtualTemplate::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::VirtualTemplate::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::VirtualTemplate::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::VirtualTemplate::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::VirtualTemplate::Source>();
        }
        return source;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::VirtualTemplate::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::VirtualTemplate::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::VirtualTemplate::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::VirtualTemplate::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::VirtualTemplate::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::VirtualTemplate::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::VirtualTemplate::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::VirtualTemplate::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<Native::Interface::VirtualTemplate::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:channel-group")
    {
        if(channel_group == nullptr)
        {
            channel_group = std::make_shared<Native::Interface::VirtualTemplate::ChannelGroup>();
        }
        return channel_group;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::VirtualTemplate::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:eapol")
    {
        if(eapol == nullptr)
        {
            eapol = std::make_shared<Native::Interface::VirtualTemplate::Eapol>();
        }
        return eapol;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Interface::VirtualTemplate::Synchronous>();
        }
        return synchronous;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:speed")
    {
        if(speed == nullptr)
        {
            speed = std::make_shared<Native::Interface::VirtualTemplate::Speed>();
        }
        return speed;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:negotiation")
    {
        if(negotiation == nullptr)
        {
            negotiation = std::make_shared<Native::Interface::VirtualTemplate::Negotiation>();
        }
        return negotiation;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:plim")
    {
        if(plim == nullptr)
        {
            plim = std::make_shared<Native::Interface::VirtualTemplate::Plim>();
        }
        return plim;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Native::Interface::VirtualTemplate::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Interface::VirtualTemplate::Service>();
        }
        return service;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<Native::Interface::VirtualTemplate::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::VirtualTemplate::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-cdp:cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<Native::Interface::VirtualTemplate::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "Cisco-IOS-XE-tunnel:nhrp")
    {
        if(nhrp == nullptr)
        {
            nhrp = std::make_shared<Native::Interface::VirtualTemplate::Nhrp>();
        }
        return nhrp;
    }

    if(child_yang_name == "Cisco-IOS-XE-tunnel:tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Interface::VirtualTemplate::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::VirtualTemplate::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "Cisco-IOS-XE-cts:cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Interface::VirtualTemplate::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "Cisco-IOS-XE-eta:et-analytics")
    {
        if(et_analytics == nullptr)
        {
            et_analytics = std::make_shared<Native::Interface::VirtualTemplate::EtAnalytics>();
        }
        return et_analytics;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Native::Interface::VirtualTemplate::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "Cisco-IOS-XE-ppp:ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::VirtualTemplate::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "Cisco-IOS-XE-sanet:mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Interface::VirtualTemplate::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "Cisco-IOS-XE-umbrella:umbrella")
    {
        if(umbrella == nullptr)
        {
            umbrella = std::make_shared<Native::Interface::VirtualTemplate::Umbrella>();
        }
        return umbrella;
    }

    if(child_yang_name == "Cisco-IOS-XE-utd:utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::VirtualTemplate::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "Cisco-IOS-XE-zone:zone-member")
    {
        if(zone_member == nullptr)
        {
            zone_member = std::make_shared<Native::Interface::VirtualTemplate::ZoneMember>();
        }
        return zone_member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switchport_conf != nullptr)
    {
        _children["switchport-conf"] = switchport_conf;
    }

    if(switchport != nullptr)
    {
        _children["switchport"] = switchport;
    }

    if(stackwise_virtual != nullptr)
    {
        _children["stackwise-virtual"] = stackwise_virtual;
    }

    if(arp != nullptr)
    {
        _children["arp"] = arp;
    }

    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    if(cemoudp != nullptr)
    {
        _children["cemoudp"] = cemoudp;
    }

    if(cws_tunnel != nullptr)
    {
        _children["cws-tunnel"] = cws_tunnel;
    }

    if(l2protocol_tunnel != nullptr)
    {
        _children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(fair_queue_conf != nullptr)
    {
        _children["fair-queue-conf"] = fair_queue_conf;
    }

    if(fair_queue != nullptr)
    {
        _children["fair-queue"] = fair_queue;
    }

    if(flowcontrol != nullptr)
    {
        _children["flowcontrol"] = flowcontrol;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        _children["keepalive-settings"] = keepalive_settings;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        _children["domain"] = domain;
    }

    count_ = 0;
    for (auto ent_ : hold_queue.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(ip_vrf != nullptr)
    {
        _children["ip-vrf"] = ip_vrf;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(mdix != nullptr)
    {
        _children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        _children["mop"] = mop;
    }

    if(interface_qos != nullptr)
    {
        _children["interface_qos"] = interface_qos;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(standby != nullptr)
    {
        _children["standby"] = standby;
    }

    if(access_session != nullptr)
    {
        _children["access-session"] = access_session;
    }

    if(storm_control != nullptr)
    {
        _children["storm-control"] = storm_control;
    }

    if(trust != nullptr)
    {
        _children["trust"] = trust;
    }

    if(priority_queue != nullptr)
    {
        _children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        _children["rcv-queue"] = rcv_queue;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(pm_path != nullptr)
    {
        _children["pm-path"] = pm_path;
    }

    if(carrier_delay != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:carrier-delay"] = carrier_delay;
    }

    if(channel_group != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:channel-group"] = channel_group;
    }

    if(ethernet != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:ethernet"] = ethernet;
    }

    if(eapol != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:eapol"] = eapol;
    }

    if(synchronous != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:synchronous"] = synchronous;
    }

    if(speed != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:speed"] = speed;
    }

    if(negotiation != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:negotiation"] = negotiation;
    }

    if(plim != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:plim"] = plim;
    }

    if(pppoe != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:pppoe"] = pppoe;
    }

    if(service != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:service"] = service;
    }

    if(lacp != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:lacp"] = lacp;
    }

    if(snmp != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:snmp"] = snmp;
    }

    if(cdp != nullptr)
    {
        _children["Cisco-IOS-XE-cdp:cdp"] = cdp;
    }

    if(nhrp != nullptr)
    {
        _children["Cisco-IOS-XE-tunnel:nhrp"] = nhrp;
    }

    if(tunnel != nullptr)
    {
        _children["Cisco-IOS-XE-tunnel:tunnel"] = tunnel;
    }

    if(crypto != nullptr)
    {
        _children["Cisco-IOS-XE-crypto:crypto"] = crypto;
    }

    if(cts != nullptr)
    {
        _children["Cisco-IOS-XE-cts:cts"] = cts;
    }

    if(et_analytics != nullptr)
    {
        _children["Cisco-IOS-XE-eta:et-analytics"] = et_analytics;
    }

    if(service_policy != nullptr)
    {
        _children["Cisco-IOS-XE-policy:service-policy"] = service_policy;
    }

    if(ntp != nullptr)
    {
        _children["Cisco-IOS-XE-ntp:ntp"] = ntp;
    }

    if(ppp != nullptr)
    {
        _children["Cisco-IOS-XE-ppp:ppp"] = ppp;
    }

    if(mab != nullptr)
    {
        _children["Cisco-IOS-XE-sanet:mab"] = mab;
    }

    if(umbrella != nullptr)
    {
        _children["Cisco-IOS-XE-umbrella:umbrella"] = umbrella;
    }

    if(utd != nullptr)
    {
        _children["Cisco-IOS-XE-utd:utd"] = utd;
    }

    if(zone_member != nullptr)
    {
        _children["Cisco-IOS-XE-zone:zone-member"] = zone_member;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
        max_reserved_bandwidth.value_namespace = name_space;
        max_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
        service_insertion.value_namespace = name_space;
        service_insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ethernet:channel-protocol")
    {
        channel_protocol = value;
        channel_protocol.value_namespace = name_space;
        channel_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ethernet:duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "service-insertion")
    {
        service_insertion.yfilter = yfilter;
    }
    if(value_path == "channel-protocol")
    {
        channel_protocol.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport-conf" || name == "switchport" || name == "stackwise-virtual" || name == "arp" || name == "backup" || name == "cemoudp" || name == "cws-tunnel" || name == "l2protocol-tunnel" || name == "encapsulation" || name == "fair-queue-conf" || name == "fair-queue" || name == "flowcontrol" || name == "isis" || name == "keepalive-settings" || name == "bfd" || name == "bandwidth" || name == "dampening" || name == "domain" || name == "hold-queue" || name == "mpls" || name == "ip-vrf" || name == "vrf" || name == "ip" || name == "ipv6" || name == "logging" || name == "mdix" || name == "mop" || name == "interface_qos" || name == "source" || name == "standby" || name == "access-session" || name == "storm-control" || name == "trust" || name == "priority-queue" || name == "rcv-queue" || name == "peer" || name == "pm-path" || name == "carrier-delay" || name == "channel-group" || name == "ethernet" || name == "eapol" || name == "synchronous" || name == "speed" || name == "negotiation" || name == "plim" || name == "pppoe" || name == "service" || name == "lacp" || name == "snmp" || name == "cdp" || name == "nhrp" || name == "tunnel" || name == "crypto" || name == "cts" || name == "et-analytics" || name == "service-policy" || name == "ntp" || name == "ppp" || name == "mab" || name == "umbrella" || name == "utd" || name == "zone-member" || name == "name" || name == "type" || name == "description" || name == "mac-address" || name == "shutdown" || name == "keepalive" || name == "if-state" || name == "delay" || name == "load-interval" || name == "max-reserved-bandwidth" || name == "mtu" || name == "service-insertion" || name == "channel-protocol" || name == "duplex")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "switchport-conf"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::VirtualTemplate::SwitchportConf::has_data() const
{
    if (is_presence_container) return true;
    return switchport.is_set;
}

bool Native::Interface::VirtualTemplate::SwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::VirtualTemplate::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::SwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::SwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::SwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::SwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Switchport::Switchport()
{

    yang_name = "switchport"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Switchport::~Switchport()
{
}

bool Native::Interface::VirtualTemplate::Switchport::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::VirtualTemplate::Switchport::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::StackwiseVirtual::StackwiseVirtual()
    :
    link{YType::uint8, "link"},
    dual_active_detection{YType::empty, "dual-active-detection"}
{

    yang_name = "stackwise-virtual"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::StackwiseVirtual::~StackwiseVirtual()
{
}

bool Native::Interface::VirtualTemplate::StackwiseVirtual::has_data() const
{
    if (is_presence_container) return true;
    return link.is_set
	|| dual_active_detection.is_set;
}

bool Native::Interface::VirtualTemplate::StackwiseVirtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(dual_active_detection.yfilter);
}

std::string Native::Interface::VirtualTemplate::StackwiseVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackwise-virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::StackwiseVirtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (dual_active_detection.is_set || is_set(dual_active_detection.yfilter)) leaf_name_data.push_back(dual_active_detection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::StackwiseVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::StackwiseVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::StackwiseVirtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-active-detection")
    {
        dual_active_detection = value;
        dual_active_detection.value_namespace = name_space;
        dual_active_detection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::StackwiseVirtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "dual-active-detection")
    {
        dual_active_detection.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::StackwiseVirtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "dual-active-detection")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "arp"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Arp::~Arp()
{
}

bool Native::Interface::VirtualTemplate::Arp::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Native::Interface::VirtualTemplate::Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::VirtualTemplate::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::VirtualTemplate::Backup::Delay>())
    , interface(std::make_shared<Native::Interface::VirtualTemplate::Backup::Interface_>())
    , load(std::make_shared<Native::Interface::VirtualTemplate::Backup::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "backup"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Backup::~Backup()
{
}

bool Native::Interface::VirtualTemplate::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::VirtualTemplate::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::VirtualTemplate::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::VirtualTemplate::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::VirtualTemplate::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::VirtualTemplate::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(load != nullptr)
    {
        _children["load"] = load;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Backup::Delay::~Delay()
{
}

bool Native::Interface::VirtualTemplate::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::VirtualTemplate::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::VirtualTemplate::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
        secondary_disable.value_namespace = name_space;
        secondary_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Backup::Interface_::Interface_()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
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
    atm_subinterface(std::make_shared<Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
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

bool Native::Interface::VirtualTemplate::Backup::Interface_::has_operation() const
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
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
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

std::string Native::Interface::VirtualTemplate::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Backup::Interface_::get_name_leaf_data() const
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
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Backup::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Backup::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::VirtualTemplate::Backup::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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

bool Native::Interface::VirtualTemplate::Backup::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Backup::Interface_::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Backup::Load::~Load()
{
}

bool Native::Interface::VirtualTemplate::Backup::Load::has_data() const
{
    if (is_presence_container) return true;
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::VirtualTemplate::Backup::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::VirtualTemplate::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Backup::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Backup::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kickin")
    {
        kickin = value;
        kickin.value_namespace = name_space;
        kickin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kickout")
    {
        kickout = value;
        kickout.value_namespace = name_space;
        kickout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Backup::Load::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kickin")
    {
        kickin.yfilter = yfilter;
    }
    if(value_path == "kickout")
    {
        kickout.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Backup::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::VirtualTemplate::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::VirtualTemplate::Cemoudp::has_data() const
{
    if (is_presence_container) return true;
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::VirtualTemplate::Cemoudp::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cemoudp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::VirtualTemplate::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reserve != nullptr)
    {
        _children["reserve"] = reserve;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Cemoudp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Cemoudp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Cemoudp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "cemoudp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::VirtualTemplate::Cemoudp::Reserve::has_data() const
{
    if (is_presence_container) return true;
    return acr.is_set;
}

bool Native::Interface::VirtualTemplate::Cemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::VirtualTemplate::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Cemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Cemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Cemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
        ,
    out(std::make_shared<Native::Interface::VirtualTemplate::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::VirtualTemplate::CwsTunnel::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::VirtualTemplate::CwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::VirtualTemplate::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::CwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::VirtualTemplate::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::CwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::CwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::CwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "cws-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::VirtualTemplate::CwsTunnel::Out::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_number.is_set;
}

bool Native::Interface::VirtualTemplate::CwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::VirtualTemplate::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::CwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::CwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::CwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::CwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::L2protocolTunnel::L2protocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
        ,
    drop_threshold(std::make_shared<Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold>())
    , shutdown_threshold(std::make_shared<Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::L2protocolTunnel::~L2protocolTunnel()
{
}

bool Native::Interface::VirtualTemplate::L2protocolTunnel::has_data() const
{
    if (is_presence_container) return true;
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::VirtualTemplate::L2protocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::VirtualTemplate::L2protocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::L2protocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::L2protocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::L2protocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(drop_threshold != nullptr)
    {
        _children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        _children["shutdown-threshold"] = shutdown_threshold;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::L2protocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::L2protocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::L2protocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold::DropThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold::has_data() const
{
    if (is_presence_container) return true;
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::L2protocolTunnel::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold::has_data() const
{
    if (is_presence_container) return true;
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::L2protocolTunnel::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::VirtualTemplate::Encapsulation::Dot1Q>())
    , isl(std::make_shared<Native::Interface::VirtualTemplate::Encapsulation::Isl>())
    , ppp(nullptr) // presence node
    , slip(nullptr) // presence node
    , frame_relay(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::VirtualTemplate::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data());
}

bool Native::Interface::VirtualTemplate::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation());
}

std::string Native::Interface::VirtualTemplate::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::VirtualTemplate::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::VirtualTemplate::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::VirtualTemplate::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::VirtualTemplate::Encapsulation::Slip>();
        }
        return slip;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::VirtualTemplate::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1q != nullptr)
    {
        _children["dot1Q"] = dot1q;
    }

    if(isl != nullptr)
    {
        _children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        _children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        _children["slip"] = slip;
    }

    if(frame_relay != nullptr)
    {
        _children["frame-relay"] = frame_relay;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "isl" || name == "ppp" || name == "slip" || name == "frame-relay")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Encapsulation::Dot1Q::Dot1Q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    native{YType::empty, "native"}
{

    yang_name = "dot1Q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::VirtualTemplate::Encapsulation::Dot1Q::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| native.is_set;
}

bool Native::Interface::VirtualTemplate::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Interface::VirtualTemplate::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "native")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::VirtualTemplate::Encapsulation::Isl::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set;
}

bool Native::Interface::VirtualTemplate::Encapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::VirtualTemplate::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Encapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Encapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Encapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Encapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Encapsulation::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::VirtualTemplate::Encapsulation::Ppp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::VirtualTemplate::Encapsulation::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Encapsulation::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Encapsulation::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Encapsulation::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Encapsulation::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Encapsulation::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::VirtualTemplate::Encapsulation::Slip::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::VirtualTemplate::Encapsulation::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Encapsulation::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Encapsulation::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Encapsulation::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Encapsulation::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::VirtualTemplate::Encapsulation::FrameRelay::has_data() const
{
    if (is_presence_container) return true;
    return ietf.is_set;
}

bool Native::Interface::VirtualTemplate::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::VirtualTemplate::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Encapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Encapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Encapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Encapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "fair-queue-conf"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::VirtualTemplate::FairQueueConf::has_data() const
{
    if (is_presence_container) return true;
    return fair_queue.is_set;
}

bool Native::Interface::VirtualTemplate::FairQueueConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::VirtualTemplate::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::FairQueueConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::FairQueueConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::FairQueueConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::FairQueueConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "fair-queue"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::FairQueue::~FairQueue()
{
}

bool Native::Interface::VirtualTemplate::FairQueue::has_data() const
{
    if (is_presence_container) return true;
    return incomplete.is_set;
}

bool Native::Interface::VirtualTemplate::FairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::VirtualTemplate::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::FairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::FairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::FairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::FairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "flowcontrol"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::VirtualTemplate::Flowcontrol::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::VirtualTemplate::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::VirtualTemplate::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send")
    {
        send = value;
        send.value_namespace = name_space;
        send.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send")
    {
        send.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Isis()
    :
    lsp_interval{YType::uint32, "Cisco-IOS-XE-isis:lsp-interval"},
    mesh_group{YType::str, "Cisco-IOS-XE-isis:mesh-group"},
    network{YType::enumeration, "Cisco-IOS-XE-isis:network"},
    protocol{YType::enumeration, "Cisco-IOS-XE-isis:protocol"},
    retransmit_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-interval"},
    retransmit_throttle_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-throttle-interval"},
    tag{YType::uint32, "Cisco-IOS-XE-isis:tag"}
        ,
    adjacency_filter(std::make_shared<Native::Interface::VirtualTemplate::Isis::AdjacencyFilter>())
    , advertise(std::make_shared<Native::Interface::VirtualTemplate::Isis::Advertise>())
    , authentication(std::make_shared<Native::Interface::VirtualTemplate::Isis::Authentication>())
    , circuit_type(nullptr) // presence node
    , csnp_interval(std::make_shared<Native::Interface::VirtualTemplate::Isis::CsnpInterval>())
    , hello(std::make_shared<Native::Interface::VirtualTemplate::Isis::Hello>())
    , hello_interval(std::make_shared<Native::Interface::VirtualTemplate::Isis::HelloInterval>())
    , hello_multiplier(std::make_shared<Native::Interface::VirtualTemplate::Isis::HelloMultiplier>())
    , ipv6(std::make_shared<Native::Interface::VirtualTemplate::Isis::Ipv6>())
    , metric(std::make_shared<Native::Interface::VirtualTemplate::Isis::Metric>())
    , password(std::make_shared<Native::Interface::VirtualTemplate::Isis::Password>())
    , priority(std::make_shared<Native::Interface::VirtualTemplate::Isis::Priority>())
    , bfd(nullptr) // presence node
    , three_way_handshake(nullptr) // presence node
{
    adjacency_filter->parent = this;
    advertise->parent = this;
    authentication->parent = this;
    csnp_interval->parent = this;
    hello->parent = this;
    hello_interval->parent = this;
    hello_multiplier->parent = this;
    ipv6->parent = this;
    metric->parent = this;
    password->parent = this;
    priority->parent = this;

    yang_name = "isis"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::~Isis()
{
}

bool Native::Interface::VirtualTemplate::Isis::has_data() const
{
    if (is_presence_container) return true;
    return lsp_interval.is_set
	|| mesh_group.is_set
	|| network.is_set
	|| protocol.is_set
	|| retransmit_interval.is_set
	|| retransmit_throttle_interval.is_set
	|| tag.is_set
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (circuit_type !=  nullptr && circuit_type->has_data())
	|| (csnp_interval !=  nullptr && csnp_interval->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_data());
}

bool Native::Interface::VirtualTemplate::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_interval.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(retransmit_throttle_interval.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (circuit_type !=  nullptr && circuit_type->has_operation())
	|| (csnp_interval !=  nullptr && csnp_interval->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_operation());
}

std::string Native::Interface::VirtualTemplate::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_interval.is_set || is_set(lsp_interval.yfilter)) leaf_name_data.push_back(lsp_interval.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (retransmit_throttle_interval.is_set || is_set(retransmit_throttle_interval.yfilter)) leaf_name_data.push_back(retransmit_throttle_interval.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-isis:adjacency-filter")
    {
        if(adjacency_filter == nullptr)
        {
            adjacency_filter = std::make_shared<Native::Interface::VirtualTemplate::Isis::AdjacencyFilter>();
        }
        return adjacency_filter;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::VirtualTemplate::Isis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::VirtualTemplate::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:circuit-type")
    {
        if(circuit_type == nullptr)
        {
            circuit_type = std::make_shared<Native::Interface::VirtualTemplate::Isis::CircuitType>();
        }
        return circuit_type;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:csnp-interval")
    {
        if(csnp_interval == nullptr)
        {
            csnp_interval = std::make_shared<Native::Interface::VirtualTemplate::Isis::CsnpInterval>();
        }
        return csnp_interval;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::VirtualTemplate::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::VirtualTemplate::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:hello-multiplier")
    {
        if(hello_multiplier == nullptr)
        {
            hello_multiplier = std::make_shared<Native::Interface::VirtualTemplate::Isis::HelloMultiplier>();
        }
        return hello_multiplier;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::VirtualTemplate::Isis::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::VirtualTemplate::Isis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Interface::VirtualTemplate::Isis::Password>();
        }
        return password;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::VirtualTemplate::Isis::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::VirtualTemplate::Isis::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:three-way-handshake")
    {
        if(three_way_handshake == nullptr)
        {
            three_way_handshake = std::make_shared<Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake>();
        }
        return three_way_handshake;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_filter != nullptr)
    {
        _children["Cisco-IOS-XE-isis:adjacency-filter"] = adjacency_filter;
    }

    if(advertise != nullptr)
    {
        _children["Cisco-IOS-XE-isis:advertise"] = advertise;
    }

    if(authentication != nullptr)
    {
        _children["Cisco-IOS-XE-isis:authentication"] = authentication;
    }

    if(circuit_type != nullptr)
    {
        _children["Cisco-IOS-XE-isis:circuit-type"] = circuit_type;
    }

    if(csnp_interval != nullptr)
    {
        _children["Cisco-IOS-XE-isis:csnp-interval"] = csnp_interval;
    }

    if(hello != nullptr)
    {
        _children["Cisco-IOS-XE-isis:hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        _children["Cisco-IOS-XE-isis:hello-interval"] = hello_interval;
    }

    if(hello_multiplier != nullptr)
    {
        _children["Cisco-IOS-XE-isis:hello-multiplier"] = hello_multiplier;
    }

    if(ipv6 != nullptr)
    {
        _children["Cisco-IOS-XE-isis:ipv6"] = ipv6;
    }

    if(metric != nullptr)
    {
        _children["Cisco-IOS-XE-isis:metric"] = metric;
    }

    if(password != nullptr)
    {
        _children["Cisco-IOS-XE-isis:password"] = password;
    }

    if(priority != nullptr)
    {
        _children["Cisco-IOS-XE-isis:priority"] = priority;
    }

    if(bfd != nullptr)
    {
        _children["Cisco-IOS-XE-isis:bfd"] = bfd;
    }

    if(three_way_handshake != nullptr)
    {
        _children["Cisco-IOS-XE-isis:three-way-handshake"] = three_way_handshake;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-isis:lsp-interval")
    {
        lsp_interval = value;
        lsp_interval.value_namespace = name_space;
        lsp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:retransmit-throttle-interval")
    {
        retransmit_throttle_interval = value;
        retransmit_throttle_interval.value_namespace = name_space;
        retransmit_throttle_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-filter" || name == "advertise" || name == "authentication" || name == "circuit-type" || name == "csnp-interval" || name == "hello" || name == "hello-interval" || name == "hello-multiplier" || name == "ipv6" || name == "metric" || name == "password" || name == "priority" || name == "bfd" || name == "three-way-handshake" || name == "lsp-interval" || name == "mesh-group" || name == "network" || name == "protocol" || name == "retransmit-interval" || name == "retransmit-throttle-interval" || name == "tag")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::AdjacencyFilter::AdjacencyFilter()
    :
    name{YType::str, "name"},
    match_all{YType::empty, "match-all"}
{

    yang_name = "adjacency-filter"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::AdjacencyFilter::~AdjacencyFilter()
{
}

bool Native::Interface::VirtualTemplate::Isis::AdjacencyFilter::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match_all.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::AdjacencyFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match_all.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::AdjacencyFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:adjacency-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::AdjacencyFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match_all.is_set || is_set(match_all.yfilter)) leaf_name_data.push_back(match_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::AdjacencyFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::AdjacencyFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::AdjacencyFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-all")
    {
        match_all = value;
        match_all.value_namespace = name_space;
        match_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::AdjacencyFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match-all")
    {
        match_all.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::AdjacencyFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match-all")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Advertise::Advertise()
    :
    prefix{YType::empty, "prefix"}
{

    yang_name = "advertise"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Advertise::~Advertise()
{
}

bool Native::Interface::VirtualTemplate::Isis::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Authentication::Authentication()
    :
    mode(std::make_shared<Native::Interface::VirtualTemplate::Isis::Authentication::Mode>())
    , key_chain(std::make_shared<Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain>())
    , send_only(nullptr) // presence node
{
    mode->parent = this;
    key_chain->parent = this;

    yang_name = "authentication"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Authentication::~Authentication()
{
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (mode !=  nullptr && mode->has_data())
	|| (key_chain !=  nullptr && key_chain->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Interface::VirtualTemplate::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::VirtualTemplate::Isis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    if(send_only != nullptr)
    {
        _children["send-only"] = send_only;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain" || name == "send-only")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
    , text(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Authentication::Mode::~Mode()
{
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Interface::VirtualTemplate::Isis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    if(text != nullptr)
    {
        _children["text"] = text;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Isis::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "md5"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "text"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::Mode::Text::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
        ,
    key_chain_list(this, {"levels"})
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<key_chain_list.len(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.len(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList>();
        ent_->parent = this;
        key_chain_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : key_chain_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain-list" || name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{

    yang_name = "key-chain-list"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| name.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::KeyChain::KeyChainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "send-only"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Authentication::SendOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::CircuitType::CircuitType()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "circuit-type"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Isis::CircuitType::~CircuitType()
{
}

bool Native::Interface::VirtualTemplate::Isis::CircuitType::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::CircuitType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::CircuitType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:circuit-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::CircuitType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::CircuitType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::CircuitType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::CircuitType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::CircuitType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::CircuitType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpInterval()
    :
    value_{YType::uint16, "value"}
        ,
    csnp_interval_list(this, {"levels"})
{

    yang_name = "csnp-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::CsnpInterval::~CsnpInterval()
{
}

bool Native::Interface::VirtualTemplate::Isis::CsnpInterval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csnp_interval_list.len(); index++)
    {
        if(csnp_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::CsnpInterval::has_operation() const
{
    for (std::size_t index=0; index<csnp_interval_list.len(); index++)
    {
        if(csnp_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::CsnpInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:csnp-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::CsnpInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::CsnpInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csnp-interval-list")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList>();
        ent_->parent = this;
        csnp_interval_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::CsnpInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csnp_interval_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::CsnpInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::CsnpInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::CsnpInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::CsnpIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "csnp-interval-list"; yang_parent_name = "csnp-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::~CsnpIntervalList()
{
}

bool Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-interval-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Hello::~Hello()
{
}

bool Native::Interface::VirtualTemplate::Isis::Hello::has_data() const
{
    if (is_presence_container) return true;
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Interface::VirtualTemplate::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Interface::VirtualTemplate::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Interface::VirtualTemplate::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(padding != nullptr)
    {
        _children["padding"] = padding;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Isis::Hello::Padding::~Padding()
{
}

bool Native::Interface::VirtualTemplate::Isis::Hello::Padding::has_data() const
{
    if (is_presence_container) return true;
    return always.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloInterval()
    :
    value_{YType::str, "value"}
        ,
    hello_interval_list(this, {"levels"})
{

    yang_name = "hello-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::VirtualTemplate::Isis::HelloInterval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_interval_list.len(); index++)
    {
        if(hello_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::HelloInterval::has_operation() const
{
    for (std::size_t index=0; index<hello_interval_list.len(); index++)
    {
        if(hello_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval-list")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList>();
        ent_->parent = this;
        hello_interval_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_interval_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::HelloIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "hello-interval-list"; yang_parent_name = "hello-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::~HelloIntervalList()
{
}

bool Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplier()
    :
    value_{YType::uint16, "value"}
        ,
    hello_multiplier_list(this, {"levels"})
{

    yang_name = "hello-multiplier"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::HelloMultiplier::~HelloMultiplier()
{
}

bool Native::Interface::VirtualTemplate::Isis::HelloMultiplier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_multiplier_list.len(); index++)
    {
        if(hello_multiplier_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::HelloMultiplier::has_operation() const
{
    for (std::size_t index=0; index<hello_multiplier_list.len(); index++)
    {
        if(hello_multiplier_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::HelloMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::HelloMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::HelloMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-multiplier-list")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList>();
        ent_->parent = this;
        hello_multiplier_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::HelloMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_multiplier_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::HelloMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::HelloMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::HelloMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-multiplier-list" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::HelloMultiplierList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "hello-multiplier-list"; yang_parent_name = "hello-multiplier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::~HelloMultiplierList()
{
}

bool Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multiplier-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Ipv6::Ipv6()
    :
    tag{YType::uint32, "tag"}
        ,
    metric(std::make_shared<Native::Interface::VirtualTemplate::Isis::Ipv6::Metric>())
    , bfd(nullptr) // presence node
{
    metric->parent = this;

    yang_name = "ipv6"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Ipv6::~Ipv6()
{
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| (metric !=  nullptr && metric->has_data())
	|| (bfd !=  nullptr && bfd->has_data());
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (metric !=  nullptr && metric->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Interface::VirtualTemplate::Isis::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::VirtualTemplate::Isis::Ipv6::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "bfd" || name == "tag")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::Metric()
    :
    value_{YType::str, "value"}
        ,
    metric_list(this, {"levels"})
{

    yang_name = "metric"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::~Metric()
{
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList>();
        ent_->parent = this;
        metric_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metric_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd::~Bfd()
{
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Ipv6::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Metric::Metric()
    :
    value_{YType::str, "value"}
        ,
    metric_list(this, {"levels"})
{

    yang_name = "metric"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Metric::~Metric()
{
}

bool Native::Interface::VirtualTemplate::Isis::Metric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Isis::Metric::MetricList>();
        ent_->parent = this;
        metric_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metric_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::VirtualTemplate::Isis::Metric::MetricList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Password::Password()
    :
    password{YType::str, "password"}
        ,
    password_list(this, {"levels"})
{

    yang_name = "password"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Password::~Password()
{
}

bool Native::Interface::VirtualTemplate::Isis::Password::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<password_list.len(); index++)
    {
        if(password_list[index]->has_data())
            return true;
    }
    return password.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Password::has_operation() const
{
    for (std::size_t index=0; index<password_list.len(); index++)
    {
        if(password_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-list")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Isis::Password::PasswordList>();
        ent_->parent = this;
        password_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : password_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-list" || name == "password")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Password::PasswordList::PasswordList()
    :
    levels{YType::enumeration, "levels"},
    password{YType::str, "password"}
{

    yang_name = "password-list"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Password::PasswordList::~PasswordList()
{
}

bool Native::Interface::VirtualTemplate::Isis::Password::PasswordList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| password.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Password::PasswordList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Password::PasswordList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Password::PasswordList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Password::PasswordList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Password::PasswordList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Password::PasswordList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Password::PasswordList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Password::PasswordList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "password")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Priority::Priority()
    :
    value_{YType::uint8, "value"}
        ,
    priority_list(this, {"levels"})
{

    yang_name = "priority"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Priority::~Priority()
{
}

bool Native::Interface::VirtualTemplate::Isis::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority_list.len(); index++)
    {
        if(priority_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Priority::has_operation() const
{
    for (std::size_t index=0; index<priority_list.len(); index++)
    {
        if(priority_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-list")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Isis::Priority::PriorityList>();
        ent_->parent = this;
        priority_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-list" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::PriorityList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint8, "value"}
{

    yang_name = "priority-list"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::~PriorityList()
{
}

bool Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Isis::Bfd::~Bfd()
{
}

bool Native::Interface::VirtualTemplate::Isis::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::ThreeWayHandshake()
    :
    implementor{YType::enumeration, "implementor"}
{

    yang_name = "three-way-handshake"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::~ThreeWayHandshake()
{
}

bool Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::has_data() const
{
    if (is_presence_container) return true;
    return implementor.is_set;
}

bool Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(implementor.yfilter);
}

std::string Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:three-way-handshake";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (implementor.is_set || is_set(implementor.yfilter)) leaf_name_data.push_back(implementor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "implementor")
    {
        implementor = value;
        implementor.value_namespace = name_space;
        implementor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "implementor")
    {
        implementor.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "implementor")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::VirtualTemplate::KeepaliveSettings::has_data() const
{
    if (is_presence_container) return true;
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::VirtualTemplate::KeepaliveSettings::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::VirtualTemplate::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::KeepaliveSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::KeepaliveSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::KeepaliveSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::KeepaliveSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::KeepaliveSettings::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Bfd::Bfd()
{

    yang_name = "bfd"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Bfd::~Bfd()
{
}

bool Native::Interface::VirtualTemplate::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::VirtualTemplate::Bfd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Bandwidth::Bandwidth()
    :
    qos_reference{YType::uint32, "qos-reference"},
    kilobits{YType::uint32, "kilobits"}
        ,
    receive(std::make_shared<Native::Interface::VirtualTemplate::Bandwidth::Receive>())
    , inherit(nullptr) // presence node
{
    receive->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return qos_reference.is_set
	|| kilobits.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (inherit !=  nullptr && inherit->has_data());
}

bool Native::Interface::VirtualTemplate::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| (receive !=  nullptr && receive->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation());
}

std::string Native::Interface::VirtualTemplate::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::VirtualTemplate::Bandwidth::Receive>();
        }
        return receive;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::VirtualTemplate::Bandwidth::Inherit>();
        }
        return inherit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(receive != nullptr)
    {
        _children["receive"] = receive;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-reference")
    {
        qos_reference = value;
        qos_reference.value_namespace = name_space;
        qos_reference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-reference")
    {
        qos_reference.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "inherit" || name == "qos-reference" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::VirtualTemplate::Bandwidth::Receive::has_data() const
{
    if (is_presence_container) return true;
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::VirtualTemplate::Bandwidth::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::VirtualTemplate::Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Bandwidth::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Bandwidth::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inherit")
    {
        inherit = value;
        inherit.value_namespace = name_space;
        inherit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Bandwidth::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inherit")
    {
        inherit.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Bandwidth::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::VirtualTemplate::Bandwidth::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return kilobits.is_set;
}

bool Native::Interface::VirtualTemplate::Bandwidth::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::VirtualTemplate::Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Bandwidth::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Bandwidth::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Bandwidth::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Bandwidth::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Dampening::Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"}
        ,
    restart(std::make_shared<Native::Interface::VirtualTemplate::Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "dampening"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Dampening::~Dampening()
{
}

bool Native::Interface::VirtualTemplate::Dampening::has_data() const
{
    if (is_presence_container) return true;
    return dampening_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| maximum_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::VirtualTemplate::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::VirtualTemplate::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::VirtualTemplate::Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(restart != nullptr)
    {
        _children["restart"] = restart;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time = value;
        start_reusing_time.value_namespace = name_space;
        start_reusing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time = value;
        start_supressing_time.value_namespace = name_space;
        start_supressing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
        maximum_supressing_time.value_namespace = name_space;
        maximum_supressing_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time.yfilter = yfilter;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time.yfilter = yfilter;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "start-reusing-time" || name == "start-supressing-time" || name == "maximum-supressing-time")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Dampening::Restart::~Restart()
{
}

bool Native::Interface::VirtualTemplate::Dampening::Restart::has_data() const
{
    if (is_presence_container) return true;
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::VirtualTemplate::Dampening::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::VirtualTemplate::Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Dampening::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Dampening::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Dampening::Restart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Dampening::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Domain::Domain()
    :
    name{YType::str, "name"},
    path{YType::str, "path"},
    internet_bound{YType::empty, "internet-bound"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "domain"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Domain::~Domain()
{
}

bool Native::Interface::VirtualTemplate::Domain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path.is_set
	|| internet_bound.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::VirtualTemplate::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::VirtualTemplate::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (internet_bound.is_set || is_set(internet_bound.yfilter)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.yfilter)) leaf_name_data.push_back(zero_sla.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internet-bound")
    {
        internet_bound = value;
        internet_bound.value_namespace = name_space;
        internet_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
        path_last_resort.value_namespace = name_space;
        path_last_resort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-sla")
    {
        zero_sla = value;
        zero_sla.value_namespace = name_space;
        zero_sla.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "internet-bound")
    {
        internet_bound.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort.yfilter = yfilter;
    }
    if(value_path == "zero-sla")
    {
        zero_sla.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path" || name == "internet-bound" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::HoldQueue::HoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint32, "queue-length"}
{

    yang_name = "hold-queue"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::HoldQueue::~HoldQueue()
{
}

bool Native::Interface::VirtualTemplate::HoldQueue::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::VirtualTemplate::HoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Native::Interface::VirtualTemplate::HoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-queue";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::HoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::HoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::HoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::HoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::HoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::HoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "queue-length")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Mpls::Mpls()
{

    yang_name = "mpls"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Mpls::~Mpls()
{
}

bool Native::Interface::VirtualTemplate::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::VirtualTemplate::Mpls::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::VirtualTemplate::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::IpVrf::~IpVrf()
{
}

bool Native::Interface::VirtualTemplate::IpVrf::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::VirtualTemplate::IpVrf::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::VirtualTemplate::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::IpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::VirtualTemplate::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::IpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::IpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::IpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::VirtualTemplate::IpVrf::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::VirtualTemplate::IpVrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::VirtualTemplate::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::IpVrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::IpVrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::IpVrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::IpVrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return forwarding.is_set;
}

bool Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::IpVrf::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"},
    downstream{YType::str, "downstream"}
{

    yang_name = "vrf"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Vrf::~Vrf()
{
}

bool Native::Interface::VirtualTemplate::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return forwarding.is_set
	|| downstream.is_set;
}

bool Native::Interface::VirtualTemplate::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(downstream.yfilter);
}

std::string Native::Interface::VirtualTemplate::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "downstream")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Ip()
    :
    admission{YType::str, "admission"},
    unnumbered{YType::str, "unnumbered"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    mtu{YType::uint16, "mtu"},
    mroute_cache{YType::boolean, "mroute-cache"}
        ,
    access_group(std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup>())
    , arp(std::make_shared<Native::Interface::VirtualTemplate::Ip::Arp>())
    , vrf(std::make_shared<Native::Interface::VirtualTemplate::Ip::Vrf>())
    , address(std::make_shared<Native::Interface::VirtualTemplate::Ip::Address>())
    , directed_broadcast(nullptr) // presence node
    , hello_interval(std::make_shared<Native::Interface::VirtualTemplate::Ip::HelloInterval>())
    , authentication(std::make_shared<Native::Interface::VirtualTemplate::Ip::Authentication>())
    , hold_time(std::make_shared<Native::Interface::VirtualTemplate::Ip::HoldTime>())
    , helper_address(this, {"address"})
    , pim(std::make_shared<Native::Interface::VirtualTemplate::Ip::Pim>())
    , policy(std::make_shared<Native::Interface::VirtualTemplate::Ip::Policy>())
    , rip(std::make_shared<Native::Interface::VirtualTemplate::Ip::Rip>())
    , route_cache_conf(std::make_shared<Native::Interface::VirtualTemplate::Ip::RouteCacheConf>())
    , route_cache(nullptr) // presence node
    , router(std::make_shared<Native::Interface::VirtualTemplate::Ip::Router>())
    , tcp(std::make_shared<Native::Interface::VirtualTemplate::Ip::Tcp>())
    , virtual_reassembly(std::make_shared<Native::Interface::VirtualTemplate::Ip::VirtualReassembly>())
    , dhcp(std::make_shared<Native::Interface::VirtualTemplate::Ip::Dhcp>())
    , summary_address(std::make_shared<Native::Interface::VirtualTemplate::Ip::SummaryAddress>())
    , verify(std::make_shared<Native::Interface::VirtualTemplate::Ip::Verify>())
    , igmp(std::make_shared<Native::Interface::VirtualTemplate::Ip::Igmp>())
{
    access_group->parent = this;
    arp->parent = this;
    vrf->parent = this;
    address->parent = this;
    hello_interval->parent = this;
    authentication->parent = this;
    hold_time->parent = this;
    pim->parent = this;
    policy->parent = this;
    rip->parent = this;
    route_cache_conf->parent = this;
    router->parent = this;
    tcp->parent = this;
    virtual_reassembly->parent = this;
    dhcp->parent = this;
    summary_address->parent = this;
    verify->parent = this;
    igmp->parent = this;

    yang_name = "ip"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::~Ip()
{
}

bool Native::Interface::VirtualTemplate::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| unnumbered.is_set
	|| local_proxy_arp.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| mtu.is_set
	|| mroute_cache.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (directed_broadcast !=  nullptr && directed_broadcast->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (igmp !=  nullptr && igmp->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::has_operation() const
{
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mroute_cache.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (directed_broadcast !=  nullptr && directed_broadcast->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.yfilter)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::VirtualTemplate::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::VirtualTemplate::Ip::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::VirtualTemplate::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "directed-broadcast")
    {
        if(directed_broadcast == nullptr)
        {
            directed_broadcast = std::make_shared<Native::Interface::VirtualTemplate::Ip::DirectedBroadcast>();
        }
        return directed_broadcast;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::VirtualTemplate::Ip::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::VirtualTemplate::Ip::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::VirtualTemplate::Ip::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "helper-address")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Ip::HelperAddress>();
        ent_->parent = this;
        helper_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::VirtualTemplate::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::VirtualTemplate::Ip::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Interface::VirtualTemplate::Ip::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::VirtualTemplate::Ip::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::VirtualTemplate::Ip::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::VirtualTemplate::Ip::Router>();
        }
        return router;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::VirtualTemplate::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::VirtualTemplate::Ip::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::VirtualTemplate::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::VirtualTemplate::Ip::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::VirtualTemplate::Ip::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "Cisco-IOS-XE-igmp:igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Interface::VirtualTemplate::Ip::Igmp>();
        }
        return igmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_group != nullptr)
    {
        _children["access-group"] = access_group;
    }

    if(arp != nullptr)
    {
        _children["arp"] = arp;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(directed_broadcast != nullptr)
    {
        _children["directed-broadcast"] = directed_broadcast;
    }

    if(hello_interval != nullptr)
    {
        _children["hello-interval"] = hello_interval;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(hold_time != nullptr)
    {
        _children["hold-time"] = hold_time;
    }

    count_ = 0;
    for (auto ent_ : helper_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(pim != nullptr)
    {
        _children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(route_cache_conf != nullptr)
    {
        _children["route-cache-conf"] = route_cache_conf;
    }

    if(route_cache != nullptr)
    {
        _children["route-cache"] = route_cache;
    }

    if(router != nullptr)
    {
        _children["router"] = router;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(virtual_reassembly != nullptr)
    {
        _children["virtual-reassembly"] = virtual_reassembly;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(summary_address != nullptr)
    {
        _children["summary-address"] = summary_address;
    }

    if(verify != nullptr)
    {
        _children["verify"] = verify;
    }

    if(igmp != nullptr)
    {
        _children["Cisco-IOS-XE-igmp:igmp"] = igmp;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
        local_proxy_arp.value_namespace = name_space;
        local_proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
        proxy_arp.value_namespace = name_space;
        proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
        mroute_cache.value_namespace = name_space;
        mroute_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "arp" || name == "vrf" || name == "address" || name == "directed-broadcast" || name == "hello-interval" || name == "authentication" || name == "hold-time" || name == "helper-address" || name == "pim" || name == "policy" || name == "rip" || name == "route-cache-conf" || name == "route-cache" || name == "router" || name == "tcp" || name == "virtual-reassembly" || name == "dhcp" || name == "summary-address" || name == "verify" || name == "igmp" || name == "admission" || name == "unnumbered" || name == "local-proxy-arp" || name == "proxy-arp" || name == "redirects" || name == "mtu" || name == "mroute-cache")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::In>())
    , out(std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in != nullptr)
    {
        _children["in"] = in;
    }

    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::In::In()
    :
    common_acl(std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl>())
    , acl(std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::In::~In()
{
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::In::has_data() const
{
    if (is_presence_container) return true;
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::In::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::AccessGroup::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_acl != nullptr)
    {
        _children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{

    yang_name = "common-acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl::has_data() const
{
    if (is_presence_container) return true;
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::In::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "in")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{

    yang_name = "acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::In::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Out()
    :
    common_acl(std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl>())
    , acl(std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::~Out()
{
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::has_data() const
{
    if (is_presence_container) return true;
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_acl != nullptr)
    {
        _children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{

    yang_name = "common-acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl::has_data() const
{
    if (is_presence_container) return true;
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "out")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::AccessGroup::Out::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "out")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::VirtualTemplate::Ip::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Arp::~Arp()
{
}

bool Native::Interface::VirtualTemplate::Ip::Arp::has_data() const
{
    if (is_presence_container) return true;
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::VirtualTemplate::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inspection != nullptr)
    {
        _children["inspection"] = inspection;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ip::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ip::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspection")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
        ,
    limit(std::make_shared<Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::VirtualTemplate::Ip::Arp::Inspection::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::Arp::Inspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{

    yang_name = "limit"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Arp::Inspection::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "rate")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
        ,
    forwarding(std::make_shared<Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::VirtualTemplate::Ip::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(sitemap.yfilter)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.yfilter)) leaf_name_data.push_back(sitemap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarding != nullptr)
    {
        _children["forwarding"] = forwarding;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sitemap")
    {
        sitemap = value;
        sitemap.value_namespace = name_space;
        sitemap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "sitemap")
    {
        sitemap.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "receive" || name == "sitemap")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{

    yang_name = "forwarding"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding::has_data() const
{
    if (is_presence_container) return true;
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(liin_vrf.yfilter)
	|| ydk::is_set(mgmtvrf.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.yfilter)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.yfilter)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf = value;
        liin_vrf.value_namespace = name_space;
        liin_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf = value;
        mgmtvrf.value_namespace = name_space;
        mgmtvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf.yfilter = yfilter;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Vrf::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Liin-vrf" || name == "mgmtVrf" || name == "word")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
        ,
    secondary(this, {"address"})
    , primary(std::make_shared<Native::Interface::VirtualTemplate::Ip::Address::Primary>())
    , dhcp(nullptr) // presence node
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Address::~Address()
{
}

bool Native::Interface::VirtualTemplate::Ip::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return negotiated.is_set
	|| (primary !=  nullptr && primary->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(negotiated.yfilter)
	|| (primary !=  nullptr && primary->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.yfilter)) leaf_name_data.push_back(negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Ip::Address::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::VirtualTemplate::Ip::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::VirtualTemplate::Ip::Address::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
        negotiated.value_namespace = name_space;
        negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated")
    {
        negotiated.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary" || name == "primary" || name == "dhcp" || name == "negotiated")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Address::Secondary::~Secondary()
{
}

bool Native::Interface::VirtualTemplate::Ip::Address::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Address::Primary::~Primary()
{
}

bool Native::Interface::VirtualTemplate::Ip::Address::Primary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::VirtualTemplate::Ip::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
        ,
    client_id(std::make_shared<Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Ip::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::VirtualTemplate::Ip::Address::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_id != nullptr)
    {
        _children["client-id"] = client_id;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "hostname")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId::ClientId()
    :
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "client-id"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId::has_data() const
{
    if (is_presence_container) return true;
    return ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| twentyfivegige.is_set
	|| fortygigabitethernet.is_set
	|| twogigabitethernet.is_set
	|| hundredgige.is_set
	|| vlan.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
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
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Address::Dhcp::ClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "Port-channel" || name == "TenGigabitEthernet" || name == "TwentyFiveGigE" || name == "FortyGigabitEthernet" || name == "TwoGigabitEthernet" || name == "HundredGigE" || name == "vlan")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::DirectedBroadcast::DirectedBroadcast()
    :
    direct_broadcast{YType::str, "direct-broadcast"}
{

    yang_name = "directed-broadcast"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Ip::DirectedBroadcast::~DirectedBroadcast()
{
}

bool Native::Interface::VirtualTemplate::Ip::DirectedBroadcast::has_data() const
{
    if (is_presence_container) return true;
    return direct_broadcast.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::DirectedBroadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direct_broadcast.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::DirectedBroadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directed-broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::DirectedBroadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direct_broadcast.is_set || is_set(direct_broadcast.yfilter)) leaf_name_data.push_back(direct_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::DirectedBroadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::DirectedBroadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::DirectedBroadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direct-broadcast")
    {
        direct_broadcast = value;
        direct_broadcast.value_namespace = name_space;
        direct_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::DirectedBroadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direct-broadcast")
    {
        direct_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::DirectedBroadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direct-broadcast")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::VirtualTemplate::Ip::HelloInterval::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain>())
    , mode(std::make_shared<Native::Interface::VirtualTemplate::Ip::Authentication::Mode>())
{
    key_chain->parent = this;
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Authentication::~Authentication()
{
}

bool Native::Interface::VirtualTemplate::Ip::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::VirtualTemplate::Ip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::VirtualTemplate::Ip::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(md5.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "md5")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::HoldTime::~HoldTime()
{
}

bool Native::Interface::VirtualTemplate::Ip::HoldTime::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{

    yang_name = "helper-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::VirtualTemplate::Ip::HelperAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "global" || name == "vrf")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Pim::Pim()
{

    yang_name = "pim"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Pim::~Pim()
{
}

bool Native::Interface::VirtualTemplate::Ip::Pim::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::VirtualTemplate::Ip::Pim::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ip::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ip::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Ip::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "policy"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Policy::~Policy()
{
}

bool Native::Interface::VirtualTemplate::Ip::Policy::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Rip::Rip()
    :
    authentication(std::make_shared<Native::Interface::VirtualTemplate::Ip::Rip::Authentication>())
{
    authentication->parent = this;

    yang_name = "rip"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Rip::~Rip()
{
}

bool Native::Interface::VirtualTemplate::Ip::Rip::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::VirtualTemplate::Ip::Rip::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ip::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ip::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
        ,
    mode(std::make_shared<Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Rip::Authentication::~Authentication()
{
}

bool Native::Interface::VirtualTemplate::Ip::Rip::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::Rip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::Rip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Rip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Rip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Rip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Rip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Rip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Rip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"},
    text{YType::empty, "text"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| text.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::Rip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::RouteCacheConf::RouteCacheConf()
    :
    route_cache{YType::boolean, "route-cache"}
{

    yang_name = "route-cache-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::RouteCacheConf::~RouteCacheConf()
{
}

bool Native::Interface::VirtualTemplate::Ip::RouteCacheConf::has_data() const
{
    if (is_presence_container) return true;
    return route_cache.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::RouteCacheConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_cache.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::RouteCacheConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::RouteCacheConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cache.is_set || is_set(route_cache.yfilter)) leaf_name_data.push_back(route_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::RouteCacheConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::RouteCacheConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::RouteCacheConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-cache")
    {
        route_cache = value;
        route_cache.value_namespace = name_space;
        route_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::RouteCacheConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-cache")
    {
        route_cache.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::RouteCacheConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-cache")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{

    yang_name = "route-cache"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Ip::RouteCache::~RouteCache()
{
}

bool Native::Interface::VirtualTemplate::Ip::RouteCache::has_data() const
{
    if (is_presence_container) return true;
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::VirtualTemplate::Ip::RouteCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cef.yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(same_interface.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ip::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::RouteCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.yfilter)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.yfilter)) leaf_name_data.push_back(same_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ip::RouteCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cef")
    {
        cef = value;
        cef.value_namespace = name_space;
        cef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "same-interface")
    {
        same_interface = value;
        same_interface.value_namespace = name_space;
        same_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ip::RouteCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cef")
    {
        cef.yfilter = yfilter;
    }
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "same-interface")
    {
        same_interface.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ip::RouteCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cef" || name == "flow" || name == "policy" || name == "same-interface")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ip::Router::Router()
    :
    isis(nullptr) // presence node
{

    yang_name = "router"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ip::Router::~Router()
{
}

bool Native::Interface::VirtualTemplate::Ip::Router::has_data() const
{
    if (is_presence_container) return true;
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::VirtualTemplate::Ip::Router::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ip::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ip::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ip::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::VirtualTemplate::Ip::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ip::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ip::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ip::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ip::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Tunnel::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Interface::Tunnel::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Interface::Tunnel::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Interface::Tunnel::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::Tunnel::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Interface::Tunnel::Cts::Sgt::inline_ {0, "inline"};

const Enum::YLeaf Native::Interface::Tunnel::Cts::RoleBased::SgtCache::egress {0, "egress"};
const Enum::YLeaf Native::Interface::Tunnel::Cts::RoleBased::SgtCache::ingress {1, "ingress"};

const Enum::YLeaf Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Type::ethernet {0, "ethernet"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Type::serial {1, "serial"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Type::tunnel {2, "tunnel"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Type::vpn {3, "vpn"};

const Enum::YLeaf Native::Interface::VirtualTemplate::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::VirtualTemplate::ChannelProtocol::lacp {0, "lacp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::ChannelProtocol::pagp {1, "pagp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Duplex::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Duplex::full {1, "full"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Duplex::half {2, "half"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Backup::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Backup::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Backup::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Backup::Load::Kickout::never {0, "never"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Flowcontrol::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Flowcontrol::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Flowcontrol::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Flowcontrol::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Flowcontrol::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Flowcontrol::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::MeshGroup::blocked {0, "blocked"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Network::point_to_point {0, "point-to-point"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Protocol::shutdown {0, "shutdown"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::CircuitType::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::CircuitType::Levels::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::CircuitType::Levels::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::CsnpInterval::CsnpIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::HelloInterval::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::HelloInterval::HelloIntervalList::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::HelloMultiplier::HelloMultiplierList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Ipv6::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Password::PasswordList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Password::PasswordList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::Priority::PriorityList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::Implementor::cisco {0, "cisco"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Isis::ThreeWayHandshake::Implementor::ietf {1, "ietf"};

const Enum::YLeaf Native::Interface::VirtualTemplate::HoldQueue::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::VirtualTemplate::HoldQueue::Direction::out {1, "out"};


}
}

