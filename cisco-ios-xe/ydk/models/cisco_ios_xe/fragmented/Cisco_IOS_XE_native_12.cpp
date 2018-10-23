
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_12.hpp"
#include "Cisco_IOS_XE_native_13.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::Wccp::Vrf::WebCache::WebCache()
    :
    group_address{YType::str, "group-address"},
    group_list{YType::str, "group-list"},
    mode{YType::enumeration, "mode"},
    redirect_list{YType::str, "redirect-list"},
    snmp_disabled{YType::empty, "snmp-disabled"}
        ,
    password(std::make_shared<Native::Ip::Wccp::Vrf::WebCache::Password>())
{
    password->parent = this;

    yang_name = "web-cache"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Wccp::Vrf::WebCache::~WebCache()
{
}

bool Native::Ip::Wccp::Vrf::WebCache::has_data() const
{
    if (is_presence_container) return true;
    return group_address.is_set
	|| group_list.is_set
	|| mode.is_set
	|| redirect_list.is_set
	|| snmp_disabled.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Wccp::Vrf::WebCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| ydk::is_set(snmp_disabled.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::Vrf::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Vrf::WebCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.yfilter)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::Vrf::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Wccp::Vrf::WebCache::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::Vrf::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Ip::Wccp::Vrf::WebCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
        redirect_list.value_namespace = name_space;
        redirect_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled = value;
        snmp_disabled.value_namespace = name_space;
        snmp_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Vrf::WebCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "redirect-list")
    {
        redirect_list.yfilter = yfilter;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Vrf::WebCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "group-address" || name == "group-list" || name == "mode" || name == "redirect-list" || name == "snmp-disabled")
        return true;
    return false;
}

Native::Ip::Wccp::Vrf::WebCache::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    clear_key{YType::str, "clear-key"}
{

    yang_name = "password"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Wccp::Vrf::WebCache::Password::~Password()
{
}

bool Native::Ip::Wccp::Vrf::WebCache::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| clear_key.is_set;
}

bool Native::Ip::Wccp::Vrf::WebCache::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(clear_key.yfilter);
}

std::string Native::Ip::Wccp::Vrf::WebCache::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Vrf::WebCache::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::Vrf::WebCache::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::Vrf::WebCache::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Wccp::Vrf::WebCache::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Wccp::Vrf::WebCache::Password::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Wccp::Vrf::WebCache::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "clear-key")
        return true;
    return false;
}

Native::Mka::Mka()
    :
    policy(this, {"name"})
{

    yang_name = "mka"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mka::~Mka()
{
}

bool Native::Mka::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mka::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mka::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mka";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mka::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-mka:policy")
    {
        auto ent_ = std::make_shared<Native::Mka::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mka::get_children() const
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

    return _children;
}

void Native::Mka::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mka::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mka::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Mka::Policy::Policy()
    :
    name{YType::str, "name"},
    confidentiality_offset{YType::enumeration, "confidentiality-offset"}
        ,
    key_server(std::make_shared<Native::Mka::Policy::KeyServer>())
    , macsec_cipher_suite(std::make_shared<Native::Mka::Policy::MacsecCipherSuite>())
{
    key_server->parent = this;
    macsec_cipher_suite->parent = this;

    yang_name = "policy"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mka::Policy::~Policy()
{
}

bool Native::Mka::Policy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| confidentiality_offset.is_set
	|| (key_server !=  nullptr && key_server->has_data())
	|| (macsec_cipher_suite !=  nullptr && macsec_cipher_suite->has_data());
}

bool Native::Mka::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(confidentiality_offset.yfilter)
	|| (key_server !=  nullptr && key_server->has_operation())
	|| (macsec_cipher_suite !=  nullptr && macsec_cipher_suite->has_operation());
}

std::string Native::Mka::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mka/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mka::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mka:policy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mka::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.yfilter)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mka::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-server")
    {
        if(key_server == nullptr)
        {
            key_server = std::make_shared<Native::Mka::Policy::KeyServer>();
        }
        return key_server;
    }

    if(child_yang_name == "macsec-cipher-suite")
    {
        if(macsec_cipher_suite == nullptr)
        {
            macsec_cipher_suite = std::make_shared<Native::Mka::Policy::MacsecCipherSuite>();
        }
        return macsec_cipher_suite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mka::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_server != nullptr)
    {
        _children["key-server"] = key_server;
    }

    if(macsec_cipher_suite != nullptr)
    {
        _children["macsec-cipher-suite"] = macsec_cipher_suite;
    }

    return _children;
}

void Native::Mka::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
        confidentiality_offset.value_namespace = name_space;
        confidentiality_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mka::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset.yfilter = yfilter;
    }
}

bool Native::Mka::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-server" || name == "macsec-cipher-suite" || name == "name" || name == "confidentiality-offset")
        return true;
    return false;
}

Native::Mka::Policy::KeyServer::KeyServer()
    :
    priority{YType::uint8, "priority"}
{

    yang_name = "key-server"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mka::Policy::KeyServer::~KeyServer()
{
}

bool Native::Mka::Policy::KeyServer::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set;
}

bool Native::Mka::Policy::KeyServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Mka::Policy::KeyServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mka::Policy::KeyServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mka::Policy::KeyServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mka::Policy::KeyServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mka::Policy::KeyServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mka::Policy::KeyServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Mka::Policy::KeyServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Mka::Policy::MacsecCipherSuite::MacsecCipherSuite()
    :
    gcm_aes_128{YType::empty, "gcm-aes-128"},
    gcm_aes_256{YType::empty, "gcm-aes-256"}
{

    yang_name = "macsec-cipher-suite"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Mka::Policy::MacsecCipherSuite::~MacsecCipherSuite()
{
}

bool Native::Mka::Policy::MacsecCipherSuite::has_data() const
{
    if (is_presence_container) return true;
    return gcm_aes_128.is_set
	|| gcm_aes_256.is_set;
}

bool Native::Mka::Policy::MacsecCipherSuite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gcm_aes_128.yfilter)
	|| ydk::is_set(gcm_aes_256.yfilter);
}

std::string Native::Mka::Policy::MacsecCipherSuite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-cipher-suite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mka::Policy::MacsecCipherSuite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_aes_128.is_set || is_set(gcm_aes_128.yfilter)) leaf_name_data.push_back(gcm_aes_128.get_name_leafdata());
    if (gcm_aes_256.is_set || is_set(gcm_aes_256.yfilter)) leaf_name_data.push_back(gcm_aes_256.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mka::Policy::MacsecCipherSuite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mka::Policy::MacsecCipherSuite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mka::Policy::MacsecCipherSuite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gcm-aes-128")
    {
        gcm_aes_128 = value;
        gcm_aes_128.value_namespace = name_space;
        gcm_aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gcm-aes-256")
    {
        gcm_aes_256 = value;
        gcm_aes_256.value_namespace = name_space;
        gcm_aes_256.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mka::Policy::MacsecCipherSuite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gcm-aes-128")
    {
        gcm_aes_128.yfilter = yfilter;
    }
    if(value_path == "gcm-aes-256")
    {
        gcm_aes_256.yfilter = yfilter;
    }
}

bool Native::Mka::Policy::MacsecCipherSuite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-aes-128" || name == "gcm-aes-256")
        return true;
    return false;
}

Native::Macro::Macro()
    :
    global(std::make_shared<Native::Macro::Global>())
    , auto_(std::make_shared<Native::Macro::Auto>())
{
    global->parent = this;
    auto_->parent = this;

    yang_name = "macro"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Macro::~Macro()
{
}

bool Native::Macro::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (auto_ !=  nullptr && auto_->has_data());
}

bool Native::Macro::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (auto_ !=  nullptr && auto_->has_operation());
}

std::string Native::Macro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Macro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Macro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Macro::Global>();
        }
        return global;
    }

    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Macro::Auto>();
        }
        return auto_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Macro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    return _children;
}

void Native::Macro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Macro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Macro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "auto")
        return true;
    return false;
}

Native::Macro::Global::Global()
    :
    description{YType::str, "description"}
{

    yang_name = "global"; yang_parent_name = "macro"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Macro::Global::~Global()
{
}

bool Native::Macro::Global::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set;
}

bool Native::Macro::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::Macro::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/macro/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Macro::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Macro::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Macro::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Macro::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Macro::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Macro::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description")
        return true;
    return false;
}

Native::Macro::Auto::Auto()
    :
    execute(this, {"trigger_event"})
    , device(std::make_shared<Native::Macro::Auto::Device>())
    , global(std::make_shared<Native::Macro::Auto::Global>())
{
    device->parent = this;
    global->parent = this;

    yang_name = "auto"; yang_parent_name = "macro"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Macro::Auto::~Auto()
{
}

bool Native::Macro::Auto::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<execute.len(); index++)
    {
        if(execute[index]->has_data())
            return true;
    }
    return (device !=  nullptr && device->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool Native::Macro::Auto::has_operation() const
{
    for (std::size_t index=0; index<execute.len(); index++)
    {
        if(execute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (device !=  nullptr && device->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Macro::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/macro/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Macro::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Macro::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-switch:execute")
    {
        auto ent_ = std::make_shared<Native::Macro::Auto::Execute>();
        ent_->parent = this;
        execute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::Macro::Auto::Device>();
        }
        return device;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Macro::Auto::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Macro::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : execute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(device != nullptr)
    {
        _children["Cisco-IOS-XE-switch:device"] = device;
    }

    if(global != nullptr)
    {
        _children["Cisco-IOS-XE-switch:global"] = global;
    }

    return _children;
}

void Native::Macro::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Macro::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Macro::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "execute" || name == "device" || name == "global")
        return true;
    return false;
}

Native::Macro::Auto::Execute::Execute()
    :
    trigger_event{YType::str, "trigger-event"}
        ,
    builtin(std::make_shared<Native::Macro::Auto::Execute::Builtin>())
{
    builtin->parent = this;

    yang_name = "execute"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Macro::Auto::Execute::~Execute()
{
}

bool Native::Macro::Auto::Execute::has_data() const
{
    if (is_presence_container) return true;
    return trigger_event.is_set
	|| (builtin !=  nullptr && builtin->has_data());
}

bool Native::Macro::Auto::Execute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trigger_event.yfilter)
	|| (builtin !=  nullptr && builtin->has_operation());
}

std::string Native::Macro::Auto::Execute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/macro/auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Macro::Auto::Execute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:execute";
    ADD_KEY_TOKEN(trigger_event, "trigger-event");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::Auto::Execute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger_event.is_set || is_set(trigger_event.yfilter)) leaf_name_data.push_back(trigger_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Macro::Auto::Execute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "builtin")
    {
        if(builtin == nullptr)
        {
            builtin = std::make_shared<Native::Macro::Auto::Execute::Builtin>();
        }
        return builtin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Macro::Auto::Execute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(builtin != nullptr)
    {
        _children["builtin"] = builtin;
    }

    return _children;
}

void Native::Macro::Auto::Execute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger-event")
    {
        trigger_event = value;
        trigger_event.value_namespace = name_space;
        trigger_event.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Macro::Auto::Execute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger-event")
    {
        trigger_event.yfilter = yfilter;
    }
}

bool Native::Macro::Auto::Execute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "builtin" || name == "trigger-event")
        return true;
    return false;
}

Native::Macro::Auto::Execute::Builtin::Builtin()
    :
    smart_port_configuration{YType::enumeration, "smart-port-configuration"},
    parameters{YType::str, "parameters"}
{

    yang_name = "builtin"; yang_parent_name = "execute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Macro::Auto::Execute::Builtin::~Builtin()
{
}

bool Native::Macro::Auto::Execute::Builtin::has_data() const
{
    if (is_presence_container) return true;
    return smart_port_configuration.is_set
	|| parameters.is_set;
}

bool Native::Macro::Auto::Execute::Builtin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(smart_port_configuration.yfilter)
	|| ydk::is_set(parameters.yfilter);
}

std::string Native::Macro::Auto::Execute::Builtin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "builtin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::Auto::Execute::Builtin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (smart_port_configuration.is_set || is_set(smart_port_configuration.yfilter)) leaf_name_data.push_back(smart_port_configuration.get_name_leafdata());
    if (parameters.is_set || is_set(parameters.yfilter)) leaf_name_data.push_back(parameters.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Macro::Auto::Execute::Builtin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Macro::Auto::Execute::Builtin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Macro::Auto::Execute::Builtin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "smart-port-configuration")
    {
        smart_port_configuration = value;
        smart_port_configuration.value_namespace = name_space;
        smart_port_configuration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameters")
    {
        parameters = value;
        parameters.value_namespace = name_space;
        parameters.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Macro::Auto::Execute::Builtin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "smart-port-configuration")
    {
        smart_port_configuration.yfilter = yfilter;
    }
    if(value_path == "parameters")
    {
        parameters.yfilter = yfilter;
    }
}

bool Native::Macro::Auto::Execute::Builtin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "smart-port-configuration" || name == "parameters")
        return true;
    return false;
}

Native::Macro::Auto::Device::Device()
    :
    media_player{YType::str, "media-player"},
    ip_camera{YType::str, "ip-camera"}
{

    yang_name = "device"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Macro::Auto::Device::~Device()
{
}

bool Native::Macro::Auto::Device::has_data() const
{
    if (is_presence_container) return true;
    return media_player.is_set
	|| ip_camera.is_set;
}

bool Native::Macro::Auto::Device::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(media_player.yfilter)
	|| ydk::is_set(ip_camera.yfilter);
}

std::string Native::Macro::Auto::Device::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/macro/auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Macro::Auto::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::Auto::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (media_player.is_set || is_set(media_player.yfilter)) leaf_name_data.push_back(media_player.get_name_leafdata());
    if (ip_camera.is_set || is_set(ip_camera.yfilter)) leaf_name_data.push_back(ip_camera.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Macro::Auto::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Macro::Auto::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Macro::Auto::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "media-player")
    {
        media_player = value;
        media_player.value_namespace = name_space;
        media_player.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-camera")
    {
        ip_camera = value;
        ip_camera.value_namespace = name_space;
        ip_camera.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Macro::Auto::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "media-player")
    {
        media_player.yfilter = yfilter;
    }
    if(value_path == "ip-camera")
    {
        ip_camera.yfilter = yfilter;
    }
}

bool Native::Macro::Auto::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "media-player" || name == "ip-camera")
        return true;
    return false;
}

Native::Macro::Auto::Global::Global()
    :
    processing{YType::empty, "processing"}
{

    yang_name = "global"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Macro::Auto::Global::~Global()
{
}

bool Native::Macro::Auto::Global::has_data() const
{
    if (is_presence_container) return true;
    return processing.is_set;
}

bool Native::Macro::Auto::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processing.yfilter);
}

std::string Native::Macro::Auto::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/macro/auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Macro::Auto::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::Auto::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processing.is_set || is_set(processing.yfilter)) leaf_name_data.push_back(processing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Macro::Auto::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Macro::Auto::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Macro::Auto::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processing")
    {
        processing = value;
        processing.value_namespace = name_space;
        processing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Macro::Auto::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processing")
    {
        processing.yfilter = yfilter;
    }
}

bool Native::Macro::Auto::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processing")
        return true;
    return false;
}

