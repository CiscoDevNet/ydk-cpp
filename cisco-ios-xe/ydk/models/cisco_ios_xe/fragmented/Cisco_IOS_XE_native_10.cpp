
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_10.hpp"
#include "Cisco_IOS_XE_native_11.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Ip::Wccp::Vrf::Vrf()
    :
    name{YType::str, "name"},
    source_interface{YType::str, "source-interface"}
    	,
    web_cache(std::make_shared<Native::Ip::Wccp::Vrf::WebCache>())
{
    web_cache->parent = this;

    yang_name = "vrf"; yang_parent_name = "wccp";
}

Native::Ip::Wccp::Vrf::~Vrf()
{
}

bool Native::Ip::Wccp::Vrf::has_data() const
{
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| source_interface.is_set
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Ip::Wccp::Vrf::has_operation() const
{
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(source_interface.operation)
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Ip::Wccp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wccp-list")
    {
        for(auto const & c : wccp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Wccp::Vrf::WccpList>();
        c->parent = this;
        wccp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Ip::Wccp::Vrf::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : wccp_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(web_cache != nullptr)
    {
        children["web-cache"] = web_cache;
    }

    return children;
}

void Native::Ip::Wccp::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Native::Ip::Wccp::Vrf::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_address{YType::str, "group-address"},
    group_list{YType::str, "group-list"},
    mode{YType::enumeration, "mode"},
    redirect_list{YType::str, "redirect-list"},
    snmp_disabled{YType::empty, "snmp-disabled"}
    	,
    password(std::make_shared<Native::Ip::Wccp::Vrf::WccpList::Password>())
{
    password->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "vrf";
}

Native::Ip::Wccp::Vrf::WccpList::~WccpList()
{
}

bool Native::Ip::Wccp::Vrf::WccpList::has_data() const
{
    return id.is_set
	|| group_address.is_set
	|| group_list.is_set
	|| mode.is_set
	|| redirect_list.is_set
	|| snmp_disabled.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Wccp::Vrf::WccpList::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(group_address.operation)
	|| is_set(group_list.operation)
	|| is_set(mode.operation)
	|| is_set(redirect_list.operation)
	|| is_set(snmp_disabled.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::Vrf::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::Vrf::WccpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WccpList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.operation)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.operation)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.operation)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::Vrf::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Wccp::Vrf::WccpList::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::Vrf::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Ip::Wccp::Vrf::WccpList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-list")
    {
        group_list = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled = value;
    }
}

Native::Ip::Wccp::Vrf::WccpList::Password::Password()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{
    yang_name = "password"; yang_parent_name = "wccp-list";
}

Native::Ip::Wccp::Vrf::WccpList::Password::~Password()
{
}

bool Native::Ip::Wccp::Vrf::WccpList::Password::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::Ip::Wccp::Vrf::WccpList::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(clear_key.operation)
	|| is_set(encryption.operation);
}

std::string Native::Ip::Wccp::Vrf::WccpList::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::Vrf::WccpList::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.operation)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::Vrf::WccpList::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::Vrf::WccpList::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Wccp::Vrf::WccpList::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
    }
    if(value_path == "encryption")
    {
        encryption = value;
    }
}

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

    yang_name = "web-cache"; yang_parent_name = "vrf";
}

Native::Ip::Wccp::Vrf::WebCache::~WebCache()
{
}

bool Native::Ip::Wccp::Vrf::WebCache::has_data() const
{
    return group_address.is_set
	|| group_list.is_set
	|| mode.is_set
	|| redirect_list.is_set
	|| snmp_disabled.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Wccp::Vrf::WebCache::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_list.operation)
	|| is_set(mode.operation)
	|| is_set(redirect_list.operation)
	|| is_set(snmp_disabled.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::Vrf::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::Vrf::WebCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WebCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.operation)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.operation)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.operation)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::Vrf::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::Vrf::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Ip::Wccp::Vrf::WebCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-list")
    {
        group_list = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled = value;
    }
}

Native::Ip::Wccp::Vrf::WebCache::Password::Password()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{
    yang_name = "password"; yang_parent_name = "web-cache";
}

Native::Ip::Wccp::Vrf::WebCache::Password::~Password()
{
}

bool Native::Ip::Wccp::Vrf::WebCache::Password::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::Ip::Wccp::Vrf::WebCache::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(clear_key.operation)
	|| is_set(encryption.operation);
}

std::string Native::Ip::Wccp::Vrf::WebCache::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Ip::Wccp::Vrf::WebCache::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.operation)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Wccp::Vrf::WebCache::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::Vrf::WebCache::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Wccp::Vrf::WebCache::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
    }
    if(value_path == "encryption")
    {
        encryption = value;
    }
}

Native::Mka::Mka()
{
    yang_name = "mka"; yang_parent_name = "native";
}

Native::Mka::~Mka()
{
}

bool Native::Mka::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mka::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mka";

    return path_buffer.str();

}

const EntityPath Native::Mka::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mka::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mka::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mka::set_value(const std::string & value_path, std::string value)
{
}

Native::Mka::Policy::Policy()
    :
    name{YType::str, "name"}
    	,
    macsec_cipher_suite(std::make_shared<Native::Mka::Policy::MacsecCipherSuite>())
{
    macsec_cipher_suite->parent = this;

    yang_name = "policy"; yang_parent_name = "mka";
}

Native::Mka::Policy::~Policy()
{
}

bool Native::Mka::Policy::has_data() const
{
    return name.is_set
	|| (macsec_cipher_suite !=  nullptr && macsec_cipher_suite->has_data());
}

bool Native::Mka::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (macsec_cipher_suite !=  nullptr && macsec_cipher_suite->has_operation());
}

std::string Native::Mka::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mka:policy" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mka::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mka/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mka::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

std::map<std::string, std::shared_ptr<Entity>> Native::Mka::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_cipher_suite != nullptr)
    {
        children["macsec-cipher-suite"] = macsec_cipher_suite;
    }

    return children;
}

void Native::Mka::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Mka::Policy::MacsecCipherSuite::MacsecCipherSuite()
    :
    gcm_aes_128{YType::empty, "gcm-aes-128"},
    gcm_aes_256{YType::empty, "gcm-aes-256"}
{
    yang_name = "macsec-cipher-suite"; yang_parent_name = "policy";
}

Native::Mka::Policy::MacsecCipherSuite::~MacsecCipherSuite()
{
}

bool Native::Mka::Policy::MacsecCipherSuite::has_data() const
{
    return gcm_aes_128.is_set
	|| gcm_aes_256.is_set;
}

bool Native::Mka::Policy::MacsecCipherSuite::has_operation() const
{
    return is_set(operation)
	|| is_set(gcm_aes_128.operation)
	|| is_set(gcm_aes_256.operation);
}

std::string Native::Mka::Policy::MacsecCipherSuite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-cipher-suite";

    return path_buffer.str();

}

const EntityPath Native::Mka::Policy::MacsecCipherSuite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacsecCipherSuite' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_aes_128.is_set || is_set(gcm_aes_128.operation)) leaf_name_data.push_back(gcm_aes_128.get_name_leafdata());
    if (gcm_aes_256.is_set || is_set(gcm_aes_256.operation)) leaf_name_data.push_back(gcm_aes_256.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mka::Policy::MacsecCipherSuite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mka::Policy::MacsecCipherSuite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mka::Policy::MacsecCipherSuite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gcm-aes-128")
    {
        gcm_aes_128 = value;
    }
    if(value_path == "gcm-aes-256")
    {
        gcm_aes_256 = value;
    }
}

Native::Macro::Macro()
    :
    auto_(std::make_shared<Native::Macro::Auto_>())
	,global(std::make_shared<Native::Macro::Global>())
{
    auto_->parent = this;

    global->parent = this;

    yang_name = "macro"; yang_parent_name = "native";
}

Native::Macro::~Macro()
{
}

