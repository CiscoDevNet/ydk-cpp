
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_133.hpp"
#include "Cisco_IOS_XE_native_134.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::get_children() const
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptMapRequestMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteRegistration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SolicitMapRequest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::Alt()
{
    yang_name = "alt"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::~Alt()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::has_data() const
{
    for (std::size_t index=0; index<summary_route.size(); index++)
    {
        if(summary_route[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::has_operation() const
{
    for (std::size_t index=0; index<summary_route.size(); index++)
    {
        if(summary_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alt";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Alt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-route")
    {
        for(auto const & c : summary_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute>();
        c->parent = this;
        summary_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute::SummaryRoute()
    :
    eid_prefix{YType::str, "eid-prefix"},
    route_tag{YType::uint32, "route-tag"}
{
    yang_name = "summary-route"; yang_parent_name = "alt";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute::~SummaryRoute()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute::has_data() const
{
    return eid_prefix.is_set
	|| route_tag.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| is_set(route_tag.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-route" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{
    yang_name = "distance"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance::~Distance()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(alt.operation)
	|| is_set(away.operation)
	|| is_set(dyn_eid.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance::get_entity_path(Entity* ancestor) const
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

    if (alt.is_set || is_set(alt.operation)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.operation)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.operation)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::~MapCache()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::has_data() const
{
    for (std::size_t index=0; index<eid_interface.size(); index++)
    {
        if(eid_interface[index]->has_data())
            return true;
    }
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::has_operation() const
{
    for (std::size_t index=0; index<eid_interface.size(); index++)
    {
        if(eid_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(site_registration.operation)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::AwayEids>();
        }
        return away_eids;
    }

    if(child_yang_name == "eid-interface")
    {
        for(auto const & c : eid_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface>();
        c->parent = this;
        eid_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    for (auto const & c : eid_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EidInterface()
    :
    eid_prefix{YType::str, "eid-prefix"},
    drop{YType::empty, "drop"},
    map_request{YType::empty, "map-request"},
    native_forward{YType::empty, "native-forward"}
    	,
    etr_interface_ip(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "eid-interface"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::~EidInterface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::has_data() const
{
    return eid_prefix.is_set
	|| drop.is_set
	|| map_request.is_set
	|| native_forward.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| is_set(drop.operation)
	|| is_set(map_request.operation)
	|| is_set(native_forward.operation)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-interface" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (map_request.is_set || is_set(map_request.operation)) leaf_name_data.push_back(map_request.get_name_leafdata());
    if (native_forward.is_set || is_set(native_forward.operation)) leaf_name_data.push_back(native_forward.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(etr_interface_ip != nullptr)
    {
        children["etr-interface-ip"] = etr_interface_ip;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "map-request")
    {
        map_request = value;
    }
    if(value_path == "native-forward")
    {
        native_forward = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "etr-interface-ip"; yang_parent_name = "eid-interface";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp::has_data() const
{
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp::has_operation() const
{
    return is_set(operation)
	|| is_set(etr_interface_ip_address.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrInterfaceIp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.operation)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::EidInterface::EtrInterfaceIp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address = value;
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{
    yang_name = "away-eids"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::AwayEids::has_operation() const
{
    return is_set(operation)
	|| is_set(send_map_request.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::AwayEids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AwayEids' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache::AwayEids::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "map-cache-persistent"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCachePersistent' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "proxy-itr"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr::~ProxyItr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv6_addr.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProxyItr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport::RouteExport()
    :
    away_eids{YType::empty, "away-eids"},
    site_registrations{YType::empty, "site-registrations"}
{
    yang_name = "route-export"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport::~RouteExport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport::has_data() const
{
    return away_eids.is_set
	|| site_registrations.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport::has_operation() const
{
    return is_set(operation)
	|| is_set(away_eids.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteExport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::~UsePetr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_address.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsePetr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{
    yang_name = "priority"; yang_parent_name = "use-petr";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::Priority::~Priority()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_value.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::Priority::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr::Priority::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::RouteImport()
    :
    database(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database>())
	,map_cache(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache>())
{
    database->parent = this;

    map_cache->parent = this;

    yang_name = "route-import"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::~RouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::has_data() const
{
    return (database !=  nullptr && database->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::has_operation() const
{
    return is_set(operation)
	|| (database !=  nullptr && database->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database>();
        }
        return database;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache>();
        }
        return map_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Database()
    :
    application(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application>())
	,connected(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected>())
	,isis(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis>())
	,maximum_prefix(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::MaximumPrefix>())
	,nd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd>())
	,rip(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip>())
	,static_(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_>())
{
    application->parent = this;

    connected->parent = this;

    isis->parent = this;

    maximum_prefix->parent = this;

    nd->parent = this;

    rip->parent = this;

    static_->parent = this;

    yang_name = "database"; yang_parent_name = "route-import";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::~Database()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::has_data() const
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
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::has_operation() const
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
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Database' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application>();
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected>();
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd>();
        }
        return nd;
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::get_children() const
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

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::Application()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "application"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::~Application()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::has_operation() const
{
    return is_set(operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "application";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Application::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "bgp"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::~Bgp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "bgp";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::Connected()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "connected"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::~Connected()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::has_operation() const
{
    return is_set(operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "connected";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "eigrp"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::~Eigrp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "eigrp";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::Isis()
    :
    process_id{YType::str, "process-id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "isis"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::~Isis()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::has_data() const
{
    return process_id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(process_id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::get_entity_path(Entity* ancestor) const
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

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-id")
    {
        process_id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "isis";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only{YType::empty, "warning-only"},
    warning_only1{YType::empty, "warning-only1"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only.is_set
	|| warning_only1.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::MaximumPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(threshold.operation)
	|| is_set(threshold1.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_only1.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.operation)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.operation)) leaf_name_data.push_back(warning_only1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::MaximumPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::Nd()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "nd"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::~Nd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::has_operation() const
{
    return is_set(operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "nd";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Nd::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospf"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::~Ospf()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospf";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::Static_()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "static"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::~Static_()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::has_operation() const
{
    return is_set(operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "static";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::Rip()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "rip"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::~Rip()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::has_operation() const
{
    return is_set(operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "rip";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MapCache()
    :
    application(nullptr) // presence node
	,connected(nullptr) // presence node
	,isis(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis>())
	,maximum_prefix(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MaximumPrefix>())
	,nd(nullptr) // presence node
	,rip(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip>())
	,static_(nullptr) // presence node
{
    isis->parent = this;

    maximum_prefix->parent = this;

    rip->parent = this;

    yang_name = "map-cache"; yang_parent_name = "route-import";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::~MapCache()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::has_data() const
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
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::has_operation() const
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
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application>();
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected>();
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd>();
        }
        return nd;
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::get_children() const
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

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::Application()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "application"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::~Application()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "application";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Application::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "bgp"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::~Bgp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "bgp";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::Connected()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "connected"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::~Connected()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "connected";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "eigrp"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::~Eigrp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "eigrp";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::Isis()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::~Isis()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "isis";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only{YType::empty, "warning-only"},
    warning_only1{YType::empty, "warning-only1"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only.is_set
	|| warning_only1.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MaximumPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(threshold.operation)
	|| is_set(threshold1.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_only1.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.operation)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.operation)) leaf_name_data.push_back(warning_only1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::MaximumPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::Nd()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "nd"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::~Nd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "nd";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Nd::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "ospf"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::~Ospf()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "ospf";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::Static_()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::~Static_()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "static";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::Rip()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "rip"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::~Rip()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "rip";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv4";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"},
    auto_discover_rlocs{YType::empty, "auto-discover-rlocs"},
    locator_set{YType::str, "locator-set"}
{
    yang_name = "eid-cont"; yang_parent_name = "database-mapping";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::has_data() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| auto_discover_rlocs.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| is_set(auto_discover_rlocs.operation)
	|| is_set(locator_set.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (auto_discover_rlocs.is_set || is_set(auto_discover_rlocs.operation)) leaf_name_data.push_back(auto_discover_rlocs.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addrees")
    {
        for(auto const & c : ipv4_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees>();
        c->parent = this;
        ipv4_addrees.push_back(c);
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface>();
        c->parent = this;
        ipv4_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        for(auto const & c : ipv6_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees>();
        c->parent = this;
        ipv6_addrees.push_back(c);
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface>();
        c->parent = this;
        ipv6_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
    if(value_path == "auto-discover-rlocs")
    {
        auto_discover_rlocs = value;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::Ipv4Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::~Ipv4Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::Ipv6Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::~Ipv6Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
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

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Ipv6()
    :
    alt_vrf{YType::str, "alt-vrf"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"}
    	,
    alt(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt>())
	,database_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping>())
	,default_(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__>())
	,distance(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance>())
	,eid_table(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable>())
	,etr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr>())
	,etr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable>())
	,itr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr>())
	,itr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent>())
	,proxy_itr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr>())
	,route_export(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport>())
	,route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport>())
	,site_registration(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest>())
{
    alt->parent = this;

    database_mapping->parent = this;

    default_->parent = this;

    distance->parent = this;

    eid_table->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    map_cache_persistent->parent = this;

    proxy_itr->parent = this;

    route_export->parent = this;

    route_import->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "ipv6"; yang_parent_name = "service";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::~Ipv6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return alt_vrf.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (alt !=  nullptr && alt->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (route_import !=  nullptr && route_import->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alt_vrf.operation)
	|| is_set(map_request_source.operation)
	|| is_set(proxy_etr.operation)
	|| is_set(sgt.operation)
	|| (alt !=  nullptr && alt->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (route_import !=  nullptr && route_import->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt_vrf.is_set || is_set(alt_vrf.operation)) leaf_name_data.push_back(alt_vrf.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.operation)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__>();
        }
        return default_;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "route-import")
    {
        if(route_import == nullptr)
        {
            route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport>();
        }
        return route_import;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alt != nullptr)
    {
        children["alt"] = alt;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
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

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(route_import != nullptr)
    {
        children["route-import"] = route_import;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf = value;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
    }
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Default__()
    :
    alt_vrf{YType::str, "alt-vrf"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"}
    	,
    alt(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt>())
	,database_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping>())
	,distance(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Distance>())
	,eid_table(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EidTable>())
	,etr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr>())
	,etr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EtrEnable>())
	,itr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr>())
	,itr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCachePersistent>())
	,proxy_itr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ProxyItr>())
	,route_export(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteExport>())
	,route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport>())
	,site_registration(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SolicitMapRequest>())
{
    alt->parent = this;

    database_mapping->parent = this;

    distance->parent = this;

    eid_table->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    map_cache_persistent->parent = this;

    proxy_itr->parent = this;

    route_export->parent = this;

    route_import->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "default"; yang_parent_name = "ipv6";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::~Default__()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return alt_vrf.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (alt !=  nullptr && alt->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (route_import !=  nullptr && route_import->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alt_vrf.operation)
	|| is_set(map_request_source.operation)
	|| is_set(proxy_etr.operation)
	|| is_set(sgt.operation)
	|| (alt !=  nullptr && alt->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (route_import !=  nullptr && route_import->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::get_entity_path(Entity* ancestor) const
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

    if (alt_vrf.is_set || is_set(alt_vrf.operation)) leaf_name_data.push_back(alt_vrf.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.operation)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "route-import")
    {
        if(route_import == nullptr)
        {
            route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport>();
        }
        return route_import;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alt != nullptr)
    {
        children["alt"] = alt;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
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

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(route_import != nullptr)
    {
        children["route-import"] = route_import;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf = value;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
    }
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EidTable::EidTable()
    :
    default_{YType::empty, "default"},
    vrf{YType::str, "vrf"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "eid-table"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EidTable::~EidTable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EidTable::has_data() const
{
    return default_.is_set
	|| vrf.is_set
	|| vrf_name.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EidTable::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(vrf.operation)
	|| is_set(vrf_name.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EidTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EidTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::~Itr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Itr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapResolver' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ItrEnable::~ItrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ItrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EtrEnable::~EtrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::~Etr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::has_operation() const
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

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Etr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping>();
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::get_children() const
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::~MapServer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::get_children() const
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptMapRequestMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCacheLimit::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteRegistration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SiteRegistration::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SolicitMapRequest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::Alt()
{
    yang_name = "alt"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::~Alt()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::has_data() const
{
    for (std::size_t index=0; index<summary_route.size(); index++)
    {
        if(summary_route[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::has_operation() const
{
    for (std::size_t index=0; index<summary_route.size(); index++)
    {
        if(summary_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alt";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Alt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-route")
    {
        for(auto const & c : summary_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::SummaryRoute>();
        c->parent = this;
        summary_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::SummaryRoute::SummaryRoute()
    :
    eid_prefix{YType::str, "eid-prefix"},
    route_tag{YType::uint32, "route-tag"}
{
    yang_name = "summary-route"; yang_parent_name = "alt";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::SummaryRoute::~SummaryRoute()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::SummaryRoute::has_data() const
{
    return eid_prefix.is_set
	|| route_tag.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::SummaryRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| is_set(route_tag.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::SummaryRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-route" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::SummaryRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::SummaryRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::SummaryRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Alt::SummaryRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{
    yang_name = "distance"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Distance::~Distance()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(alt.operation)
	|| is_set(away.operation)
	|| is_set(dyn_eid.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Distance::get_entity_path(Entity* ancestor) const
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

    if (alt.is_set || is_set(alt.operation)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.operation)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.operation)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Distance::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::~MapCache()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::has_data() const
{
    for (std::size_t index=0; index<eid_interface.size(); index++)
    {
        if(eid_interface[index]->has_data())
            return true;
    }
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::has_operation() const
{
    for (std::size_t index=0; index<eid_interface.size(); index++)
    {
        if(eid_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(site_registration.operation)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::AwayEids>();
        }
        return away_eids;
    }

    if(child_yang_name == "eid-interface")
    {
        for(auto const & c : eid_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface>();
        c->parent = this;
        eid_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    for (auto const & c : eid_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EidInterface()
    :
    eid_prefix{YType::str, "eid-prefix"},
    drop{YType::empty, "drop"},
    map_request{YType::empty, "map-request"},
    native_forward{YType::empty, "native-forward"}
    	,
    etr_interface_ip(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "eid-interface"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::~EidInterface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::has_data() const
{
    return eid_prefix.is_set
	|| drop.is_set
	|| map_request.is_set
	|| native_forward.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| is_set(drop.operation)
	|| is_set(map_request.operation)
	|| is_set(native_forward.operation)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-interface" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (map_request.is_set || is_set(map_request.operation)) leaf_name_data.push_back(map_request.get_name_leafdata());
    if (native_forward.is_set || is_set(native_forward.operation)) leaf_name_data.push_back(native_forward.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(etr_interface_ip != nullptr)
    {
        children["etr-interface-ip"] = etr_interface_ip;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "map-request")
    {
        map_request = value;
    }
    if(value_path == "native-forward")
    {
        native_forward = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "etr-interface-ip"; yang_parent_name = "eid-interface";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp::has_data() const
{
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp::has_operation() const
{
    return is_set(operation)
	|| is_set(etr_interface_ip_address.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrInterfaceIp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.operation)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::EidInterface::EtrInterfaceIp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address = value;
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{
    yang_name = "away-eids"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::AwayEids::has_operation() const
{
    return is_set(operation)
	|| is_set(send_map_request.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::AwayEids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AwayEids' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCache::AwayEids::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "map-cache-persistent"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCachePersistent::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCachePersistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCachePersistent' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::MapCachePersistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "proxy-itr"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ProxyItr::~ProxyItr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ProxyItr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv6_addr.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ProxyItr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProxyItr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::ProxyItr::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteExport::RouteExport()
    :
    away_eids{YType::empty, "away-eids"},
    site_registrations{YType::empty, "site-registrations"}
{
    yang_name = "route-export"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteExport::~RouteExport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteExport::has_data() const
{
    return away_eids.is_set
	|| site_registrations.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteExport::has_operation() const
{
    return is_set(operation)
	|| is_set(away_eids.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteExport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteExport::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::~UsePetr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_address.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsePetr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{
    yang_name = "priority"; yang_parent_name = "use-petr";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::Priority::~Priority()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_value.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::Priority::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::UsePetr::Priority::set_value(const std::string & value_path, std::string value)
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::RouteImport()
    :
    database(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database>())
	,map_cache(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache>())
{
    database->parent = this;

    map_cache->parent = this;

    yang_name = "route-import"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::~RouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::has_data() const
{
    return (database !=  nullptr && database->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::has_operation() const
{
    return is_set(operation)
	|| (database !=  nullptr && database->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database>();
        }
        return database;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache>();
        }
        return map_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Database()
    :
    application(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application>())
	,connected(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected>())
	,isis(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis>())
	,maximum_prefix(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix>())
	,nd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd>())
	,static_(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_>())
{
    application->parent = this;

    connected->parent = this;

    isis->parent = this;

    maximum_prefix->parent = this;

    nd->parent = this;

    static_->parent = this;

    yang_name = "database"; yang_parent_name = "route-import";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::~Database()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::has_data() const
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
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::has_operation() const
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
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (application !=  nullptr && application->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Database' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application>();
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected>();
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd>();
        }
        return nd;
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf>();
        c->parent = this;
        ospf.push_back(c);
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::get_children() const
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

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::Application()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "application"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::~Application()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::has_operation() const
{
    return is_set(operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "application";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Application::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "bgp"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::~Bgp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "bgp";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Bgp::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::Connected()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "connected"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::~Connected()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::has_operation() const
{
    return is_set(operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "connected";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Connected::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "eigrp"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::~Eigrp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "eigrp";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Eigrp::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::Isis()
    :
    process_id{YType::str, "process-id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "isis"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::~Isis()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::has_data() const
{
    return process_id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(process_id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::get_entity_path(Entity* ancestor) const
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

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-id")
    {
        process_id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "isis";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Isis::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only{YType::empty, "warning-only"},
    warning_only1{YType::empty, "warning-only1"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only.is_set
	|| warning_only1.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(threshold.operation)
	|| is_set(threshold1.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_only1.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.operation)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.operation)) leaf_name_data.push_back(warning_only1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::MaximumPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::Nd()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "nd"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::~Nd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::has_operation() const
{
    return is_set(operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "nd";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Nd::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospf"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::~Ospf()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospf";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Ospf::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::Static_()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "static"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::~Static_()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::has_operation() const
{
    return is_set(operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "static";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Static_::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "rip"; yang_parent_name = "database";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::~Rip()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "rip";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::Database::Rip::LispIpRouteImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MapCache()
    :
    application(nullptr) // presence node
	,connected(nullptr) // presence node
	,isis(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis>())
	,maximum_prefix(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix>())
	,nd(nullptr) // presence node
	,static_(nullptr) // presence node
{
    isis->parent = this;

    maximum_prefix->parent = this;

    yang_name = "map-cache"; yang_parent_name = "route-import";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::~MapCache()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::has_data() const
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
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::has_operation() const
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
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (application !=  nullptr && application->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application>();
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected>();
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd>();
        }
        return nd;
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf>();
        c->parent = this;
        ospf.push_back(c);
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::get_children() const
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

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::Application()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "application"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::~Application()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "application";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Application::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "bgp"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::~Bgp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "bgp";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Bgp::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::Connected()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "connected"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::~Connected()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "connected";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Connected::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "eigrp"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::~Eigrp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "eigrp";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::Isis()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::~Isis()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "isis";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only{YType::empty, "warning-only"},
    warning_only1{YType::empty, "warning-only1"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only.is_set
	|| warning_only1.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(threshold.operation)
	|| is_set(threshold1.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_only1.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.operation)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.operation)) leaf_name_data.push_back(warning_only1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::Nd()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "nd"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::~Nd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "nd";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "ospf"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::~Ospf()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "ospf";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::Static_()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::~Static_()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::has_operation() const
{
    return is_set(operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "static";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "rip"; yang_parent_name = "map-cache";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::~Rip()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "rip";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"},
    auto_discover_rlocs{YType::empty, "auto-discover-rlocs"},
    locator_set{YType::str, "locator-set"}
{
    yang_name = "eid-cont"; yang_parent_name = "database-mapping";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::has_data() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| auto_discover_rlocs.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(eid_prefix.operation)
	|| is_set(auto_discover_rlocs.operation)
	|| is_set(locator_set.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.operation)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (auto_discover_rlocs.is_set || is_set(auto_discover_rlocs.operation)) leaf_name_data.push_back(auto_discover_rlocs.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addrees")
    {
        for(auto const & c : ipv4_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees>();
        c->parent = this;
        ipv4_addrees.push_back(c);
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface>();
        c->parent = this;
        ipv4_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        for(auto const & c : ipv6_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees>();
        c->parent = this;
        ipv6_addrees.push_back(c);
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
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface>();
        c->parent = this;
        ipv6_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
    }
    if(value_path == "auto-discover-rlocs")
    {
        auto_discover_rlocs = value;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
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

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees";
}

Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(priority.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
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

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};


}
}