Native::Ipv6::Ipv6()
    :
    flowset{YType::empty, "flowset"},
    unicast_routing{YType::empty, "unicast-routing"},
    source_route{YType::boolean, "source-route"}
        ,
    source_guard(std::make_shared<Native::Ipv6::SourceGuard>())
    , destination_guard(std::make_shared<Native::Ipv6::DestinationGuard>())
    , dhcp(std::make_shared<Native::Ipv6::Dhcp>())
    , access_list(std::make_shared<Native::Ipv6::AccessList>())
    , multicast(std::make_shared<Native::Ipv6::Multicast>())
    , cef(nullptr) // presence node
    , nd(std::make_shared<Native::Ipv6::Nd>())
    , pim(std::make_shared<Native::Ipv6::Pim>())
    , route(std::make_shared<Native::Ipv6::Route>())
    , router(std::make_shared<Native::Ipv6::Router>())
    , spd(std::make_shared<Native::Ipv6::Spd>())
    , prefix_list(std::make_shared<Native::Ipv6::PrefixList>())
    , neighbor(this, {"address", "interface"})
    , mld(std::make_shared<Native::Ipv6::Mld>())
    , multicast_routing(nullptr) // presence node
    , rip(std::make_shared<Native::Ipv6::Rip>())
{
    source_guard->parent = this;
    destination_guard->parent = this;
    dhcp->parent = this;
    access_list->parent = this;
    multicast->parent = this;
    nd->parent = this;
    pim->parent = this;
    route->parent = this;
    router->parent = this;
    spd->parent = this;
    prefix_list->parent = this;
    mld->parent = this;
    rip->parent = this;

    yang_name = "ipv6"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::~Ipv6()
{
}

bool Native::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return flowset.is_set
	|| unicast_routing.is_set
	|| source_route.is_set
	|| (source_guard !=  nullptr && source_guard->has_data())
	|| (destination_guard !=  nullptr && destination_guard->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (access_list !=  nullptr && access_list->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (spd !=  nullptr && spd->has_data())
	|| (prefix_list !=  nullptr && prefix_list->has_data())
	|| (mld !=  nullptr && mld->has_data())
	|| (multicast_routing !=  nullptr && multicast_routing->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flowset.yfilter)
	|| ydk::is_set(unicast_routing.yfilter)
	|| ydk::is_set(source_route.yfilter)
	|| (source_guard !=  nullptr && source_guard->has_operation())
	|| (destination_guard !=  nullptr && destination_guard->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (spd !=  nullptr && spd->has_operation())
	|| (prefix_list !=  nullptr && prefix_list->has_operation())
	|| (mld !=  nullptr && mld->has_operation())
	|| (multicast_routing !=  nullptr && multicast_routing->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flowset.is_set || is_set(flowset.yfilter)) leaf_name_data.push_back(flowset.get_name_leafdata());
    if (unicast_routing.is_set || is_set(unicast_routing.yfilter)) leaf_name_data.push_back(unicast_routing.get_name_leafdata());
    if (source_route.is_set || is_set(source_route.yfilter)) leaf_name_data.push_back(source_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-guard")
    {
        if(source_guard == nullptr)
        {
            source_guard = std::make_shared<Native::Ipv6::SourceGuard>();
        }
        return source_guard;
    }

    if(child_yang_name == "destination-guard")
    {
        if(destination_guard == nullptr)
        {
            destination_guard = std::make_shared<Native::Ipv6::DestinationGuard>();
        }
        return destination_guard;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Ipv6::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Ipv6::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Ipv6::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "cef")
    {
        if(cef == nullptr)
        {
            cef = std::make_shared<Native::Ipv6::Cef>();
        }
        return cef;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Ipv6::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Ipv6::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Ipv6::Route>();
        }
        return route;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Ipv6::Router>();
        }
        return router;
    }

    if(child_yang_name == "spd")
    {
        if(spd == nullptr)
        {
            spd = std::make_shared<Native::Ipv6::Spd>();
        }
        return spd;
    }

    if(child_yang_name == "prefix-list")
    {
        if(prefix_list == nullptr)
        {
            prefix_list = std::make_shared<Native::Ipv6::PrefixList>();
        }
        return prefix_list;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-mld:mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<Native::Ipv6::Mld>();
        }
        return mld;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:multicast-routing")
    {
        if(multicast_routing == nullptr)
        {
            multicast_routing = std::make_shared<Native::Ipv6::MulticastRouting>();
        }
        return multicast_routing;
    }

    if(child_yang_name == "Cisco-IOS-XE-rip:rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Ipv6::Rip>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_guard != nullptr)
    {
        _children["source-guard"] = source_guard;
    }

    if(destination_guard != nullptr)
    {
        _children["destination-guard"] = destination_guard;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(access_list != nullptr)
    {
        _children["access-list"] = access_list;
    }

    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(cef != nullptr)
    {
        _children["cef"] = cef;
    }

    if(nd != nullptr)
    {
        _children["nd"] = nd;
    }

    if(pim != nullptr)
    {
        _children["pim"] = pim;
    }

    if(route != nullptr)
    {
        _children["route"] = route;
    }

    if(router != nullptr)
    {
        _children["router"] = router;
    }

    if(spd != nullptr)
    {
        _children["spd"] = spd;
    }

    if(prefix_list != nullptr)
    {
        _children["prefix-list"] = prefix_list;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(mld != nullptr)
    {
        _children["Cisco-IOS-XE-mld:mld"] = mld;
    }

    if(multicast_routing != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:multicast-routing"] = multicast_routing;
    }

    if(rip != nullptr)
    {
        _children["Cisco-IOS-XE-rip:rip"] = rip;
    }

    return _children;
}

void Native::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flowset")
    {
        flowset = value;
        flowset.value_namespace = name_space;
        flowset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-routing")
    {
        unicast_routing = value;
        unicast_routing.value_namespace = name_space;
        unicast_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-route")
    {
        source_route = value;
        source_route.value_namespace = name_space;
        source_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flowset")
    {
        flowset.yfilter = yfilter;
    }
    if(value_path == "unicast-routing")
    {
        unicast_routing.yfilter = yfilter;
    }
    if(value_path == "source-route")
    {
        source_route.yfilter = yfilter;
    }
}

bool Native::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-guard" || name == "destination-guard" || name == "dhcp" || name == "access-list" || name == "multicast" || name == "cef" || name == "nd" || name == "pim" || name == "route" || name == "router" || name == "spd" || name == "prefix-list" || name == "neighbor" || name == "mld" || name == "multicast-routing" || name == "rip" || name == "flowset" || name == "unicast-routing" || name == "source-route")
        return true;
    return false;
}

Native::Ipv6::SourceGuard::SourceGuard()
    :
    policy(this, {"source_guard_policy_name"})
{

    yang_name = "source-guard"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::SourceGuard::~SourceGuard()
{
}

bool Native::Ipv6::SourceGuard::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::SourceGuard::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::SourceGuard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::SourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::SourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::SourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::Ipv6::SourceGuard::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::SourceGuard::get_children() const
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

    return _children;
}

void Native::Ipv6::SourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::SourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::SourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Ipv6::SourceGuard::Policy::Policy()
    :
    source_guard_policy_name{YType::str, "source-guard-policy-name"}
        ,
    validate(std::make_shared<Native::Ipv6::SourceGuard::Policy::Validate>())
    , deny(std::make_shared<Native::Ipv6::SourceGuard::Policy::Deny>())
    , permit(std::make_shared<Native::Ipv6::SourceGuard::Policy::Permit>())
{
    validate->parent = this;
    deny->parent = this;
    permit->parent = this;

    yang_name = "policy"; yang_parent_name = "source-guard"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::SourceGuard::Policy::~Policy()
{
}

bool Native::Ipv6::SourceGuard::Policy::has_data() const
{
    if (is_presence_container) return true;
    return source_guard_policy_name.is_set
	|| (validate !=  nullptr && validate->has_data())
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ipv6::SourceGuard::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_guard_policy_name.yfilter)
	|| (validate !=  nullptr && validate->has_operation())
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ipv6::SourceGuard::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/source-guard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::SourceGuard::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(source_guard_policy_name, "source-guard-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::SourceGuard::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_guard_policy_name.is_set || is_set(source_guard_policy_name.yfilter)) leaf_name_data.push_back(source_guard_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::SourceGuard::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Ipv6::SourceGuard::Policy::Validate>();
        }
        return validate;
    }

    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ipv6::SourceGuard::Policy::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ipv6::SourceGuard::Policy::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::SourceGuard::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    if(deny != nullptr)
    {
        _children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Ipv6::SourceGuard::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-guard-policy-name")
    {
        source_guard_policy_name = value;
        source_guard_policy_name.value_namespace = name_space;
        source_guard_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::SourceGuard::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-guard-policy-name")
    {
        source_guard_policy_name.yfilter = yfilter;
    }
}

bool Native::Ipv6::SourceGuard::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate" || name == "deny" || name == "permit" || name == "source-guard-policy-name")
        return true;
    return false;
}

Native::Ipv6::SourceGuard::Policy::Validate::Validate()
    :
    address{YType::empty, "address"},
    prefix{YType::empty, "prefix"}
{

    yang_name = "validate"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::SourceGuard::Policy::Validate::~Validate()
{
}

bool Native::Ipv6::SourceGuard::Policy::Validate::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix.is_set;
}

bool Native::Ipv6::SourceGuard::Policy::Validate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Ipv6::SourceGuard::Policy::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::SourceGuard::Policy::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::SourceGuard::Policy::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::SourceGuard::Policy::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::SourceGuard::Policy::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::SourceGuard::Policy::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Ipv6::SourceGuard::Policy::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix")
        return true;
    return false;
}

Native::Ipv6::SourceGuard::Policy::Deny::Deny()
    :
    global_autoconf{YType::empty, "global-autoconf"}
{

    yang_name = "deny"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::SourceGuard::Policy::Deny::~Deny()
{
}

bool Native::Ipv6::SourceGuard::Policy::Deny::has_data() const
{
    if (is_presence_container) return true;
    return global_autoconf.is_set;
}

bool Native::Ipv6::SourceGuard::Policy::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_autoconf.yfilter);
}

std::string Native::Ipv6::SourceGuard::Policy::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::SourceGuard::Policy::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_autoconf.is_set || is_set(global_autoconf.yfilter)) leaf_name_data.push_back(global_autoconf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::SourceGuard::Policy::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::SourceGuard::Policy::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::SourceGuard::Policy::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-autoconf")
    {
        global_autoconf = value;
        global_autoconf.value_namespace = name_space;
        global_autoconf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::SourceGuard::Policy::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-autoconf")
    {
        global_autoconf.yfilter = yfilter;
    }
}

bool Native::Ipv6::SourceGuard::Policy::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-autoconf")
        return true;
    return false;
}

Native::Ipv6::SourceGuard::Policy::Permit::Permit()
    :
    link_local{YType::empty, "link-local"}
{

    yang_name = "permit"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::SourceGuard::Policy::Permit::~Permit()
{
}

bool Native::Ipv6::SourceGuard::Policy::Permit::has_data() const
{
    if (is_presence_container) return true;
    return link_local.is_set;
}

bool Native::Ipv6::SourceGuard::Policy::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_local.yfilter);
}

std::string Native::Ipv6::SourceGuard::Policy::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::SourceGuard::Policy::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_local.is_set || is_set(link_local.yfilter)) leaf_name_data.push_back(link_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::SourceGuard::Policy::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::SourceGuard::Policy::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::SourceGuard::Policy::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-local")
    {
        link_local = value;
        link_local.value_namespace = name_space;
        link_local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::SourceGuard::Policy::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-local")
    {
        link_local.yfilter = yfilter;
    }
}

bool Native::Ipv6::SourceGuard::Policy::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-local")
        return true;
    return false;
}

Native::Ipv6::DestinationGuard::DestinationGuard()
    :
    policy(this, {"destination_guard_policy_name"})
{

    yang_name = "destination-guard"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::DestinationGuard::~DestinationGuard()
{
}

bool Native::Ipv6::DestinationGuard::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::DestinationGuard::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::DestinationGuard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::DestinationGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::DestinationGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::DestinationGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::Ipv6::DestinationGuard::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::DestinationGuard::get_children() const
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

    return _children;
}

void Native::Ipv6::DestinationGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::DestinationGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::DestinationGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Ipv6::DestinationGuard::Policy::Policy()
    :
    destination_guard_policy_name{YType::str, "destination-guard-policy-name"}
        ,
    enforcement(std::make_shared<Native::Ipv6::DestinationGuard::Policy::Enforcement>())
{
    enforcement->parent = this;

    yang_name = "policy"; yang_parent_name = "destination-guard"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::DestinationGuard::Policy::~Policy()
{
}

bool Native::Ipv6::DestinationGuard::Policy::has_data() const
{
    if (is_presence_container) return true;
    return destination_guard_policy_name.is_set
	|| (enforcement !=  nullptr && enforcement->has_data());
}

bool Native::Ipv6::DestinationGuard::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_guard_policy_name.yfilter)
	|| (enforcement !=  nullptr && enforcement->has_operation());
}

std::string Native::Ipv6::DestinationGuard::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/destination-guard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::DestinationGuard::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(destination_guard_policy_name, "destination-guard-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::DestinationGuard::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_guard_policy_name.is_set || is_set(destination_guard_policy_name.yfilter)) leaf_name_data.push_back(destination_guard_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::DestinationGuard::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enforcement")
    {
        if(enforcement == nullptr)
        {
            enforcement = std::make_shared<Native::Ipv6::DestinationGuard::Policy::Enforcement>();
        }
        return enforcement;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::DestinationGuard::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enforcement != nullptr)
    {
        _children["enforcement"] = enforcement;
    }

    return _children;
}

void Native::Ipv6::DestinationGuard::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-guard-policy-name")
    {
        destination_guard_policy_name = value;
        destination_guard_policy_name.value_namespace = name_space;
        destination_guard_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::DestinationGuard::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-guard-policy-name")
    {
        destination_guard_policy_name.yfilter = yfilter;
    }
}

bool Native::Ipv6::DestinationGuard::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enforcement" || name == "destination-guard-policy-name")
        return true;
    return false;
}

Native::Ipv6::DestinationGuard::Policy::Enforcement::Enforcement()
    :
    always{YType::empty, "always"},
    stressed{YType::empty, "stressed"}
{

    yang_name = "enforcement"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::DestinationGuard::Policy::Enforcement::~Enforcement()
{
}

bool Native::Ipv6::DestinationGuard::Policy::Enforcement::has_data() const
{
    if (is_presence_container) return true;
    return always.is_set
	|| stressed.is_set;
}

bool Native::Ipv6::DestinationGuard::Policy::Enforcement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(stressed.yfilter);
}

std::string Native::Ipv6::DestinationGuard::Policy::Enforcement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enforcement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::DestinationGuard::Policy::Enforcement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (stressed.is_set || is_set(stressed.yfilter)) leaf_name_data.push_back(stressed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::DestinationGuard::Policy::Enforcement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::DestinationGuard::Policy::Enforcement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::DestinationGuard::Policy::Enforcement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stressed")
    {
        stressed = value;
        stressed.value_namespace = name_space;
        stressed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::DestinationGuard::Policy::Enforcement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "stressed")
    {
        stressed.yfilter = yfilter;
    }
}

bool Native::Ipv6::DestinationGuard::Policy::Enforcement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "stressed")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Dhcp()
    :
    server(std::make_shared<Native::Ipv6::Dhcp::Server>())
    , guard(std::make_shared<Native::Ipv6::Dhcp::Guard>())
    , pool(this, {"name"})
{
    server->parent = this;
    guard->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Ipv6::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return (server !=  nullptr && server->has_data())
	|| (guard !=  nullptr && guard->has_data());
}