bool Native::Macro::has_data() const
{
    return (auto_ !=  nullptr && auto_->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool Native::Macro::has_operation() const
{
    return is_set(operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Macro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macro";

    return path_buffer.str();

}

const EntityPath Native::Macro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Macro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Macro::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Macro::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Macro::set_value(const std::string & value_path, std::string value)
{
}

Native::Macro::Global::Global()
    :
    description{YType::str, "description"}
{
    yang_name = "global"; yang_parent_name = "macro";
}

Native::Macro::Global::~Global()
{
}

bool Native::Macro::Global::has_data() const
{
    return description.is_set;
}

bool Native::Macro::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation);
}

std::string Native::Macro::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::Macro::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/macro/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Macro::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Macro::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Macro::Auto_::Auto_()
    :
    global(std::make_shared<Native::Macro::Auto_::Global>())
{
    global->parent = this;

    yang_name = "auto"; yang_parent_name = "macro";
}

Native::Macro::Auto_::~Auto_()
{
}

bool Native::Macro::Auto_::has_data() const
{
    for (std::size_t index=0; index<execute.size(); index++)
    {
        if(execute[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Macro::Auto_::has_operation() const
{
    for (std::size_t index=0; index<execute.size(); index++)
    {
        if(execute[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Macro::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

const EntityPath Native::Macro::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/macro/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Macro::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "execute")
    {
        for(auto const & c : execute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Macro::Auto_::Execute>();
        c->parent = this;
        execute.push_back(c);
        return c;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Macro::Auto_::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : execute)
    {
        children[c->get_segment_path()] = c;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Macro::Auto_::set_value(const std::string & value_path, std::string value)
{
}

Native::Macro::Auto_::Execute::Execute()
    :
    trigger_event{YType::str, "trigger-event"}
    	,
    builtin(std::make_shared<Native::Macro::Auto_::Execute::Builtin>())
{
    builtin->parent = this;

    yang_name = "execute"; yang_parent_name = "auto";
}

Native::Macro::Auto_::Execute::~Execute()
{
}

bool Native::Macro::Auto_::Execute::has_data() const
{
    return trigger_event.is_set
	|| (builtin !=  nullptr && builtin->has_data());
}

bool Native::Macro::Auto_::Execute::has_operation() const
{
    return is_set(operation)
	|| is_set(trigger_event.operation)
	|| (builtin !=  nullptr && builtin->has_operation());
}

std::string Native::Macro::Auto_::Execute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:execute" <<"[trigger-event='" <<trigger_event <<"']";

    return path_buffer.str();

}

const EntityPath Native::Macro::Auto_::Execute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/macro/auto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger_event.is_set || is_set(trigger_event.operation)) leaf_name_data.push_back(trigger_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Macro::Auto_::Execute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "builtin")
    {
        if(builtin == nullptr)
        {
            builtin = std::make_shared<Native::Macro::Auto_::Execute::Builtin>();
        }
        return builtin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::Auto_::Execute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(builtin != nullptr)
    {
        children["builtin"] = builtin;
    }

    return children;
}

void Native::Macro::Auto_::Execute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trigger-event")
    {
        trigger_event = value;
    }
}

Native::Macro::Auto_::Execute::Builtin::Builtin()
    :
    parameters{YType::str, "parameters"},
    smart_port_configuration{YType::enumeration, "smart-port-configuration"}
{
    yang_name = "builtin"; yang_parent_name = "execute";
}

Native::Macro::Auto_::Execute::Builtin::~Builtin()
{
}

bool Native::Macro::Auto_::Execute::Builtin::has_data() const
{
    return parameters.is_set
	|| smart_port_configuration.is_set;
}

bool Native::Macro::Auto_::Execute::Builtin::has_operation() const
{
    return is_set(operation)
	|| is_set(parameters.operation)
	|| is_set(smart_port_configuration.operation);
}

std::string Native::Macro::Auto_::Execute::Builtin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "builtin";

    return path_buffer.str();

}

const EntityPath Native::Macro::Auto_::Execute::Builtin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Builtin' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parameters.is_set || is_set(parameters.operation)) leaf_name_data.push_back(parameters.get_name_leafdata());
    if (smart_port_configuration.is_set || is_set(smart_port_configuration.operation)) leaf_name_data.push_back(smart_port_configuration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Macro::Auto_::Execute::Builtin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::Auto_::Execute::Builtin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Macro::Auto_::Execute::Builtin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "parameters")
    {
        parameters = value;
    }
    if(value_path == "smart-port-configuration")
    {
        smart_port_configuration = value;
    }
}

Native::Macro::Auto_::Global::Global()
    :
    processing{YType::empty, "processing"}
{
    yang_name = "global"; yang_parent_name = "auto";
}

Native::Macro::Auto_::Global::~Global()
{
}

bool Native::Macro::Auto_::Global::has_data() const
{
    return processing.is_set;
}

bool Native::Macro::Auto_::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(processing.operation);
}

std::string Native::Macro::Auto_::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:global";

    return path_buffer.str();

}

const EntityPath Native::Macro::Auto_::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/macro/auto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processing.is_set || is_set(processing.operation)) leaf_name_data.push_back(processing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Macro::Auto_::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::Auto_::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Macro::Auto_::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processing")
    {
        processing = value;
    }
}

Native::Ipv6::Ipv6()
    :
    source_route{YType::boolean, "source-route"},
    unicast_routing{YType::empty, "unicast-routing"}
    	,
    access_list(std::make_shared<Native::Ipv6::AccessList>())
	,cef(nullptr) // presence node
	,destination_guard(std::make_shared<Native::Ipv6::DestinationGuard>())
	,dhcp(std::make_shared<Native::Ipv6::Dhcp>())
	,mld(std::make_shared<Native::Ipv6::Mld>())
	,multicast(std::make_shared<Native::Ipv6::Multicast>())
	,multicast_routing(nullptr) // presence node
	,nd(std::make_shared<Native::Ipv6::Nd>())
	,pim(std::make_shared<Native::Ipv6::Pim>())
	,prefix_list(std::make_shared<Native::Ipv6::PrefixList>())
	,rip(std::make_shared<Native::Ipv6::Rip>())
	,route(std::make_shared<Native::Ipv6::Route>())
	,router(std::make_shared<Native::Ipv6::Router>())
	,source_guard(std::make_shared<Native::Ipv6::SourceGuard>())
	,spd(std::make_shared<Native::Ipv6::Spd>())
{
    access_list->parent = this;

    destination_guard->parent = this;

    dhcp->parent = this;

    mld->parent = this;

    multicast->parent = this;

    nd->parent = this;

    pim->parent = this;

    prefix_list->parent = this;

    rip->parent = this;

    route->parent = this;

    router->parent = this;

    source_guard->parent = this;

    spd->parent = this;

    yang_name = "ipv6"; yang_parent_name = "native";
}

Native::Ipv6::~Ipv6()
{
}

bool Native::Ipv6::has_data() const
{
    return source_route.is_set
	|| unicast_routing.is_set
	|| (access_list !=  nullptr && access_list->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (destination_guard !=  nullptr && destination_guard->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (mld !=  nullptr && mld->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (multicast_routing !=  nullptr && multicast_routing->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (prefix_list !=  nullptr && prefix_list->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (source_guard !=  nullptr && source_guard->has_data())
	|| (spd !=  nullptr && spd->has_data());
}

bool Native::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(source_route.operation)
	|| is_set(unicast_routing.operation)
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (destination_guard !=  nullptr && destination_guard->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (mld !=  nullptr && mld->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (multicast_routing !=  nullptr && multicast_routing->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (prefix_list !=  nullptr && prefix_list->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (source_guard !=  nullptr && source_guard->has_operation())
	|| (spd !=  nullptr && spd->has_operation());
}

std::string Native::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_route.is_set || is_set(source_route.operation)) leaf_name_data.push_back(source_route.get_name_leafdata());
    if (unicast_routing.is_set || is_set(unicast_routing.operation)) leaf_name_data.push_back(unicast_routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Ipv6::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "cef")
    {
        if(cef == nullptr)
        {
            cef = std::make_shared<Native::Ipv6::Cef>();
        }
        return cef;
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

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<Native::Ipv6::Mld>();
        }
        return mld;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Ipv6::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "multicast-routing")
    {
        if(multicast_routing == nullptr)
        {
            multicast_routing = std::make_shared<Native::Ipv6::MulticastRouting>();
        }
        return multicast_routing;
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

    if(child_yang_name == "prefix-list")
    {
        if(prefix_list == nullptr)
        {
            prefix_list = std::make_shared<Native::Ipv6::PrefixList>();
        }
        return prefix_list;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Ipv6::Rip>();
        }
        return rip;
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

    if(child_yang_name == "source-guard")
    {
        if(source_guard == nullptr)
        {
            source_guard = std::make_shared<Native::Ipv6::SourceGuard>();
        }
        return source_guard;
    }

    if(child_yang_name == "spd")
    {
        if(spd == nullptr)
        {
            spd = std::make_shared<Native::Ipv6::Spd>();
        }
        return spd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    if(cef != nullptr)
    {
        children["cef"] = cef;
    }

    if(destination_guard != nullptr)
    {
        children["destination-guard"] = destination_guard;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(mld != nullptr)
    {
        children["mld"] = mld;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(multicast_routing != nullptr)
    {
        children["multicast-routing"] = multicast_routing;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(prefix_list != nullptr)
    {
        children["prefix-list"] = prefix_list;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(source_guard != nullptr)
    {
        children["source-guard"] = source_guard;
    }

    if(spd != nullptr)
    {
        children["spd"] = spd;
    }

    return children;
}

void Native::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-route")
    {
        source_route = value;
    }
    if(value_path == "unicast-routing")
    {
        unicast_routing = value;
    }
}

Native::Ipv6::SourceGuard::SourceGuard()
{
    yang_name = "source-guard"; yang_parent_name = "ipv6";
}

Native::Ipv6::SourceGuard::~SourceGuard()
{
}

bool Native::Ipv6::SourceGuard::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::SourceGuard::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ipv6::SourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-guard";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::SourceGuard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::SourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::SourceGuard::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::SourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::SourceGuard::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::SourceGuard::Policy::Policy()
    :
    source_guard_policy_name{YType::str, "source-guard-policy-name"}
    	,
    validate(std::make_shared<Native::Ipv6::SourceGuard::Policy::Validate>())
{
    validate->parent = this;

    yang_name = "policy"; yang_parent_name = "source-guard";
}

Native::Ipv6::SourceGuard::Policy::~Policy()
{
}

bool Native::Ipv6::SourceGuard::Policy::has_data() const
{
    return source_guard_policy_name.is_set
	|| (validate !=  nullptr && validate->has_data());
}

bool Native::Ipv6::SourceGuard::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(source_guard_policy_name.operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Ipv6::SourceGuard::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[source-guard-policy-name='" <<source_guard_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::SourceGuard::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/source-guard/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_guard_policy_name.is_set || is_set(source_guard_policy_name.operation)) leaf_name_data.push_back(source_guard_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::SourceGuard::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Ipv6::SourceGuard::Policy::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::SourceGuard::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Ipv6::SourceGuard::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-guard-policy-name")
    {
        source_guard_policy_name = value;
    }
}

Native::Ipv6::SourceGuard::Policy::Validate::Validate()
    :
    address{YType::empty, "address"},
    prefix{YType::empty, "prefix"}
{
    yang_name = "validate"; yang_parent_name = "policy";
}

Native::Ipv6::SourceGuard::Policy::Validate::~Validate()
{
}

bool Native::Ipv6::SourceGuard::Policy::Validate::has_data() const
{
    return address.is_set
	|| prefix.is_set;
}

bool Native::Ipv6::SourceGuard::Policy::Validate::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix.operation);
}

std::string Native::Ipv6::SourceGuard::Policy::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::SourceGuard::Policy::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Validate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::SourceGuard::Policy::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::SourceGuard::Policy::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::SourceGuard::Policy::Validate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

Native::Ipv6::DestinationGuard::DestinationGuard()
{
    yang_name = "destination-guard"; yang_parent_name = "ipv6";
}

Native::Ipv6::DestinationGuard::~DestinationGuard()
{
}

bool Native::Ipv6::DestinationGuard::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::DestinationGuard::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ipv6::DestinationGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-guard";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::DestinationGuard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::DestinationGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::DestinationGuard::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::DestinationGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::DestinationGuard::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::DestinationGuard::Policy::Policy()
    :
    destination_guard_policy_name{YType::str, "destination-guard-policy-name"}
    	,
    enforcement(std::make_shared<Native::Ipv6::DestinationGuard::Policy::Enforcement>())
{
    enforcement->parent = this;

    yang_name = "policy"; yang_parent_name = "destination-guard";
}

Native::Ipv6::DestinationGuard::Policy::~Policy()
{
}

bool Native::Ipv6::DestinationGuard::Policy::has_data() const
{
    return destination_guard_policy_name.is_set
	|| (enforcement !=  nullptr && enforcement->has_data());
}

bool Native::Ipv6::DestinationGuard::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_guard_policy_name.operation)
	|| (enforcement !=  nullptr && enforcement->has_operation());
}

std::string Native::Ipv6::DestinationGuard::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[destination-guard-policy-name='" <<destination_guard_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::DestinationGuard::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/destination-guard/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_guard_policy_name.is_set || is_set(destination_guard_policy_name.operation)) leaf_name_data.push_back(destination_guard_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::DestinationGuard::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::DestinationGuard::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enforcement != nullptr)
    {
        children["enforcement"] = enforcement;
    }

    return children;
}

void Native::Ipv6::DestinationGuard::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-guard-policy-name")
    {
        destination_guard_policy_name = value;
    }
}

Native::Ipv6::DestinationGuard::Policy::Enforcement::Enforcement()
    :
    always{YType::empty, "always"},
    stressed{YType::empty, "stressed"}
{
    yang_name = "enforcement"; yang_parent_name = "policy";
}

Native::Ipv6::DestinationGuard::Policy::Enforcement::~Enforcement()
{
}

bool Native::Ipv6::DestinationGuard::Policy::Enforcement::has_data() const
{
    return always.is_set
	|| stressed.is_set;
}

bool Native::Ipv6::DestinationGuard::Policy::Enforcement::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation)
	|| is_set(stressed.operation);
}

std::string Native::Ipv6::DestinationGuard::Policy::Enforcement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enforcement";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::DestinationGuard::Policy::Enforcement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enforcement' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());
    if (stressed.is_set || is_set(stressed.operation)) leaf_name_data.push_back(stressed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::DestinationGuard::Policy::Enforcement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::DestinationGuard::Policy::Enforcement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::DestinationGuard::Policy::Enforcement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
    if(value_path == "stressed")
    {
        stressed = value;
    }
}

Native::Ipv6::Dhcp::Dhcp()
    :
    guard(std::make_shared<Native::Ipv6::Dhcp::Guard>())
	,server(std::make_shared<Native::Ipv6::Dhcp::Server>())
{
    guard->parent = this;

    server->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ipv6";
}

Native::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Ipv6::Dhcp::has_data() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return (guard !=  nullptr && guard->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Ipv6::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (guard !=  nullptr && guard->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    if(child_yang_name == "pool")
    {
        for(auto const & c : pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Dhcp::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ipv6::Dhcp::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    for (auto const & c : pool)
    {
        children[c->get_segment_path()] = c;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ipv6::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Dhcp::Server::Server()
    :
    vrf(std::make_shared<Native::Ipv6::Dhcp::Server::Vrf>())
{
    vrf->parent = this;

    yang_name = "server"; yang_parent_name = "dhcp";
}

Native::Ipv6::Dhcp::Server::~Server()
{
}

bool Native::Ipv6::Dhcp::Server::has_data() const
{
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Ipv6::Dhcp::Server::has_operation() const
{
    return is_set(operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Ipv6::Dhcp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:server";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Dhcp::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Dhcp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Ipv6::Dhcp::Server::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Dhcp::Server::Vrf::Vrf()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "vrf"; yang_parent_name = "server";
}

Native::Ipv6::Dhcp::Server::Vrf::~Vrf()
{
}

bool Native::Ipv6::Dhcp::Server::Vrf::has_data() const
{
    return enable.is_set;
}

bool Native::Ipv6::Dhcp::Server::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Ipv6::Dhcp::Server::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Dhcp::Server::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/dhcp/Cisco-IOS-XE-dhcp:server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Dhcp::Server::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::Server::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Dhcp::Server::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Ipv6::Dhcp::Guard::Guard()
{
    yang_name = "guard"; yang_parent_name = "dhcp";
}

Native::Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Ipv6::Dhcp::Guard::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Dhcp::Guard::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:guard";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Dhcp::Guard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Dhcp::Guard::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Dhcp::Guard::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Dhcp::Guard::Policy::Policy()
    :
    dhcp_guard_policy_name{YType::str, "dhcp-guard-policy-name"}
    	,
    device_role(std::make_shared<Native::Ipv6::Dhcp::Guard::Policy::DeviceRole>())
{
    device_role->parent = this;

    yang_name = "policy"; yang_parent_name = "guard";
}

Native::Ipv6::Dhcp::Guard::Policy::~Policy()
{
}

bool Native::Ipv6::Dhcp::Guard::Policy::has_data() const
{
    return dhcp_guard_policy_name.is_set
	|| (device_role !=  nullptr && device_role->has_data());
}

bool Native::Ipv6::Dhcp::Guard::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp_guard_policy_name.operation)
	|| (device_role !=  nullptr && device_role->has_operation());
}

std::string Native::Ipv6::Dhcp::Guard::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[dhcp-guard-policy-name='" <<dhcp_guard_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Dhcp::Guard::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/dhcp/Cisco-IOS-XE-dhcp:guard/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_guard_policy_name.is_set || is_set(dhcp_guard_policy_name.operation)) leaf_name_data.push_back(dhcp_guard_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Dhcp::Guard::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-role")
    {
        if(device_role == nullptr)
        {
            device_role = std::make_shared<Native::Ipv6::Dhcp::Guard::Policy::DeviceRole>();
        }
        return device_role;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::Guard::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(device_role != nullptr)
    {
        children["device-role"] = device_role;
    }

    return children;
}

void Native::Ipv6::Dhcp::Guard::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp-guard-policy-name")
    {
        dhcp_guard_policy_name = value;
    }
}

Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::DeviceRole()
    :
    client{YType::empty, "client"},
    server{YType::empty, "server"}
{
    yang_name = "device-role"; yang_parent_name = "policy";
}

Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::~DeviceRole()
{
}

bool Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::has_data() const
{
    return client.is_set
	|| server.is_set;
}

bool Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(server.operation);
}

std::string Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeviceRole' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (server.is_set || is_set(server.operation)) leaf_name_data.push_back(server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "server")
    {
        server = value;
    }
}

Native::Ipv6::Dhcp::Pool::Pool()
    :
    name{YType::str, "name"},
    dns_server{YType::str, "dns-server"},
    domain_name{YType::str, "domain-name"},
    vrf{YType::str, "vrf"}
    	,
    address(std::make_shared<Native::Ipv6::Dhcp::Pool::Address>())
{
    address->parent = this;

    yang_name = "pool"; yang_parent_name = "dhcp";
}

Native::Ipv6::Dhcp::Pool::~Pool()
{
}

bool Native::Ipv6::Dhcp::Pool::has_data() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| domain_name.is_set
	|| vrf.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ipv6::Dhcp::Pool::has_operation() const
{
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(dns_server.operation)
	|| is_set(domain_name.operation)
	|| is_set(vrf.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Ipv6::Dhcp::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:pool" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Dhcp::Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());

    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Dhcp::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ipv6::Dhcp::Pool::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Ipv6::Dhcp::Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ipv6::Dhcp::Pool::Address::Address()
{
    yang_name = "address"; yang_parent_name = "pool";
}

Native::Ipv6::Dhcp::Pool::Address::~Address()
{
}

bool Native::Ipv6::Dhcp::Pool::Address::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Dhcp::Pool::Address::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ipv6::Dhcp::Pool::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Dhcp::Pool::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Dhcp::Pool::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Dhcp::Pool::Address::Prefix>();
        c->parent = this;
        prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::Pool::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Dhcp::Pool::Address::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Dhcp::Pool::Address::Prefix::Prefix()
    :
    ipv6_address{YType::str, "ipv6-address"}
    	,
    lifetime(std::make_shared<Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "prefix"; yang_parent_name = "address";
}

Native::Ipv6::Dhcp::Pool::Address::Prefix::~Prefix()
{
}

bool Native::Ipv6::Dhcp::Pool::Address::Prefix::has_data() const
{
    return ipv6_address.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ipv6::Dhcp::Pool::Address::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ipv6::Dhcp::Pool::Address::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[ipv6-address='" <<ipv6_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Dhcp::Pool::Address::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Dhcp::Pool::Address::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::Pool::Address::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Ipv6::Dhcp::Pool::Address::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::Lifetime()
    :
    preferred_lifetime{YType::str, "preferred-lifetime"},
    valid_lifetime{YType::str, "valid-lifetime"}
{
    yang_name = "lifetime"; yang_parent_name = "prefix";
}

Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::~Lifetime()
{
}

bool Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::has_data() const
{
    return preferred_lifetime.is_set
	|| valid_lifetime.is_set;
}

bool Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(preferred_lifetime.operation)
	|| is_set(valid_lifetime.operation);
}

std::string Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preferred_lifetime.is_set || is_set(preferred_lifetime.operation)) leaf_name_data.push_back(preferred_lifetime.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.operation)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime = value;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
    }
}

Native::Ipv6::AccessList::AccessList()
    :
    match_local_traffic{YType::empty, "Cisco-IOS-XE-acl:match-local-traffic"}
    	,
    log_update(std::make_shared<Native::Ipv6::AccessList::LogUpdate>())
{
    log_update->parent = this;

    yang_name = "access-list"; yang_parent_name = "ipv6";
}

Native::Ipv6::AccessList::~AccessList()
{
}

bool Native::Ipv6::AccessList::has_data() const
{
    for (std::size_t index=0; index<named_acl.size(); index++)
    {
        if(named_acl[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<named_rb_acl.size(); index++)
    {
        if(named_rb_acl[index]->has_data())
            return true;
    }
    return match_local_traffic.is_set
	|| (log_update !=  nullptr && log_update->has_data());
}

bool Native::Ipv6::AccessList::has_operation() const
{
    for (std::size_t index=0; index<named_acl.size(); index++)
    {
        if(named_acl[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<named_rb_acl.size(); index++)
    {
        if(named_rb_acl[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(match_local_traffic.operation)
	|| (log_update !=  nullptr && log_update->has_operation());
}

std::string Native::Ipv6::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_local_traffic.is_set || is_set(match_local_traffic.operation)) leaf_name_data.push_back(match_local_traffic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-update")
    {
        if(log_update == nullptr)
        {
            log_update = std::make_shared<Native::Ipv6::AccessList::LogUpdate>();
        }
        return log_update;
    }

    if(child_yang_name == "named-acl")
    {
        for(auto const & c : named_acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::AccessList::NamedAcl>();
        c->parent = this;
        named_acl.push_back(c);
        return c;
    }

    if(child_yang_name == "named-rb-acl")
    {
        for(auto const & c : named_rb_acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::AccessList::NamedRbAcl>();
        c->parent = this;
        named_rb_acl.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log_update != nullptr)
    {
        children["log-update"] = log_update;
    }

    for (auto const & c : named_acl)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : named_rb_acl)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::AccessList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-local-traffic")
    {
        match_local_traffic = value;
    }
}

Native::Ipv6::AccessList::NamedAcl::NamedAcl()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default_>())
{
    default_->parent = this;

    yang_name = "named-acl"; yang_parent_name = "access-list";
}

Native::Ipv6::AccessList::NamedAcl::~NamedAcl()
{
}

bool Native::Ipv6::AccessList::NamedAcl::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ipv6::AccessList::NamedAcl::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ipv6::AccessList::NamedAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:named-acl" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ipv6::AccessList::NamedAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "named-acl";
}

Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(remark.operation)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSeqRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
}

Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    any{YType::empty, "any"},
    auth{YType::empty, "auth"},
    dest_option{YType::empty, "dest-option"},
    destination_address{YType::str, "destination-address"},
    destination_any{YType::empty, "destination-any"},
    destination_host{YType::str, "destination-host"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    dscp{YType::str, "dscp"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    flow_label{YType::uint32, "flow-label"},
    fragments{YType::empty, "fragments"},
    hbh{YType::empty, "hbh"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mobility{YType::empty, "mobility"},
    mobility_type{YType::str, "mobility-type"},
    msg_code{YType::uint8, "msg-code"},
    msg_type_case{YType::uint8, "msg-type-case"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    routing{YType::empty, "routing"},
    routing_type{YType::uint8, "routing-type"},
    rst{YType::empty, "rst"},
    source_address{YType::str, "source-address"},
    source_host{YType::str, "source-host"},
    source_prefix{YType::str, "source-prefix"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    urg{YType::empty, "urg"}
{
    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule";
}

Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| any.is_set
	|| auth.is_set
	|| dest_option.is_set
	|| destination_address.is_set
	|| destination_any.is_set
	|| destination_host.is_set
	|| destination_prefix.is_set
	|| destination_wildcard_bits.is_set
	|| dscp.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| established.is_set
	|| fin.is_set
	|| flow_label.is_set
	|| fragments.is_set
	|| hbh.is_set
	|| log.is_set
	|| log_input.is_set
	|| mobility.is_set
	|| mobility_type.is_set
	|| msg_code.is_set
	|| msg_type_case.is_set
	|| named_msg_type.is_set
	|| protocol.is_set
	|| psh.is_set
	|| routing.is_set
	|| routing_type.is_set
	|| rst.is_set
	|| source_address.is_set
	|| source_host.is_set
	|| source_prefix.is_set
	|| source_wildcard_bits.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| syn.is_set
	|| time_range.is_set
	|| urg.is_set;
}

bool Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(action.operation)
	|| is_set(any.operation)
	|| is_set(auth.operation)
	|| is_set(dest_option.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_any.operation)
	|| is_set(destination_host.operation)
	|| is_set(destination_prefix.operation)
	|| is_set(destination_wildcard_bits.operation)
	|| is_set(dscp.operation)
	|| is_set(dst_eq.operation)
	|| is_set(dst_gt.operation)
	|| is_set(dst_lt.operation)
	|| is_set(dst_neq.operation)
	|| is_set(dst_range1.operation)
	|| is_set(dst_range2.operation)
	|| is_set(established.operation)
	|| is_set(fin.operation)
	|| is_set(flow_label.operation)
	|| is_set(fragments.operation)
	|| is_set(hbh.operation)
	|| is_set(log.operation)
	|| is_set(log_input.operation)
	|| is_set(mobility.operation)
	|| is_set(mobility_type.operation)
	|| is_set(msg_code.operation)
	|| is_set(msg_type_case.operation)
	|| is_set(named_msg_type.operation)
	|| is_set(protocol.operation)
	|| is_set(psh.operation)
	|| is_set(routing.operation)
	|| is_set(routing_type.operation)
	|| is_set(rst.operation)
	|| is_set(source_address.operation)
	|| is_set(source_host.operation)
	|| is_set(source_prefix.operation)
	|| is_set(source_wildcard_bits.operation)
	|| is_set(src_eq.operation)
	|| is_set(src_gt.operation)
	|| is_set(src_lt.operation)
	|| is_set(src_neq.operation)
	|| is_set(src_range1.operation)
	|| is_set(src_range2.operation)
	|| is_set(syn.operation)
	|| is_set(time_range.operation)
	|| is_set(urg.operation);
}

std::string Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AceRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (auth.is_set || is_set(auth.operation)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.operation)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.operation)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.operation)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.operation)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.operation)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.operation)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.operation)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.operation)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.operation)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.operation)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.operation)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.operation)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.operation)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.operation)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.operation)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.operation)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.operation)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.operation)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.operation)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.operation)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.operation)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.operation)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (routing.is_set || is_set(routing.operation)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.operation)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (rst.is_set || is_set(rst.operation)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.operation)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.operation)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.operation)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.operation)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.operation)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.operation)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.operation)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.operation)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.operation)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.operation)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.operation)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (urg.is_set || is_set(urg.operation)) leaf_name_data.push_back(urg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "auth")
    {
        auth = value;
    }
    if(value_path == "dest-option")
    {
        dest_option = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
    }
    if(value_path == "established")
    {
        established = value;
    }
    if(value_path == "fin")
    {
        fin = value;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
    }
    if(value_path == "fragments")
    {
        fragments = value;
    }
    if(value_path == "hbh")
    {
        hbh = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "log-input")
    {
        log_input = value;
    }
    if(value_path == "mobility")
    {
        mobility = value;
    }
    if(value_path == "mobility-type")
    {
        mobility_type = value;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "psh")
    {
        psh = value;
    }
    if(value_path == "routing")
    {
        routing = value;
    }
    if(value_path == "routing-type")
    {
        routing_type = value;
    }
    if(value_path == "rst")
    {
        rst = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-host")
    {
        source_host = value;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
    }
    if(value_path == "syn")
    {
        syn = value;
    }
    if(value_path == "time-range")
    {
        time_range = value;
    }
    if(value_path == "urg")
    {
        urg = value;
    }
}

