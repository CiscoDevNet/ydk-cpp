
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_103.hpp"
#include "Cisco_IOS_XE_native_106.hpp"
#include "Cisco_IOS_XE_native_104.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::~Itr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/itr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::~Etr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::has_operation() const
{
    return is_set(operation)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/map-resolver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/map-resolver/map-request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;

    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/map-resolver/map-request/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "registered";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::has_operation() const
{
    return is_set(operation)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/map-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/map-server/map-register/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{
    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allowed_locator.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/map-server/map-register/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.operation)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{
    yang_name = "distance"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance::~Distance()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(alt.operation)
	|| is_set(away.operation)
	|| is_set(dyn_eid.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.operation)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.operation)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.operation)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt")
    {
        alt = value;
    }
    if(value_path == "away")
    {
        away = value;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::has_data() const
{
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::has_operation() const
{
    return is_set(operation)
	|| is_set(site_registration.operation)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.operation)) leaf_name_data.push_back(site_registration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{
    yang_name = "away-eids"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::AwayEids::has_operation() const
{
    return is_set(operation)
	|| is_set(send_map_request.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::AwayEids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/map-cache/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.operation)) leaf_name_data.push_back(send_map_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache::AwayEids::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "map-cache-persistent"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "proxy-itr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv6_addr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport::RouteExport()
    :
    away_eids{YType::empty, "away-eids"},
    site_registrations{YType::empty, "site-registrations"}
{
    yang_name = "route-export"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport::has_data() const
{
    return away_eids.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport::has_operation() const
{
    return is_set(operation)
	|| is_set(away_eids.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (away_eids.is_set || is_set(away_eids.operation)) leaf_name_data.push_back(away_eids.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "away-eids")
    {
        away_eids = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_address.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.operation)) leaf_name_data.push_back(locator_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{
    yang_name = "priority"; yang_parent_name = "use-petr";
}

Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_value.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.operation)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/database-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::Itr::~Itr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Default_::Service::Ipv6::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/itr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::~Etr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::has_operation() const
{
    return is_set(operation)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/map-resolver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/map-resolver/map-request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;

    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/map-resolver/map-request/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "registered";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapServer::has_operation() const
{
    return is_set(operation)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapServer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/map-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/map-server/map-register/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{
    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allowed_locator.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/map-server/map-register/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.operation)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{
    yang_name = "distance"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::Distance::~Distance()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(alt.operation)
	|| is_set(away.operation)
	|| is_set(dyn_eid.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.operation)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.operation)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.operation)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt")
    {
        alt = value;
    }
    if(value_path == "away")
    {
        away = value;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapCache::has_data() const
{
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapCache::has_operation() const
{
    return is_set(operation)
	|| is_set(site_registration.operation)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.operation)) leaf_name_data.push_back(site_registration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{
    yang_name = "away-eids"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapCache::AwayEids::has_operation() const
{
    return is_set(operation)
	|| is_set(send_map_request.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapCache::AwayEids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/map-cache/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.operation)) leaf_name_data.push_back(send_map_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapCache::AwayEids::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "map-cache-persistent"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "proxy-itr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv6_addr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::RouteExport::RouteExport()
    :
    away_eids{YType::empty, "away-eids"},
    site_registrations{YType::empty, "site-registrations"}
{
    yang_name = "route-export"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::RouteExport::has_data() const
{
    return away_eids.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::RouteExport::has_operation() const
{
    return is_set(operation)
	|| is_set(away_eids.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::RouteExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (away_eids.is_set || is_set(away_eids.operation)) leaf_name_data.push_back(away_eids.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::RouteExport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "away-eids")
    {
        away_eids = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_address.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.operation)) leaf_name_data.push_back(locator_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
    }
}

Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{
    yang_name = "priority"; yang_parent_name = "use-petr";
}

Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_value.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.operation)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ipv6::UsePetr::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Ethernet()
    :
    map_request_source{YType::str, "map-request-source"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping>())
	,default_(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__>())
	,encapsulation(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Encapsulation>())
	,etr(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::ItrEnable>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapCacheLimit>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,site_registration(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::SolicitMapRequest>())
{
    database_mapping->parent = this;

    default_->parent = this;

    encapsulation->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache_limit->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "ethernet"; yang_parent_name = "service";
}

Native::Router::Lisp::Default_::Service::Ethernet::~Ethernet()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::has_data() const
{
    return map_request_source.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(map_request_source.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__>();
        }
        return default_;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Default__()
    :
    map_request_source{YType::str, "map-request-source"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping>())
	,encapsulation(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Encapsulation>())
	,etr(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::ItrEnable>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapCacheLimit>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,site_registration(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::SolicitMapRequest>())
{
    database_mapping->parent = this;

    encapsulation->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache_limit->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "default"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::~Default__()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::has_data() const
{
    return map_request_source.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::has_operation() const
{
    return is_set(operation)
	|| is_set(map_request_source.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Encapsulation::Encapsulation()
    :
    vxlan{YType::empty, "vxlan"}
{
    yang_name = "encapsulation"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Encapsulation::~Encapsulation()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Encapsulation::has_data() const
{
    return vxlan.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(vxlan.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vxlan.is_set || is_set(vxlan.operation)) leaf_name_data.push_back(vxlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vxlan")
    {
        vxlan = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/database-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::~Itr()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/itr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::~Etr()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::has_operation() const
{
    return is_set(operation)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/map-resolver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/map-resolver/map-request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;

    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/map-resolver/map-request/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "registered";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::has_operation() const
{
    return is_set(operation)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/map-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/map-server/map-register/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{
    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allowed_locator.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/map-server/map-register/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.operation)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Service::Ethernet::Default__::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Default__::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Default__::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Default__::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Default__::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Default__::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Default__::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Encapsulation::Encapsulation()
    :
    vxlan{YType::empty, "vxlan"}
{
    yang_name = "encapsulation"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::Encapsulation::~Encapsulation()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Encapsulation::has_data() const
{
    return vxlan.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(vxlan.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vxlan.is_set || is_set(vxlan.operation)) leaf_name_data.push_back(vxlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vxlan")
    {
        vxlan = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/database-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::Itr::~Itr()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Default_::Service::Ethernet::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/itr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::~Etr()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::has_operation() const
{
    return is_set(operation)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/map-resolver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/map-resolver/map-request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;

    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/map-resolver/map-request/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "registered";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapServer::has_operation() const
{
    return is_set(operation)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapServer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/map-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/map-server/map-register/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{
    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allowed_locator.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/map-server/map-register/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.operation)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Default_::Service::Ethernet::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Default_::Service::Ethernet::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Default_::Service::Ethernet::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Default_::Service::Ethernet::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Default_::Service::Ethernet::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Service::Ethernet::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Service::Ethernet::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Service::Ethernet::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Service::Ethernet::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Default_::Encapsulation::Encapsulation()
    :
    vxlan{YType::empty, "vxlan"}
{
    yang_name = "encapsulation"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::Encapsulation::~Encapsulation()
{
}

bool Native::Router::Lisp::Default_::Encapsulation::has_data() const
{
    return vxlan.is_set;
}

bool Native::Router::Lisp::Default_::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(vxlan.operation);
}

std::string Native::Router::Lisp::Default_::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vxlan.is_set || is_set(vxlan.operation)) leaf_name_data.push_back(vxlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vxlan")
    {
        vxlan = value;
    }
}

Native::Router::Lisp::Default_::LocatorSet::LocatorSet()
    :
    name{YType::str, "name"},
    auto_discover_rlocs{YType::empty, "auto-discover-rlocs"}
{
    yang_name = "locator-set"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::LocatorSet::~LocatorSet()
{
}

bool Native::Router::Lisp::Default_::LocatorSet::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return name.is_set
	|| auto_discover_rlocs.is_set;
}

bool Native::Router::Lisp::Default_::LocatorSet::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(auto_discover_rlocs.operation);
}

std::string Native::Router::Lisp::Default_::LocatorSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-set" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::LocatorSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (auto_discover_rlocs.is_set || is_set(auto_discover_rlocs.operation)) leaf_name_data.push_back(auto_discover_rlocs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::LocatorSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::LocatorSet::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv4-interface")
    {
        for(auto const & c : ipv4_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::LocatorSet::Ipv4Interface>();
        c->parent = this;
        ipv4_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv6-interface")
    {
        for(auto const & c : ipv6_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::LocatorSet::Ipv6Interface>();
        c->parent = this;
        ipv6_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::LocatorSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::LocatorSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "auto-discover-rlocs")
    {
        auto_discover_rlocs = value;
    }
}

Native::Router::Lisp::Default_::LocatorSet::Ipv4Interface::Ipv4Interface()
    :
    name{YType::str, "name"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "IPv4-interface"; yang_parent_name = "locator-set";
}

Native::Router::Lisp::Default_::LocatorSet::Ipv4Interface::~Ipv4Interface()
{
}

bool Native::Router::Lisp::Default_::LocatorSet::Ipv4Interface::has_data() const
{
    return name.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::LocatorSet::Ipv4Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::LocatorSet::Ipv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::LocatorSet::Ipv4Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::LocatorSet::Ipv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::LocatorSet::Ipv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::LocatorSet::Ipv4Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::LocatorSet::Ipv6Interface::Ipv6Interface()
    :
    name{YType::str, "name"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "IPv6-interface"; yang_parent_name = "locator-set";
}

Native::Router::Lisp::Default_::LocatorSet::Ipv6Interface::~Ipv6Interface()
{
}

bool Native::Router::Lisp::Default_::LocatorSet::Ipv6Interface::has_data() const
{
    return name.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::LocatorSet::Ipv6Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::LocatorSet::Ipv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::LocatorSet::Ipv6Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::LocatorSet::Ipv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::LocatorSet::Ipv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::LocatorSet::Ipv6Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::LocatorSet::IpAddress::IpAddress()
    :
    ip{YType::str, "ip"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "ip-address"; yang_parent_name = "locator-set";
}

Native::Router::Lisp::Default_::LocatorSet::IpAddress::~IpAddress()
{
}

bool Native::Router::Lisp::Default_::LocatorSet::IpAddress::has_data() const
{
    return ip.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default_::LocatorSet::IpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Default_::LocatorSet::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::LocatorSet::IpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::LocatorSet::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::LocatorSet::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::LocatorSet::IpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Default_::LocatorScope::LocatorScope()
    :
    name{YType::str, "name"},
    rloc_prefix{YType::str, "rloc-prefix"},
    rtr_locator_set{YType::str, "rtr-locator-set"}
{
    yang_name = "locator-scope"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::LocatorScope::~LocatorScope()
{
}

bool Native::Router::Lisp::Default_::LocatorScope::has_data() const
{
    for (auto const & leaf : rloc_prefix.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : rtr_locator_set.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set;
}

bool Native::Router::Lisp::Default_::LocatorScope::has_operation() const
{
    for (auto const & leaf : rloc_prefix.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : rtr_locator_set.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(rloc_prefix.operation)
	|| is_set(rtr_locator_set.operation);
}

std::string Native::Router::Lisp::Default_::LocatorScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-scope" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::LocatorScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto rloc_prefix_name_datas = rloc_prefix.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rloc_prefix_name_datas.begin(), rloc_prefix_name_datas.end());
    auto rtr_locator_set_name_datas = rtr_locator_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rtr_locator_set_name_datas.begin(), rtr_locator_set_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::LocatorScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::LocatorScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::LocatorScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "rloc-prefix")
    {
        rloc_prefix.append(value);
    }
    if(value_path == "rtr-locator-set")
    {
        rtr_locator_set.append(value);
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceContainer()
{
    yang_name = "instance-container"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::~InstanceContainer()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::has_data() const
{
    for (std::size_t index=0; index<instance_list.size(); index++)
    {
        if(instance_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Default_::InstanceContainer::has_operation() const
{
    for (std::size_t index=0; index<instance_list.size(); index++)
    {
        if(instance_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-list")
    {
        for(auto const & c : instance_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList>();
        c->parent = this;
        instance_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::InstanceList()
    :
    instance_id{YType::uint32, "instance-id"},
    disable_ttl_propagate{YType::empty, "disable-ttl-propagate"}
    	,
    decapsulation(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation>())
	,default_(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__>())
	,loc_reach_algorithm(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm>())
	,map_server(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer>())
	,other_xtr_probe(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::OtherXtrProbe>())
	,remote_rloc_probe(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::RemoteRlocProbe>())
	,service(nullptr) // presence node
{
    decapsulation->parent = this;

    default_->parent = this;

    loc_reach_algorithm->parent = this;

    map_server->parent = this;

    other_xtr_probe->parent = this;

    remote_rloc_probe->parent = this;

    yang_name = "instance-list"; yang_parent_name = "instance-container";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::~InstanceList()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::has_data() const
{
    for (std::size_t index=0; index<dynamic_eid.size(); index++)
    {
        if(dynamic_eid[index]->has_data())
            return true;
    }
    return instance_id.is_set
	|| disable_ttl_propagate.is_set
	|| (decapsulation !=  nullptr && decapsulation->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_data())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_data())
	|| (service !=  nullptr && service->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::has_operation() const
{
    for (std::size_t index=0; index<dynamic_eid.size(); index++)
    {
        if(dynamic_eid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(instance_id.operation)
	|| is_set(disable_ttl_propagate.operation)
	|| (decapsulation !=  nullptr && decapsulation->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_operation())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_operation())
	|| (service !=  nullptr && service->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-list" <<"[instance-id='" <<instance_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/instance-container/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.operation)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (disable_ttl_propagate.is_set || is_set(disable_ttl_propagate.operation)) leaf_name_data.push_back(disable_ttl_propagate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "decapsulation")
    {
        if(decapsulation == nullptr)
        {
            decapsulation = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Decapsulation>();
        }
        return decapsulation;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__>();
        }
        return default_;
    }

    if(child_yang_name == "dynamic-eid")
    {
        for(auto const & c : dynamic_eid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::DynamicEid>();
        c->parent = this;
        dynamic_eid.push_back(c);
        return c;
    }

    if(child_yang_name == "loc-reach-algorithm")
    {
        if(loc_reach_algorithm == nullptr)
        {
            loc_reach_algorithm = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::LocReachAlgorithm>();
        }
        return loc_reach_algorithm;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "other-xtr-probe")
    {
        if(other_xtr_probe == nullptr)
        {
            other_xtr_probe = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::OtherXtrProbe>();
        }
        return other_xtr_probe;
    }

    if(child_yang_name == "remote-rloc-probe")
    {
        if(remote_rloc_probe == nullptr)
        {
            remote_rloc_probe = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::RemoteRlocProbe>();
        }
        return remote_rloc_probe;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Service>();
        }
        return service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(decapsulation != nullptr)
    {
        children["decapsulation"] = decapsulation;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : dynamic_eid)
    {
        children[c->get_segment_path()] = c;
    }

    if(loc_reach_algorithm != nullptr)
    {
        children["loc-reach-algorithm"] = loc_reach_algorithm;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(other_xtr_probe != nullptr)
    {
        children["other-xtr-probe"] = other_xtr_probe;
    }

    if(remote_rloc_probe != nullptr)
    {
        children["remote-rloc-probe"] = remote_rloc_probe;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
    }
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Default__()
    :
    disable_ttl_propagate{YType::empty, "disable-ttl-propagate"}
    	,
    decapsulation(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation>())
	,loc_reach_algorithm(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::LocReachAlgorithm>())
	,map_server(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::MapServer>())
	,other_xtr_probe(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::OtherXtrProbe>())
	,remote_rloc_probe(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::RemoteRlocProbe>())
	,service(nullptr) // presence node
{
    decapsulation->parent = this;

    loc_reach_algorithm->parent = this;

    map_server->parent = this;

    other_xtr_probe->parent = this;

    remote_rloc_probe->parent = this;

    yang_name = "default"; yang_parent_name = "instance-list";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::~Default__()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::has_data() const
{
    for (std::size_t index=0; index<dynamic_eid.size(); index++)
    {
        if(dynamic_eid[index]->has_data())
            return true;
    }
    return disable_ttl_propagate.is_set
	|| (decapsulation !=  nullptr && decapsulation->has_data())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_data())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_data())
	|| (service !=  nullptr && service->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::has_operation() const
{
    for (std::size_t index=0; index<dynamic_eid.size(); index++)
    {
        if(dynamic_eid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disable_ttl_propagate.operation)
	|| (decapsulation !=  nullptr && decapsulation->has_operation())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_operation())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_operation())
	|| (service !=  nullptr && service->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default__' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_ttl_propagate.is_set || is_set(disable_ttl_propagate.operation)) leaf_name_data.push_back(disable_ttl_propagate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "decapsulation")
    {
        if(decapsulation == nullptr)
        {
            decapsulation = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation>();
        }
        return decapsulation;
    }

    if(child_yang_name == "dynamic-eid")
    {
        for(auto const & c : dynamic_eid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid>();
        c->parent = this;
        dynamic_eid.push_back(c);
        return c;
    }

    if(child_yang_name == "loc-reach-algorithm")
    {
        if(loc_reach_algorithm == nullptr)
        {
            loc_reach_algorithm = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::LocReachAlgorithm>();
        }
        return loc_reach_algorithm;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "other-xtr-probe")
    {
        if(other_xtr_probe == nullptr)
        {
            other_xtr_probe = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::OtherXtrProbe>();
        }
        return other_xtr_probe;
    }

    if(child_yang_name == "remote-rloc-probe")
    {
        if(remote_rloc_probe == nullptr)
        {
            remote_rloc_probe = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::RemoteRlocProbe>();
        }
        return remote_rloc_probe;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Service>();
        }
        return service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(decapsulation != nullptr)
    {
        children["decapsulation"] = decapsulation;
    }

    for (auto const & c : dynamic_eid)
    {
        children[c->get_segment_path()] = c;
    }

    if(loc_reach_algorithm != nullptr)
    {
        children["loc-reach-algorithm"] = loc_reach_algorithm;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(other_xtr_probe != nullptr)
    {
        children["other-xtr-probe"] = other_xtr_probe;
    }

    if(remote_rloc_probe != nullptr)
    {
        children["remote-rloc-probe"] = remote_rloc_probe;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Decapsulation()
    :
    filter(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter>())
{
    filter->parent = this;

    yang_name = "decapsulation"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::~Decapsulation()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::has_data() const
{
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::has_operation() const
{
    return is_set(operation)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decapsulation";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Decapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Filter()
    :
    rloc(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc>())
{
    rloc->parent = this;

    yang_name = "filter"; yang_parent_name = "decapsulation";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::~Filter()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::has_data() const
{
    return (rloc !=  nullptr && rloc->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::has_operation() const
{
    return is_set(operation)
	|| (rloc !=  nullptr && rloc->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Filter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc>();
        }
        return rloc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rloc != nullptr)
    {
        children["rloc"] = rloc;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Rloc()
    :
    source(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source>())
{
    source->parent = this;

    yang_name = "rloc"; yang_parent_name = "filter";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::~Rloc()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rloc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source::Source()
    :
    locator_set{YType::str, "locator-set"},
    member{YType::empty, "member"}
{
    yang_name = "source"; yang_parent_name = "rloc";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source::~Source()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source::has_data() const
{
    return locator_set.is_set
	|| member.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(member.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (member.is_set || is_set(member.operation)) leaf_name_data.push_back(member.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::Decapsulation::Filter::Rloc::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "member")
    {
        member = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DynamicEid()
    :
    name{YType::str, "name"},
    map_notify_group{YType::str, "map-notify-group"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping>())
	,eid_notify(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify>())
{
    database_mapping->parent = this;

    eid_notify->parent = this;

    yang_name = "dynamic-eid"; yang_parent_name = "default";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::~DynamicEid()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return name.is_set
	|| map_notify_group.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (eid_notify !=  nullptr && eid_notify->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(map_notify_group.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (eid_notify !=  nullptr && eid_notify->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DynamicEid' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (map_notify_group.is_set || is_set(map_notify_group.operation)) leaf_name_data.push_back(map_notify_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "eid-notify")
    {
        if(eid_notify == nullptr)
        {
            eid_notify = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify>();
        }
        return eid_notify;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(eid_notify != nullptr)
    {
        children["eid-notify"] = eid_notify;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "map-notify-group")
    {
        map_notify_group = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::DatabaseMapping()
    :
    mac(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac>())
{
    mac->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "dynamic-eid";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<ipv4_prefix.size(); index++)
    {
        if(ipv4_prefix[index]->has_data())
            return true;
    }
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<ipv4_prefix.size(); index++)
    {
        if(ipv4_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-prefix")
    {
        for(auto const & c : ipv4_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix>();
        c->parent = this;
        ipv4_prefix.push_back(c);
        return c;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix::Ipv4Prefix()
    :
    eid_prefix{YType::str, "eid-prefix"},
    locator_set{YType::str, "locator-set"}
{
    yang_name = "ipv4-prefix"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix::~Ipv4Prefix()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix::has_data() const
{
    return eid_prefix.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| is_set(locator_set.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prefix" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Prefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Ipv4Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac::Mac()
    :
    locator_set{YType::str, "locator-set"},
    mac_addr{YType::empty, "mac-addr"}
{
    yang_name = "mac"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac::~Mac()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac::has_data() const
{
    return locator_set.is_set
	|| mac_addr.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(mac_addr.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.operation)) leaf_name_data.push_back(mac_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::DatabaseMapping::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::EidNotify()
    :
    authentication_key(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey>())
{
    authentication_key->parent = this;

    yang_name = "eid-notify"; yang_parent_name = "dynamic-eid";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::~EidNotify()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::has_data() const
{
    for (std::size_t index=0; index<gateway_key.size(); index++)
    {
        if(gateway_key[index]->has_data())
            return true;
    }
    return (authentication_key !=  nullptr && authentication_key->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::has_operation() const
{
    for (std::size_t index=0; index<gateway_key.size(); index++)
    {
        if(gateway_key[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (authentication_key !=  nullptr && authentication_key->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-notify";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidNotify' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "gateway-key")
    {
        for(auto const & c : gateway_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey>();
        c->parent = this;
        gateway_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    for (auto const & c : gateway_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey::AuthenticationKey()
    :
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "authentication-key"; yang_parent_name = "eid-notify";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey::has_data() const
{
    return key_0.is_set
	|| key_6.is_set
	|| key_7.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_0.operation)
	|| is_set(key_6.operation)
	|| is_set(key_7.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticationKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_0.is_set || is_set(key_0.operation)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.operation)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.operation)) leaf_name_data.push_back(key_7.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::AuthenticationKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-0")
    {
        key_0 = value;
    }
    if(value_path == "key-6")
    {
        key_6 = value;
    }
    if(value_path == "key-7")
    {
        key_7 = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::GatewayKey()
    :
    gateway_ip{YType::str, "gateway-ip"}
    	,
    key(std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key>())
{
    key->parent = this;

    yang_name = "gateway-key"; yang_parent_name = "eid-notify";
}

Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::~GatewayKey()
{
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::has_data() const
{
    return gateway_ip.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::has_operation() const
{
    return is_set(operation)
	|| is_set(gateway_ip.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway-key" <<"[gateway-ip='" <<gateway_ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GatewayKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway_ip.is_set || is_set(gateway_ip.operation)) leaf_name_data.push_back(gateway_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Default_::InstanceContainer::InstanceList::Default__::DynamicEid::EidNotify::GatewayKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gateway-ip")
    {
        gateway_ip = value;
    }
}

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};


}
}