bool Native::Ipv6::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation())
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Ipv6::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dhcp:server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ipv6::Dhcp::Server>();
        }
        return server;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:pool")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Dhcp::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(server != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:server"] = server;
    }

    if(guard != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:guard"] = guard;
    }

    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "guard" || name == "pool")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Server::Server()
    :
    vrf(std::make_shared<Native::Ipv6::Dhcp::Server::Vrf>())
{
    vrf->parent = this;

    yang_name = "server"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Dhcp::Server::~Server()
{
}

bool Native::Ipv6::Dhcp::Server::has_data() const
{
    if (is_presence_container) return true;
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Ipv6::Dhcp::Server::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Ipv6::Dhcp::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Dhcp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Ipv6::Dhcp::Server::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Ipv6::Dhcp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Dhcp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Dhcp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Server::Vrf::Vrf()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "vrf"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Dhcp::Server::Vrf::~Vrf()
{
}

bool Native::Ipv6::Dhcp::Server::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Ipv6::Dhcp::Server::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Ipv6::Dhcp::Server::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/dhcp/Cisco-IOS-XE-dhcp:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Dhcp::Server::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Server::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Server::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Server::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Dhcp::Server::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Server::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Server::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Guard::Guard()
    :
    policy(this, {"dhcp_guard_policy_name"})
{

    yang_name = "guard"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Ipv6::Dhcp::Guard::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Dhcp::Guard::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::Dhcp::Guard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Dhcp::Guard::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Guard::get_children() const
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

    return _children;
}

void Native::Ipv6::Dhcp::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Dhcp::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Dhcp::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Guard::Policy::Policy()
    :
    dhcp_guard_policy_name{YType::str, "dhcp-guard-policy-name"}
        ,
    device_role(std::make_shared<Native::Ipv6::Dhcp::Guard::Policy::DeviceRole>())
    , match(std::make_shared<Native::Ipv6::Dhcp::Guard::Policy::Match>())
{
    device_role->parent = this;
    match->parent = this;

    yang_name = "policy"; yang_parent_name = "guard"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Dhcp::Guard::Policy::~Policy()
{
}

bool Native::Ipv6::Dhcp::Guard::Policy::has_data() const
{
    if (is_presence_container) return true;
    return dhcp_guard_policy_name.is_set
	|| (device_role !=  nullptr && device_role->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::Ipv6::Dhcp::Guard::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp_guard_policy_name.yfilter)
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Ipv6::Dhcp::Guard::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/dhcp/Cisco-IOS-XE-dhcp:guard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Dhcp::Guard::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(dhcp_guard_policy_name, "dhcp-guard-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Guard::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_guard_policy_name.is_set || is_set(dhcp_guard_policy_name.yfilter)) leaf_name_data.push_back(dhcp_guard_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Guard::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-role")
    {
        if(device_role == nullptr)
        {
            device_role = std::make_shared<Native::Ipv6::Dhcp::Guard::Policy::DeviceRole>();
        }
        return device_role;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Ipv6::Dhcp::Guard::Policy::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Guard::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(device_role != nullptr)
    {
        _children["device-role"] = device_role;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::Ipv6::Dhcp::Guard::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp-guard-policy-name")
    {
        dhcp_guard_policy_name = value;
        dhcp_guard_policy_name.value_namespace = name_space;
        dhcp_guard_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Guard::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp-guard-policy-name")
    {
        dhcp_guard_policy_name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Guard::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-role" || name == "match" || name == "dhcp-guard-policy-name")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::DeviceRole()
    :
    server{YType::empty, "server"},
    client{YType::empty, "client"}
{

    yang_name = "device-role"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::~DeviceRole()
{
}

bool Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::has_data() const
{
    if (is_presence_container) return true;
    return server.is_set
	|| client.is_set;
}

bool Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(client.yfilter);
}

std::string Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "client")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Guard::Policy::Match::Match()
    :
    server(std::make_shared<Native::Ipv6::Dhcp::Guard::Policy::Match::Server>())
{
    server->parent = this;

    yang_name = "match"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Guard::Policy::Match::~Match()
{
}

bool Native::Ipv6::Dhcp::Guard::Policy::Match::has_data() const
{
    if (is_presence_container) return true;
    return (server !=  nullptr && server->has_data());
}

bool Native::Ipv6::Dhcp::Guard::Policy::Match::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ipv6::Dhcp::Guard::Policy::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Guard::Policy::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Guard::Policy::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ipv6::Dhcp::Guard::Policy::Match::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Guard::Policy::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::Ipv6::Dhcp::Guard::Policy::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Dhcp::Guard::Policy::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Dhcp::Guard::Policy::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Guard::Policy::Match::Server::Server()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "server"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Guard::Policy::Match::Server::~Server()
{
}

bool Native::Ipv6::Dhcp::Guard::Policy::Match::Server::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set;
}

bool Native::Ipv6::Dhcp::Guard::Policy::Match::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Ipv6::Dhcp::Guard::Policy::Match::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Guard::Policy::Match::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Guard::Policy::Match::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Guard::Policy::Match::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Dhcp::Guard::Policy::Match::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Guard::Policy::Match::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Guard::Policy::Match::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::Pool()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"},
    dns_server{YType::str, "dns-server"},
    domain_name{YType::str, "domain-name"},
    bootfile_url{YType::str, "bootfile-url"}
        ,
    address(std::make_shared<Native::Ipv6::Dhcp::Pool::Address>())
    , import(std::make_shared<Native::Ipv6::Dhcp::Pool::Import>())
    , link_address(this, {"address"})
{
    address->parent = this;
    import->parent = this;

    yang_name = "pool"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Dhcp::Pool::~Pool()
{
}

bool Native::Ipv6::Dhcp::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_address.len(); index++)
    {
        if(link_address[index]->has_data())
            return true;
    }
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| vrf.is_set
	|| domain_name.is_set
	|| bootfile_url.is_set
	|| (address !=  nullptr && address->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::Ipv6::Dhcp::Pool::has_operation() const
{
    for (std::size_t index=0; index<link_address.len(); index++)
    {
        if(link_address[index]->has_operation())
            return true;
    }
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(dns_server.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(bootfile_url.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Ipv6::Dhcp::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Dhcp::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:pool";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (bootfile_url.is_set || is_set(bootfile_url.yfilter)) leaf_name_data.push_back(bootfile_url.get_name_leafdata());

    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ipv6::Dhcp::Pool::Address>();
        }
        return address;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Ipv6::Dhcp::Pool::Import>();
        }
        return import;
    }

    if(child_yang_name == "link-address")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Dhcp::Pool::LinkAddress>();
        ent_->parent = this;
        link_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    count_ = 0;
    for (auto ent_ : link_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Dhcp::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootfile-url")
    {
        bootfile_url = value;
        bootfile_url.value_namespace = name_space;
        bootfile_url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "bootfile-url")
    {
        bootfile_url.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "import" || name == "link-address" || name == "name" || name == "vrf" || name == "dns-server" || name == "domain-name" || name == "bootfile-url")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::Address::Address()
    :
    prefix(this, {"ipv6_address"})
{

    yang_name = "address"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Pool::Address::~Address()
{
}

bool Native::Ipv6::Dhcp::Pool::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Dhcp::Pool::Address::has_operation() const
{
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::Dhcp::Pool::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Pool::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Dhcp::Pool::Address::Prefix>();
        ent_->parent = this;
        prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Pool::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Dhcp::Pool::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Dhcp::Pool::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Dhcp::Pool::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::Address::Prefix::Prefix()
    :
    ipv6_address{YType::str, "ipv6-address"}
        ,
    lifetime(std::make_shared<Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "prefix"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Pool::Address::Prefix::~Prefix()
{
}

bool Native::Ipv6::Dhcp::Pool::Address::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ipv6::Dhcp::Pool::Address::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ipv6::Dhcp::Pool::Address::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    ADD_KEY_TOKEN(ipv6_address, "ipv6-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::Address::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Pool::Address::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Pool::Address::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    return _children;
}

void Native::Ipv6::Dhcp::Pool::Address::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Pool::Address::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Pool::Address::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "ipv6-address")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::Lifetime()
    :
    valid_lifetime{YType::str, "valid-lifetime"},
    preferred_lifetime{YType::str, "preferred-lifetime"}
{

    yang_name = "lifetime"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::~Lifetime()
{
}

bool Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return valid_lifetime.is_set
	|| preferred_lifetime.is_set;
}

bool Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid_lifetime.yfilter)
	|| ydk::is_set(preferred_lifetime.yfilter);
}

std::string Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid_lifetime.is_set || is_set(valid_lifetime.yfilter)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());
    if (preferred_lifetime.is_set || is_set(preferred_lifetime.yfilter)) leaf_name_data.push_back(preferred_lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
        valid_lifetime.value_namespace = name_space;
        valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime = value;
        preferred_lifetime.value_namespace = name_space;
        preferred_lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid-lifetime")
    {
        valid_lifetime.yfilter = yfilter;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid-lifetime" || name == "preferred-lifetime")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::Import::Import()
    :
    all{YType::empty, "all"}
        ,
    interface(std::make_shared<Native::Ipv6::Dhcp::Pool::Import::Interface>())
{
    interface->parent = this;

    yang_name = "import"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Pool::Import::~Import()
{
}

bool Native::Ipv6::Dhcp::Pool::Import::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ipv6::Dhcp::Pool::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ipv6::Dhcp::Pool::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Pool::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ipv6::Dhcp::Pool::Import::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Pool::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Ipv6::Dhcp::Pool::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Pool::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Pool::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "all")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::Import::Interface::Interface()
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
    atm_subinterface(std::make_shared<Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Pool::Import::Interface::~Interface()
{
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::has_data() const
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

bool Native::Ipv6::Dhcp::Pool::Import::Interface::has_operation() const
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

std::string Native::Ipv6::Dhcp::Pool::Import::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::Import::Interface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Pool::Import::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Pool::Import::Interface::get_children() const
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

void Native::Ipv6::Dhcp::Pool::Import::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ipv6::Dhcp::Pool::Import::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ipv6::Dhcp::Pool::Import::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::LinkAddress::LinkAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "link-address"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Dhcp::Pool::LinkAddress::~LinkAddress()
{
}

bool Native::Ipv6::Dhcp::Pool::LinkAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Ipv6::Dhcp::Pool::LinkAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Ipv6::Dhcp::Pool::LinkAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::LinkAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Dhcp::Pool::LinkAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Dhcp::Pool::LinkAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Dhcp::Pool::LinkAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Pool::LinkAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Pool::LinkAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Ipv6::AccessList::AccessList()
    :
    match_local_traffic{YType::empty, "Cisco-IOS-XE-acl:match-local-traffic"}
        ,
    named_acl(this, {"name"})
    , named_rb_acl(this, {"name"})
    , log_update(std::make_shared<Native::Ipv6::AccessList::LogUpdate>())
{
    log_update->parent = this;

    yang_name = "access-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::AccessList::~AccessList()
{
}

bool Native::Ipv6::AccessList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_acl.len(); index++)
    {
        if(named_acl[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<named_rb_acl.len(); index++)
    {
        if(named_rb_acl[index]->has_data())
            return true;
    }
    return match_local_traffic.is_set
	|| (log_update !=  nullptr && log_update->has_data());
}

bool Native::Ipv6::AccessList::has_operation() const
{
    for (std::size_t index=0; index<named_acl.len(); index++)
    {
        if(named_acl[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<named_rb_acl.len(); index++)
    {
        if(named_rb_acl[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(match_local_traffic.yfilter)
	|| (log_update !=  nullptr && log_update->has_operation());
}

std::string Native::Ipv6::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_local_traffic.is_set || is_set(match_local_traffic.yfilter)) leaf_name_data.push_back(match_local_traffic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-acl:named-acl")
    {
        auto ent_ = std::make_shared<Native::Ipv6::AccessList::NamedAcl>();
        ent_->parent = this;
        named_acl.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:named-rb-acl")
    {
        auto ent_ = std::make_shared<Native::Ipv6::AccessList::NamedRbAcl>();
        ent_->parent = this;
        named_rb_acl.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:log-update")
    {
        if(log_update == nullptr)
        {
            log_update = std::make_shared<Native::Ipv6::AccessList::LogUpdate>();
        }
        return log_update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_acl.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : named_rb_acl.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(log_update != nullptr)
    {
        _children["Cisco-IOS-XE-acl:log-update"] = log_update;
    }

    return _children;
}

void Native::Ipv6::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-acl:match-local-traffic")
    {
        match_local_traffic = value;
        match_local_traffic.value_namespace = name_space;
        match_local_traffic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-local-traffic")
    {
        match_local_traffic.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-acl" || name == "named-rb-acl" || name == "log-update" || name == "match-local-traffic")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedAcl::NamedAcl()
    :
    name{YType::str, "name"}
        ,
    access_list_seq_rule(this, {"sequence"})
    , default_(std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default>())
{
    default_->parent = this;

    yang_name = "named-acl"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::AccessList::NamedAcl::~NamedAcl()
{
}

bool Native::Ipv6::AccessList::NamedAcl::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ipv6::AccessList::NamedAcl::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ipv6::AccessList::NamedAcl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::AccessList::NamedAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:named-acl";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
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

void Native::Ipv6::AccessList::NamedAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule" || name == "default" || name == "name")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "named-acl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    source_host{YType::str, "source-host"},
    source_address{YType::str, "source-address"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    source_prefix{YType::str, "source-prefix"},
    any{YType::empty, "any"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    auth{YType::empty, "auth"},
    dest_option{YType::empty, "dest-option"},
    dscp{YType::str, "dscp"},
    flow_label{YType::uint32, "flow-label"},
    fragments{YType::empty, "fragments"},
    hbh{YType::empty, "hbh"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mobility{YType::empty, "mobility"},
    mobility_type{YType::str, "mobility-type"},
    routing{YType::empty, "routing"},
    routing_type{YType::uint8, "routing-type"},
    time_range{YType::str, "time-range"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    msg_type_case{YType::uint8, "msg-type-case"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
{

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| source_host.is_set
	|| source_address.is_set
	|| source_wildcard_bits.is_set
	|| source_prefix.is_set
	|| any.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| auth.is_set
	|| dest_option.is_set
	|| dscp.is_set
	|| flow_label.is_set
	|| fragments.is_set
	|| hbh.is_set
	|| log.is_set
	|| log_input.is_set
	|| mobility.is_set
	|| mobility_type.is_set
	|| routing.is_set
	|| routing_type.is_set
	|| time_range.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| msg_type_case.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set;
}

bool Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(auth.yfilter)
	|| ydk::is_set(dest_option.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(hbh.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(mobility.yfilter)
	|| ydk::is_set(mobility_type.yfilter)
	|| ydk::is_set(routing.yfilter)
	|| ydk::is_set(routing_type.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(msg_type_case.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter);
}

std::string Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.yfilter)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.yfilter)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.yfilter)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.yfilter)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.yfilter)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.yfilter)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth")
    {
        auth = value;
        auth.value_namespace = name_space;
        auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-option")
    {
        dest_option = value;
        dest_option.value_namespace = name_space;
        dest_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hbh")
    {
        hbh = value;
        hbh.value_namespace = name_space;
        hbh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility")
    {
        mobility = value;
        mobility.value_namespace = name_space;
        mobility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility-type")
    {
        mobility_type = value;
        mobility_type.value_namespace = name_space;
        mobility_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-type")
    {
        routing_type = value;
        routing_type.value_namespace = name_space;
        routing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
        msg_type_case.value_namespace = name_space;
        msg_type_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
    if(value_path == "dest-option")
    {
        dest_option.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "hbh")
    {
        hbh.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "mobility")
    {
        mobility.yfilter = yfilter;
    }
    if(value_path == "mobility-type")
    {
        mobility_type.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
    if(value_path == "routing-type")
    {
        routing_type.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "protocol" || name == "source-host" || name == "source-address" || name == "source-wildcard-bits" || name == "source-prefix" || name == "any" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "auth" || name == "dest-option" || name == "dscp" || name == "flow-label" || name == "fragments" || name == "hbh" || name == "log" || name == "log-input" || name == "mobility" || name == "mobility-type" || name == "routing" || name == "routing-type" || name == "time-range" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "msg-type-case" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedAcl::Default::Default()
    :
    access_list_seq_rule(this, {"sequence"})
{

    yang_name = "default"; yang_parent_name = "named-acl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::AccessList::NamedAcl::Default::~Default()
{
}

bool Native::Ipv6::AccessList::NamedAcl::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::AccessList::NamedAcl::Default::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::AccessList::NamedAcl::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedAcl::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedAcl::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedAcl::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::AccessList::NamedAcl::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::AccessList::NamedAcl::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::AccessList::NamedAcl::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    source_host{YType::str, "source-host"},
    source_address{YType::str, "source-address"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    source_prefix{YType::str, "source-prefix"},
    any{YType::empty, "any"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    auth{YType::empty, "auth"},
    dest_option{YType::empty, "dest-option"},
    dscp{YType::str, "dscp"},
    flow_label{YType::uint32, "flow-label"},
    fragments{YType::empty, "fragments"},
    hbh{YType::empty, "hbh"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mobility{YType::empty, "mobility"},
    mobility_type{YType::str, "mobility-type"},
    routing{YType::empty, "routing"},
    routing_type{YType::uint8, "routing-type"},
    time_range{YType::str, "time-range"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    msg_type_case{YType::uint8, "msg-type-case"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
{

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| source_host.is_set
	|| source_address.is_set
	|| source_wildcard_bits.is_set
	|| source_prefix.is_set
	|| any.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| auth.is_set
	|| dest_option.is_set
	|| dscp.is_set
	|| flow_label.is_set
	|| fragments.is_set
	|| hbh.is_set
	|| log.is_set
	|| log_input.is_set
	|| mobility.is_set
	|| mobility_type.is_set
	|| routing.is_set
	|| routing_type.is_set
	|| time_range.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| msg_type_case.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set;
}

bool Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(auth.yfilter)
	|| ydk::is_set(dest_option.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(hbh.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(mobility.yfilter)
	|| ydk::is_set(mobility_type.yfilter)
	|| ydk::is_set(routing.yfilter)
	|| ydk::is_set(routing_type.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(msg_type_case.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter);
}

std::string Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.yfilter)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.yfilter)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.yfilter)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.yfilter)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.yfilter)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.yfilter)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth")
    {
        auth = value;
        auth.value_namespace = name_space;
        auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-option")
    {
        dest_option = value;
        dest_option.value_namespace = name_space;
        dest_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hbh")
    {
        hbh = value;
        hbh.value_namespace = name_space;
        hbh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility")
    {
        mobility = value;
        mobility.value_namespace = name_space;
        mobility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility-type")
    {
        mobility_type = value;
        mobility_type.value_namespace = name_space;
        mobility_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-type")
    {
        routing_type = value;
        routing_type.value_namespace = name_space;
        routing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
        msg_type_case.value_namespace = name_space;
        msg_type_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
    if(value_path == "dest-option")
    {
        dest_option.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "hbh")
    {
        hbh.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "mobility")
    {
        mobility.yfilter = yfilter;
    }
    if(value_path == "mobility-type")
    {
        mobility_type.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
    if(value_path == "routing-type")
    {
        routing_type.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "protocol" || name == "source-host" || name == "source-address" || name == "source-wildcard-bits" || name == "source-prefix" || name == "any" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "auth" || name == "dest-option" || name == "dscp" || name == "flow-label" || name == "fragments" || name == "hbh" || name == "log" || name == "log-input" || name == "mobility" || name == "mobility-type" || name == "routing" || name == "routing-type" || name == "time-range" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "msg-type-case" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedRbAcl::NamedRbAcl()
    :
    name{YType::str, "name"},
    role_based{YType::empty, "role-based"}
        ,
    access_list_seq_rule(this, {"sequence"})
    , default_(std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default>())
{
    default_->parent = this;

    yang_name = "named-rb-acl"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::AccessList::NamedRbAcl::~NamedRbAcl()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| role_based.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ipv6::AccessList::NamedRbAcl::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(role_based.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ipv6::AccessList::NamedRbAcl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::AccessList::NamedRbAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:named-rb-acl";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedRbAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (role_based.is_set || is_set(role_based.yfilter)) leaf_name_data.push_back(role_based.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedRbAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedRbAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
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

void Native::Ipv6::AccessList::NamedRbAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-based")
    {
        role_based = value;
        role_based.value_namespace = name_space;
        role_based.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedRbAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "role-based")
    {
        role_based.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedRbAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule" || name == "default" || name == "name" || name == "role-based")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "named-rb-acl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    source_host{YType::str, "source-host"},
    source_address{YType::str, "source-address"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    source_prefix{YType::str, "source-prefix"},
    any{YType::empty, "any"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    auth{YType::empty, "auth"},
    dest_option{YType::empty, "dest-option"},
    dscp{YType::str, "dscp"},
    flow_label{YType::uint32, "flow-label"},
    fragments{YType::empty, "fragments"},
    hbh{YType::empty, "hbh"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mobility{YType::empty, "mobility"},
    mobility_type{YType::str, "mobility-type"},
    routing{YType::empty, "routing"},
    routing_type{YType::uint8, "routing-type"},
    time_range{YType::str, "time-range"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    msg_type_case{YType::uint8, "msg-type-case"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
{

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| source_host.is_set
	|| source_address.is_set
	|| source_wildcard_bits.is_set
	|| source_prefix.is_set
	|| any.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| auth.is_set
	|| dest_option.is_set
	|| dscp.is_set
	|| flow_label.is_set
	|| fragments.is_set
	|| hbh.is_set
	|| log.is_set
	|| log_input.is_set
	|| mobility.is_set
	|| mobility_type.is_set
	|| routing.is_set
	|| routing_type.is_set
	|| time_range.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| msg_type_case.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set;
}

bool Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(auth.yfilter)
	|| ydk::is_set(dest_option.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(hbh.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(mobility.yfilter)
	|| ydk::is_set(mobility_type.yfilter)
	|| ydk::is_set(routing.yfilter)
	|| ydk::is_set(routing_type.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(msg_type_case.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter);
}

std::string Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.yfilter)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.yfilter)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.yfilter)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.yfilter)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.yfilter)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.yfilter)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth")
    {
        auth = value;
        auth.value_namespace = name_space;
        auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-option")
    {
        dest_option = value;
        dest_option.value_namespace = name_space;
        dest_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hbh")
    {
        hbh = value;
        hbh.value_namespace = name_space;
        hbh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility")
    {
        mobility = value;
        mobility.value_namespace = name_space;
        mobility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility-type")
    {
        mobility_type = value;
        mobility_type.value_namespace = name_space;
        mobility_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-type")
    {
        routing_type = value;
        routing_type.value_namespace = name_space;
        routing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
        msg_type_case.value_namespace = name_space;
        msg_type_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
    if(value_path == "dest-option")
    {
        dest_option.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "hbh")
    {
        hbh.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "mobility")
    {
        mobility.yfilter = yfilter;
    }
    if(value_path == "mobility-type")
    {
        mobility_type.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
    if(value_path == "routing-type")
    {
        routing_type.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "protocol" || name == "source-host" || name == "source-address" || name == "source-wildcard-bits" || name == "source-prefix" || name == "any" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "auth" || name == "dest-option" || name == "dscp" || name == "flow-label" || name == "fragments" || name == "hbh" || name == "log" || name == "log-input" || name == "mobility" || name == "mobility-type" || name == "routing" || name == "routing-type" || name == "time-range" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "msg-type-case" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedRbAcl::Default::Default()
    :
    access_list_seq_rule(this, {"sequence"})
{

    yang_name = "default"; yang_parent_name = "named-rb-acl"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::AccessList::NamedRbAcl::Default::~Default()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.len(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::AccessList::NamedRbAcl::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedRbAcl::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedRbAcl::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        auto ent_ = std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule>();
        ent_->parent = this;
        access_list_seq_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedRbAcl::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_seq_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::AccessList::NamedRbAcl::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::AccessList::NamedRbAcl::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
        ,
    ace_rule(std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_rule != nullptr)
    {
        _children["ace-rule"] = ace_rule;
    }

    return _children;
}

void Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::AceRule()
    :
    action{YType::enumeration, "action"},
    protocol{YType::str, "protocol"},
    source_host{YType::str, "source-host"},
    source_address{YType::str, "source-address"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    source_prefix{YType::str, "source-prefix"},
    any{YType::empty, "any"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    destination_host{YType::str, "destination-host"},
    destination_address{YType::str, "destination-address"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_any{YType::empty, "destination-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    auth{YType::empty, "auth"},
    dest_option{YType::empty, "dest-option"},
    dscp{YType::str, "dscp"},
    flow_label{YType::uint32, "flow-label"},
    fragments{YType::empty, "fragments"},
    hbh{YType::empty, "hbh"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mobility{YType::empty, "mobility"},
    mobility_type{YType::str, "mobility-type"},
    routing{YType::empty, "routing"},
    routing_type{YType::uint8, "routing-type"},
    time_range{YType::str, "time-range"},
    ack{YType::empty, "ack"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"},
    established{YType::empty, "established"},
    msg_type_case{YType::uint8, "msg-type-case"},
    msg_code{YType::uint8, "msg-code"},
    named_msg_type{YType::enumeration, "named-msg-type"}
{

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| protocol.is_set
	|| source_host.is_set
	|| source_address.is_set
	|| source_wildcard_bits.is_set
	|| source_prefix.is_set
	|| any.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| destination_host.is_set
	|| destination_address.is_set
	|| destination_wildcard_bits.is_set
	|| destination_prefix.is_set
	|| destination_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| auth.is_set
	|| dest_option.is_set
	|| dscp.is_set
	|| flow_label.is_set
	|| fragments.is_set
	|| hbh.is_set
	|| log.is_set
	|| log_input.is_set
	|| mobility.is_set
	|| mobility_type.is_set
	|| routing.is_set
	|| routing_type.is_set
	|| time_range.is_set
	|| ack.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set
	|| established.is_set
	|| msg_type_case.is_set
	|| msg_code.is_set
	|| named_msg_type.is_set;
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(auth.yfilter)
	|| ydk::is_set(dest_option.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(hbh.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(mobility.yfilter)
	|| ydk::is_set(mobility_type.yfilter)
	|| ydk::is_set(routing.yfilter)
	|| ydk::is_set(routing_type.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(msg_type_case.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(named_msg_type.yfilter);
}

std::string Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.yfilter)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.yfilter)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.yfilter)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.yfilter)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.yfilter)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.yfilter)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth")
    {
        auth = value;
        auth.value_namespace = name_space;
        auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-option")
    {
        dest_option = value;
        dest_option.value_namespace = name_space;
        dest_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hbh")
    {
        hbh = value;
        hbh.value_namespace = name_space;
        hbh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility")
    {
        mobility = value;
        mobility.value_namespace = name_space;
        mobility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility-type")
    {
        mobility_type = value;
        mobility_type.value_namespace = name_space;
        mobility_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-type")
    {
        routing_type = value;
        routing_type.value_namespace = name_space;
        routing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
        msg_type_case.value_namespace = name_space;
        msg_type_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
    if(value_path == "dest-option")
    {
        dest_option.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "hbh")
    {
        hbh.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "mobility")
    {
        mobility.yfilter = yfilter;
    }
    if(value_path == "mobility-type")
    {
        mobility_type.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
    if(value_path == "routing-type")
    {
        routing_type.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "protocol" || name == "source-host" || name == "source-address" || name == "source-wildcard-bits" || name == "source-prefix" || name == "any" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "destination-host" || name == "destination-address" || name == "destination-wildcard-bits" || name == "destination-prefix" || name == "destination-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "auth" || name == "dest-option" || name == "dscp" || name == "flow-label" || name == "fragments" || name == "hbh" || name == "log" || name == "log-input" || name == "mobility" || name == "mobility-type" || name == "routing" || name == "routing-type" || name == "time-range" || name == "ack" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg" || name == "established" || name == "msg-type-case" || name == "msg-code" || name == "named-msg-type")
        return true;
    return false;
}

Native::Ipv6::AccessList::LogUpdate::LogUpdate()
    :
    threshold{YType::uint64, "threshold"}
{

    yang_name = "log-update"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::AccessList::LogUpdate::~LogUpdate()
{
}

bool Native::Ipv6::AccessList::LogUpdate::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Ipv6::AccessList::LogUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ipv6::AccessList::LogUpdate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::AccessList::LogUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:log-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::LogUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::AccessList::LogUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::AccessList::LogUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::AccessList::LogUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::LogUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::LogUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Ipv6::Multicast::Multicast()
    :
    vrf{YType::str, "Cisco-IOS-XE-multicast:vrf"}
        ,
    rpf(std::make_shared<Native::Ipv6::Multicast::Rpf>())
{
    rpf->parent = this;

    yang_name = "multicast"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Multicast::~Multicast()
{
}

bool Native::Ipv6::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| (rpf !=  nullptr && rpf->has_data());
}

bool Native::Ipv6::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (rpf !=  nullptr && rpf->has_operation());
}

std::string Native::Ipv6::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-multicast:rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Native::Ipv6::Multicast::Rpf>();
        }
        return rpf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rpf != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:rpf"] = rpf;
    }

    return _children;
}

void Native::Ipv6::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-multicast:vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ipv6::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf" || name == "vrf")
        return true;
    return false;
}

Native::Ipv6::Multicast::Rpf::Rpf()
    :
    use_bgp{YType::empty, "use-bgp"}
        ,
    backoff(std::make_shared<Native::Ipv6::Multicast::Rpf::Backoff>())
{
    backoff->parent = this;

    yang_name = "rpf"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Multicast::Rpf::~Rpf()
{
}

bool Native::Ipv6::Multicast::Rpf::has_data() const
{
    if (is_presence_container) return true;
    return use_bgp.is_set
	|| (backoff !=  nullptr && backoff->has_data());
}

bool Native::Ipv6::Multicast::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_bgp.yfilter)
	|| (backoff !=  nullptr && backoff->has_operation());
}

std::string Native::Ipv6::Multicast::Rpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Multicast::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Multicast::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_bgp.is_set || is_set(use_bgp.yfilter)) leaf_name_data.push_back(use_bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Multicast::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::Ipv6::Multicast::Rpf::Backoff>();
        }
        return backoff;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Multicast::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backoff != nullptr)
    {
        _children["backoff"] = backoff;
    }

    return _children;
}

void Native::Ipv6::Multicast::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-bgp")
    {
        use_bgp = value;
        use_bgp.value_namespace = name_space;
        use_bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Multicast::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-bgp")
    {
        use_bgp.yfilter = yfilter;
    }
}

bool Native::Ipv6::Multicast::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff" || name == "use-bgp")
        return true;
    return false;
}

Native::Ipv6::Multicast::Rpf::Backoff::Backoff()
    :
    initial_delay{YType::uint16, "initial-delay"},
    max_delay{YType::uint16, "max-delay"}
{

    yang_name = "backoff"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Multicast::Rpf::Backoff::~Backoff()
{
}

bool Native::Ipv6::Multicast::Rpf::Backoff::has_data() const
{
    if (is_presence_container) return true;
    return initial_delay.is_set
	|| max_delay.is_set;
}

bool Native::Ipv6::Multicast::Rpf::Backoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_delay.yfilter)
	|| ydk::is_set(max_delay.yfilter);
}

std::string Native::Ipv6::Multicast::Rpf::Backoff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/multicast/Cisco-IOS-XE-multicast:rpf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Multicast::Rpf::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Multicast::Rpf::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_delay.is_set || is_set(initial_delay.yfilter)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Multicast::Rpf::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Multicast::Rpf::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Multicast::Rpf::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-delay")
    {
        initial_delay = value;
        initial_delay.value_namespace = name_space;
        initial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Multicast::Rpf::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-delay")
    {
        initial_delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
}

bool Native::Ipv6::Multicast::Rpf::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-delay" || name == "max-delay")
        return true;
    return false;
}

Native::Ipv6::Cef::Cef()
    :
    distributed{YType::empty, "Cisco-IOS-XE-cef:distributed"}
        ,
    accounting(std::make_shared<Native::Ipv6::Cef::Accounting>())
    , optimize(std::make_shared<Native::Ipv6::Cef::Optimize>())
    , traffic_statistics(std::make_shared<Native::Ipv6::Cef::TrafficStatistics>())
    , load_sharing(std::make_shared<Native::Ipv6::Cef::LoadSharing>())
{
    accounting->parent = this;
    optimize->parent = this;
    traffic_statistics->parent = this;
    load_sharing->parent = this;

    yang_name = "cef"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ipv6::Cef::~Cef()
{
}

bool Native::Ipv6::Cef::has_data() const
{
    if (is_presence_container) return true;
    return distributed.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (optimize !=  nullptr && optimize->has_data())
	|| (traffic_statistics !=  nullptr && traffic_statistics->has_data())
	|| (load_sharing !=  nullptr && load_sharing->has_data());
}

bool Native::Ipv6::Cef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distributed.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (optimize !=  nullptr && optimize->has_operation())
	|| (traffic_statistics !=  nullptr && traffic_statistics->has_operation())
	|| (load_sharing !=  nullptr && load_sharing->has_operation());
}

std::string Native::Ipv6::Cef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cef";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-cef:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Ipv6::Cef::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "Cisco-IOS-XE-cef:optimize")
    {
        if(optimize == nullptr)
        {
            optimize = std::make_shared<Native::Ipv6::Cef::Optimize>();
        }
        return optimize;
    }

    if(child_yang_name == "Cisco-IOS-XE-cef:traffic-statistics")
    {
        if(traffic_statistics == nullptr)
        {
            traffic_statistics = std::make_shared<Native::Ipv6::Cef::TrafficStatistics>();
        }
        return traffic_statistics;
    }

    if(child_yang_name == "Cisco-IOS-XE-cef:load-sharing")
    {
        if(load_sharing == nullptr)
        {
            load_sharing = std::make_shared<Native::Ipv6::Cef::LoadSharing>();
        }
        return load_sharing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["Cisco-IOS-XE-cef:accounting"] = accounting;
    }

    if(optimize != nullptr)
    {
        _children["Cisco-IOS-XE-cef:optimize"] = optimize;
    }

    if(traffic_statistics != nullptr)
    {
        _children["Cisco-IOS-XE-cef:traffic-statistics"] = traffic_statistics;
    }

    if(load_sharing != nullptr)
    {
        _children["Cisco-IOS-XE-cef:load-sharing"] = load_sharing;
    }

    return _children;
}

void Native::Ipv6::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-cef:distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "optimize" || name == "traffic-statistics" || name == "load-sharing" || name == "distributed")
        return true;
    return false;
}

Native::Ipv6::Cef::Accounting::Accounting()
    :
    per_prefix{YType::empty, "per-prefix"},
    non_recursive{YType::empty, "non-recursive"},
    prefix_length{YType::empty, "prefix-length"},
    load_balance_hash{YType::empty, "load-balance-hash"}
{

    yang_name = "accounting"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Cef::Accounting::~Accounting()
{
}

bool Native::Ipv6::Cef::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return per_prefix.is_set
	|| non_recursive.is_set
	|| prefix_length.is_set
	|| load_balance_hash.is_set;
}

bool Native::Ipv6::Cef::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(non_recursive.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(load_balance_hash.yfilter);
}

std::string Native::Ipv6::Cef::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (non_recursive.is_set || is_set(non_recursive.yfilter)) leaf_name_data.push_back(non_recursive.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (load_balance_hash.is_set || is_set(load_balance_hash.yfilter)) leaf_name_data.push_back(load_balance_hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Cef::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-recursive")
    {
        non_recursive = value;
        non_recursive.value_namespace = name_space;
        non_recursive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash")
    {
        load_balance_hash = value;
        load_balance_hash.value_namespace = name_space;
        load_balance_hash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "non-recursive")
    {
        non_recursive.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash")
    {
        load_balance_hash.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-prefix" || name == "non-recursive" || name == "prefix-length" || name == "load-balance-hash")
        return true;
    return false;
}

Native::Ipv6::Cef::Optimize::Optimize()
    :
    neighbor(std::make_shared<Native::Ipv6::Cef::Optimize::Neighbor>())
{
    neighbor->parent = this;

    yang_name = "optimize"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Cef::Optimize::~Optimize()
{
}

bool Native::Ipv6::Cef::Optimize::has_data() const
{
    if (is_presence_container) return true;
    return (neighbor !=  nullptr && neighbor->has_data());
}

bool Native::Ipv6::Cef::Optimize::has_operation() const
{
    return is_set(yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string Native::Ipv6::Cef::Optimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::Optimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:optimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::Optimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::Optimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Ipv6::Cef::Optimize::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::Optimize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor != nullptr)
    {
        _children["neighbor"] = neighbor;
    }

    return _children;
}

void Native::Ipv6::Cef::Optimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Cef::Optimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Cef::Optimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Ipv6::Cef::Optimize::Neighbor::Neighbor()
    :
    resolution{YType::empty, "resolution"}
{

    yang_name = "neighbor"; yang_parent_name = "optimize"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Cef::Optimize::Neighbor::~Neighbor()
{
}

bool Native::Ipv6::Cef::Optimize::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return resolution.is_set;
}

bool Native::Ipv6::Cef::Optimize::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(resolution.yfilter);
}

std::string Native::Ipv6::Cef::Optimize::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/Cisco-IOS-XE-cef:optimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::Optimize::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::Optimize::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resolution.is_set || is_set(resolution.yfilter)) leaf_name_data.push_back(resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::Optimize::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::Optimize::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Cef::Optimize::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resolution")
    {
        resolution = value;
        resolution.value_namespace = name_space;
        resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::Optimize::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resolution")
    {
        resolution.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::Optimize::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resolution")
        return true;
    return false;
}

Native::Ipv6::Cef::TrafficStatistics::TrafficStatistics()
    :
    load_interval{YType::uint16, "load-interval"},
    update_rate{YType::uint16, "update-rate"}
{

    yang_name = "traffic-statistics"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Cef::TrafficStatistics::~TrafficStatistics()
{
}

bool Native::Ipv6::Cef::TrafficStatistics::has_data() const
{
    if (is_presence_container) return true;
    return load_interval.is_set
	|| update_rate.is_set;
}

bool Native::Ipv6::Cef::TrafficStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(update_rate.yfilter);
}

std::string Native::Ipv6::Cef::TrafficStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::TrafficStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:traffic-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::TrafficStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::TrafficStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::TrafficStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Cef::TrafficStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::TrafficStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::TrafficStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-interval" || name == "update-rate")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::LoadSharing()
    :
    algorithm(std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm>())
    , key_control(std::make_shared<Native::Ipv6::Cef::LoadSharing::KeyControl>())
{
    algorithm->parent = this;
    key_control->parent = this;

    yang_name = "load-sharing"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Cef::LoadSharing::~LoadSharing()
{
}

bool Native::Ipv6::Cef::LoadSharing::has_data() const
{
    if (is_presence_container) return true;
    return (algorithm !=  nullptr && algorithm->has_data())
	|| (key_control !=  nullptr && key_control->has_data());
}

bool Native::Ipv6::Cef::LoadSharing::has_operation() const
{
    return is_set(yfilter)
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (key_control !=  nullptr && key_control->has_operation());
}

std::string Native::Ipv6::Cef::LoadSharing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::LoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:load-sharing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::LoadSharing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::LoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "key-control")
    {
        if(key_control == nullptr)
        {
            key_control = std::make_shared<Native::Ipv6::Cef::LoadSharing::KeyControl>();
        }
        return key_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::LoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(algorithm != nullptr)
    {
        _children["algorithm"] = algorithm;
    }

    if(key_control != nullptr)
    {
        _children["key-control"] = key_control;
    }

    return _children;
}

void Native::Ipv6::Cef::LoadSharing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Cef::LoadSharing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Cef::LoadSharing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "key-control")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::Algorithm()
    :
    tunnel(std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel>())
    , universal(std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::Universal>())
    , original(std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::Original>())
    , include_ports(nullptr) // presence node
{
    tunnel->parent = this;
    universal->parent = this;
    original->parent = this;

    yang_name = "algorithm"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Cef::LoadSharing::Algorithm::~Algorithm()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel !=  nullptr && tunnel->has_data())
	|| (universal !=  nullptr && universal->has_data())
	|| (original !=  nullptr && original->has_data())
	|| (include_ports !=  nullptr && include_ports->has_data());
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (universal !=  nullptr && universal->has_operation())
	|| (original !=  nullptr && original->has_operation())
	|| (include_ports !=  nullptr && include_ports->has_operation());
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/Cisco-IOS-XE-cef:load-sharing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::LoadSharing::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "universal")
    {
        if(universal == nullptr)
        {
            universal = std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::Universal>();
        }
        return universal;
    }

    if(child_yang_name == "original")
    {
        if(original == nullptr)
        {
            original = std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::Original>();
        }
        return original;
    }

    if(child_yang_name == "include-ports")
    {
        if(include_ports == nullptr)
        {
            include_ports = std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts>();
        }
        return include_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    if(universal != nullptr)
    {
        _children["universal"] = universal;
    }

    if(original != nullptr)
    {
        _children["original"] = original;
    }

    if(include_ports != nullptr)
    {
        _children["include-ports"] = include_ports;
    }

    return _children;
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "universal" || name == "original" || name == "include-ports")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::Tunnel()
    :
    tunnel{YType::empty, "tunnel"},
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "tunnel"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::~Tunnel()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel.is_set
	|| fixed_id.is_set;
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "fixed-id")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::Universal()
    :
    universal{YType::empty, "universal"},
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "universal"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::~Universal()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::has_data() const
{
    if (is_presence_container) return true;
    return universal.is_set
	|| fixed_id.is_set;
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(universal.yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "universal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (universal.is_set || is_set(universal.yfilter)) leaf_name_data.push_back(universal.get_name_leafdata());
    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "universal")
    {
        universal = value;
        universal.value_namespace = name_space;
        universal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "universal")
    {
        universal.yfilter = yfilter;
    }
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "universal" || name == "fixed-id")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::Original::Original()
    :
    original{YType::empty, "original"}
{

    yang_name = "original"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Cef::LoadSharing::Algorithm::Original::~Original()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Original::has_data() const
{
    if (is_presence_container) return true;
    return original.is_set;
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Original::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(original.yfilter);
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::Original::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::Original::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::LoadSharing::Algorithm::Original::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (original.is_set || is_set(original.yfilter)) leaf_name_data.push_back(original.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::Original::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::Original::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::Original::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "original")
    {
        original = value;
        original.value_namespace = name_space;
        original.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::Original::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "original")
    {
        original.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Original::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "original")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::IncludePorts()
    :
    destination(nullptr) // presence node
    , source(nullptr) // presence node
{

    yang_name = "include-ports"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::~IncludePorts()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::get_children() const
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

void Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::Destination()
    :
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "destination"; yang_parent_name = "include-ports"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::~Destination()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_data() const
{
    if (is_presence_container) return true;
    return fixed_id.is_set;
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Source()
    :
    fixed_id{YType::str, "fixed-id"}
        ,
    destination(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "include-ports"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::~Source()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_data() const
{
    if (is_presence_container) return true;
    return fixed_id.is_set
	|| (destination !=  nullptr && destination->has_data());
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "fixed-id")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Destination()
    :
    fixed_id{YType::str, "fixed-id"}
        ,
    gtp(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::~Destination()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_data() const
{
    if (is_presence_container) return true;
    return fixed_id.is_set
	|| (gtp !=  nullptr && gtp->has_data());
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| (gtp !=  nullptr && gtp->has_operation());
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gtp")
    {
        if(gtp == nullptr)
        {
            gtp = std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp>();
        }
        return gtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gtp != nullptr)
    {
        _children["gtp"] = gtp;
    }

    return _children;
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gtp" || name == "fixed-id")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::Gtp()
    :
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "gtp"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::~Gtp()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_data() const
{
    if (is_presence_container) return true;
    return fixed_id.is_set;
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/source/destination/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::KeyControl::KeyControl()
{

    yang_name = "key-control"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Cef::LoadSharing::KeyControl::~KeyControl()
{
}

bool Native::Ipv6::Cef::LoadSharing::KeyControl::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Ipv6::Cef::LoadSharing::KeyControl::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ipv6::Cef::LoadSharing::KeyControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/Cisco-IOS-XE-cef:load-sharing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Cef::LoadSharing::KeyControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Cef::LoadSharing::KeyControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Cef::LoadSharing::KeyControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Cef::LoadSharing::KeyControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Cef::LoadSharing::KeyControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Cef::LoadSharing::KeyControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Cef::LoadSharing::KeyControl::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ipv6::Nd::Nd()
    :
    inspection(std::make_shared<Native::Ipv6::Nd::Inspection>())
    , cache(std::make_shared<Native::Ipv6::Nd::Cache>())
    , raguard(std::make_shared<Native::Ipv6::Nd::Raguard>())
    , default_route(std::make_shared<Native::Ipv6::Nd::DefaultRoute>())
    , suppress(std::make_shared<Native::Ipv6::Nd::Suppress>())
{
    inspection->parent = this;
    cache->parent = this;
    raguard->parent = this;
    default_route->parent = this;
    suppress->parent = this;

    yang_name = "nd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Nd::~Nd()
{
}

bool Native::Ipv6::Nd::has_data() const
{
    if (is_presence_container) return true;
    return (inspection !=  nullptr && inspection->has_data())
	|| (cache !=  nullptr && cache->has_data())
	|| (raguard !=  nullptr && raguard->has_data())
	|| (default_route !=  nullptr && default_route->has_data())
	|| (suppress !=  nullptr && suppress->has_data());
}

bool Native::Ipv6::Nd::has_operation() const
{
    return is_set(yfilter)
	|| (inspection !=  nullptr && inspection->has_operation())
	|| (cache !=  nullptr && cache->has_operation())
	|| (raguard !=  nullptr && raguard->has_operation())
	|| (default_route !=  nullptr && default_route->has_operation())
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Ipv6::Nd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-nd:inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Ipv6::Nd::Inspection>();
        }
        return inspection;
    }

    if(child_yang_name == "Cisco-IOS-XE-nd:cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Ipv6::Nd::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "Cisco-IOS-XE-nd:raguard")
    {
        if(raguard == nullptr)
        {
            raguard = std::make_shared<Native::Ipv6::Nd::Raguard>();
        }
        return raguard;
    }

    if(child_yang_name == "Cisco-IOS-XE-nd:default-route")
    {
        if(default_route == nullptr)
        {
            default_route = std::make_shared<Native::Ipv6::Nd::DefaultRoute>();
        }
        return default_route;
    }

    if(child_yang_name == "Cisco-IOS-XE-nd:suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Ipv6::Nd::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inspection != nullptr)
    {
        _children["Cisco-IOS-XE-nd:inspection"] = inspection;
    }

    if(cache != nullptr)
    {
        _children["Cisco-IOS-XE-nd:cache"] = cache;
    }

    if(raguard != nullptr)
    {
        _children["Cisco-IOS-XE-nd:raguard"] = raguard;
    }

    if(default_route != nullptr)
    {
        _children["Cisco-IOS-XE-nd:default-route"] = default_route;
    }

    if(suppress != nullptr)
    {
        _children["Cisco-IOS-XE-nd:suppress"] = suppress;
    }

    return _children;
}

void Native::Ipv6::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspection" || name == "cache" || name == "raguard" || name == "default-route" || name == "suppress")
        return true;
    return false;
}

Native::Ipv6::Nd::Inspection::Inspection()
    :
    policy(this, {"name_nd_inspection_policy"})
{

    yang_name = "inspection"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Nd::Inspection::~Inspection()
{
}

bool Native::Ipv6::Nd::Inspection::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Nd::Inspection::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::Nd::Inspection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Nd::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Nd::Inspection::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Inspection::get_children() const
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

    return _children;
}

void Native::Ipv6::Nd::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Nd::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Nd::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Ipv6::Nd::Inspection::Policy::Policy()
    :
    name_nd_inspection_policy{YType::str, "name-nd-inspection-policy"},
    drop_unsecure{YType::empty, "drop-unsecure"},
    trusted_port{YType::empty, "trusted-port"}
        ,
    device_role(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::DeviceRole>())
    , limit(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Limit>())
    , sec_level(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::SecLevel>())
    , tracking(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Tracking>())
    , validate(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Validate>())
{
    device_role->parent = this;
    limit->parent = this;
    sec_level->parent = this;
    tracking->parent = this;
    validate->parent = this;

    yang_name = "policy"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Nd::Inspection::Policy::~Policy()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::has_data() const
{
    if (is_presence_container) return true;
    return name_nd_inspection_policy.is_set
	|| drop_unsecure.is_set
	|| trusted_port.is_set
	|| (device_role !=  nullptr && device_role->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (sec_level !=  nullptr && sec_level->has_data())
	|| (tracking !=  nullptr && tracking->has_data())
	|| (validate !=  nullptr && validate->has_data());
}

bool Native::Ipv6::Nd::Inspection::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_nd_inspection_policy.yfilter)
	|| ydk::is_set(drop_unsecure.yfilter)
	|| ydk::is_set(trusted_port.yfilter)
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (sec_level !=  nullptr && sec_level->has_operation())
	|| (tracking !=  nullptr && tracking->has_operation())
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Ipv6::Nd::Inspection::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/Cisco-IOS-XE-nd:inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Nd::Inspection::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(name_nd_inspection_policy, "name-nd-inspection-policy");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Inspection::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_nd_inspection_policy.is_set || is_set(name_nd_inspection_policy.yfilter)) leaf_name_data.push_back(name_nd_inspection_policy.get_name_leafdata());
    if (drop_unsecure.is_set || is_set(drop_unsecure.yfilter)) leaf_name_data.push_back(drop_unsecure.get_name_leafdata());
    if (trusted_port.is_set || is_set(trusted_port.yfilter)) leaf_name_data.push_back(trusted_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Inspection::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-role")
    {
        if(device_role == nullptr)
        {
            device_role = std::make_shared<Native::Ipv6::Nd::Inspection::Policy::DeviceRole>();
        }
        return device_role;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "sec-level")
    {
        if(sec_level == nullptr)
        {
            sec_level = std::make_shared<Native::Ipv6::Nd::Inspection::Policy::SecLevel>();
        }
        return sec_level;
    }

    if(child_yang_name == "tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Tracking>();
        }
        return tracking;
    }

    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Inspection::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(device_role != nullptr)
    {
        _children["device-role"] = device_role;
    }

    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    if(sec_level != nullptr)
    {
        _children["sec-level"] = sec_level;
    }

    if(tracking != nullptr)
    {
        _children["tracking"] = tracking;
    }

    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Ipv6::Nd::Inspection::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-nd-inspection-policy")
    {
        name_nd_inspection_policy = value;
        name_nd_inspection_policy.value_namespace = name_space;
        name_nd_inspection_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-unsecure")
    {
        drop_unsecure = value;
        drop_unsecure.value_namespace = name_space;
        drop_unsecure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted-port")
    {
        trusted_port = value;
        trusted_port.value_namespace = name_space;
        trusted_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Inspection::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-nd-inspection-policy")
    {
        name_nd_inspection_policy.yfilter = yfilter;
    }
    if(value_path == "drop-unsecure")
    {
        drop_unsecure.yfilter = yfilter;
    }
    if(value_path == "trusted-port")
    {
        trusted_port.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Inspection::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-role" || name == "limit" || name == "sec-level" || name == "tracking" || name == "validate" || name == "name-nd-inspection-policy" || name == "drop-unsecure" || name == "trusted-port")
        return true;
    return false;
}

Native::Ipv6::Nd::Inspection::Policy::DeviceRole::DeviceRole()
    :
    host{YType::empty, "host"},
    monitor{YType::empty, "monitor"},
    router{YType::empty, "router"},
    switch_{YType::empty, "switch"}
{

    yang_name = "device-role"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Nd::Inspection::Policy::DeviceRole::~DeviceRole()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::DeviceRole::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| monitor.is_set
	|| router.is_set
	|| switch_.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::DeviceRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Ipv6::Nd::Inspection::Policy::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Inspection::Policy::DeviceRole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Inspection::Policy::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Inspection::Policy::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Nd::Inspection::Policy::DeviceRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Inspection::Policy::DeviceRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Inspection::Policy::DeviceRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "monitor" || name == "router" || name == "switch")
        return true;
    return false;
}

Native::Ipv6::Nd::Inspection::Policy::Limit::Limit()
    :
    address_count{YType::uint16, "address-count"}
{

    yang_name = "limit"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Nd::Inspection::Policy::Limit::~Limit()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Limit::has_data() const
{
    if (is_presence_container) return true;
    return address_count.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_count.yfilter);
}

std::string Native::Ipv6::Nd::Inspection::Policy::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Inspection::Policy::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.yfilter)) leaf_name_data.push_back(address_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Inspection::Policy::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Inspection::Policy::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Nd::Inspection::Policy::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-count")
    {
        address_count = value;
        address_count.value_namespace = name_space;
        address_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Inspection::Policy::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-count")
    {
        address_count.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Inspection::Policy::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-count")
        return true;
    return false;
}

Native::Ipv6::Nd::Inspection::Policy::SecLevel::SecLevel()
    :
    minimum{YType::uint8, "minimum"}
{

    yang_name = "sec-level"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Nd::Inspection::Policy::SecLevel::~SecLevel()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::SecLevel::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::SecLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Ipv6::Nd::Inspection::Policy::SecLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Inspection::Policy::SecLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Inspection::Policy::SecLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Inspection::Policy::SecLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Nd::Inspection::Policy::SecLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Inspection::Policy::SecLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Inspection::Policy::SecLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Tracking()
    :
    disable(nullptr) // presence node
    , enable(nullptr) // presence node
{

    yang_name = "tracking"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::~Tracking()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::has_data() const
{
    if (is_presence_container) return true;
    return (disable !=  nullptr && disable->has_data())
	|| (enable !=  nullptr && enable->has_data());
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| (disable !=  nullptr && disable->has_operation())
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::Ipv6::Nd::Inspection::Policy::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Inspection::Policy::Tracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Inspection::Policy::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Inspection::Policy::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disable != nullptr)
    {
        _children["disable"] = disable;
    }

    if(enable != nullptr)
    {
        _children["enable"] = enable;
    }

    return _children;
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "enable")
        return true;
    return false;
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::Disable()
    :
    stale_lifetime(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime>())
{
    stale_lifetime->parent = this;

    yang_name = "disable"; yang_parent_name = "tracking"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::~Disable()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::has_data() const
{
    if (is_presence_container) return true;
    return (stale_lifetime !=  nullptr && stale_lifetime->has_data());
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::has_operation() const
{
    return is_set(yfilter)
	|| (stale_lifetime !=  nullptr && stale_lifetime->has_operation());
}

std::string Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stale-lifetime")
    {
        if(stale_lifetime == nullptr)
        {
            stale_lifetime = std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime>();
        }
        return stale_lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stale_lifetime != nullptr)
    {
        _children["stale-lifetime"] = stale_lifetime;
    }

    return _children;
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stale-lifetime")
        return true;
    return false;
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::StaleLifetime()
    :
    seconds{YType::uint32, "seconds"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "stale-lifetime"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::~StaleLifetime()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| infinite.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stale-lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "infinite")
        return true;
    return false;
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::Enable()
    :
    reachable_lifetime(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime>())
{
    reachable_lifetime->parent = this;

    yang_name = "enable"; yang_parent_name = "tracking"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::~Enable()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::has_data() const
{
    if (is_presence_container) return true;
    return (reachable_lifetime !=  nullptr && reachable_lifetime->has_data());
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (reachable_lifetime !=  nullptr && reachable_lifetime->has_operation());
}

std::string Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachable-lifetime")
    {
        if(reachable_lifetime == nullptr)
        {
            reachable_lifetime = std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime>();
        }
        return reachable_lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reachable_lifetime != nullptr)
    {
        _children["reachable-lifetime"] = reachable_lifetime;
    }

    return _children;
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-lifetime")
        return true;
    return false;
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::ReachableLifetime()
    :
    seconds{YType::uint32, "seconds"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "reachable-lifetime"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::~ReachableLifetime()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| infinite.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable-lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "infinite")
        return true;
    return false;
}

Native::Ipv6::Nd::Inspection::Policy::Validate::Validate()
    :
    source_mac{YType::empty, "source-mac"}
{

    yang_name = "validate"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Nd::Inspection::Policy::Validate::~Validate()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Validate::has_data() const
{
    if (is_presence_container) return true;
    return source_mac.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::Validate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_mac.yfilter);
}

std::string Native::Ipv6::Nd::Inspection::Policy::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Inspection::Policy::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_mac.is_set || is_set(source_mac.yfilter)) leaf_name_data.push_back(source_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Inspection::Policy::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Inspection::Policy::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Nd::Inspection::Policy::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-mac")
    {
        source_mac = value;
        source_mac.value_namespace = name_space;
        source_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Inspection::Policy::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-mac")
    {
        source_mac.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Inspection::Policy::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-mac")
        return true;
    return false;
}

Native::Ipv6::Nd::Cache::Cache()
    :
    expire(std::make_shared<Native::Ipv6::Nd::Cache::Expire>())
{
    expire->parent = this;

    yang_name = "cache"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Nd::Cache::~Cache()
{
}

bool Native::Ipv6::Nd::Cache::has_data() const
{
    if (is_presence_container) return true;
    return (expire !=  nullptr && expire->has_data());
}

bool Native::Ipv6::Nd::Cache::has_operation() const
{
    return is_set(yfilter)
	|| (expire !=  nullptr && expire->has_operation());
}

std::string Native::Ipv6::Nd::Cache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Nd::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expire")
    {
        if(expire == nullptr)
        {
            expire = std::make_shared<Native::Ipv6::Nd::Cache::Expire>();
        }
        return expire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(expire != nullptr)
    {
        _children["expire"] = expire;
    }

    return _children;
}

void Native::Ipv6::Nd::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Nd::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Nd::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expire")
        return true;
    return false;
}

Native::Ipv6::Nd::Cache::Expire::Expire()
    :
    time{YType::uint16, "time"},
    refresh{YType::empty, "refresh"}
{

    yang_name = "expire"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Nd::Cache::Expire::~Expire()
{
}

bool Native::Ipv6::Nd::Cache::Expire::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set
	|| refresh.is_set;
}

bool Native::Ipv6::Nd::Cache::Expire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(refresh.yfilter);
}

std::string Native::Ipv6::Nd::Cache::Expire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/Cisco-IOS-XE-nd:cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Nd::Cache::Expire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Cache::Expire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (refresh.is_set || is_set(refresh.yfilter)) leaf_name_data.push_back(refresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Cache::Expire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Cache::Expire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Nd::Cache::Expire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh")
    {
        refresh = value;
        refresh.value_namespace = name_space;
        refresh.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Cache::Expire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "refresh")
    {
        refresh.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Cache::Expire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "refresh")
        return true;
    return false;
}

Native::Ipv6::Nd::Raguard::Raguard()
    :
    attach_policy{YType::str, "attach-policy"}
        ,
    policy(this, {"raguard_policy_name"})
{

    yang_name = "raguard"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Nd::Raguard::~Raguard()
{
}

bool Native::Ipv6::Nd::Raguard::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return attach_policy.is_set;
}

bool Native::Ipv6::Nd::Raguard::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Ipv6::Nd::Raguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Nd::Raguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:raguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Raguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Raguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Nd::Raguard::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Raguard::get_children() const
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

    return _children;
}

void Native::Ipv6::Nd::Raguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Raguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Raguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "attach-policy")
        return true;
    return false;
}

Native::Ipv6::Nd::Raguard::Policy::Policy()
    :
    raguard_policy_name{YType::str, "raguard-policy-name"},
    trusted_port{YType::empty, "trusted-port"}
        ,
    device_role(std::make_shared<Native::Ipv6::Nd::Raguard::Policy::DeviceRole>())
    , hop_limit(std::make_shared<Native::Ipv6::Nd::Raguard::Policy::HopLimit>())
{
    device_role->parent = this;
    hop_limit->parent = this;

    yang_name = "policy"; yang_parent_name = "raguard"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Nd::Raguard::Policy::~Policy()
{
}

bool Native::Ipv6::Nd::Raguard::Policy::has_data() const
{
    if (is_presence_container) return true;
    return raguard_policy_name.is_set
	|| trusted_port.is_set
	|| (device_role !=  nullptr && device_role->has_data())
	|| (hop_limit !=  nullptr && hop_limit->has_data());
}

bool Native::Ipv6::Nd::Raguard::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(raguard_policy_name.yfilter)
	|| ydk::is_set(trusted_port.yfilter)
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (hop_limit !=  nullptr && hop_limit->has_operation());
}

std::string Native::Ipv6::Nd::Raguard::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/Cisco-IOS-XE-nd:raguard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Nd::Raguard::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(raguard_policy_name, "raguard-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Raguard::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (raguard_policy_name.is_set || is_set(raguard_policy_name.yfilter)) leaf_name_data.push_back(raguard_policy_name.get_name_leafdata());
    if (trusted_port.is_set || is_set(trusted_port.yfilter)) leaf_name_data.push_back(trusted_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Raguard::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-role")
    {
        if(device_role == nullptr)
        {
            device_role = std::make_shared<Native::Ipv6::Nd::Raguard::Policy::DeviceRole>();
        }
        return device_role;
    }

    if(child_yang_name == "hop-limit")
    {
        if(hop_limit == nullptr)
        {
            hop_limit = std::make_shared<Native::Ipv6::Nd::Raguard::Policy::HopLimit>();
        }
        return hop_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Raguard::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(device_role != nullptr)
    {
        _children["device-role"] = device_role;
    }

    if(hop_limit != nullptr)
    {
        _children["hop-limit"] = hop_limit;
    }

    return _children;
}

void Native::Ipv6::Nd::Raguard::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "raguard-policy-name")
    {
        raguard_policy_name = value;
        raguard_policy_name.value_namespace = name_space;
        raguard_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted-port")
    {
        trusted_port = value;
        trusted_port.value_namespace = name_space;
        trusted_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Raguard::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "raguard-policy-name")
    {
        raguard_policy_name.yfilter = yfilter;
    }
    if(value_path == "trusted-port")
    {
        trusted_port.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Raguard::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-role" || name == "hop-limit" || name == "raguard-policy-name" || name == "trusted-port")
        return true;
    return false;
}

Native::Ipv6::Nd::Raguard::Policy::DeviceRole::DeviceRole()
    :
    host{YType::empty, "host"},
    monitor{YType::empty, "monitor"},
    router{YType::empty, "router"},
    switch_{YType::empty, "switch"}
{

    yang_name = "device-role"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Nd::Raguard::Policy::DeviceRole::~DeviceRole()
{
}

bool Native::Ipv6::Nd::Raguard::Policy::DeviceRole::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| monitor.is_set
	|| router.is_set
	|| switch_.is_set;
}

bool Native::Ipv6::Nd::Raguard::Policy::DeviceRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Ipv6::Nd::Raguard::Policy::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Raguard::Policy::DeviceRole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Raguard::Policy::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Raguard::Policy::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Nd::Raguard::Policy::DeviceRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Raguard::Policy::DeviceRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Raguard::Policy::DeviceRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "monitor" || name == "router" || name == "switch")
        return true;
    return false;
}

Native::Ipv6::Nd::Raguard::Policy::HopLimit::HopLimit()
    :
    maximum{YType::uint8, "maximum"},
    minimum{YType::uint8, "minimum"}
{

    yang_name = "hop-limit"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Nd::Raguard::Policy::HopLimit::~HopLimit()
{
}

bool Native::Ipv6::Nd::Raguard::Policy::HopLimit::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Ipv6::Nd::Raguard::Policy::HopLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Ipv6::Nd::Raguard::Policy::HopLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Raguard::Policy::HopLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Raguard::Policy::HopLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Raguard::Policy::HopLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Nd::Raguard::Policy::HopLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Raguard::Policy::HopLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Raguard::Policy::HopLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Ipv6::Nd::DefaultRoute::DefaultRoute()
    :
    limit{YType::uint8, "limit"}
        ,
    vrf(this, {"word"})
{

    yang_name = "default-route"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Nd::DefaultRoute::~DefaultRoute()
{
}

bool Native::Ipv6::Nd::DefaultRoute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return limit.is_set;
}

bool Native::Ipv6::Nd::DefaultRoute::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ipv6::Nd::DefaultRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Nd::DefaultRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:default-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::DefaultRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::DefaultRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Nd::DefaultRoute::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::DefaultRoute::get_children() const
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

    return _children;
}

void Native::Ipv6::Nd::DefaultRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::DefaultRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::DefaultRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "limit")
        return true;
    return false;
}

Native::Ipv6::Nd::DefaultRoute::Vrf::Vrf()
    :
    word{YType::str, "word"},
    limit{YType::uint8, "limit"}
{

    yang_name = "vrf"; yang_parent_name = "default-route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Nd::DefaultRoute::Vrf::~Vrf()
{
}

bool Native::Ipv6::Nd::DefaultRoute::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| limit.is_set;
}

bool Native::Ipv6::Nd::DefaultRoute::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ipv6::Nd::DefaultRoute::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/Cisco-IOS-XE-nd:default-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Nd::DefaultRoute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::DefaultRoute::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::DefaultRoute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::DefaultRoute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Nd::DefaultRoute::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::DefaultRoute::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::DefaultRoute::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "limit")
        return true;
    return false;
}

Native::Ipv6::Nd::Suppress::Suppress()
    :
    policy(this, {"nd_suppress_policy_name"})
{

    yang_name = "suppress"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Nd::Suppress::~Suppress()
{
}

bool Native::Ipv6::Nd::Suppress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Nd::Suppress::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::Nd::Suppress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Nd::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Nd::Suppress::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Suppress::get_children() const
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

    return _children;
}

void Native::Ipv6::Nd::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Nd::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Nd::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Ipv6::Nd::Suppress::Policy::Policy()
    :
    nd_suppress_policy_name{YType::str, "nd-suppress-policy-name"}
{

    yang_name = "policy"; yang_parent_name = "suppress"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Nd::Suppress::Policy::~Policy()
{
}

bool Native::Ipv6::Nd::Suppress::Policy::has_data() const
{
    if (is_presence_container) return true;
    return nd_suppress_policy_name.is_set;
}

bool Native::Ipv6::Nd::Suppress::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nd_suppress_policy_name.yfilter);
}

std::string Native::Ipv6::Nd::Suppress::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/Cisco-IOS-XE-nd:suppress/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Nd::Suppress::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(nd_suppress_policy_name, "nd-suppress-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Nd::Suppress::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nd_suppress_policy_name.is_set || is_set(nd_suppress_policy_name.yfilter)) leaf_name_data.push_back(nd_suppress_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Nd::Suppress::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Nd::Suppress::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Nd::Suppress::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nd-suppress-policy-name")
    {
        nd_suppress_policy_name = value;
        nd_suppress_policy_name.value_namespace = name_space;
        nd_suppress_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Nd::Suppress::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nd-suppress-policy-name")
    {
        nd_suppress_policy_name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Nd::Suppress::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nd-suppress-policy-name")
        return true;
    return false;
}

Native::Ipv6::Pim::Pim()
    :
    rp_address(std::make_shared<Native::Ipv6::Pim::RpAddress>())
    , vrf(this, {"id"})
{
    rp_address->parent = this;

    yang_name = "pim"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Pim::~Pim()
{
}

bool Native::Ipv6::Pim::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (rp_address !=  nullptr && rp_address->has_data());
}

bool Native::Ipv6::Pim::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Native::Ipv6::Pim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-multicast:rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Native::Ipv6::Pim::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:vrf")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Pim::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rp_address != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:rp-address"] = rp_address;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "vrf")
        return true;
    return false;
}

Native::Ipv6::Pim::RpAddress::RpAddress()
    :
    address{YType::str, "address"},
    access_list{YType::str, "access-list"},
    bidir{YType::empty, "bidir"}
{

    yang_name = "rp-address"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Pim::RpAddress::~RpAddress()
{
}

bool Native::Ipv6::Pim::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| access_list.is_set
	|| bidir.is_set;
}

bool Native::Ipv6::Pim::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(bidir.yfilter);
}

std::string Native::Ipv6::Pim::RpAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Pim::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Pim::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Pim::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Pim::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Pim::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Pim::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
}

bool Native::Ipv6::Pim::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "access-list" || name == "bidir")
        return true;
    return false;
}

Native::Ipv6::Pim::Vrf::Vrf()
    :
    id{YType::str, "id"}
        ,
    rp_address(std::make_shared<Native::Ipv6::Pim::Vrf::RpAddress>())
{
    rp_address->parent = this;

    yang_name = "vrf"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Pim::Vrf::~Vrf()
{
}

bool Native::Ipv6::Pim::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Native::Ipv6::Pim::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Native::Ipv6::Pim::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Pim::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:vrf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Pim::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Pim::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Native::Ipv6::Pim::Vrf::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Pim::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rp_address != nullptr)
    {
        _children["rp-address"] = rp_address;
    }

    return _children;
}

void Native::Ipv6::Pim::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Pim::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Pim::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "id")
        return true;
    return false;
}

Native::Ipv6::Pim::Vrf::RpAddress::RpAddress()
    :
    address{YType::str, "address"},
    access_list{YType::str, "access-list"},
    bidir{YType::empty, "bidir"}
{

    yang_name = "rp-address"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Pim::Vrf::RpAddress::~RpAddress()
{
}

bool Native::Ipv6::Pim::Vrf::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| access_list.is_set
	|| bidir.is_set;
}

bool Native::Ipv6::Pim::Vrf::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(bidir.yfilter);
}

std::string Native::Ipv6::Pim::Vrf::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Pim::Vrf::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Pim::Vrf::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Pim::Vrf::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Pim::Vrf::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Pim::Vrf::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
}

bool Native::Ipv6::Pim::Vrf::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "access-list" || name == "bidir")
        return true;
    return false;
}

Native::Ipv6::Route::Route()
    :
    ipv6_route_list(this, {"prefix"})
    , vrf(this, {"name"})
{

    yang_name = "route"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Route::~Route()
{
}

bool Native::Ipv6::Route::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_route_list.len(); index++)
    {
        if(ipv6_route_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Route::has_operation() const
{
    for (std::size_t index=0; index<ipv6_route_list.len(); index++)
    {
        if(ipv6_route_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-route-list")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Route::Ipv6RouteList>();
        ent_->parent = this;
        ipv6_route_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Route::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_route_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-route-list" || name == "vrf")
        return true;
    return false;
}

Native::Ipv6::Route::Ipv6RouteList::Ipv6RouteList()
    :
    prefix{YType::str, "prefix"}
        ,
    ipv6_fwd_list(this, {"fwd"})
{

    yang_name = "ipv6-route-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Route::Ipv6RouteList::~Ipv6RouteList()
{
}

bool Native::Ipv6::Route::Ipv6RouteList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_fwd_list.len(); index++)
    {
        if(ipv6_fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set;
}

bool Native::Ipv6::Route::Ipv6RouteList::has_operation() const
{
    for (std::size_t index=0; index<ipv6_fwd_list.len(); index++)
    {
        if(ipv6_fwd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Ipv6::Route::Ipv6RouteList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Route::Ipv6RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-route-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Route::Ipv6RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Route::Ipv6RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-fwd-list")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList>();
        ent_->parent = this;
        ipv6_fwd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Route::Ipv6RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_fwd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Route::Ipv6RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Route::Ipv6RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Ipv6::Route::Ipv6RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-fwd-list" || name == "prefix")
        return true;
    return false;
}

Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::Ipv6FwdList()
    :
    fwd{YType::str, "fwd"},
    distance{YType::uint8, "distance"},
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint32, "track"},
    name{YType::str, "name"}
        ,
    interface_next_hop(this, {"ipv6_address"})
{

    yang_name = "ipv6-fwd-list"; yang_parent_name = "ipv6-route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::~Ipv6FwdList()
{
}

bool Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_data())
            return true;
    }
    return fwd.is_set
	|| distance.is_set
	|| multicast.is_set
	|| unicast.is_set
	|| tag.is_set
	|| track.is_set
	|| name.is_set;
}

bool Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::has_operation() const
{
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fwd.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-fwd-list";
    ADD_KEY_TOKEN(fwd, "fwd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.yfilter)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-next-hop")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop>();
        ent_->parent = this;
        interface_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwd")
    {
        fwd = value;
        fwd.value_namespace = name_space;
        fwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwd")
    {
        fwd.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-next-hop" || name == "fwd" || name == "distance" || name == "multicast" || name == "unicast" || name == "tag" || name == "track" || name == "name")
        return true;
    return false;
}

Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::InterfaceNextHop()
    :
    ipv6_address{YType::str, "ipv6-address"},
    distance{YType::uint8, "distance"},
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint32, "track"},
    name{YType::str, "name"}
{

    yang_name = "interface-next-hop"; yang_parent_name = "ipv6-fwd-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::~InterfaceNextHop()
{
}

bool Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| distance.is_set
	|| multicast.is_set
	|| unicast.is_set
	|| tag.is_set
	|| track.is_set
	|| name.is_set;
}

bool Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-next-hop";
    ADD_KEY_TOKEN(ipv6_address, "ipv6-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "distance" || name == "multicast" || name == "unicast" || name == "tag" || name == "track" || name == "name")
        return true;
    return false;
}

Native::Ipv6::Route::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    ipv6_route_list(this, {"prefix"})
{

    yang_name = "vrf"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Route::Vrf::~Vrf()
{
}

bool Native::Ipv6::Route::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_route_list.len(); index++)
    {
        if(ipv6_route_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ipv6::Route::Vrf::has_operation() const
{
    for (std::size_t index=0; index<ipv6_route_list.len(); index++)
    {
        if(ipv6_route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ipv6::Route::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Route::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Route::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Route::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-route-list")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Route::Vrf::Ipv6RouteList>();
        ent_->parent = this;
        ipv6_route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Route::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_route_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Route::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Route::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Route::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-route-list" || name == "name")
        return true;
    return false;
}

Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6RouteList()
    :
    prefix{YType::str, "prefix"}
        ,
    ipv6_fwd_list(this, {"fwd"})
{

    yang_name = "ipv6-route-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Route::Vrf::Ipv6RouteList::~Ipv6RouteList()
{
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_fwd_list.len(); index++)
    {
        if(ipv6_fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set;
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::has_operation() const
{
    for (std::size_t index=0; index<ipv6_fwd_list.len(); index++)
    {
        if(ipv6_fwd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Ipv6::Route::Vrf::Ipv6RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-route-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Route::Vrf::Ipv6RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Route::Vrf::Ipv6RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-fwd-list")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList>();
        ent_->parent = this;
        ipv6_fwd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Route::Vrf::Ipv6RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_fwd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Route::Vrf::Ipv6RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Route::Vrf::Ipv6RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-fwd-list" || name == "prefix")
        return true;
    return false;
}

Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::Ipv6FwdList()
    :
    fwd{YType::str, "fwd"},
    distance{YType::uint8, "distance"},
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint32, "track"},
    name{YType::str, "name"}
        ,
    interface_next_hop(this, {"ipv6_address"})
{

    yang_name = "ipv6-fwd-list"; yang_parent_name = "ipv6-route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::~Ipv6FwdList()
{
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_data())
            return true;
    }
    return fwd.is_set
	|| distance.is_set
	|| multicast.is_set
	|| unicast.is_set
	|| tag.is_set
	|| track.is_set
	|| name.is_set;
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::has_operation() const
{
    for (std::size_t index=0; index<interface_next_hop.len(); index++)
    {
        if(interface_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fwd.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-fwd-list";
    ADD_KEY_TOKEN(fwd, "fwd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.yfilter)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-next-hop")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop>();
        ent_->parent = this;
        interface_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwd")
    {
        fwd = value;
        fwd.value_namespace = name_space;
        fwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwd")
    {
        fwd.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-next-hop" || name == "fwd" || name == "distance" || name == "multicast" || name == "unicast" || name == "tag" || name == "track" || name == "name")
        return true;
    return false;
}

Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::InterfaceNextHop()
    :
    ipv6_address{YType::str, "ipv6-address"},
    distance{YType::uint8, "distance"},
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"},
    tag{YType::uint32, "tag"},
    track{YType::uint32, "track"},
    name{YType::str, "name"}
{

    yang_name = "interface-next-hop"; yang_parent_name = "ipv6-fwd-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::~InterfaceNextHop()
{
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| distance.is_set
	|| multicast.is_set
	|| unicast.is_set
	|| tag.is_set
	|| track.is_set
	|| name.is_set;
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(track.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-next-hop";
    ADD_KEY_TOKEN(ipv6_address, "ipv6-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "distance" || name == "multicast" || name == "unicast" || name == "tag" || name == "track" || name == "name")
        return true;
    return false;
}

Native::Ipv6::Router::Router()
    :
    eigrp(this, {"id"})
    , ospf(this, {"id"})
    , rip(this, {"id"})
{

    yang_name = "router"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Router::~Router()
{
}

bool Native::Ipv6::Router::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Router::has_operation() const
{
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::Router::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Eigrp>();
        ent_->parent = this;
        eigrp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ospf")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Ospf>();
        ent_->parent = this;
        ospf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-rip:rip")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Rip>();
        ent_->parent = this;
        rip.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eigrp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ospf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "ospf" || name == "rip")
        return true;
    return false;
}

Native::Ipv6::Router::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
        ,
    default_metric(std::make_shared<Native::Ipv6::Router::Eigrp::DefaultMetric>())
    , distance(std::make_shared<Native::Ipv6::Router::Eigrp::Distance>())
    , distribute_list(std::make_shared<Native::Ipv6::Router::Eigrp::DistributeList>())
    , eigrp(std::make_shared<Native::Ipv6::Router::Eigrp::Eigrp_>())
    , passive_interface(this, {"name"})
{
    default_metric->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    eigrp->parent = this;

    yang_name = "eigrp"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Router::Eigrp::~Eigrp()
{
}

bool Native::Ipv6::Router::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<passive_interface.len(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return id.is_set
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Ipv6::Router::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.len(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Ipv6::Router::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Router::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-eigrp:default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Native::Ipv6::Router::Eigrp::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "Cisco-IOS-XE-eigrp:distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Ipv6::Router::Eigrp::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "Cisco-IOS-XE-eigrp:distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Ipv6::Router::Eigrp::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "Cisco-IOS-XE-eigrp:eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Ipv6::Router::Eigrp::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "Cisco-IOS-XE-eigrp:passive-interface")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Eigrp::PassiveInterface>();
        ent_->parent = this;
        passive_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_metric != nullptr)
    {
        _children["Cisco-IOS-XE-eigrp:default-metric"] = default_metric;
    }

    if(distance != nullptr)
    {
        _children["Cisco-IOS-XE-eigrp:distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        _children["Cisco-IOS-XE-eigrp:distribute-list"] = distribute_list;
    }

    if(eigrp != nullptr)
    {
        _children["Cisco-IOS-XE-eigrp:eigrp"] = eigrp;
    }

    count_ = 0;
    for (auto ent_ : passive_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Router::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "distance" || name == "distribute-list" || name == "eigrp" || name == "passive-interface" || name == "id")
        return true;
    return false;
}

Native::Ipv6::Router::Eigrp::DefaultMetric::DefaultMetric()
    :
    dm_rdr{YType::uint32, "dm-rdr"},
    dm_rdr0{YType::uint32, "dm-rdr0"},
    dm_rdr_pct{YType::uint8, "dm-rdr-pct"},
    effective_bandwith_metric{YType::uint8, "effective-bandwith-metric"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "default-metric"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Eigrp::DefaultMetric::~DefaultMetric()
{
}

bool Native::Ipv6::Router::Eigrp::DefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return dm_rdr.is_set
	|| dm_rdr0.is_set
	|| dm_rdr_pct.is_set
	|| effective_bandwith_metric.is_set
	|| mtu.is_set;
}

bool Native::Ipv6::Router::Eigrp::DefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dm_rdr.yfilter)
	|| ydk::is_set(dm_rdr0.yfilter)
	|| ydk::is_set(dm_rdr_pct.yfilter)
	|| ydk::is_set(effective_bandwith_metric.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Ipv6::Router::Eigrp::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Eigrp::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr.is_set || is_set(dm_rdr.yfilter)) leaf_name_data.push_back(dm_rdr.get_name_leafdata());
    if (dm_rdr0.is_set || is_set(dm_rdr0.yfilter)) leaf_name_data.push_back(dm_rdr0.get_name_leafdata());
    if (dm_rdr_pct.is_set || is_set(dm_rdr_pct.yfilter)) leaf_name_data.push_back(dm_rdr_pct.get_name_leafdata());
    if (effective_bandwith_metric.is_set || is_set(effective_bandwith_metric.yfilter)) leaf_name_data.push_back(effective_bandwith_metric.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Eigrp::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Eigrp::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Eigrp::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr = value;
        dm_rdr.value_namespace = name_space;
        dm_rdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dm-rdr0")
    {
        dm_rdr0 = value;
        dm_rdr0.value_namespace = name_space;
        dm_rdr0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct = value;
        dm_rdr_pct.value_namespace = name_space;
        dm_rdr_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwith-metric")
    {
        effective_bandwith_metric = value;
        effective_bandwith_metric.value_namespace = name_space;
        effective_bandwith_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Eigrp::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr.yfilter = yfilter;
    }
    if(value_path == "dm-rdr0")
    {
        dm_rdr0.yfilter = yfilter;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct.yfilter = yfilter;
    }
    if(value_path == "effective-bandwith-metric")
    {
        effective_bandwith_metric.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Eigrp::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr" || name == "dm-rdr0" || name == "dm-rdr-pct" || name == "effective-bandwith-metric" || name == "mtu")
        return true;
    return false;
}

Native::Ipv6::Router::Eigrp::Distance::Distance()
    :
    eigrp(std::make_shared<Native::Ipv6::Router::Eigrp::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Eigrp::Distance::~Distance()
{
}

bool Native::Ipv6::Router::Eigrp::Distance::has_data() const
{
    if (is_presence_container) return true;
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Ipv6::Router::Eigrp::Distance::has_operation() const
{
    return is_set(yfilter)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Ipv6::Router::Eigrp::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Eigrp::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Eigrp::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Ipv6::Router::Eigrp::Distance::Eigrp_>();
        }
        return eigrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Eigrp::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eigrp != nullptr)
    {
        _children["eigrp"] = eigrp;
    }

    return _children;
}

void Native::Ipv6::Router::Eigrp::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Eigrp::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Eigrp::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp")
        return true;
    return false;
}

Native::Ipv6::Router::Eigrp::Distance::Eigrp_::Eigrp_()
    :
    internal_route{YType::uint8, "internal-route"},
    external_route{YType::uint8, "external-route"}
{

    yang_name = "eigrp"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Eigrp::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Ipv6::Router::Eigrp::Distance::Eigrp_::has_data() const
{
    if (is_presence_container) return true;
    return internal_route.is_set
	|| external_route.is_set;
}

bool Native::Ipv6::Router::Eigrp::Distance::Eigrp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_route.yfilter)
	|| ydk::is_set(external_route.yfilter);
}

std::string Native::Ipv6::Router::Eigrp::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Eigrp::Distance::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_route.is_set || is_set(internal_route.yfilter)) leaf_name_data.push_back(internal_route.get_name_leafdata());
    if (external_route.is_set || is_set(external_route.yfilter)) leaf_name_data.push_back(external_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Eigrp::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Eigrp::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Eigrp::Distance::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-route")
    {
        internal_route = value;
        internal_route.value_namespace = name_space;
        internal_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route")
    {
        external_route = value;
        external_route.value_namespace = name_space;
        external_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Eigrp::Distance::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-route")
    {
        internal_route.yfilter = yfilter;
    }
    if(value_path == "external-route")
    {
        external_route.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Eigrp::Distance::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-route" || name == "external-route")
        return true;
    return false;
}

Native::Ipv6::Router::Eigrp::DistributeList::DistributeList()
    :
    prefix_list(this, {"name"})
{

    yang_name = "distribute-list"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Eigrp::DistributeList::~DistributeList()
{
}

bool Native::Ipv6::Router::Eigrp::DistributeList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Router::Eigrp::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::Router::Eigrp::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Eigrp::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Eigrp::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Eigrp::DistributeList::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Eigrp::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Router::Eigrp::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Eigrp::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Eigrp::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::PrefixList()
    :
    name{YType::str, "name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "prefix-list"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::~PrefixList()
{
}

bool Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Ipv6::Router::Eigrp::Eigrp_::Eigrp_()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "eigrp"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Eigrp::Eigrp_::~Eigrp_()
{
}

bool Native::Ipv6::Router::Eigrp::Eigrp_::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set;
}

bool Native::Ipv6::Router::Eigrp::Eigrp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Native::Ipv6::Router::Eigrp::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Eigrp::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Eigrp::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Eigrp::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Eigrp::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Eigrp::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Eigrp::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id")
        return true;
    return false;
}

Native::Ipv6::Router::Eigrp::PassiveInterface::PassiveInterface()
    :
    name{YType::str, "name"}
{

    yang_name = "passive-interface"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Eigrp::PassiveInterface::~PassiveInterface()
{
}

bool Native::Ipv6::Router::Eigrp::PassiveInterface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Ipv6::Router::Eigrp::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ipv6::Router::Eigrp::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:passive-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Eigrp::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Eigrp::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Eigrp::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Eigrp::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Eigrp::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Eigrp::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ipv6::Router::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
{

    yang_name = "ospf"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Router::Ospf::~Ospf()
{
}

bool Native::Ipv6::Router::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Native::Ipv6::Router::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Ipv6::Router::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Router::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Rip()
    :
    id{YType::str, "id"},
    distance{YType::uint8, "distance"},
    maximum_paths{YType::uint32, "maximum-paths"},
    poison_reverse{YType::empty, "poison-reverse"},
    split_horizon{YType::empty, "split-horizon"}
        ,
    address_family(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily>())
    , distribute_list(std::make_shared<Native::Ipv6::Router::Rip::DistributeList>())
    , redistribute(std::make_shared<Native::Ipv6::Router::Rip::Redistribute>())
    , timers(std::make_shared<Native::Ipv6::Router::Rip::Timers>())
{
    address_family->parent = this;
    distribute_list->parent = this;
    redistribute->parent = this;
    timers->parent = this;

    yang_name = "rip"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ipv6::Router::Rip::~Rip()
{
}

bool Native::Ipv6::Router::Rip::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| distance.is_set
	|| maximum_paths.is_set
	|| poison_reverse.is_set
	|| split_horizon.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Ipv6::Router::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(poison_reverse.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Ipv6::Router::Rip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Router::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rip:rip";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (poison_reverse.is_set || is_set(poison_reverse.yfilter)) leaf_name_data.push_back(poison_reverse.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Ipv6::Router::Rip::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ipv6::Router::Rip::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Ipv6::Router::Rip::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    if(distribute_list != nullptr)
    {
        _children["distribute-list"] = distribute_list;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poison-reverse")
    {
        poison_reverse = value;
        poison_reverse.value_namespace = name_space;
        poison_reverse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "poison-reverse")
    {
        poison_reverse.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "distribute-list" || name == "redistribute" || name == "timers" || name == "id" || name == "distance" || name == "maximum-paths" || name == "poison-reverse" || name == "split-horizon")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::AddressFamily()
    :
    ipv6(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_>())
{
    ipv6->parent = this;

    yang_name = "address-family"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::~AddressFamily()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Ipv6_()
    :
    vrf(this, {"name"})
{

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::~Ipv6_()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::get_children() const
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

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Vrf()
    :
    name{YType::str, "name"},
    distance{YType::uint8, "distance"},
    maximum_paths{YType::uint32, "maximum-paths"},
    poison_reverse{YType::empty, "poison-reverse"},
    split_horizon{YType::empty, "split-horizon"}
        ,
    distribute_list(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList>())
    , redistribute(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute>())
    , timers(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers>())
{
    distribute_list->parent = this;
    redistribute->parent = this;
    timers->parent = this;

    yang_name = "vrf"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::~Vrf()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| distance.is_set
	|| maximum_paths.is_set
	|| poison_reverse.is_set
	|| split_horizon.is_set
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(poison_reverse.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (poison_reverse.is_set || is_set(poison_reverse.yfilter)) leaf_name_data.push_back(poison_reverse.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(distribute_list != nullptr)
    {
        _children["distribute-list"] = distribute_list;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poison-reverse")
    {
        poison_reverse = value;
        poison_reverse.value_namespace = name_space;
        poison_reverse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "poison-reverse")
    {
        poison_reverse.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute-list" || name == "redistribute" || name == "timers" || name == "name" || name == "distance" || name == "maximum-paths" || name == "poison-reverse" || name == "split-horizon")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::DistributeList()
    :
    prefix_list(this, {"name"})
{

    yang_name = "distribute-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::~DistributeList()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList::PrefixList()
    :
    name{YType::str, "name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "prefix-list"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList::~PrefixList()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Redistribute()
    :
    application(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application>())
    , lisp(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp>())
    , nd(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd>())
    , connected(nullptr) // presence node
    , bgp(this, {"as_number"})
    , eigrp(this, {"as_number"})
    , isis(nullptr) // presence node
    , iso_igrp(nullptr) // presence node
    , mobile(nullptr) // presence node
    , odr(nullptr) // presence node
    , ospf(this, {"process_id"})
    , static_(nullptr) // presence node
    , rip(nullptr) // presence node
{
    application->parent = this;
    lisp->parent = this;
    nd->parent = this;

    yang_name = "redistribute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::~Redistribute()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application>();
        }
        return application;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "bgp")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp>();
        ent_->parent = this;
        bgp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "eigrp")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp>();
        ent_->parent = this;
        eigrp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf>();
        ent_->parent = this;
        ospf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static>();
        }
        return static_;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application != nullptr)
    {
        _children["application"] = application;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(nd != nullptr)
    {
        _children["nd"] = nd;
    }

    if(connected != nullptr)
    {
        _children["connected"] = connected;
    }

    count_ = 0;
    for (auto ent_ : bgp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : eigrp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        _children["iso-igrp"] = iso_igrp;
    }

    if(mobile != nullptr)
    {
        _children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        _children["odr"] = odr;
    }

    count_ = 0;
    for (auto ent_ : ospf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "lisp" || name == "nd" || name == "connected" || name == "bgp" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "mobile" || name == "odr" || name == "ospf" || name == "static" || name == "rip")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::Application()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "application"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::~Application()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::has_data() const
{
    if (is_presence_container) return true;
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::~Lisp()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::Nd()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "nd"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::~Nd()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::has_data() const
{
    if (is_presence_container) return true;
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::Connected()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::~Connected()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::has_data() const
{
    if (is_presence_container) return true;
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rip_metric_route_map != nullptr)
    {
        _children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
        ,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
        ,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::~Bgp()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rip_metric_route_map != nullptr)
    {
        _children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
        ,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint16, "as-number"}
        ,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rip_metric_route_map != nullptr)
    {
        _children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
        ,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::Isis()
    :
    isis_area(this, {"name"})
    , rip_isis_redist(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::~Isis()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea>();
        ent_->parent = this;
        isis_area.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isis_area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(rip_isis_redist != nullptr)
    {
        _children["rip-isis-redist"] = rip_isis_redist;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "rip-isis-redist")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"}
        ,
    rip_isis_redist(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rip_isis_redist != nullptr)
    {
        _children["rip-isis-redist"] = rip_isis_redist;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-isis-redist" || name == "name")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::has_data() const
{
    if (is_presence_container) return true;
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rip_metric_route_map != nullptr)
    {
        _children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
        ,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::has_data() const
{
    if (is_presence_container) return true;
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rip_metric_route_map != nullptr)
    {
        _children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
        ,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoIgrp()
    :
    isoigrp_list(this, {"iso_area_tag"})
    , rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isoigrp_list.len(); index++)
    {
        if(isoigrp_list[index]->has_data())
            return true;
    }
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<isoigrp_list.len(); index++)
    {
        if(isoigrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isoigrp-list")
    {
        auto ent_ = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList>();
        ent_->parent = this;
        isoigrp_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isoigrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(rip_metric_route_map != nullptr)
    {
        _children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isoigrp-list" || name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::IsoigrpList()
    :
    iso_area_tag{YType::str, "iso-area-tag"}
        ,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "isoigrp-list"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::~IsoigrpList()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::has_data() const
{
    if (is_presence_container) return true;
    return iso_area_tag.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_area_tag.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isoigrp-list";
    ADD_KEY_TOKEN(iso_area_tag, "iso-area-tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_area_tag.is_set || is_set(iso_area_tag.yfilter)) leaf_name_data.push_back(iso_area_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rip_metric_route_map != nullptr)
    {
        _children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag = value;
        iso_area_tag.value_namespace = name_space;
        iso_area_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "iso-area-tag")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
        ,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "isoigrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
        ,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Mode::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Mode::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Mka::Policy::ConfidentialityOffset::Y_0 {0, "0"};
const Enum::YLeaf Native::Mka::Policy::ConfidentialityOffset::Y_30 {1, "30"};
const Enum::YLeaf Native::Mka::Policy::ConfidentialityOffset::Y_50 {2, "50"};

const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::CISCO_AP_AUTO_SMARTPORT {0, "CISCO_AP_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::CISCO_DMP_AUTO_SMARTPORT {1, "CISCO_DMP_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::CISCO_DMP_AUTO_SMARTPORT_V1 {2, "CISCO_DMP_AUTO_SMARTPORT_V1"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::CISCO_IP_CAMERA_AUTO_SMARTPORT {3, "CISCO_IP_CAMERA_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::CISCO_LAST_RESORT_SMARTPORT {4, "CISCO_LAST_RESORT_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::CISCO_LIGHT_AUTO_SMARTPORT {5, "CISCO_LIGHT_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::CISCO_LWAP_AUTO_SMARTPORT {6, "CISCO_LWAP_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::CISCO_PHONE_AUTO_SMARTPORT {7, "CISCO_PHONE_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::CISCO_PHONE_AUTO_SMARTPORT_V1 {8, "CISCO_PHONE_AUTO_SMARTPORT_V1"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::CISCO_ROUTER_AUTO_SMARTPORT {9, "CISCO_ROUTER_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::CISCO_SWITCH_AUTO_SMARTPORT {10, "CISCO_SWITCH_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::MS_IP_CAMERA_AUTO_SMARTPORT {11, "MS_IP_CAMERA_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration::MS_VIDEO_CONF_AUTO_SMARTPORT {12, "MS_VIDEO_CONF_AUTO_SMARTPORT"};

const Enum::YLeaf Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::ValidLifetime::infinite {0, "infinite"};

const Enum::YLeaf Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::PreferredLifetime::infinite {0, "infinite"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Protocol::esp {1, "esp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Protocol::hbh {2, "hbh"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Protocol::icmp {3, "icmp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Protocol::ipv6 {4, "ipv6"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Protocol::pcp {5, "pcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Protocol::sctp {6, "sctp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Protocol::tcp {7, "tcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Protocol::udp {8, "udp"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::beyond_scope {0, "beyond-scope"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::dhaad_reply {2, "dhaad-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::dhaad_request {3, "dhaad-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {4, "echo-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::echo_request {5, "echo-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::header {6, "header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::hop_limit {7, "hop-limit"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::mld_query {8, "mld-query"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::mld_reduction {9, "mld-reduction"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::mld_report {10, "mld-report"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::mpd_advertisement {11, "mpd-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::mpd_solicitation {12, "mpd-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::nd_na {13, "nd-na"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::nd_ns {14, "nd-ns"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::next_header {15, "next-header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::no_admin {16, "no-admin"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::no_route {17, "no-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {18, "packet-too-big"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::parameter_option {19, "parameter-option"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {20, "parameter-problem"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {21, "port-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {22, "reassembly-timeout"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::redirect {23, "redirect"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::reject_route {24, "reject-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::renum_command {25, "renum-command"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::renum_result {26, "renum-result"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::renum_seq_number {27, "renum-seq-number"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {28, "router-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::router_renumbering {29, "router-renumbering"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {30, "router-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::source_policy {31, "source-policy"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {32, "time-exceeded"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType::unreachable {33, "unreachable"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Protocol::esp {1, "esp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Protocol::hbh {2, "hbh"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Protocol::icmp {3, "icmp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Protocol::ipv6 {4, "ipv6"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Protocol::pcp {5, "pcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Protocol::sctp {6, "sctp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Protocol::tcp {7, "tcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Protocol::udp {8, "udp"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::beyond_scope {0, "beyond-scope"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::dhaad_reply {2, "dhaad-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::dhaad_request {3, "dhaad-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {4, "echo-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::echo_request {5, "echo-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::header {6, "header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::hop_limit {7, "hop-limit"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::mld_query {8, "mld-query"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::mld_reduction {9, "mld-reduction"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::mld_report {10, "mld-report"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::mpd_advertisement {11, "mpd-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::mpd_solicitation {12, "mpd-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::nd_na {13, "nd-na"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::nd_ns {14, "nd-ns"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::next_header {15, "next-header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::no_admin {16, "no-admin"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::no_route {17, "no-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {18, "packet-too-big"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::parameter_option {19, "parameter-option"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {20, "parameter-problem"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {21, "port-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {22, "reassembly-timeout"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::redirect {23, "redirect"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::reject_route {24, "reject-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::renum_command {25, "renum-command"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::renum_result {26, "renum-result"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::renum_seq_number {27, "renum-seq-number"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {28, "router-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::router_renumbering {29, "router-renumbering"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {30, "router-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::source_policy {31, "source-policy"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {32, "time-exceeded"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::unreachable {33, "unreachable"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Protocol::esp {1, "esp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Protocol::hbh {2, "hbh"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Protocol::icmp {3, "icmp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Protocol::ipv6 {4, "ipv6"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Protocol::pcp {5, "pcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Protocol::sctp {6, "sctp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Protocol::tcp {7, "tcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Protocol::udp {8, "udp"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::beyond_scope {0, "beyond-scope"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::dhaad_reply {2, "dhaad-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::dhaad_request {3, "dhaad-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {4, "echo-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::echo_request {5, "echo-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::header {6, "header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::hop_limit {7, "hop-limit"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::mld_query {8, "mld-query"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::mld_reduction {9, "mld-reduction"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::mld_report {10, "mld-report"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::mpd_advertisement {11, "mpd-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::mpd_solicitation {12, "mpd-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::nd_na {13, "nd-na"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::nd_ns {14, "nd-ns"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::next_header {15, "next-header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::no_admin {16, "no-admin"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::no_route {17, "no-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {18, "packet-too-big"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::parameter_option {19, "parameter-option"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {20, "parameter-problem"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {21, "port-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {22, "reassembly-timeout"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::redirect {23, "redirect"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::reject_route {24, "reject-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::renum_command {25, "renum-command"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::renum_result {26, "renum-result"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::renum_seq_number {27, "renum-seq-number"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {28, "router-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::router_renumbering {29, "router-renumbering"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {30, "router-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::source_policy {31, "source-policy"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {32, "time-exceeded"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType::unreachable {33, "unreachable"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Protocol::esp {1, "esp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Protocol::hbh {2, "hbh"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Protocol::icmp {3, "icmp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Protocol::ipv6 {4, "ipv6"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Protocol::pcp {5, "pcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Protocol::sctp {6, "sctp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Protocol::tcp {7, "tcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Protocol::udp {8, "udp"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::beyond_scope {0, "beyond-scope"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::dhaad_reply {2, "dhaad-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::dhaad_request {3, "dhaad-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {4, "echo-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::echo_request {5, "echo-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::header {6, "header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::hop_limit {7, "hop-limit"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::mld_query {8, "mld-query"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::mld_reduction {9, "mld-reduction"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::mld_report {10, "mld-report"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::mpd_advertisement {11, "mpd-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::mpd_solicitation {12, "mpd-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::nd_na {13, "nd-na"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::nd_ns {14, "nd-ns"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::next_header {15, "next-header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::no_admin {16, "no-admin"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::no_route {17, "no-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {18, "packet-too-big"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::parameter_option {19, "parameter-option"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {20, "parameter-problem"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {21, "port-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {22, "reassembly-timeout"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::redirect {23, "redirect"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::reject_route {24, "reject-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::renum_command {25, "renum-command"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::renum_result {26, "renum-result"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::renum_seq_number {27, "renum-seq-number"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {28, "router-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::router_renumbering {29, "router-renumbering"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {30, "router-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::source_policy {31, "source-policy"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {32, "time-exceeded"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType::unreachable {33, "unreachable"};

const Enum::YLeaf Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::Fwd::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::Fwd::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ipv6::Router::Eigrp::PassiveInterface::Name::default_ {0, "default"};

const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};


}
}