Native::Ipv6::AccessList::NamedAcl::Default_::Default_()
{
    yang_name = "default"; yang_parent_name = "named-acl";
}

Native::Ipv6::AccessList::NamedAcl::Default_::~Default_()
{
}

bool Native::Ipv6::AccessList::NamedAcl::Default_::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::AccessList::NamedAcl::Default_::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ipv6::AccessList::NamedAcl::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedAcl::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedAcl::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedAcl::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::AccessList::NamedAcl::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default";
}

Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(remark.operation)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSeqRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
}

Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    any{YType::empty, "any"},
    auth{YType::empty, "auth"},
    dest_option{YType::empty, "dest-option"},
    destination_address{YType::str, "destination-address"},
    destination_any{YType::empty, "destination-any"},
    destination_host{YType::str, "destination-host"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    dscp{YType::str, "dscp"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    flow_label{YType::uint32, "flow-label"},
    fragments{YType::empty, "fragments"},
    hbh{YType::empty, "hbh"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mobility{YType::empty, "mobility"},
    mobility_type{YType::str, "mobility-type"},
    msg_code{YType::uint8, "msg-code"},
    msg_type_case{YType::uint8, "msg-type-case"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    routing{YType::empty, "routing"},
    routing_type{YType::uint8, "routing-type"},
    rst{YType::empty, "rst"},
    source_address{YType::str, "source-address"},
    source_host{YType::str, "source-host"},
    source_prefix{YType::str, "source-prefix"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    urg{YType::empty, "urg"}
{
    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule";
}

Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| any.is_set
	|| auth.is_set
	|| dest_option.is_set
	|| destination_address.is_set
	|| destination_any.is_set
	|| destination_host.is_set
	|| destination_prefix.is_set
	|| destination_wildcard_bits.is_set
	|| dscp.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| established.is_set
	|| fin.is_set
	|| flow_label.is_set
	|| fragments.is_set
	|| hbh.is_set
	|| log.is_set
	|| log_input.is_set
	|| mobility.is_set
	|| mobility_type.is_set
	|| msg_code.is_set
	|| msg_type_case.is_set
	|| named_msg_type.is_set
	|| protocol.is_set
	|| psh.is_set
	|| routing.is_set
	|| routing_type.is_set
	|| rst.is_set
	|| source_address.is_set
	|| source_host.is_set
	|| source_prefix.is_set
	|| source_wildcard_bits.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| syn.is_set
	|| time_range.is_set
	|| urg.is_set;
}

bool Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(action.operation)
	|| is_set(any.operation)
	|| is_set(auth.operation)
	|| is_set(dest_option.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_any.operation)
	|| is_set(destination_host.operation)
	|| is_set(destination_prefix.operation)
	|| is_set(destination_wildcard_bits.operation)
	|| is_set(dscp.operation)
	|| is_set(dst_eq.operation)
	|| is_set(dst_gt.operation)
	|| is_set(dst_lt.operation)
	|| is_set(dst_neq.operation)
	|| is_set(dst_range1.operation)
	|| is_set(dst_range2.operation)
	|| is_set(established.operation)
	|| is_set(fin.operation)
	|| is_set(flow_label.operation)
	|| is_set(fragments.operation)
	|| is_set(hbh.operation)
	|| is_set(log.operation)
	|| is_set(log_input.operation)
	|| is_set(mobility.operation)
	|| is_set(mobility_type.operation)
	|| is_set(msg_code.operation)
	|| is_set(msg_type_case.operation)
	|| is_set(named_msg_type.operation)
	|| is_set(protocol.operation)
	|| is_set(psh.operation)
	|| is_set(routing.operation)
	|| is_set(routing_type.operation)
	|| is_set(rst.operation)
	|| is_set(source_address.operation)
	|| is_set(source_host.operation)
	|| is_set(source_prefix.operation)
	|| is_set(source_wildcard_bits.operation)
	|| is_set(src_eq.operation)
	|| is_set(src_gt.operation)
	|| is_set(src_lt.operation)
	|| is_set(src_neq.operation)
	|| is_set(src_range1.operation)
	|| is_set(src_range2.operation)
	|| is_set(syn.operation)
	|| is_set(time_range.operation)
	|| is_set(urg.operation);
}

std::string Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AceRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (auth.is_set || is_set(auth.operation)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.operation)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.operation)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.operation)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.operation)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.operation)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.operation)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.operation)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.operation)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.operation)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.operation)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.operation)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.operation)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.operation)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.operation)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.operation)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.operation)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.operation)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.operation)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.operation)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.operation)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.operation)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.operation)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (routing.is_set || is_set(routing.operation)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.operation)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (rst.is_set || is_set(rst.operation)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.operation)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.operation)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.operation)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.operation)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.operation)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.operation)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.operation)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.operation)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.operation)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.operation)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.operation)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (urg.is_set || is_set(urg.operation)) leaf_name_data.push_back(urg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "auth")
    {
        auth = value;
    }
    if(value_path == "dest-option")
    {
        dest_option = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
    }
    if(value_path == "established")
    {
        established = value;
    }
    if(value_path == "fin")
    {
        fin = value;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
    }
    if(value_path == "fragments")
    {
        fragments = value;
    }
    if(value_path == "hbh")
    {
        hbh = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "log-input")
    {
        log_input = value;
    }
    if(value_path == "mobility")
    {
        mobility = value;
    }
    if(value_path == "mobility-type")
    {
        mobility_type = value;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "psh")
    {
        psh = value;
    }
    if(value_path == "routing")
    {
        routing = value;
    }
    if(value_path == "routing-type")
    {
        routing_type = value;
    }
    if(value_path == "rst")
    {
        rst = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-host")
    {
        source_host = value;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
    }
    if(value_path == "syn")
    {
        syn = value;
    }
    if(value_path == "time-range")
    {
        time_range = value;
    }
    if(value_path == "urg")
    {
        urg = value;
    }
}

Native::Ipv6::AccessList::NamedRbAcl::NamedRbAcl()
    :
    name{YType::str, "name"},
    role_based{YType::empty, "role-based"}
    	,
    default_(std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default_>())
{
    default_->parent = this;

    yang_name = "named-rb-acl"; yang_parent_name = "access-list";
}

Native::Ipv6::AccessList::NamedRbAcl::~NamedRbAcl()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
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
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(role_based.operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ipv6::AccessList::NamedRbAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:named-rb-acl" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedRbAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (role_based.is_set || is_set(role_based.operation)) leaf_name_data.push_back(role_based.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedRbAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedRbAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ipv6::AccessList::NamedRbAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "role-based")
    {
        role_based = value;
    }
}

Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "named-rb-acl";
}

Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(remark.operation)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSeqRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
}

Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    any{YType::empty, "any"},
    auth{YType::empty, "auth"},
    dest_option{YType::empty, "dest-option"},
    destination_address{YType::str, "destination-address"},
    destination_any{YType::empty, "destination-any"},
    destination_host{YType::str, "destination-host"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    dscp{YType::str, "dscp"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    flow_label{YType::uint32, "flow-label"},
    fragments{YType::empty, "fragments"},
    hbh{YType::empty, "hbh"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mobility{YType::empty, "mobility"},
    mobility_type{YType::str, "mobility-type"},
    msg_code{YType::uint8, "msg-code"},
    msg_type_case{YType::uint8, "msg-type-case"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    routing{YType::empty, "routing"},
    routing_type{YType::uint8, "routing-type"},
    rst{YType::empty, "rst"},
    source_address{YType::str, "source-address"},
    source_host{YType::str, "source-host"},
    source_prefix{YType::str, "source-prefix"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    urg{YType::empty, "urg"}
{
    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule";
}

Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| any.is_set
	|| auth.is_set
	|| dest_option.is_set
	|| destination_address.is_set
	|| destination_any.is_set
	|| destination_host.is_set
	|| destination_prefix.is_set
	|| destination_wildcard_bits.is_set
	|| dscp.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| established.is_set
	|| fin.is_set
	|| flow_label.is_set
	|| fragments.is_set
	|| hbh.is_set
	|| log.is_set
	|| log_input.is_set
	|| mobility.is_set
	|| mobility_type.is_set
	|| msg_code.is_set
	|| msg_type_case.is_set
	|| named_msg_type.is_set
	|| protocol.is_set
	|| psh.is_set
	|| routing.is_set
	|| routing_type.is_set
	|| rst.is_set
	|| source_address.is_set
	|| source_host.is_set
	|| source_prefix.is_set
	|| source_wildcard_bits.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| syn.is_set
	|| time_range.is_set
	|| urg.is_set;
}

bool Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(action.operation)
	|| is_set(any.operation)
	|| is_set(auth.operation)
	|| is_set(dest_option.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_any.operation)
	|| is_set(destination_host.operation)
	|| is_set(destination_prefix.operation)
	|| is_set(destination_wildcard_bits.operation)
	|| is_set(dscp.operation)
	|| is_set(dst_eq.operation)
	|| is_set(dst_gt.operation)
	|| is_set(dst_lt.operation)
	|| is_set(dst_neq.operation)
	|| is_set(dst_range1.operation)
	|| is_set(dst_range2.operation)
	|| is_set(established.operation)
	|| is_set(fin.operation)
	|| is_set(flow_label.operation)
	|| is_set(fragments.operation)
	|| is_set(hbh.operation)
	|| is_set(log.operation)
	|| is_set(log_input.operation)
	|| is_set(mobility.operation)
	|| is_set(mobility_type.operation)
	|| is_set(msg_code.operation)
	|| is_set(msg_type_case.operation)
	|| is_set(named_msg_type.operation)
	|| is_set(protocol.operation)
	|| is_set(psh.operation)
	|| is_set(routing.operation)
	|| is_set(routing_type.operation)
	|| is_set(rst.operation)
	|| is_set(source_address.operation)
	|| is_set(source_host.operation)
	|| is_set(source_prefix.operation)
	|| is_set(source_wildcard_bits.operation)
	|| is_set(src_eq.operation)
	|| is_set(src_gt.operation)
	|| is_set(src_lt.operation)
	|| is_set(src_neq.operation)
	|| is_set(src_range1.operation)
	|| is_set(src_range2.operation)
	|| is_set(syn.operation)
	|| is_set(time_range.operation)
	|| is_set(urg.operation);
}

std::string Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AceRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (auth.is_set || is_set(auth.operation)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.operation)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.operation)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.operation)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.operation)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.operation)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.operation)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.operation)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.operation)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.operation)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.operation)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.operation)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.operation)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.operation)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.operation)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.operation)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.operation)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.operation)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.operation)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.operation)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.operation)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.operation)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.operation)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (routing.is_set || is_set(routing.operation)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.operation)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (rst.is_set || is_set(rst.operation)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.operation)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.operation)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.operation)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.operation)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.operation)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.operation)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.operation)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.operation)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.operation)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.operation)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.operation)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (urg.is_set || is_set(urg.operation)) leaf_name_data.push_back(urg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "auth")
    {
        auth = value;
    }
    if(value_path == "dest-option")
    {
        dest_option = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
    }
    if(value_path == "established")
    {
        established = value;
    }
    if(value_path == "fin")
    {
        fin = value;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
    }
    if(value_path == "fragments")
    {
        fragments = value;
    }
    if(value_path == "hbh")
    {
        hbh = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "log-input")
    {
        log_input = value;
    }
    if(value_path == "mobility")
    {
        mobility = value;
    }
    if(value_path == "mobility-type")
    {
        mobility_type = value;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "psh")
    {
        psh = value;
    }
    if(value_path == "routing")
    {
        routing = value;
    }
    if(value_path == "routing-type")
    {
        routing_type = value;
    }
    if(value_path == "rst")
    {
        rst = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-host")
    {
        source_host = value;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
    }
    if(value_path == "syn")
    {
        syn = value;
    }
    if(value_path == "time-range")
    {
        time_range = value;
    }
    if(value_path == "urg")
    {
        urg = value;
    }
}

Native::Ipv6::AccessList::NamedRbAcl::Default_::Default_()
{
    yang_name = "default"; yang_parent_name = "named-rb-acl";
}

Native::Ipv6::AccessList::NamedRbAcl::Default_::~Default_()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default_::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default_::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ipv6::AccessList::NamedRbAcl::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedRbAcl::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedRbAcl::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedRbAcl::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::AccessList::NamedRbAcl::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default";
}

Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(remark.operation)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSeqRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
}

Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    any{YType::empty, "any"},
    auth{YType::empty, "auth"},
    dest_option{YType::empty, "dest-option"},
    destination_address{YType::str, "destination-address"},
    destination_any{YType::empty, "destination-any"},
    destination_host{YType::str, "destination-host"},
    destination_prefix{YType::str, "destination-prefix"},
    destination_wildcard_bits{YType::str, "destination-wildcard-bits"},
    dscp{YType::str, "dscp"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    flow_label{YType::uint32, "flow-label"},
    fragments{YType::empty, "fragments"},
    hbh{YType::empty, "hbh"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mobility{YType::empty, "mobility"},
    mobility_type{YType::str, "mobility-type"},
    msg_code{YType::uint8, "msg-code"},
    msg_type_case{YType::uint8, "msg-type-case"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    routing{YType::empty, "routing"},
    routing_type{YType::uint8, "routing-type"},
    rst{YType::empty, "rst"},
    source_address{YType::str, "source-address"},
    source_host{YType::str, "source-host"},
    source_prefix{YType::str, "source-prefix"},
    source_wildcard_bits{YType::str, "source-wildcard-bits"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    urg{YType::empty, "urg"}
{
    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule";
}

Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| any.is_set
	|| auth.is_set
	|| dest_option.is_set
	|| destination_address.is_set
	|| destination_any.is_set
	|| destination_host.is_set
	|| destination_prefix.is_set
	|| destination_wildcard_bits.is_set
	|| dscp.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| established.is_set
	|| fin.is_set
	|| flow_label.is_set
	|| fragments.is_set
	|| hbh.is_set
	|| log.is_set
	|| log_input.is_set
	|| mobility.is_set
	|| mobility_type.is_set
	|| msg_code.is_set
	|| msg_type_case.is_set
	|| named_msg_type.is_set
	|| protocol.is_set
	|| psh.is_set
	|| routing.is_set
	|| routing_type.is_set
	|| rst.is_set
	|| source_address.is_set
	|| source_host.is_set
	|| source_prefix.is_set
	|| source_wildcard_bits.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| syn.is_set
	|| time_range.is_set
	|| urg.is_set;
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(action.operation)
	|| is_set(any.operation)
	|| is_set(auth.operation)
	|| is_set(dest_option.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_any.operation)
	|| is_set(destination_host.operation)
	|| is_set(destination_prefix.operation)
	|| is_set(destination_wildcard_bits.operation)
	|| is_set(dscp.operation)
	|| is_set(dst_eq.operation)
	|| is_set(dst_gt.operation)
	|| is_set(dst_lt.operation)
	|| is_set(dst_neq.operation)
	|| is_set(dst_range1.operation)
	|| is_set(dst_range2.operation)
	|| is_set(established.operation)
	|| is_set(fin.operation)
	|| is_set(flow_label.operation)
	|| is_set(fragments.operation)
	|| is_set(hbh.operation)
	|| is_set(log.operation)
	|| is_set(log_input.operation)
	|| is_set(mobility.operation)
	|| is_set(mobility_type.operation)
	|| is_set(msg_code.operation)
	|| is_set(msg_type_case.operation)
	|| is_set(named_msg_type.operation)
	|| is_set(protocol.operation)
	|| is_set(psh.operation)
	|| is_set(routing.operation)
	|| is_set(routing_type.operation)
	|| is_set(rst.operation)
	|| is_set(source_address.operation)
	|| is_set(source_host.operation)
	|| is_set(source_prefix.operation)
	|| is_set(source_wildcard_bits.operation)
	|| is_set(src_eq.operation)
	|| is_set(src_gt.operation)
	|| is_set(src_lt.operation)
	|| is_set(src_neq.operation)
	|| is_set(src_range1.operation)
	|| is_set(src_range2.operation)
	|| is_set(syn.operation)
	|| is_set(time_range.operation)
	|| is_set(urg.operation);
}

std::string Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AceRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (auth.is_set || is_set(auth.operation)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.operation)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.operation)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.operation)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.operation)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.operation)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.operation)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.operation)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.operation)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.operation)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.operation)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.operation)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.operation)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.operation)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.operation)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.operation)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.operation)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.operation)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.operation)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.operation)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.operation)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.operation)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.operation)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.operation)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (routing.is_set || is_set(routing.operation)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.operation)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (rst.is_set || is_set(rst.operation)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.operation)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.operation)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.operation)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.operation)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.operation)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.operation)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.operation)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.operation)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.operation)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.operation)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.operation)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (urg.is_set || is_set(urg.operation)) leaf_name_data.push_back(urg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "auth")
    {
        auth = value;
    }
    if(value_path == "dest-option")
    {
        dest_option = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
    }
    if(value_path == "established")
    {
        established = value;
    }
    if(value_path == "fin")
    {
        fin = value;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
    }
    if(value_path == "fragments")
    {
        fragments = value;
    }
    if(value_path == "hbh")
    {
        hbh = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "log-input")
    {
        log_input = value;
    }
    if(value_path == "mobility")
    {
        mobility = value;
    }
    if(value_path == "mobility-type")
    {
        mobility_type = value;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "psh")
    {
        psh = value;
    }
    if(value_path == "routing")
    {
        routing = value;
    }
    if(value_path == "routing-type")
    {
        routing_type = value;
    }
    if(value_path == "rst")
    {
        rst = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-host")
    {
        source_host = value;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
    }
    if(value_path == "syn")
    {
        syn = value;
    }
    if(value_path == "time-range")
    {
        time_range = value;
    }
    if(value_path == "urg")
    {
        urg = value;
    }
}

Native::Ipv6::AccessList::LogUpdate::LogUpdate()
    :
    threshold{YType::uint64, "threshold"}
{
    yang_name = "log-update"; yang_parent_name = "access-list";
}

Native::Ipv6::AccessList::LogUpdate::~LogUpdate()
{
}

bool Native::Ipv6::AccessList::LogUpdate::has_data() const
{
    return threshold.is_set;
}

bool Native::Ipv6::AccessList::LogUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Ipv6::AccessList::LogUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:log-update";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::AccessList::LogUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::AccessList::LogUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::LogUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::AccessList::LogUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Ipv6::Multicast::Multicast()
    :
    vrf{YType::str, "Cisco-IOS-XE-multicast:vrf"}
    	,
    rpf(std::make_shared<Native::Ipv6::Multicast::Rpf>())
{
    rpf->parent = this;

    yang_name = "multicast"; yang_parent_name = "ipv6";
}

Native::Ipv6::Multicast::~Multicast()
{
}

bool Native::Ipv6::Multicast::has_data() const
{
    return vrf.is_set
	|| (rpf !=  nullptr && rpf->has_data());
}

bool Native::Ipv6::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation)
	|| (rpf !=  nullptr && rpf->has_operation());
}

std::string Native::Ipv6::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Native::Ipv6::Multicast::Rpf>();
        }
        return rpf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    return children;
}

void Native::Ipv6::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ipv6::Multicast::Rpf::Rpf()
    :
    use_bgp{YType::empty, "use-bgp"}
    	,
    backoff(std::make_shared<Native::Ipv6::Multicast::Rpf::Backoff>())
{
    backoff->parent = this;

    yang_name = "rpf"; yang_parent_name = "multicast";
}

Native::Ipv6::Multicast::Rpf::~Rpf()
{
}

bool Native::Ipv6::Multicast::Rpf::has_data() const
{
    return use_bgp.is_set
	|| (backoff !=  nullptr && backoff->has_data());
}

bool Native::Ipv6::Multicast::Rpf::has_operation() const
{
    return is_set(operation)
	|| is_set(use_bgp.operation)
	|| (backoff !=  nullptr && backoff->has_operation());
}

std::string Native::Ipv6::Multicast::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:rpf";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Multicast::Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/multicast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_bgp.is_set || is_set(use_bgp.operation)) leaf_name_data.push_back(use_bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Multicast::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Multicast::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    return children;
}

void Native::Ipv6::Multicast::Rpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "use-bgp")
    {
        use_bgp = value;
    }
}

Native::Ipv6::Multicast::Rpf::Backoff::Backoff()
    :
    initial_delay{YType::uint16, "initial-delay"},
    max_delay{YType::uint16, "max-delay"}
{
    yang_name = "backoff"; yang_parent_name = "rpf";
}

Native::Ipv6::Multicast::Rpf::Backoff::~Backoff()
{
}

bool Native::Ipv6::Multicast::Rpf::Backoff::has_data() const
{
    return initial_delay.is_set
	|| max_delay.is_set;
}

bool Native::Ipv6::Multicast::Rpf::Backoff::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_delay.operation)
	|| is_set(max_delay.operation);
}

std::string Native::Ipv6::Multicast::Rpf::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Multicast::Rpf::Backoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/multicast/Cisco-IOS-XE-multicast:rpf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_delay.is_set || is_set(initial_delay.operation)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.operation)) leaf_name_data.push_back(max_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Multicast::Rpf::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Multicast::Rpf::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Multicast::Rpf::Backoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-delay")
    {
        initial_delay = value;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
    }
}

Native::Ipv6::Cef::Cef()
    :
    distributed{YType::empty, "Cisco-IOS-XE-cef:distributed"}
    	,
    accounting(std::make_shared<Native::Ipv6::Cef::Accounting>())
{
    accounting->parent = this;

    yang_name = "cef"; yang_parent_name = "ipv6";
}

Native::Ipv6::Cef::~Cef()
{
}

bool Native::Ipv6::Cef::has_data() const
{
    return distributed.is_set
	|| (accounting !=  nullptr && accounting->has_data());
}

bool Native::Ipv6::Cef::has_operation() const
{
    return is_set(operation)
	|| is_set(distributed.operation)
	|| (accounting !=  nullptr && accounting->has_operation());
}

std::string Native::Ipv6::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cef";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Cef::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.operation)) leaf_name_data.push_back(distributed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Ipv6::Cef::Accounting>();
        }
        return accounting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    return children;
}

void Native::Ipv6::Cef::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distributed")
    {
        distributed = value;
    }
}

Native::Ipv6::Cef::Accounting::Accounting()
    :
    per_prefix{YType::empty, "per-prefix"},
    prefix_length{YType::empty, "prefix-length"}
{
    yang_name = "accounting"; yang_parent_name = "cef";
}

Native::Ipv6::Cef::Accounting::~Accounting()
{
}

bool Native::Ipv6::Cef::Accounting::has_data() const
{
    return per_prefix.is_set
	|| prefix_length.is_set;
}

bool Native::Ipv6::Cef::Accounting::has_operation() const
{
    return is_set(operation)
	|| is_set(per_prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string Native::Ipv6::Cef::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:accounting";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Cef::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/cef/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_prefix.is_set || is_set(per_prefix.operation)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Cef::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Cef::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "per-prefix")
    {
        per_prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Native::Ipv6::Nd::Nd()
    :
    cache(std::make_shared<Native::Ipv6::Nd::Cache>())
	,inspection(std::make_shared<Native::Ipv6::Nd::Inspection>())
	,raguard(std::make_shared<Native::Ipv6::Nd::Raguard>())
{
    cache->parent = this;

    inspection->parent = this;

    raguard->parent = this;

    yang_name = "nd"; yang_parent_name = "ipv6";
}

Native::Ipv6::Nd::~Nd()
{
}

bool Native::Ipv6::Nd::has_data() const
{
    return (cache !=  nullptr && cache->has_data())
	|| (inspection !=  nullptr && inspection->has_data())
	|| (raguard !=  nullptr && raguard->has_data());
}

bool Native::Ipv6::Nd::has_operation() const
{
    return is_set(operation)
	|| (cache !=  nullptr && cache->has_operation())
	|| (inspection !=  nullptr && inspection->has_operation())
	|| (raguard !=  nullptr && raguard->has_operation());
}

std::string Native::Ipv6::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Ipv6::Nd::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Ipv6::Nd::Inspection>();
        }
        return inspection;
    }

    if(child_yang_name == "raguard")
    {
        if(raguard == nullptr)
        {
            raguard = std::make_shared<Native::Ipv6::Nd::Raguard>();
        }
        return raguard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    if(raguard != nullptr)
    {
        children["raguard"] = raguard;
    }

    return children;
}

void Native::Ipv6::Nd::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Nd::Inspection::Inspection()
{
    yang_name = "inspection"; yang_parent_name = "nd";
}

Native::Ipv6::Nd::Inspection::~Inspection()
{
}

bool Native::Ipv6::Nd::Inspection::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Nd::Inspection::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ipv6::Nd::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:inspection";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Inspection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Nd::Inspection::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Nd::Inspection::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Nd::Inspection::Policy::Policy()
    :
    name_nd_inspection_policy{YType::str, "name-nd-inspection-policy"},
    drop_unsecure{YType::empty, "drop-unsecure"},
    trusted_port{YType::empty, "trusted-port"}
    	,
    device_role(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::DeviceRole>())
	,limit(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Limit>())
	,sec_level(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::SecLevel>())
	,tracking(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Tracking>())
	,validate(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Validate>())
{
    device_role->parent = this;

    limit->parent = this;

    sec_level->parent = this;

    tracking->parent = this;

    validate->parent = this;

    yang_name = "policy"; yang_parent_name = "inspection";
}

Native::Ipv6::Nd::Inspection::Policy::~Policy()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::has_data() const
{
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
    return is_set(operation)
	|| is_set(name_nd_inspection_policy.operation)
	|| is_set(drop_unsecure.operation)
	|| is_set(trusted_port.operation)
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (sec_level !=  nullptr && sec_level->has_operation())
	|| (tracking !=  nullptr && tracking->has_operation())
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Ipv6::Nd::Inspection::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[name-nd-inspection-policy='" <<name_nd_inspection_policy <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Inspection::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/Cisco-IOS-XE-nd:inspection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_nd_inspection_policy.is_set || is_set(name_nd_inspection_policy.operation)) leaf_name_data.push_back(name_nd_inspection_policy.get_name_leafdata());
    if (drop_unsecure.is_set || is_set(drop_unsecure.operation)) leaf_name_data.push_back(drop_unsecure.get_name_leafdata());
    if (trusted_port.is_set || is_set(trusted_port.operation)) leaf_name_data.push_back(trusted_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Inspection::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Inspection::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(device_role != nullptr)
    {
        children["device-role"] = device_role;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(sec_level != nullptr)
    {
        children["sec-level"] = sec_level;
    }

    if(tracking != nullptr)
    {
        children["tracking"] = tracking;
    }

    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Ipv6::Nd::Inspection::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-nd-inspection-policy")
    {
        name_nd_inspection_policy = value;
    }
    if(value_path == "drop-unsecure")
    {
        drop_unsecure = value;
    }
    if(value_path == "trusted-port")
    {
        trusted_port = value;
    }
}

Native::Ipv6::Nd::Inspection::Policy::DeviceRole::DeviceRole()
    :
    host{YType::empty, "host"},
    monitor{YType::empty, "monitor"},
    router{YType::empty, "router"},
    switch{YType::empty, "switch"}
{
    yang_name = "device-role"; yang_parent_name = "policy";
}

Native::Ipv6::Nd::Inspection::Policy::DeviceRole::~DeviceRole()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::DeviceRole::has_data() const
{
    return host.is_set
	|| monitor.is_set
	|| router.is_set
	|| switch.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::DeviceRole::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(monitor.operation)
	|| is_set(router.operation)
	|| is_set(switch.operation);
}

std::string Native::Ipv6::Nd::Inspection::Policy::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Inspection::Policy::DeviceRole::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeviceRole' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Inspection::Policy::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Inspection::Policy::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Nd::Inspection::Policy::DeviceRole::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "monitor")
    {
        monitor = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::Ipv6::Nd::Inspection::Policy::Limit::Limit()
    :
    address_count{YType::uint16, "address-count"}
{
    yang_name = "limit"; yang_parent_name = "policy";
}

Native::Ipv6::Nd::Inspection::Policy::Limit::~Limit()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Limit::has_data() const
{
    return address_count.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(address_count.operation);
}

std::string Native::Ipv6::Nd::Inspection::Policy::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Inspection::Policy::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.operation)) leaf_name_data.push_back(address_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Inspection::Policy::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Inspection::Policy::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Nd::Inspection::Policy::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-count")
    {
        address_count = value;
    }
}

Native::Ipv6::Nd::Inspection::Policy::SecLevel::SecLevel()
    :
    minimum{YType::uint8, "minimum"}
{
    yang_name = "sec-level"; yang_parent_name = "policy";
}

Native::Ipv6::Nd::Inspection::Policy::SecLevel::~SecLevel()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::SecLevel::has_data() const
{
    return minimum.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::SecLevel::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum.operation);
}

std::string Native::Ipv6::Nd::Inspection::Policy::SecLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec-level";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Inspection::Policy::SecLevel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecLevel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Inspection::Policy::SecLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Inspection::Policy::SecLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Nd::Inspection::Policy::SecLevel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Tracking()
    :
    disable(nullptr) // presence node
	,enable(nullptr) // presence node
{
    yang_name = "tracking"; yang_parent_name = "policy";
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::~Tracking()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::has_data() const
{
    return (disable !=  nullptr && disable->has_data())
	|| (enable !=  nullptr && enable->has_data());
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::has_operation() const
{
    return is_set(operation)
	|| (disable !=  nullptr && disable->has_operation())
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::Ipv6::Nd::Inspection::Policy::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Inspection::Policy::Tracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tracking' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Inspection::Policy::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Inspection::Policy::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    return children;
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::Disable()
    :
    stale_lifetime(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime>())
{
    stale_lifetime->parent = this;

    yang_name = "disable"; yang_parent_name = "tracking";
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::~Disable()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::has_data() const
{
    return (stale_lifetime !=  nullptr && stale_lifetime->has_data());
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::has_operation() const
{
    return is_set(operation)
	|| (stale_lifetime !=  nullptr && stale_lifetime->has_operation());
}

std::string Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stale_lifetime != nullptr)
    {
        children["stale-lifetime"] = stale_lifetime;
    }

    return children;
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::StaleLifetime()
    :
    infinite{YType::empty, "infinite"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "stale-lifetime"; yang_parent_name = "disable";
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::~StaleLifetime()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::has_data() const
{
    return infinite.is_set
	|| seconds.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(infinite.operation)
	|| is_set(seconds.operation);
}

std::string Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stale-lifetime";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaleLifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (infinite.is_set || is_set(infinite.operation)) leaf_name_data.push_back(infinite.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "infinite")
    {
        infinite = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::Enable()
    :
    reachable_lifetime(std::make_shared<Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime>())
{
    reachable_lifetime->parent = this;

    yang_name = "enable"; yang_parent_name = "tracking";
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::~Enable()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::has_data() const
{
    return (reachable_lifetime !=  nullptr && reachable_lifetime->has_data());
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::has_operation() const
{
    return is_set(operation)
	|| (reachable_lifetime !=  nullptr && reachable_lifetime->has_operation());
}

std::string Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reachable_lifetime != nullptr)
    {
        children["reachable-lifetime"] = reachable_lifetime;
    }

    return children;
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::ReachableLifetime()
    :
    infinite{YType::empty, "infinite"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "reachable-lifetime"; yang_parent_name = "enable";
}

Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::~ReachableLifetime()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::has_data() const
{
    return infinite.is_set
	|| seconds.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(infinite.operation)
	|| is_set(seconds.operation);
}

std::string Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable-lifetime";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReachableLifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (infinite.is_set || is_set(infinite.operation)) leaf_name_data.push_back(infinite.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "infinite")
    {
        infinite = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Ipv6::Nd::Inspection::Policy::Validate::Validate()
    :
    source_mac{YType::empty, "source-mac"}
{
    yang_name = "validate"; yang_parent_name = "policy";
}

Native::Ipv6::Nd::Inspection::Policy::Validate::~Validate()
{
}

bool Native::Ipv6::Nd::Inspection::Policy::Validate::has_data() const
{
    return source_mac.is_set;
}

bool Native::Ipv6::Nd::Inspection::Policy::Validate::has_operation() const
{
    return is_set(operation)
	|| is_set(source_mac.operation);
}

std::string Native::Ipv6::Nd::Inspection::Policy::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Inspection::Policy::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Validate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_mac.is_set || is_set(source_mac.operation)) leaf_name_data.push_back(source_mac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Inspection::Policy::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Inspection::Policy::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Nd::Inspection::Policy::Validate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-mac")
    {
        source_mac = value;
    }
}

Native::Ipv6::Nd::Cache::Cache()
    :
    expire(std::make_shared<Native::Ipv6::Nd::Cache::Expire>())
{
    expire->parent = this;

    yang_name = "cache"; yang_parent_name = "nd";
}

Native::Ipv6::Nd::Cache::~Cache()
{
}

bool Native::Ipv6::Nd::Cache::has_data() const
{
    return (expire !=  nullptr && expire->has_data());
}

bool Native::Ipv6::Nd::Cache::has_operation() const
{
    return is_set(operation)
	|| (expire !=  nullptr && expire->has_operation());
}

std::string Native::Ipv6::Nd::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:cache";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Cache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(expire != nullptr)
    {
        children["expire"] = expire;
    }

    return children;
}

void Native::Ipv6::Nd::Cache::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Nd::Cache::Expire::Expire()
    :
    refresh{YType::empty, "refresh"},
    time{YType::uint16, "time"}
{
    yang_name = "expire"; yang_parent_name = "cache";
}

Native::Ipv6::Nd::Cache::Expire::~Expire()
{
}

bool Native::Ipv6::Nd::Cache::Expire::has_data() const
{
    return refresh.is_set
	|| time.is_set;
}

bool Native::Ipv6::Nd::Cache::Expire::has_operation() const
{
    return is_set(operation)
	|| is_set(refresh.operation)
	|| is_set(time.operation);
}

std::string Native::Ipv6::Nd::Cache::Expire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expire";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Cache::Expire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/Cisco-IOS-XE-nd:cache/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh.is_set || is_set(refresh.operation)) leaf_name_data.push_back(refresh.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Cache::Expire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Cache::Expire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Nd::Cache::Expire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "refresh")
    {
        refresh = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Ipv6::Nd::Raguard::Raguard()
    :
    attach_policy{YType::str, "attach-policy"}
{
    yang_name = "raguard"; yang_parent_name = "nd";
}

Native::Ipv6::Nd::Raguard::~Raguard()
{
}

bool Native::Ipv6::Nd::Raguard::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return attach_policy.is_set;
}

bool Native::Ipv6::Nd::Raguard::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(attach_policy.operation);
}

std::string Native::Ipv6::Nd::Raguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:raguard";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Raguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.operation)) leaf_name_data.push_back(attach_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Raguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Nd::Raguard::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Raguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Nd::Raguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
    }
}

Native::Ipv6::Nd::Raguard::Policy::Policy()
    :
    raguard_policy_name{YType::str, "raguard-policy-name"},
    trusted_port{YType::empty, "trusted-port"}
    	,
    device_role(std::make_shared<Native::Ipv6::Nd::Raguard::Policy::DeviceRole>())
	,hop_limit(std::make_shared<Native::Ipv6::Nd::Raguard::Policy::HopLimit>())
{
    device_role->parent = this;

    hop_limit->parent = this;

    yang_name = "policy"; yang_parent_name = "raguard";
}

Native::Ipv6::Nd::Raguard::Policy::~Policy()
{
}

bool Native::Ipv6::Nd::Raguard::Policy::has_data() const
{
    return raguard_policy_name.is_set
	|| trusted_port.is_set
	|| (device_role !=  nullptr && device_role->has_data())
	|| (hop_limit !=  nullptr && hop_limit->has_data());
}

bool Native::Ipv6::Nd::Raguard::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(raguard_policy_name.operation)
	|| is_set(trusted_port.operation)
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (hop_limit !=  nullptr && hop_limit->has_operation());
}

std::string Native::Ipv6::Nd::Raguard::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[raguard-policy-name='" <<raguard_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Raguard::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/nd/Cisco-IOS-XE-nd:raguard/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (raguard_policy_name.is_set || is_set(raguard_policy_name.operation)) leaf_name_data.push_back(raguard_policy_name.get_name_leafdata());
    if (trusted_port.is_set || is_set(trusted_port.operation)) leaf_name_data.push_back(trusted_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Raguard::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Raguard::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(device_role != nullptr)
    {
        children["device-role"] = device_role;
    }

    if(hop_limit != nullptr)
    {
        children["hop-limit"] = hop_limit;
    }

    return children;
}

void Native::Ipv6::Nd::Raguard::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "raguard-policy-name")
    {
        raguard_policy_name = value;
    }
    if(value_path == "trusted-port")
    {
        trusted_port = value;
    }
}

Native::Ipv6::Nd::Raguard::Policy::DeviceRole::DeviceRole()
    :
    host{YType::empty, "host"},
    monitor{YType::empty, "monitor"},
    router{YType::empty, "router"},
    switch{YType::empty, "switch"}
{
    yang_name = "device-role"; yang_parent_name = "policy";
}

Native::Ipv6::Nd::Raguard::Policy::DeviceRole::~DeviceRole()
{
}

bool Native::Ipv6::Nd::Raguard::Policy::DeviceRole::has_data() const
{
    return host.is_set
	|| monitor.is_set
	|| router.is_set
	|| switch.is_set;
}

bool Native::Ipv6::Nd::Raguard::Policy::DeviceRole::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation)
	|| is_set(monitor.operation)
	|| is_set(router.operation)
	|| is_set(switch.operation);
}

std::string Native::Ipv6::Nd::Raguard::Policy::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Raguard::Policy::DeviceRole::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeviceRole' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Raguard::Policy::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Raguard::Policy::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Nd::Raguard::Policy::DeviceRole::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "monitor")
    {
        monitor = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::Ipv6::Nd::Raguard::Policy::HopLimit::HopLimit()
    :
    maximum{YType::uint8, "maximum"},
    minimum{YType::uint8, "minimum"}
{
    yang_name = "hop-limit"; yang_parent_name = "policy";
}

Native::Ipv6::Nd::Raguard::Policy::HopLimit::~HopLimit()
{
}

bool Native::Ipv6::Nd::Raguard::Policy::HopLimit::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Ipv6::Nd::Raguard::Policy::HopLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string Native::Ipv6::Nd::Raguard::Policy::HopLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-limit";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Nd::Raguard::Policy::HopLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HopLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Nd::Raguard::Policy::HopLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Nd::Raguard::Policy::HopLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Nd::Raguard::Policy::HopLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

Native::Ipv6::Pim::Pim()
    :
    rp_address(std::make_shared<Native::Ipv6::Pim::RpAddress>())
{
    rp_address->parent = this;

    yang_name = "pim"; yang_parent_name = "ipv6";
}

Native::Ipv6::Pim::~Pim()
{
}

bool Native::Ipv6::Pim::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (rp_address !=  nullptr && rp_address->has_data());
}

bool Native::Ipv6::Pim::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Native::Ipv6::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Pim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Native::Ipv6::Pim::RpAddress>();
        }
        return rp_address;
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
        auto c = std::make_shared<Native::Ipv6::Pim::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Pim::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Pim::RpAddress::RpAddress()
    :
    access_list{YType::str, "access-list"},
    address{YType::str, "address"},
    bidir{YType::empty, "bidir"}
{
    yang_name = "rp-address"; yang_parent_name = "pim";
}

Native::Ipv6::Pim::RpAddress::~RpAddress()
{
}

bool Native::Ipv6::Pim::RpAddress::has_data() const
{
    return access_list.is_set
	|| address.is_set
	|| bidir.is_set;
}

bool Native::Ipv6::Pim::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(address.operation)
	|| is_set(bidir.operation);
}

std::string Native::Ipv6::Pim::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:rp-address";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Pim::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.operation)) leaf_name_data.push_back(bidir.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Pim::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Pim::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Pim::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "bidir")
    {
        bidir = value;
    }
}

Native::Ipv6::Pim::Vrf::Vrf()
    :
    id{YType::str, "id"}
    	,
    rp_address(std::make_shared<Native::Ipv6::Pim::Vrf::RpAddress>())
{
    rp_address->parent = this;

    yang_name = "vrf"; yang_parent_name = "pim";
}

Native::Ipv6::Pim::Vrf::~Vrf()
{
}

bool Native::Ipv6::Pim::Vrf::has_data() const
{
    return id.is_set
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Native::Ipv6::Pim::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Native::Ipv6::Pim::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:vrf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Pim::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Pim::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Pim::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    return children;
}

void Native::Ipv6::Pim::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Ipv6::Pim::Vrf::RpAddress::RpAddress()
    :
    access_list{YType::str, "access-list"},
    address{YType::str, "address"},
    bidir{YType::empty, "bidir"}
{
    yang_name = "rp-address"; yang_parent_name = "vrf";
}

Native::Ipv6::Pim::Vrf::RpAddress::~RpAddress()
{
}

bool Native::Ipv6::Pim::Vrf::RpAddress::has_data() const
{
    return access_list.is_set
	|| address.is_set
	|| bidir.is_set;
}

bool Native::Ipv6::Pim::Vrf::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(address.operation)
	|| is_set(bidir.operation);
}

std::string Native::Ipv6::Pim::Vrf::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Pim::Vrf::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.operation)) leaf_name_data.push_back(bidir.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Pim::Vrf::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Pim::Vrf::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Pim::Vrf::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "bidir")
    {
        bidir = value;
    }
}

Native::Ipv6::Route::Route()
{
    yang_name = "route"; yang_parent_name = "ipv6";
}

Native::Ipv6::Route::~Route()
{
}

bool Native::Ipv6::Route::has_data() const
{
    for (std::size_t index=0; index<ipv6_route_list.size(); index++)
    {
        if(ipv6_route_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Route::has_operation() const
{
    for (std::size_t index=0; index<ipv6_route_list.size(); index++)
    {
        if(ipv6_route_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-route-list")
    {
        for(auto const & c : ipv6_route_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Route::Ipv6RouteList>();
        c->parent = this;
        ipv6_route_list.push_back(c);
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
        auto c = std::make_shared<Native::Ipv6::Route::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_route_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Route::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Route::Ipv6RouteList::Ipv6RouteList()
    :
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv6-route-list"; yang_parent_name = "route";
}

Native::Ipv6::Route::Ipv6RouteList::~Ipv6RouteList()
{
}

bool Native::Ipv6::Route::Ipv6RouteList::has_data() const
{
    for (std::size_t index=0; index<ipv6_fwd_list.size(); index++)
    {
        if(ipv6_fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set;
}

bool Native::Ipv6::Route::Ipv6RouteList::has_operation() const
{
    for (std::size_t index=0; index<ipv6_fwd_list.size(); index++)
    {
        if(ipv6_fwd_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation);
}

std::string Native::Ipv6::Route::Ipv6RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-route-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Route::Ipv6RouteList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Route::Ipv6RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-fwd-list")
    {
        for(auto const & c : ipv6_fwd_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList>();
        c->parent = this;
        ipv6_fwd_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Route::Ipv6RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_fwd_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Route::Ipv6RouteList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::Ipv6FwdList()
    :
    fwd{YType::str, "fwd"},
    distance{YType::uint8, "distance"},
    multicast{YType::empty, "multicast"},
    next_hop{YType::str, "next-hop"},
    tag{YType::uint32, "tag"},
    track{YType::uint32, "track"},
    unicast{YType::empty, "unicast"}
{
    yang_name = "ipv6-fwd-list"; yang_parent_name = "ipv6-route-list";
}

Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::~Ipv6FwdList()
{
}

bool Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::has_data() const
{
    return fwd.is_set
	|| distance.is_set
	|| multicast.is_set
	|| next_hop.is_set
	|| tag.is_set
	|| track.is_set
	|| unicast.is_set;
}

bool Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::has_operation() const
{
    return is_set(operation)
	|| is_set(fwd.operation)
	|| is_set(distance.operation)
	|| is_set(multicast.operation)
	|| is_set(next_hop.operation)
	|| is_set(tag.operation)
	|| is_set(track.operation)
	|| is_set(unicast.operation);
}

std::string Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-fwd-list" <<"[fwd='" <<fwd <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6FwdList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.operation)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.operation)) leaf_name_data.push_back(track.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fwd")
    {
        fwd = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "track")
    {
        track = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Ipv6::Route::Vrf::Vrf()
    :
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "route";
}

Native::Ipv6::Route::Vrf::~Vrf()
{
}

bool Native::Ipv6::Route::Vrf::has_data() const
{
    for (std::size_t index=0; index<ipv6_route_list.size(); index++)
    {
        if(ipv6_route_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ipv6::Route::Vrf::has_operation() const
{
    for (std::size_t index=0; index<ipv6_route_list.size(); index++)
    {
        if(ipv6_route_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ipv6::Route::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Route::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Route::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-route-list")
    {
        for(auto const & c : ipv6_route_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Route::Vrf::Ipv6RouteList>();
        c->parent = this;
        ipv6_route_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Route::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_route_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Route::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6RouteList()
    :
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv6-route-list"; yang_parent_name = "vrf";
}

Native::Ipv6::Route::Vrf::Ipv6RouteList::~Ipv6RouteList()
{
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::has_data() const
{
    for (std::size_t index=0; index<ipv6_fwd_list.size(); index++)
    {
        if(ipv6_fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set;
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::has_operation() const
{
    for (std::size_t index=0; index<ipv6_fwd_list.size(); index++)
    {
        if(ipv6_fwd_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation);
}

std::string Native::Ipv6::Route::Vrf::Ipv6RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-route-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Route::Vrf::Ipv6RouteList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6RouteList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Route::Vrf::Ipv6RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-fwd-list")
    {
        for(auto const & c : ipv6_fwd_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList>();
        c->parent = this;
        ipv6_fwd_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Route::Vrf::Ipv6RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_fwd_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Route::Vrf::Ipv6RouteList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::Ipv6FwdList()
    :
    fwd{YType::str, "fwd"},
    distance{YType::uint8, "distance"},
    multicast{YType::empty, "multicast"},
    next_hop{YType::str, "next-hop"},
    tag{YType::uint32, "tag"},
    track{YType::uint32, "track"},
    unicast{YType::empty, "unicast"}
{
    yang_name = "ipv6-fwd-list"; yang_parent_name = "ipv6-route-list";
}

Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::~Ipv6FwdList()
{
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::has_data() const
{
    return fwd.is_set
	|| distance.is_set
	|| multicast.is_set
	|| next_hop.is_set
	|| tag.is_set
	|| track.is_set
	|| unicast.is_set;
}

bool Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::has_operation() const
{
    return is_set(operation)
	|| is_set(fwd.operation)
	|| is_set(distance.operation)
	|| is_set(multicast.operation)
	|| is_set(next_hop.operation)
	|| is_set(tag.operation)
	|| is_set(track.operation)
	|| is_set(unicast.operation);
}

std::string Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-fwd-list" <<"[fwd='" <<fwd <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6FwdList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.operation)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.operation)) leaf_name_data.push_back(track.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fwd")
    {
        fwd = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "track")
    {
        track = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Ipv6::Router::Router()
{
    yang_name = "router"; yang_parent_name = "ipv6";
}

Native::Ipv6::Router::~Router()
{
}

bool Native::Ipv6::Router::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Router::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ipv6::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Router::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Router::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Router::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    default_metric(std::make_shared<Native::Ipv6::Router::Eigrp::DefaultMetric>())
	,distance(std::make_shared<Native::Ipv6::Router::Eigrp::Distance>())
	,distribute_list(std::make_shared<Native::Ipv6::Router::Eigrp::DistributeList>())
	,eigrp(std::make_shared<Native::Ipv6::Router::Eigrp::Eigrp_>())
{
    default_metric->parent = this;

    distance->parent = this;

    distribute_list->parent = this;

    eigrp->parent = this;

    yang_name = "eigrp"; yang_parent_name = "router";
}

Native::Ipv6::Router::Eigrp::~Eigrp()
{
}

bool Native::Ipv6::Router::Eigrp::has_data() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
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
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Ipv6::Router::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/router/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Native::Ipv6::Router::Eigrp::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Ipv6::Router::Eigrp::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Ipv6::Router::Eigrp::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Ipv6::Router::Eigrp::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "passive-interface")
    {
        for(auto const & c : passive_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Router::Eigrp::PassiveInterface>();
        c->parent = this;
        passive_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    for (auto const & c : passive_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Router::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Ipv6::Router::Eigrp::DefaultMetric::DefaultMetric()
    :
    dm_rdr{YType::uint32, "dm-rdr"},
    dm_rdr0{YType::uint32, "dm-rdr0"},
    dm_rdr_pct{YType::uint8, "dm-rdr-pct"},
    effective_bandwith_metric{YType::uint8, "effective-bandwith-metric"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "default-metric"; yang_parent_name = "eigrp";
}

Native::Ipv6::Router::Eigrp::DefaultMetric::~DefaultMetric()
{
}

bool Native::Ipv6::Router::Eigrp::DefaultMetric::has_data() const
{
    return dm_rdr.is_set
	|| dm_rdr0.is_set
	|| dm_rdr_pct.is_set
	|| effective_bandwith_metric.is_set
	|| mtu.is_set;
}

bool Native::Ipv6::Router::Eigrp::DefaultMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(dm_rdr.operation)
	|| is_set(dm_rdr0.operation)
	|| is_set(dm_rdr_pct.operation)
	|| is_set(effective_bandwith_metric.operation)
	|| is_set(mtu.operation);
}

std::string Native::Ipv6::Router::Eigrp::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:default-metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Eigrp::DefaultMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr.is_set || is_set(dm_rdr.operation)) leaf_name_data.push_back(dm_rdr.get_name_leafdata());
    if (dm_rdr0.is_set || is_set(dm_rdr0.operation)) leaf_name_data.push_back(dm_rdr0.get_name_leafdata());
    if (dm_rdr_pct.is_set || is_set(dm_rdr_pct.operation)) leaf_name_data.push_back(dm_rdr_pct.get_name_leafdata());
    if (effective_bandwith_metric.is_set || is_set(effective_bandwith_metric.operation)) leaf_name_data.push_back(effective_bandwith_metric.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Eigrp::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Eigrp::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Eigrp::DefaultMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr = value;
    }
    if(value_path == "dm-rdr0")
    {
        dm_rdr0 = value;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct = value;
    }
    if(value_path == "effective-bandwith-metric")
    {
        effective_bandwith_metric = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Native::Ipv6::Router::Eigrp::Distance::Distance()
    :
    eigrp(std::make_shared<Native::Ipv6::Router::Eigrp::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "eigrp";
}

Native::Ipv6::Router::Eigrp::Distance::~Distance()
{
}

bool Native::Ipv6::Router::Eigrp::Distance::has_data() const
{
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Ipv6::Router::Eigrp::Distance::has_operation() const
{
    return is_set(operation)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Ipv6::Router::Eigrp::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:distance";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Eigrp::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Eigrp::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Eigrp::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    return children;
}

void Native::Ipv6::Router::Eigrp::Distance::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Eigrp::Distance::Eigrp_::Eigrp_()
    :
    external_route{YType::uint8, "external-route"},
    internal_route{YType::uint8, "internal-route"}
{
    yang_name = "eigrp"; yang_parent_name = "distance";
}

Native::Ipv6::Router::Eigrp::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Ipv6::Router::Eigrp::Distance::Eigrp_::has_data() const
{
    return external_route.is_set
	|| internal_route.is_set;
}

bool Native::Ipv6::Router::Eigrp::Distance::Eigrp_::has_operation() const
{
    return is_set(operation)
	|| is_set(external_route.operation)
	|| is_set(internal_route.operation);
}

std::string Native::Ipv6::Router::Eigrp::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Eigrp::Distance::Eigrp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route.is_set || is_set(external_route.operation)) leaf_name_data.push_back(external_route.get_name_leafdata());
    if (internal_route.is_set || is_set(internal_route.operation)) leaf_name_data.push_back(internal_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Eigrp::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Eigrp::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Eigrp::Distance::Eigrp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-route")
    {
        external_route = value;
    }
    if(value_path == "internal-route")
    {
        internal_route = value;
    }
}

Native::Ipv6::Router::Eigrp::DistributeList::DistributeList()
{
    yang_name = "distribute-list"; yang_parent_name = "eigrp";
}

Native::Ipv6::Router::Eigrp::DistributeList::~DistributeList()
{
}

bool Native::Ipv6::Router::Eigrp::DistributeList::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Router::Eigrp::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ipv6::Router::Eigrp::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:distribute-list";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Eigrp::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Eigrp::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Router::Eigrp::DistributeList::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Eigrp::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Router::Eigrp::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::PrefixList()
    :
    name{YType::str, "name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "prefix-list"; yang_parent_name = "distribute-list";
}

Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::~PrefixList()
{
}

bool Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::has_data() const
{
    return name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Eigrp::DistributeList::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Ipv6::Router::Eigrp::Eigrp_::Eigrp_()
    :
    router_id{YType::str, "router-id"}
{
    yang_name = "eigrp"; yang_parent_name = "eigrp";
}

Native::Ipv6::Router::Eigrp::Eigrp_::~Eigrp_()
{
}

bool Native::Ipv6::Router::Eigrp::Eigrp_::has_data() const
{
    return router_id.is_set;
}

bool Native::Ipv6::Router::Eigrp::Eigrp_::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation);
}

std::string Native::Ipv6::Router::Eigrp::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:eigrp";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Eigrp::Eigrp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Eigrp::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Eigrp::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Eigrp::Eigrp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Native::Ipv6::Router::Eigrp::PassiveInterface::PassiveInterface()
    :
    name{YType::str, "name"}
{
    yang_name = "passive-interface"; yang_parent_name = "eigrp";
}

Native::Ipv6::Router::Eigrp::PassiveInterface::~PassiveInterface()
{
}

bool Native::Ipv6::Router::Eigrp::PassiveInterface::has_data() const
{
    return name.is_set;
}

bool Native::Ipv6::Router::Eigrp::PassiveInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ipv6::Router::Eigrp::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:passive-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Eigrp::PassiveInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PassiveInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Eigrp::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Eigrp::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Eigrp::PassiveInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ipv6::Router::Rip::Rip()
    :
    id{YType::str, "id"},
    distance{YType::uint8, "distance"},
    maximum_paths{YType::uint32, "maximum-paths"},
    poison_reverse{YType::empty, "poison-reverse"},
    split_horizon{YType::empty, "split-horizon"}
    	,
    distribute_list(std::make_shared<Native::Ipv6::Router::Rip::DistributeList>())
	,redistribute(std::make_shared<Native::Ipv6::Router::Rip::Redistribute>())
	,timers(std::make_shared<Native::Ipv6::Router::Rip::Timers>())
{
    distribute_list->parent = this;

    redistribute->parent = this;

    timers->parent = this;

    yang_name = "rip"; yang_parent_name = "router";
}

Native::Ipv6::Router::Rip::~Rip()
{
}

bool Native::Ipv6::Router::Rip::has_data() const
{
    return id.is_set
	|| distance.is_set
	|| maximum_paths.is_set
	|| poison_reverse.is_set
	|| split_horizon.is_set
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Ipv6::Router::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(distance.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(poison_reverse.operation)
	|| is_set(split_horizon.operation)
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Ipv6::Router::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rip:rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/router/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (poison_reverse.is_set || is_set(poison_reverse.operation)) leaf_name_data.push_back(poison_reverse.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.operation)) leaf_name_data.push_back(split_horizon.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Ipv6::Router::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "poison-reverse")
    {
        poison_reverse = value;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
    }
}

Native::Ipv6::Router::Rip::DistributeList::DistributeList()
{
    yang_name = "distribute-list"; yang_parent_name = "rip";
}

Native::Ipv6::Router::Rip::DistributeList::~DistributeList()
{
}

bool Native::Ipv6::Router::Rip::DistributeList::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Router::Rip::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ipv6::Router::Rip::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Router::Rip::DistributeList::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Router::Rip::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Rip::DistributeList::PrefixList::PrefixList()
    :
    name{YType::str, "name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "prefix-list"; yang_parent_name = "distribute-list";
}

Native::Ipv6::Router::Rip::DistributeList::PrefixList::~PrefixList()
{
}

bool Native::Ipv6::Router::Rip::DistributeList::PrefixList::has_data() const
{
    return name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Ipv6::Router::Rip::DistributeList::PrefixList::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Ipv6::Router::Rip::DistributeList::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::DistributeList::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::DistributeList::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::DistributeList::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::DistributeList::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Redistribute()
    :
    application(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Application>())
	,connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,lisp(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Lisp>())
	,mobile(nullptr) // presence node
	,nd(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Nd>())
	,odr(nullptr) // presence node
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    application->parent = this;

    lisp->parent = this;

    nd->parent = this;

    yang_name = "redistribute"; yang_parent_name = "rip";
}

Native::Ipv6::Router::Rip::Redistribute::~Redistribute()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (application !=  nullptr && application->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Rip::Redistribute::Application::Application()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "application"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Application::~Application()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Application::has_data() const
{
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Application::has_operation() const
{
    return is_set(operation)
	|| is_set(include_connected.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Application::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Lisp::~Lisp()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Lisp::has_data() const
{
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(include_connected.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Nd::Nd()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "nd"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Nd::~Nd()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Nd::has_data() const
{
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Nd::has_operation() const
{
    return is_set(operation)
	|| is_set(include_connected.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Nd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Nd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Connected::Connected()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Connected::~Connected()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::has_operation() const
{
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Connected::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "connected";
}

Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::~Bgp()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "bgp";
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint16, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "eigrp";
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Isis::Isis()
    :
    rip_isis_redist(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Isis::~Isis()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"}
    	,
    rip_isis_redist(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis";
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis-area";
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::has_operation() const
{
    return is_set(operation)
	|| is_set(isis_level_routes.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipIsisRedist' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.operation)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist";
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis";
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::has_operation() const
{
    return is_set(operation)
	|| is_set(isis_level_routes.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipIsisRedist' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.operation)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist";
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoIgrp()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_data())
            return true;
    }
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isoigrp-list")
    {
        for(auto const & c : isoigrp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList>();
        c->parent = this;
        isoigrp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isoigrp_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::IsoigrpList()
    :
    iso_area_tag{YType::str, "iso-area-tag"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "isoigrp-list"; yang_parent_name = "iso-igrp";
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::~IsoigrpList()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::has_data() const
{
    return iso_area_tag.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::has_operation() const
{
    return is_set(operation)
	|| is_set(iso_area_tag.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isoigrp-list" <<"[iso-area-tag='" <<iso_area_tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoigrpList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_area_tag.is_set || is_set(iso_area_tag.operation)) leaf_name_data.push_back(iso_area_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "isoigrp-list";
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "iso-igrp";
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::Mobile()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::~Mobile()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::has_operation() const
{
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobile' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Mobile::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "mobile";
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Odr::Odr()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Odr::~Odr()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::has_operation() const
{
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Odr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Odr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Odr::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "odr";
}

Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint16, "process-id"}
    	,
    match(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match>())
	,rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap>())
{
    match->parent = this;

    rip_metric_route_map->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::~Ospf()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return process_id.is_set
	|| (match !=  nullptr && match->has_data())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(process_id.operation)
	|| (match !=  nullptr && match->has_operation())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match>();
        }
        return match;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
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
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-id")
    {
        process_id = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::Vrf()
    :
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "ospf";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::~Vrf()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::has_data() const
{
    return name.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospf";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::Internal()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "internal"; yang_parent_name = "match";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "internal";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "external"; yang_parent_name = "match";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "external";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(nssa_external_routes.operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "nssa-external";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "ospf";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Static_::Static_()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Static_::~Static_()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::has_operation() const
{
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "static";
}

Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::Rip_()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute";
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::~Rip_()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::has_operation() const
{
    return is_set(operation)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Rip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Rip_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Rip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Rip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip";
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipMetricRouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{
    yang_name = "metric"; yang_parent_name = "rip-metric-route-map";
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_value.operation)
	|| is_set(transparent.operation);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.operation)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
    }
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Ipv6::Router::Rip::Timers::Timers()
    :
    garbage_collection{YType::uint16, "garbage-collection"},
    holddown{YType::uint16, "holddown"},
    timeout{YType::uint16, "timeout"},
    update{YType::uint16, "update"}
{
    yang_name = "timers"; yang_parent_name = "rip";
}

Native::Ipv6::Router::Rip::Timers::~Timers()
{
}

bool Native::Ipv6::Router::Rip::Timers::has_data() const
{
    return garbage_collection.is_set
	|| holddown.is_set
	|| timeout.is_set
	|| update.is_set;
}

bool Native::Ipv6::Router::Rip::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(garbage_collection.operation)
	|| is_set(holddown.operation)
	|| is_set(timeout.operation)
	|| is_set(update.operation);
}

std::string Native::Ipv6::Router::Rip::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Router::Rip::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (garbage_collection.is_set || is_set(garbage_collection.operation)) leaf_name_data.push_back(garbage_collection.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.operation)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (update.is_set || is_set(update.operation)) leaf_name_data.push_back(update.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Router::Rip::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "garbage-collection")
    {
        garbage_collection = value;
    }
    if(value_path == "holddown")
    {
        holddown = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "update")
    {
        update = value;
    }
}

Native::Ipv6::Spd::Spd()
    :
    mode{YType::enumeration, "mode"}
    	,
    queue(std::make_shared<Native::Ipv6::Spd::Queue>())
{
    queue->parent = this;

    yang_name = "spd"; yang_parent_name = "ipv6";
}

Native::Ipv6::Spd::~Spd()
{
}

bool Native::Ipv6::Spd::has_data() const
{
    return mode.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Ipv6::Spd::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Ipv6::Spd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spd";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Spd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Spd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Ipv6::Spd::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Spd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Ipv6::Spd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::Ipv6::Spd::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{
    yang_name = "queue"; yang_parent_name = "spd";
}

Native::Ipv6::Spd::Queue::~Queue()
{
}

bool Native::Ipv6::Spd::Queue::has_data() const
{
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Ipv6::Spd::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(max_threshold.operation)
	|| is_set(min_threshold.operation);
}

std::string Native::Ipv6::Spd::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Spd::Queue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/spd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.operation)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.operation)) leaf_name_data.push_back(min_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Spd::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Spd::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Spd::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
    }
}

Native::Ipv6::PrefixList::PrefixList()
    :
    sequence_number{YType::empty, "sequence-number"}
{
    yang_name = "prefix-list"; yang_parent_name = "ipv6";
}

Native::Ipv6::PrefixList::~PrefixList()
{
}

bool Native::Ipv6::PrefixList::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return sequence_number.is_set;
}

bool Native::Ipv6::PrefixList::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(sequence_number.operation);
}

std::string Native::Ipv6::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::PrefixList::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Native::Ipv6::PrefixList::Prefixes::Prefixes()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    deny(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Deny>())
	,permit(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "prefixes"; yang_parent_name = "prefix-list";
}

Native::Ipv6::PrefixList::Prefixes::~Prefixes()
{
}

bool Native::Ipv6::PrefixList::Prefixes::has_data() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ipv6::PrefixList::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ipv6::PrefixList::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::PrefixList::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/prefix-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "seq")
    {
        for(auto const & c : seq)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq>();
        c->parent = this;
        seq.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    for (auto const & c : seq)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::PrefixList::Prefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Ipv6::PrefixList::Prefixes::Permit::Permit()
    :
    address{YType::str, "address"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{
    yang_name = "permit"; yang_parent_name = "prefixes";
}

Native::Ipv6::PrefixList::Prefixes::Permit::~Permit()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Permit::has_data() const
{
    return address.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Permit::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(ge.operation)
	|| is_set(le.operation);
}

std::string Native::Ipv6::PrefixList::Prefixes::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::PrefixList::Prefixes::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ge.is_set || is_set(ge.operation)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.operation)) leaf_name_data.push_back(le.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "ge")
    {
        ge = value;
    }
    if(value_path == "le")
    {
        le = value;
    }
}

Native::Ipv6::PrefixList::Prefixes::Deny::Deny()
    :
    address{YType::str, "address"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{
    yang_name = "deny"; yang_parent_name = "prefixes";
}

Native::Ipv6::PrefixList::Prefixes::Deny::~Deny()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Deny::has_data() const
{
    return address.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Deny::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(ge.operation)
	|| is_set(le.operation);
}

std::string Native::Ipv6::PrefixList::Prefixes::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::PrefixList::Prefixes::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ge.is_set || is_set(ge.operation)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.operation)) leaf_name_data.push_back(le.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "ge")
    {
        ge = value;
    }
    if(value_path == "le")
    {
        le = value;
    }
}

const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::ModeEnum::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::ModeEnum::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::Password::EncryptionEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::ModeEnum::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::ModeEnum::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Password::EncryptionEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::CISCO_AP_AUTO_SMARTPORT {0, "CISCO_AP_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::CISCO_DMP_AUTO_SMARTPORT {1, "CISCO_DMP_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::CISCO_DMP_AUTO_SMARTPORT_V1 {2, "CISCO_DMP_AUTO_SMARTPORT_V1"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::CISCO_IP_CAMERA_AUTO_SMARTPORT {3, "CISCO_IP_CAMERA_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::CISCO_LAST_RESORT_SMARTPORT {4, "CISCO_LAST_RESORT_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::CISCO_LIGHT_AUTO_SMARTPORT {5, "CISCO_LIGHT_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::CISCO_LWAP_AUTO_SMARTPORT {6, "CISCO_LWAP_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::CISCO_PHONE_AUTO_SMARTPORT {7, "CISCO_PHONE_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::CISCO_PHONE_AUTO_SMARTPORT_V1 {8, "CISCO_PHONE_AUTO_SMARTPORT_V1"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::CISCO_ROUTER_AUTO_SMARTPORT {9, "CISCO_ROUTER_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::CISCO_SWITCH_AUTO_SMARTPORT {10, "CISCO_SWITCH_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::MS_IP_CAMERA_AUTO_SMARTPORT {11, "MS_IP_CAMERA_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfigurationEnum::MS_VIDEO_CONF_AUTO_SMARTPORT {12, "MS_VIDEO_CONF_AUTO_SMARTPORT"};

const Enum::YLeaf Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::ValidLifetimeEnum::infinite {0, "infinite"};

const Enum::YLeaf Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::PreferredLifetimeEnum::infinite {0, "infinite"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ActionEnum::deny {0, "deny"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ActionEnum::permit {1, "permit"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ProtocolEnum::ahp {0, "ahp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ProtocolEnum::esp {1, "esp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ProtocolEnum::hbh {2, "hbh"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ProtocolEnum::icmp {3, "icmp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ProtocolEnum::ipv6 {4, "ipv6"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ProtocolEnum::pcp {5, "pcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ProtocolEnum::sctp {6, "sctp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ProtocolEnum::tcp {7, "tcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::ProtocolEnum::udp {8, "udp"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::beyond_scope {0, "beyond-scope"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dhaad_reply {2, "dhaad-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dhaad_request {3, "dhaad-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_reply {4, "echo-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_request {5, "echo-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::header {6, "header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::hop_limit {7, "hop-limit"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_query {8, "mld-query"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_reduction {9, "mld-reduction"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_report {10, "mld-report"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mpd_advertisement {11, "mpd-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mpd_solicitation {12, "mpd-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::nd_na {13, "nd-na"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::nd_ns {14, "nd-ns"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::next_header {15, "next-header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_admin {16, "no-admin"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_route {17, "no-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::packet_too_big {18, "packet-too-big"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_option {19, "parameter-option"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_problem {20, "parameter-problem"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::port_unreachable {21, "port-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reassembly_timeout {22, "reassembly-timeout"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::redirect {23, "redirect"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reject_route {24, "reject-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_command {25, "renum-command"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_result {26, "renum-result"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_seq_number {27, "renum-seq-number"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_advertisement {28, "router-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_renumbering {29, "router-renumbering"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_solicitation {30, "router-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_policy {31, "source-policy"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::time_exceeded {32, "time-exceeded"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::unreachable {33, "unreachable"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ActionEnum::deny {0, "deny"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ActionEnum::permit {1, "permit"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ahp {0, "ahp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::esp {1, "esp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::hbh {2, "hbh"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::icmp {3, "icmp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ipv6 {4, "ipv6"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::pcp {5, "pcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::sctp {6, "sctp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::tcp {7, "tcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::udp {8, "udp"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::beyond_scope {0, "beyond-scope"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dhaad_reply {2, "dhaad-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dhaad_request {3, "dhaad-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_reply {4, "echo-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_request {5, "echo-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::header {6, "header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::hop_limit {7, "hop-limit"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_query {8, "mld-query"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_reduction {9, "mld-reduction"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_report {10, "mld-report"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mpd_advertisement {11, "mpd-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mpd_solicitation {12, "mpd-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::nd_na {13, "nd-na"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::nd_ns {14, "nd-ns"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::next_header {15, "next-header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_admin {16, "no-admin"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_route {17, "no-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::packet_too_big {18, "packet-too-big"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_option {19, "parameter-option"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_problem {20, "parameter-problem"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::port_unreachable {21, "port-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reassembly_timeout {22, "reassembly-timeout"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::redirect {23, "redirect"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reject_route {24, "reject-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_command {25, "renum-command"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_result {26, "renum-result"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_seq_number {27, "renum-seq-number"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_advertisement {28, "router-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_renumbering {29, "router-renumbering"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_solicitation {30, "router-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_policy {31, "source-policy"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::time_exceeded {32, "time-exceeded"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::unreachable {33, "unreachable"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ActionEnum::deny {0, "deny"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ActionEnum::permit {1, "permit"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ProtocolEnum::ahp {0, "ahp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ProtocolEnum::esp {1, "esp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ProtocolEnum::hbh {2, "hbh"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ProtocolEnum::icmp {3, "icmp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ProtocolEnum::ipv6 {4, "ipv6"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ProtocolEnum::pcp {5, "pcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ProtocolEnum::sctp {6, "sctp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ProtocolEnum::tcp {7, "tcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::ProtocolEnum::udp {8, "udp"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::beyond_scope {0, "beyond-scope"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dhaad_reply {2, "dhaad-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dhaad_request {3, "dhaad-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_reply {4, "echo-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_request {5, "echo-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::header {6, "header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::hop_limit {7, "hop-limit"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_query {8, "mld-query"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_reduction {9, "mld-reduction"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_report {10, "mld-report"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mpd_advertisement {11, "mpd-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mpd_solicitation {12, "mpd-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::nd_na {13, "nd-na"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::nd_ns {14, "nd-ns"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::next_header {15, "next-header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_admin {16, "no-admin"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_route {17, "no-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::packet_too_big {18, "packet-too-big"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_option {19, "parameter-option"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_problem {20, "parameter-problem"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::port_unreachable {21, "port-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reassembly_timeout {22, "reassembly-timeout"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::redirect {23, "redirect"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reject_route {24, "reject-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_command {25, "renum-command"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_result {26, "renum-result"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_seq_number {27, "renum-seq-number"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_advertisement {28, "router-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_renumbering {29, "router-renumbering"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_solicitation {30, "router-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_policy {31, "source-policy"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::time_exceeded {32, "time-exceeded"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgTypeEnum::unreachable {33, "unreachable"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ActionEnum::deny {0, "deny"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ActionEnum::permit {1, "permit"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ahp {0, "ahp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::esp {1, "esp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::hbh {2, "hbh"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::icmp {3, "icmp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ipv6 {4, "ipv6"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::pcp {5, "pcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::sctp {6, "sctp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::tcp {7, "tcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::ProtocolEnum::udp {8, "udp"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::beyond_scope {0, "beyond-scope"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dhaad_reply {2, "dhaad-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dhaad_request {3, "dhaad-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_reply {4, "echo-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_request {5, "echo-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::header {6, "header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::hop_limit {7, "hop-limit"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_query {8, "mld-query"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_reduction {9, "mld-reduction"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mld_report {10, "mld-report"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mpd_advertisement {11, "mpd-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mpd_solicitation {12, "mpd-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::nd_na {13, "nd-na"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::nd_ns {14, "nd-ns"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::next_header {15, "next-header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_admin {16, "no-admin"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_route {17, "no-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::packet_too_big {18, "packet-too-big"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_option {19, "parameter-option"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_problem {20, "parameter-problem"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::port_unreachable {21, "port-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reassembly_timeout {22, "reassembly-timeout"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::redirect {23, "redirect"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reject_route {24, "reject-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_command {25, "renum-command"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_result {26, "renum-result"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::renum_seq_number {27, "renum-seq-number"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_advertisement {28, "router-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_renumbering {29, "router-renumbering"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_solicitation {30, "router-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_policy {31, "source-policy"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::time_exceeded {32, "time-exceeded"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::unreachable {33, "unreachable"};

const Enum::YLeaf Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::FwdEnum::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::FwdEnum::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ipv6::Router::Eigrp::PassiveInterface::NameEnum::default_ {0, "default"};

const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutesEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutesEnum::level_2 {1, "level-2"};
const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutesEnum::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutesEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutesEnum::level_2 {1, "level-2"};
const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutesEnum::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Ipv6::Spd::ModeEnum::aggressive {0, "aggressive"};


}
}

