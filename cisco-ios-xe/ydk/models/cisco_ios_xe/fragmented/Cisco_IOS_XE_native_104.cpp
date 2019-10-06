
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

Native::Interface::Tunnel::Ip::Ospf::ProcessId::ProcessId()
    :
    id{YType::str, "id"},
    area{YType::str, "area"},
    secondaries{YType::empty, "secondaries"},
    none{YType::empty, "none"}
{

    yang_name = "process-id"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::ProcessId::~ProcessId()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::ProcessId::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| area.is_set
	|| secondaries.is_set
	|| none.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::ProcessId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(secondaries.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::ProcessId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (secondaries.is_set || is_set(secondaries.yfilter)) leaf_name_data.push_back(secondaries.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::ProcessId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::ProcessId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaries")
    {
        secondaries = value;
        secondaries.value_namespace = name_space;
        secondaries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::ProcessId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "secondaries")
    {
        secondaries.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::ProcessId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "area" || name == "secondaries" || name == "none")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::Authentication::Authentication()
    :
    message_digest{YType::empty, "message-digest"},
    null{YType::empty, "null"}
        ,
    key_chain(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Ospf::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return message_digest.is_set
	|| null.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_digest.yfilter)
	|| ydk::is_set(null.yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_digest.is_set || is_set(message_digest.yfilter)) leaf_name_data.push_back(message_digest.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-digest")
    {
        message_digest = value;
        message_digest.value_namespace = name_space;
        message_digest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-digest")
    {
        message_digest.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "message-digest" || name == "null")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::AuthenticationKey()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "authentication-key"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::has_data() const
{
    if (is_presence_container) return true;
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Ospf::Bfd::~Bfd()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::DatabaseFilter()
    :
    all{YType::empty, "all"},
    out{YType::empty, "out"}
{

    yang_name = "database-filter"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "out")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::DeadInterval::DeadInterval()
    :
    value_{YType::uint32, "value"}
        ,
    minimal(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal>())
{
    minimal->parent = this;

    yang_name = "dead-interval"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::DeadInterval::~DeadInterval()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::DeadInterval::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (minimal !=  nullptr && minimal->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::DeadInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (minimal !=  nullptr && minimal->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::DeadInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::DeadInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::DeadInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimal")
    {
        if(minimal == nullptr)
        {
            minimal = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal>();
        }
        return minimal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::DeadInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minimal != nullptr)
    {
        _children["minimal"] = minimal;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::DeadInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::DeadInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::DeadInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimal" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::Minimal()
    :
    hello_multiplier{YType::uint8, "hello-multiplier"}
{

    yang_name = "minimal"; yang_parent_name = "dead-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::~Minimal()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::has_data() const
{
    if (is_presence_container) return true;
    return hello_multiplier.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_multiplier.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-multiplier")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::DemandCircuit()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::FastReroute()
    :
    per_prefix(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix>())
{
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::~FastReroute()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(per_prefix != nullptr)
    {
        _children["per-prefix"] = per_prefix;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-prefix")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::PerPrefix()
    :
    candidate(nullptr) // presence node
    , protection(nullptr) // presence node
{

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::has_data() const
{
    if (is_presence_container) return true;
    return (candidate !=  nullptr && candidate->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (candidate !=  nullptr && candidate->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate")
    {
        if(candidate == nullptr)
        {
            candidate = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate>();
        }
        return candidate;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(candidate != nullptr)
    {
        _children["candidate"] = candidate;
    }

    if(protection != nullptr)
    {
        _children["protection"] = protection;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "protection")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::Candidate()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "candidate"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::~Candidate()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::Protection()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "protection"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::~Protection()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::Lls::Lls()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "lls"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Ospf::Lls::~Lls()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::Lls::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::Lls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::Lls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::Lls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::Lls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::Lls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::Lls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::Lls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::Lls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
        ,
    md5(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "id")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::Md5()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::has_data() const
{
    if (is_presence_container) return true;
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::MultiArea::MultiArea()
    :
    id{YType::str, "id"},
    cost{YType::uint32, "cost"}
{

    yang_name = "multi-area"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::MultiArea::~MultiArea()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::MultiArea::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cost")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::TtlSecurity()
    :
    diable{YType::empty, "diable"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::~TtlSecurity()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::has_data() const
{
    if (is_presence_container) return true;
    return diable.is_set
	|| hops.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diable.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diable.is_set || is_set(diable.yfilter)) leaf_name_data.push_back(diable.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diable")
    {
        diable = value;
        diable.value_namespace = name_space;
        diable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diable")
    {
        diable.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diable" || name == "hops")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Lisp::Lisp()
    :
    source_locator{YType::str, "source-locator"}
{

    yang_name = "lisp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Lisp::~Lisp()
{
}

bool Native::Interface::Tunnel::Ip::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return source_locator.is_set;
}

bool Native::Interface::Tunnel::Ip::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_locator.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_locator.is_set || is_set(source_locator.yfilter)) leaf_name_data.push_back(source_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-locator")
    {
        source_locator = value;
        source_locator.value_namespace = name_space;
        source_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-locator")
    {
        source_locator.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-locator")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhrp()
    :
    authentication{YType::str, "authentication"},
    connect{YType::uint16, "connect"},
    group{YType::str, "group"},
    holdtime{YType::uint16, "holdtime"},
    network_id{YType::uint32, "network-id"},
    record{YType::empty, "record"},
    use{YType::uint16, "use"}
        ,
    attribute(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Attribute>())
    , cache(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Cache>())
    , interest(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Interest>())
    , map(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map>())
    , max_send(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::MaxSend>())
    , nhs(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs>())
    , redirect(nullptr) // presence node
    , registration(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Registration>())
    , reject(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Reject>())
    , responder(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Responder>())
    , server_only(nullptr) // presence node
    , shortcut(nullptr) // presence node
    , trigger_svc(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc>())
{
    attribute->parent = this;
    cache->parent = this;
    interest->parent = this;
    map->parent = this;
    max_send->parent = this;
    nhs->parent = this;
    registration->parent = this;
    reject->parent = this;
    responder->parent = this;
    trigger_svc->parent = this;

    yang_name = "nhrp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::~Nhrp()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::has_data() const
{
    if (is_presence_container) return true;
    return authentication.is_set
	|| connect.is_set
	|| group.is_set
	|| holdtime.is_set
	|| network_id.is_set
	|| record.is_set
	|| use.is_set
	|| (attribute !=  nullptr && attribute->has_data())
	|| (cache !=  nullptr && cache->has_data())
	|| (interest !=  nullptr && interest->has_data())
	|| (map !=  nullptr && map->has_data())
	|| (max_send !=  nullptr && max_send->has_data())
	|| (nhs !=  nullptr && nhs->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (reject !=  nullptr && reject->has_data())
	|| (responder !=  nullptr && responder->has_data())
	|| (server_only !=  nullptr && server_only->has_data())
	|| (shortcut !=  nullptr && shortcut->has_data())
	|| (trigger_svc !=  nullptr && trigger_svc->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(connect.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(network_id.yfilter)
	|| ydk::is_set(record.yfilter)
	|| ydk::is_set(use.yfilter)
	|| (attribute !=  nullptr && attribute->has_operation())
	|| (cache !=  nullptr && cache->has_operation())
	|| (interest !=  nullptr && interest->has_operation())
	|| (map !=  nullptr && map->has_operation())
	|| (max_send !=  nullptr && max_send->has_operation())
	|| (nhs !=  nullptr && nhs->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (reject !=  nullptr && reject->has_operation())
	|| (responder !=  nullptr && responder->has_operation())
	|| (server_only !=  nullptr && server_only->has_operation())
	|| (shortcut !=  nullptr && shortcut->has_operation())
	|| (trigger_svc !=  nullptr && trigger_svc->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nhrp:nhrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (connect.is_set || is_set(connect.yfilter)) leaf_name_data.push_back(connect.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (network_id.is_set || is_set(network_id.yfilter)) leaf_name_data.push_back(network_id.get_name_leafdata());
    if (record.is_set || is_set(record.yfilter)) leaf_name_data.push_back(record.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "interest")
    {
        if(interest == nullptr)
        {
            interest = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Interest>();
        }
        return interest;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map>();
        }
        return map;
    }

    if(child_yang_name == "max-send")
    {
        if(max_send == nullptr)
        {
            max_send = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::MaxSend>();
        }
        return max_send;
    }

    if(child_yang_name == "nhs")
    {
        if(nhs == nullptr)
        {
            nhs = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs>();
        }
        return nhs;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "reject")
    {
        if(reject == nullptr)
        {
            reject = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Reject>();
        }
        return reject;
    }

    if(child_yang_name == "responder")
    {
        if(responder == nullptr)
        {
            responder = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Responder>();
        }
        return responder;
    }

    if(child_yang_name == "server-only")
    {
        if(server_only == nullptr)
        {
            server_only = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::ServerOnly>();
        }
        return server_only;
    }

    if(child_yang_name == "shortcut")
    {
        if(shortcut == nullptr)
        {
            shortcut = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Shortcut>();
        }
        return shortcut;
    }

    if(child_yang_name == "trigger-svc")
    {
        if(trigger_svc == nullptr)
        {
            trigger_svc = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc>();
        }
        return trigger_svc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    if(cache != nullptr)
    {
        _children["cache"] = cache;
    }

    if(interest != nullptr)
    {
        _children["interest"] = interest;
    }

    if(map != nullptr)
    {
        _children["map"] = map;
    }

    if(max_send != nullptr)
    {
        _children["max-send"] = max_send;
    }

    if(nhs != nullptr)
    {
        _children["nhs"] = nhs;
    }

    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(reject != nullptr)
    {
        _children["reject"] = reject;
    }

    if(responder != nullptr)
    {
        _children["responder"] = responder;
    }

    if(server_only != nullptr)
    {
        _children["server-only"] = server_only;
    }

    if(shortcut != nullptr)
    {
        _children["shortcut"] = shortcut;
    }

    if(trigger_svc != nullptr)
    {
        _children["trigger-svc"] = trigger_svc;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect")
    {
        connect = value;
        connect.value_namespace = name_space;
        connect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-id")
    {
        network_id = value;
        network_id.value_namespace = name_space;
        network_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record")
    {
        record = value;
        record.value_namespace = name_space;
        record.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "connect")
    {
        connect.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "network-id")
    {
        network_id.yfilter = yfilter;
    }
    if(value_path == "record")
    {
        record.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "cache" || name == "interest" || name == "map" || name == "max-send" || name == "nhs" || name == "redirect" || name == "registration" || name == "reject" || name == "responder" || name == "server-only" || name == "shortcut" || name == "trigger-svc" || name == "authentication" || name == "connect" || name == "group" || name == "holdtime" || name == "network-id" || name == "record" || name == "use")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::Attribute()
    :
    set(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set>())
{
    set->parent = this;

    yang_name = "attribute"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::~Attribute()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return (set !=  nullptr && set->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(set != nullptr)
    {
        _children["set"] = set;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::Set()
    :
    attr_type(this, {"attr_type"})
{

    yang_name = "set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::~Set()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attr_type.len(); index++)
    {
        if(attr_type[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::has_operation() const
{
    for (std::size_t index=0; index<attr_type.len(); index++)
    {
        if(attr_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attr-type")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType>();
        ent_->parent = this;
        attr_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attr_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::AttrType()
    :
    attr_type{YType::str, "attr-type"},
    attr_val{YType::str, "attr-val"}
{

    yang_name = "attr-type"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::~AttrType()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::has_data() const
{
    if (is_presence_container) return true;
    return attr_type.is_set
	|| attr_val.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(attr_val.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-type";
    ADD_KEY_TOKEN(attr_type, "attr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_val.is_set || is_set(attr_val.yfilter)) leaf_name_data.push_back(attr_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-val")
    {
        attr_val = value;
        attr_val.value_namespace = name_space;
        attr_val.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "attr-val")
    {
        attr_val.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type" || name == "attr-val")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Cache::Cache()
    :
    non_authoritative{YType::empty, "non-authoritative"}
{

    yang_name = "cache"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Cache::~Cache()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Cache::has_data() const
{
    if (is_presence_container) return true;
    return non_authoritative.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_authoritative.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_authoritative.is_set || is_set(non_authoritative.yfilter)) leaf_name_data.push_back(non_authoritative.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-authoritative")
    {
        non_authoritative = value;
        non_authoritative.value_namespace = name_space;
        non_authoritative.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-authoritative")
    {
        non_authoritative.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-authoritative")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Interest::Interest()
    :
    acl_range{YType::uint8, "acl-range"},
    none{YType::empty, "none"}
{

    yang_name = "interest"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Interest::~Interest()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Interest::has_data() const
{
    if (is_presence_container) return true;
    return acl_range.is_set
	|| none.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Interest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Interest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Interest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_range.is_set || is_set(acl_range.yfilter)) leaf_name_data.push_back(acl_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Interest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Interest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Interest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-range")
    {
        acl_range = value;
        acl_range.value_namespace = name_space;
        acl_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Interest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-range")
    {
        acl_range.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Interest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-range" || name == "none")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Map()
    :
    dest_ipv4(this, {"dest_ipv4"})
    , multicast(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast>())
    , group(this, {"name"})
{
    multicast->parent = this;

    yang_name = "map"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Map::~Map()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dest_ipv4.len(); index++)
    {
        if(dest_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return (multicast !=  nullptr && multicast->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::has_operation() const
{
    for (std::size_t index=0; index<dest_ipv4.len(); index++)
    {
        if(dest_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-ipv4")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4>();
        ent_->parent = this;
        dest_ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dest_ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-ipv4" || name == "multicast" || name == "group")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestIpv4()
    :
    dest_ipv4{YType::str, "dest-ipv4"},
    nbma_ipv6{YType::str, "nbma-ipv6"}
        ,
    nbma_ipv4(this, {"nbma_ipv4"})
    , dest_mask(this, {"dest_mask"})
{

    yang_name = "dest-ipv4"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::~DestIpv4()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbma_ipv4.len(); index++)
    {
        if(nbma_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dest_mask.len(); index++)
    {
        if(dest_mask[index]->has_data())
            return true;
    }
    return dest_ipv4.is_set
	|| nbma_ipv6.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::has_operation() const
{
    for (std::size_t index=0; index<nbma_ipv4.len(); index++)
    {
        if(nbma_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dest_mask.len(); index++)
    {
        if(dest_mask[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dest_ipv4.yfilter)
	|| ydk::is_set(nbma_ipv6.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-ipv4";
    ADD_KEY_TOKEN(dest_ipv4, "dest-ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_ipv4.is_set || is_set(dest_ipv4.yfilter)) leaf_name_data.push_back(dest_ipv4.get_name_leafdata());
    if (nbma_ipv6.is_set || is_set(nbma_ipv6.yfilter)) leaf_name_data.push_back(nbma_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbma-ipv4")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4>();
        ent_->parent = this;
        nbma_ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dest-mask")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask>();
        ent_->parent = this;
        dest_mask.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nbma_ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : dest_mask.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-ipv4")
    {
        dest_ipv4 = value;
        dest_ipv4.value_namespace = name_space;
        dest_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbma-ipv6")
    {
        nbma_ipv6 = value;
        nbma_ipv6.value_namespace = name_space;
        nbma_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-ipv4")
    {
        dest_ipv4.yfilter = yfilter;
    }
    if(value_path == "nbma-ipv6")
    {
        nbma_ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbma-ipv4" || name == "dest-mask" || name == "dest-ipv4" || name == "nbma-ipv6")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::NbmaIpv4()
    :
    nbma_ipv4{YType::str, "nbma-ipv4"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "nbma-ipv4"; yang_parent_name = "dest-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::~NbmaIpv4()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::has_data() const
{
    if (is_presence_container) return true;
    return nbma_ipv4.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbma_ipv4.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbma-ipv4";
    ADD_KEY_TOKEN(nbma_ipv4, "nbma-ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbma_ipv4.is_set || is_set(nbma_ipv4.yfilter)) leaf_name_data.push_back(nbma_ipv4.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbma-ipv4")
    {
        nbma_ipv4 = value;
        nbma_ipv4.value_namespace = name_space;
        nbma_ipv4.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbma-ipv4")
    {
        nbma_ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbma-ipv4" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::DestMask()
    :
    dest_mask{YType::str, "dest-mask"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "dest-mask"; yang_parent_name = "dest-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::~DestMask()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::has_data() const
{
    if (is_presence_container) return true;
    return dest_mask.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_mask.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-mask";
    ADD_KEY_TOKEN(dest_mask, "dest-mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_mask.is_set || is_set(dest_mask.yfilter)) leaf_name_data.push_back(dest_mask.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-mask")
    {
        dest_mask = value;
        dest_mask.value_namespace = name_space;
        dest_mask.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-mask")
    {
        dest_mask.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-mask" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::Multicast()
    :
    nbma_ipv4{YType::str, "nbma_ipv4"},
    nbma_ipv6{YType::str, "nbma_ipv6"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "multicast"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : nbma_ipv4.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : nbma_ipv6.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return dynamic.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::has_operation() const
{
    for (auto const & leaf : nbma_ipv4.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : nbma_ipv6.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nbma_ipv4.yfilter)
	|| ydk::is_set(nbma_ipv6.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    auto nbma_ipv4_name_datas = nbma_ipv4.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nbma_ipv4_name_datas.begin(), nbma_ipv4_name_datas.end());
    auto nbma_ipv6_name_datas = nbma_ipv6.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nbma_ipv6_name_datas.begin(), nbma_ipv6_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbma_ipv4")
    {
        nbma_ipv4.append(value);
    }
    if(value_path == "nbma_ipv6")
    {
        nbma_ipv6.append(value);
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbma_ipv4")
    {
        nbma_ipv4.yfilter = yfilter;
    }
    if(value_path == "nbma_ipv6")
    {
        nbma_ipv6.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbma_ipv4" || name == "nbma_ipv6" || name == "dynamic")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Group::Group()
    :
    name{YType::str, "name"}
        ,
    service_policy(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "group"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Group::~Group()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Group::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Map::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::ServicePolicy()
    :
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return output.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::MaxSend::MaxSend()
    :
    pkt_count(this, {"pkt_count"})
{

    yang_name = "max-send"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::MaxSend::~MaxSend()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::MaxSend::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pkt_count.len(); index++)
    {
        if(pkt_count[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::MaxSend::has_operation() const
{
    for (std::size_t index=0; index<pkt_count.len(); index++)
    {
        if(pkt_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::MaxSend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::MaxSend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::MaxSend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pkt-count")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount>();
        ent_->parent = this;
        pkt_count.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::MaxSend::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pkt_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::MaxSend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::MaxSend::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::MaxSend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-count")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::PktCount()
    :
    pkt_count{YType::uint16, "pkt-count"},
    every{YType::uint16, "every"}
{

    yang_name = "pkt-count"; yang_parent_name = "max-send"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::~PktCount()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::has_data() const
{
    if (is_presence_container) return true;
    return pkt_count.is_set
	|| every.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkt_count.yfilter)
	|| ydk::is_set(every.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkt-count";
    ADD_KEY_TOKEN(pkt_count, "pkt-count");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_count.is_set || is_set(pkt_count.yfilter)) leaf_name_data.push_back(pkt_count.get_name_leafdata());
    if (every.is_set || is_set(every.yfilter)) leaf_name_data.push_back(every.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkt-count")
    {
        pkt_count = value;
        pkt_count.value_namespace = name_space;
        pkt_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "every")
    {
        every = value;
        every.value_namespace = name_space;
        every.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkt-count")
    {
        pkt_count.yfilter = yfilter;
    }
    if(value_path == "every")
    {
        every.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-count" || name == "every")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Nhs()
    :
    fallback{YType::uint8, "fallback"}
        ,
    ipv4(this, {"ipv4"})
    , cluster(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster>())
    , dynamic(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic>())
{
    cluster->parent = this;
    dynamic->parent = this;

    yang_name = "nhs"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::~Nhs()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return fallback.is_set
	|| (cluster !=  nullptr && cluster->has_data())
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| (cluster !=  nullptr && cluster->has_operation())
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cluster")
    {
        if(cluster == nullptr)
        {
            cluster = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster>();
        }
        return cluster;
    }

    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(cluster != nullptr)
    {
        _children["cluster"] = cluster;
    }

    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "cluster" || name == "dynamic" || name == "fallback")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    cluster{YType::uint8, "cluster"}
        ,
    nbma(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma>())
    , priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority>())
{
    nbma->parent = this;
    priority->parent = this;

    yang_name = "ipv4"; yang_parent_name = "nhs"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::~Ipv4()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| cluster.is_set
	|| (nbma !=  nullptr && nbma->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (nbma !=  nullptr && nbma->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbma")
    {
        if(nbma == nullptr)
        {
            nbma = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma>();
        }
        return nbma;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nbma != nullptr)
    {
        _children["nbma"] = nbma;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbma" || name == "priority" || name == "ipv4" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Nbma()
    :
    ipv4(this, {"ipv4"})
    , nhs_fqdn(this, {"nhs_fqdn"})
    , ipv6(this, {"ipv6"})
{

    yang_name = "nbma"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::~Nbma()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nhs_fqdn.len(); index++)
    {
        if(nhs_fqdn[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nhs_fqdn.len(); index++)
    {
        if(nhs_fqdn[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nhs-fqdn")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn>();
        ent_->parent = this;
        nhs_fqdn.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nhs_fqdn.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "nhs-fqdn" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Ipv4_()
    :
    ipv4{YType::str, "ipv4"},
    cluster{YType::uint8, "cluster"}
        ,
    multicast(nullptr) // presence node
    , priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority>())
{
    priority->parent = this;

    yang_name = "ipv4"; yang_parent_name = "nbma"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::~Ipv4_()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "priority" || name == "ipv4" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
        ,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Priority()
    :
    prior(this, {"prior"})
{

    yang_name = "priority"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prior.len(); index++)
    {
        if(prior[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<prior.len(); index++)
    {
        if(prior[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prior")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior>();
        ent_->parent = this;
        prior.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prior.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prior")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::Prior()
    :
    prior{YType::uint8, "prior"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "prior"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::~Prior()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::has_data() const
{
    if (is_presence_container) return true;
    return prior.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prior.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prior";
    ADD_KEY_TOKEN(prior, "prior");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prior.is_set || is_set(prior.yfilter)) leaf_name_data.push_back(prior.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prior")
    {
        prior = value;
        prior.value_namespace = name_space;
        prior.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prior")
    {
        prior.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prior" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Priority()
    :
    pri(this, {"pri"})
{

    yang_name = "priority"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pri.len(); index++)
    {
        if(pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::has_operation() const
{
    for (std::size_t index=0; index<pri.len(); index++)
    {
        if(pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pri")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri>();
        ent_->parent = this;
        pri.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pri.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pri")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::Pri()
    :
    pri{YType::uint8, "pri"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "pri"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::~Pri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::has_data() const
{
    if (is_presence_container) return true;
    return pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pri.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pri";
    ADD_KEY_TOKEN(pri, "pri");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pri.is_set || is_set(pri.yfilter)) leaf_name_data.push_back(pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pri")
    {
        pri = value;
        pri.value_namespace = name_space;
        pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pri")
    {
        pri.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pri" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::NhsFqdn()
    :
    nhs_fqdn{YType::str, "nhs-fqdn"},
    cluster{YType::uint8, "cluster"}
        ,
    multicast(nullptr) // presence node
    , priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority>())
{
    priority->parent = this;

    yang_name = "nhs-fqdn"; yang_parent_name = "nbma"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::~NhsFqdn()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::has_data() const
{
    if (is_presence_container) return true;
    return nhs_fqdn.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhs_fqdn.yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs-fqdn";
    ADD_KEY_TOKEN(nhs_fqdn, "nhs-fqdn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhs_fqdn.is_set || is_set(nhs_fqdn.yfilter)) leaf_name_data.push_back(nhs_fqdn.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhs-fqdn")
    {
        nhs_fqdn = value;
        nhs_fqdn.value_namespace = name_space;
        nhs_fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhs-fqdn")
    {
        nhs_fqdn.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "priority" || name == "nhs-fqdn" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
        ,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "nhs-fqdn"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::Priority()
    :
    mc_pri(this, {"mc_pri"})
{

    yang_name = "priority"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mc_pri.len(); index++)
    {
        if(mc_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<mc_pri.len(); index++)
    {
        if(mc_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mc-pri")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri>();
        ent_->parent = this;
        mc_pri.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mc_pri.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mc-pri")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::McPri()
    :
    mc_pri{YType::uint8, "mc-pri"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "mc-pri"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::~McPri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::has_data() const
{
    if (is_presence_container) return true;
    return mc_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mc_pri.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-pri";
    ADD_KEY_TOKEN(mc_pri, "mc-pri");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mc_pri.is_set || is_set(mc_pri.yfilter)) leaf_name_data.push_back(mc_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mc-pri")
    {
        mc_pri = value;
        mc_pri.value_namespace = name_space;
        mc_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mc-pri")
    {
        mc_pri.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mc-pri" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::Priority()
    :
    nhs_pri(this, {"nhs_pri"})
{

    yang_name = "priority"; yang_parent_name = "nhs-fqdn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nhs_pri.len(); index++)
    {
        if(nhs_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::has_operation() const
{
    for (std::size_t index=0; index<nhs_pri.len(); index++)
    {
        if(nhs_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhs-pri")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri>();
        ent_->parent = this;
        nhs_pri.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nhs_pri.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhs-pri")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::NhsPri()
    :
    nhs_pri{YType::uint8, "nhs-pri"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "nhs-pri"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::~NhsPri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::has_data() const
{
    if (is_presence_container) return true;
    return nhs_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhs_pri.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs-pri";
    ADD_KEY_TOKEN(nhs_pri, "nhs-pri");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhs_pri.is_set || is_set(nhs_pri.yfilter)) leaf_name_data.push_back(nhs_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhs-pri")
    {
        nhs_pri = value;
        nhs_pri.value_namespace = name_space;
        nhs_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhs-pri")
    {
        nhs_pri.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhs-pri" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Ipv6()
    :
    ipv6{YType::str, "ipv6"},
    cluster{YType::uint8, "cluster"}
        ,
    multicast(nullptr) // presence node
    , priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority>())
{
    priority->parent = this;

    yang_name = "ipv6"; yang_parent_name = "nbma"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::~Ipv6()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(ipv6, "ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "priority" || name == "ipv6" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
        ,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::Priority()
    :
    mc_pri(this, {"mc_pri"})
{

    yang_name = "priority"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mc_pri.len(); index++)
    {
        if(mc_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<mc_pri.len(); index++)
    {
        if(mc_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mc-pri")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri>();
        ent_->parent = this;
        mc_pri.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mc_pri.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mc-pri")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::McPri()
    :
    mc_pri{YType::uint8, "mc-pri"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "mc-pri"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::~McPri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::has_data() const
{
    if (is_presence_container) return true;
    return mc_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mc_pri.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-pri";
    ADD_KEY_TOKEN(mc_pri, "mc-pri");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mc_pri.is_set || is_set(mc_pri.yfilter)) leaf_name_data.push_back(mc_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mc-pri")
    {
        mc_pri = value;
        mc_pri.value_namespace = name_space;
        mc_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mc-pri")
    {
        mc_pri.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mc-pri" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::Priority()
    :
    mc_prior(this, {"mc_prior"})
{

    yang_name = "priority"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mc_prior.len(); index++)
    {
        if(mc_prior[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::has_operation() const
{
    for (std::size_t index=0; index<mc_prior.len(); index++)
    {
        if(mc_prior[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mc-prior")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior>();
        ent_->parent = this;
        mc_prior.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mc_prior.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mc-prior")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::McPrior()
    :
    mc_prior{YType::uint8, "mc-prior"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "mc-prior"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::~McPrior()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::has_data() const
{
    if (is_presence_container) return true;
    return mc_prior.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mc_prior.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-prior";
    ADD_KEY_TOKEN(mc_prior, "mc-prior");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mc_prior.is_set || is_set(mc_prior.yfilter)) leaf_name_data.push_back(mc_prior.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mc-prior")
    {
        mc_prior = value;
        mc_prior.value_namespace = name_space;
        mc_prior.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mc-prior")
    {
        mc_prior.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mc-prior" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::Priority()
    :
    pri_range(this, {"pri_range"})
{

    yang_name = "priority"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pri_range.len(); index++)
    {
        if(pri_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::has_operation() const
{
    for (std::size_t index=0; index<pri_range.len(); index++)
    {
        if(pri_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pri-range")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange>();
        ent_->parent = this;
        pri_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pri_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pri-range")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::PriRange()
    :
    pri_range{YType::uint8, "pri-range"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "pri-range"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::~PriRange()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::has_data() const
{
    if (is_presence_container) return true;
    return pri_range.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pri_range.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pri-range";
    ADD_KEY_TOKEN(pri_range, "pri-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pri_range.is_set || is_set(pri_range.yfilter)) leaf_name_data.push_back(pri_range.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pri-range")
    {
        pri_range = value;
        pri_range.value_namespace = name_space;
        pri_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pri-range")
    {
        pri_range.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pri-range" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::Cluster()
    :
    clus_num(this, {"clus_num"})
{

    yang_name = "cluster"; yang_parent_name = "nhs"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::~Cluster()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clus_num.len(); index++)
    {
        if(clus_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::has_operation() const
{
    for (std::size_t index=0; index<clus_num.len(); index++)
    {
        if(clus_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clus-num")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum>();
        ent_->parent = this;
        clus_num.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clus_num.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clus-num")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::ClusNum()
    :
    clus_num{YType::uint8, "clus-num"},
    max_connections{YType::uint8, "max-connections"}
{

    yang_name = "clus-num"; yang_parent_name = "cluster"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::~ClusNum()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::has_data() const
{
    if (is_presence_container) return true;
    return clus_num.is_set
	|| max_connections.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clus_num.yfilter)
	|| ydk::is_set(max_connections.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clus-num";
    ADD_KEY_TOKEN(clus_num, "clus-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clus_num.is_set || is_set(clus_num.yfilter)) leaf_name_data.push_back(clus_num.get_name_leafdata());
    if (max_connections.is_set || is_set(max_connections.yfilter)) leaf_name_data.push_back(max_connections.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clus-num")
    {
        clus_num = value;
        clus_num.value_namespace = name_space;
        clus_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-connections")
    {
        max_connections = value;
        max_connections.value_namespace = name_space;
        max_connections.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clus-num")
    {
        clus_num.yfilter = yfilter;
    }
    if(value_path == "max-connections")
    {
        max_connections.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clus-num" || name == "max-connections")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Dynamic()
    :
    nbma(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma>())
{
    nbma->parent = this;

    yang_name = "dynamic"; yang_parent_name = "nhs"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::~Dynamic()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return (nbma !=  nullptr && nbma->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| (nbma !=  nullptr && nbma->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbma")
    {
        if(nbma == nullptr)
        {
            nbma = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma>();
        }
        return nbma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nbma != nullptr)
    {
        _children["nbma"] = nbma;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbma")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Nbma()
    :
    ipv4(this, {"ipv4"})
    , dyn_fqdn(this, {"dyn_fqdn"})
    , ipv6(this, {"ipv6"})
{

    yang_name = "nbma"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::~Nbma()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dyn_fqdn.len(); index++)
    {
        if(dyn_fqdn[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dyn_fqdn.len(); index++)
    {
        if(dyn_fqdn[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dyn-fqdn")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn>();
        ent_->parent = this;
        dyn_fqdn.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : dyn_fqdn.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "dyn-fqdn" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    cluster{YType::uint8, "cluster"}
        ,
    multicast(nullptr) // presence node
    , priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority>())
{
    priority->parent = this;

    yang_name = "ipv4"; yang_parent_name = "nbma"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::~Ipv4()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "priority" || name == "ipv4" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
        ,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::Priority()
    :
    dyn_pri(this, {"dyn_pri"})
{

    yang_name = "priority"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dyn_pri.len(); index++)
    {
        if(dyn_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<dyn_pri.len(); index++)
    {
        if(dyn_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dyn-pri")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri>();
        ent_->parent = this;
        dyn_pri.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dyn_pri.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dyn-pri")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::DynPri()
    :
    dyn_pri{YType::uint8, "dyn-pri"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "dyn-pri"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::~DynPri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::has_data() const
{
    if (is_presence_container) return true;
    return dyn_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dyn_pri.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dyn-pri";
    ADD_KEY_TOKEN(dyn_pri, "dyn-pri");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dyn_pri.is_set || is_set(dyn_pri.yfilter)) leaf_name_data.push_back(dyn_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dyn-pri")
    {
        dyn_pri = value;
        dyn_pri.value_namespace = name_space;
        dyn_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dyn-pri")
    {
        dyn_pri.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dyn-pri" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::Priority()
    :
    n_prior(this, {"n_prior"})
{

    yang_name = "priority"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<n_prior.len(); index++)
    {
        if(n_prior[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::has_operation() const
{
    for (std::size_t index=0; index<n_prior.len(); index++)
    {
        if(n_prior[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "n-prior")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior>();
        ent_->parent = this;
        n_prior.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : n_prior.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "n-prior")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::NPrior()
    :
    n_prior{YType::uint8, "n-prior"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "n-prior"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::~NPrior()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::has_data() const
{
    if (is_presence_container) return true;
    return n_prior.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(n_prior.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "n-prior";
    ADD_KEY_TOKEN(n_prior, "n-prior");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (n_prior.is_set || is_set(n_prior.yfilter)) leaf_name_data.push_back(n_prior.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "n-prior")
    {
        n_prior = value;
        n_prior.value_namespace = name_space;
        n_prior.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "n-prior")
    {
        n_prior.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "n-prior" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::DynFqdn()
    :
    dyn_fqdn{YType::str, "dyn-fqdn"},
    cluster{YType::uint8, "cluster"}
        ,
    multicast(nullptr) // presence node
    , priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority>())
{
    priority->parent = this;

    yang_name = "dyn-fqdn"; yang_parent_name = "nbma"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::~DynFqdn()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::has_data() const
{
    if (is_presence_container) return true;
    return dyn_fqdn.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dyn_fqdn.yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dyn-fqdn";
    ADD_KEY_TOKEN(dyn_fqdn, "dyn-fqdn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dyn_fqdn.is_set || is_set(dyn_fqdn.yfilter)) leaf_name_data.push_back(dyn_fqdn.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dyn-fqdn")
    {
        dyn_fqdn = value;
        dyn_fqdn.value_namespace = name_space;
        dyn_fqdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dyn-fqdn")
    {
        dyn_fqdn.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "priority" || name == "dyn-fqdn" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
        ,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "dyn-fqdn"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::Priority()
    :
    dyn_mc_pri(this, {"dyn_mc_pri"})
{

    yang_name = "priority"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dyn_mc_pri.len(); index++)
    {
        if(dyn_mc_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<dyn_mc_pri.len(); index++)
    {
        if(dyn_mc_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dyn-mc-pri")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri>();
        ent_->parent = this;
        dyn_mc_pri.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dyn_mc_pri.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dyn-mc-pri")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::DynMcPri()
    :
    dyn_mc_pri{YType::uint8, "dyn-mc-pri"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "dyn-mc-pri"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::~DynMcPri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::has_data() const
{
    if (is_presence_container) return true;
    return dyn_mc_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dyn_mc_pri.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dyn-mc-pri";
    ADD_KEY_TOKEN(dyn_mc_pri, "dyn-mc-pri");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dyn_mc_pri.is_set || is_set(dyn_mc_pri.yfilter)) leaf_name_data.push_back(dyn_mc_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dyn-mc-pri")
    {
        dyn_mc_pri = value;
        dyn_mc_pri.value_namespace = name_space;
        dyn_mc_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dyn-mc-pri")
    {
        dyn_mc_pri.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dyn-mc-pri" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Priority()
    :
    dp(this, {"dp"})
{

    yang_name = "priority"; yang_parent_name = "dyn-fqdn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dp.len(); index++)
    {
        if(dp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::has_operation() const
{
    for (std::size_t index=0; index<dp.len(); index++)
    {
        if(dp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dp")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp>();
        ent_->parent = this;
        dp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dp")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::Dp()
    :
    dp{YType::uint8, "dp"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "dp"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::~Dp()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::has_data() const
{
    if (is_presence_container) return true;
    return dp.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dp.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dp";
    ADD_KEY_TOKEN(dp, "dp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp.is_set || is_set(dp.yfilter)) leaf_name_data.push_back(dp.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dp")
    {
        dp = value;
        dp.value_namespace = name_space;
        dp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dp")
    {
        dp.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dp" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Ipv6()
    :
    ipv6{YType::str, "ipv6"},
    cluster{YType::uint8, "cluster"}
        ,
    multicast(nullptr) // presence node
    , priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority>())
{
    priority->parent = this;

    yang_name = "ipv6"; yang_parent_name = "nbma"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::~Ipv6()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(ipv6, "ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "priority" || name == "ipv6" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
        ,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::Priority()
    :
    v6_pri(this, {"v6_pri"})
{

    yang_name = "priority"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<v6_pri.len(); index++)
    {
        if(v6_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<v6_pri.len(); index++)
    {
        if(v6_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v6-pri")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri>();
        ent_->parent = this;
        v6_pri.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : v6_pri.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v6-pri")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::V6Pri()
    :
    v6_pri{YType::uint8, "v6-pri"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "v6-pri"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::~V6Pri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::has_data() const
{
    if (is_presence_container) return true;
    return v6_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v6_pri.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-pri";
    ADD_KEY_TOKEN(v6_pri, "v6-pri");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v6_pri.is_set || is_set(v6_pri.yfilter)) leaf_name_data.push_back(v6_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v6-pri")
    {
        v6_pri = value;
        v6_pri.value_namespace = name_space;
        v6_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v6-pri")
    {
        v6_pri.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v6-pri" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::Priority()
    :
    v6_pri2(this, {"v6_pri2"})
{

    yang_name = "priority"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<v6_pri2.len(); index++)
    {
        if(v6_pri2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::has_operation() const
{
    for (std::size_t index=0; index<v6_pri2.len(); index++)
    {
        if(v6_pri2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v6-pri2")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2>();
        ent_->parent = this;
        v6_pri2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : v6_pri2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v6-pri2")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::V6Pri2()
    :
    v6_pri2{YType::uint8, "v6-pri2"},
    cluster{YType::uint8, "cluster"}
{

    yang_name = "v6-pri2"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::~V6Pri2()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::has_data() const
{
    if (is_presence_container) return true;
    return v6_pri2.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v6_pri2.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-pri2";
    ADD_KEY_TOKEN(v6_pri2, "v6-pri2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v6_pri2.is_set || is_set(v6_pri2.yfilter)) leaf_name_data.push_back(v6_pri2.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v6-pri2")
    {
        v6_pri2 = value;
        v6_pri2.value_namespace = name_space;
        v6_pri2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v6-pri2")
    {
        v6_pri2.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v6-pri2" || name == "cluster")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Redirect::Redirect()
    :
    timeout{YType::uint8, "timeout"}
{

    yang_name = "redirect"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Nhrp::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Registration::Registration()
    :
    no_unique{YType::empty, "no-unique"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "registration"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Registration::~Registration()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Registration::has_data() const
{
    if (is_presence_container) return true;
    return no_unique.is_set
	|| timeout.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_unique.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_unique.is_set || is_set(no_unique.yfilter)) leaf_name_data.push_back(no_unique.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-unique")
    {
        no_unique = value;
        no_unique.value_namespace = name_space;
        no_unique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-unique")
    {
        no_unique.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-unique" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Reject::Reject()
    :
    reqid(this, {"reqid"})
{

    yang_name = "reject"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Reject::~Reject()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Reject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reqid.len(); index++)
    {
        if(reqid[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Reject::has_operation() const
{
    for (std::size_t index=0; index<reqid.len(); index++)
    {
        if(reqid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Reject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Reject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Reject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reqid")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid>();
        ent_->parent = this;
        reqid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Reject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reqid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Reject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::Reject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Reject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reqid")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::Reqid()
    :
    reqid{YType::uint16, "reqid"},
    rej_secs{YType::uint16, "rej-secs"}
{

    yang_name = "reqid"; yang_parent_name = "reject"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::~Reqid()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::has_data() const
{
    if (is_presence_container) return true;
    return reqid.is_set
	|| rej_secs.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reqid.yfilter)
	|| ydk::is_set(rej_secs.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reqid";
    ADD_KEY_TOKEN(reqid, "reqid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reqid.is_set || is_set(reqid.yfilter)) leaf_name_data.push_back(reqid.get_name_leafdata());
    if (rej_secs.is_set || is_set(rej_secs.yfilter)) leaf_name_data.push_back(rej_secs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reqid")
    {
        reqid = value;
        reqid.value_namespace = name_space;
        reqid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rej-secs")
    {
        rej_secs = value;
        rej_secs.value_namespace = name_space;
        rej_secs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reqid")
    {
        reqid.yfilter = yfilter;
    }
    if(value_path == "rej-secs")
    {
        rej_secs.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reqid" || name == "rej-secs")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Responder::Responder()
    :
    res_int{YType::str, "res-int"},
    analysis_module{YType::uint8, "Analysis-Module"},
    fcpa{YType::uint8, "Fcpa"},
    sbc{YType::uint32, "SBC"},
    sonet_acr{YType::uint8, "SONET_ACR"},
    tb_controller{YType::str, "TB-controller"},
    service_engine{YType::uint8, "Service-Engine"},
    tunnel{YType::uint32, "Tunnel"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    vpn{YType::uint32, "VPN"},
    virtual_tokenring{YType::uint32, "Virtual-TokenRing"},
    virtualportgroup{YType::uint8, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"},
    ucse{YType::uint8, "ucse"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
{

    yang_name = "responder"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::Responder::~Responder()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Responder::has_data() const
{
    if (is_presence_container) return true;
    return res_int.is_set
	|| analysis_module.is_set
	|| fcpa.is_set
	|| sbc.is_set
	|| sonet_acr.is_set
	|| tb_controller.is_set
	|| service_engine.is_set
	|| tunnel.is_set
	|| tunnel_tp.is_set
	|| vpn.is_set
	|| virtual_tokenring.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| ucse.is_set
	|| vasileft.is_set
	|| vasiright.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Responder::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(res_int.yfilter)
	|| ydk::is_set(analysis_module.yfilter)
	|| ydk::is_set(fcpa.yfilter)
	|| ydk::is_set(sbc.yfilter)
	|| ydk::is_set(sonet_acr.yfilter)
	|| ydk::is_set(tb_controller.yfilter)
	|| ydk::is_set(service_engine.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(tunnel_tp.yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| ydk::is_set(virtual_tokenring.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(ucse.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Responder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Responder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (res_int.is_set || is_set(res_int.yfilter)) leaf_name_data.push_back(res_int.get_name_leafdata());
    if (analysis_module.is_set || is_set(analysis_module.yfilter)) leaf_name_data.push_back(analysis_module.get_name_leafdata());
    if (fcpa.is_set || is_set(fcpa.yfilter)) leaf_name_data.push_back(fcpa.get_name_leafdata());
    if (sbc.is_set || is_set(sbc.yfilter)) leaf_name_data.push_back(sbc.get_name_leafdata());
    if (sonet_acr.is_set || is_set(sonet_acr.yfilter)) leaf_name_data.push_back(sonet_acr.get_name_leafdata());
    if (tb_controller.is_set || is_set(tb_controller.yfilter)) leaf_name_data.push_back(tb_controller.get_name_leafdata());
    if (service_engine.is_set || is_set(service_engine.yfilter)) leaf_name_data.push_back(service_engine.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.yfilter)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (virtual_tokenring.is_set || is_set(virtual_tokenring.yfilter)) leaf_name_data.push_back(virtual_tokenring.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (ucse.is_set || is_set(ucse.yfilter)) leaf_name_data.push_back(ucse.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Responder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Responder::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Responder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "res-int")
    {
        res_int = value;
        res_int.value_namespace = name_space;
        res_int.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Analysis-Module")
    {
        analysis_module = value;
        analysis_module.value_namespace = name_space;
        analysis_module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Fcpa")
    {
        fcpa = value;
        fcpa.value_namespace = name_space;
        fcpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SBC")
    {
        sbc = value;
        sbc.value_namespace = name_space;
        sbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr = value;
        sonet_acr.value_namespace = name_space;
        sonet_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TB-controller")
    {
        tb_controller = value;
        tb_controller.value_namespace = name_space;
        tb_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Service-Engine")
    {
        service_engine = value;
        service_engine.value_namespace = name_space;
        service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
        tunnel_tp.value_namespace = name_space;
        tunnel_tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VPN")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring = value;
        virtual_tokenring.value_namespace = name_space;
        virtual_tokenring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucse")
    {
        ucse = value;
        ucse.value_namespace = name_space;
        ucse.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::Tunnel::Ip::Nhrp::Responder::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "res-int")
    {
        res_int.yfilter = yfilter;
    }
    if(value_path == "Analysis-Module")
    {
        analysis_module.yfilter = yfilter;
    }
    if(value_path == "Fcpa")
    {
        fcpa.yfilter = yfilter;
    }
    if(value_path == "SBC")
    {
        sbc.yfilter = yfilter;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr.yfilter = yfilter;
    }
    if(value_path == "TB-controller")
    {
        tb_controller.yfilter = yfilter;
    }
    if(value_path == "Service-Engine")
    {
        service_engine.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp.yfilter = yfilter;
    }
    if(value_path == "VPN")
    {
        vpn.yfilter = yfilter;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "ucse")
    {
        ucse.yfilter = yfilter;
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

bool Native::Interface::Tunnel::Ip::Nhrp::Responder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "res-int" || name == "Analysis-Module" || name == "Fcpa" || name == "SBC" || name == "SONET_ACR" || name == "TB-controller" || name == "Service-Engine" || name == "Tunnel" || name == "Tunnel-tp" || name == "VPN" || name == "Virtual-TokenRing" || name == "VirtualPortGroup" || name == "Vlan" || name == "ucse" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::ServerOnly()
    :
    non_caching{YType::empty, "non-caching"}
{

    yang_name = "server-only"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::~ServerOnly()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::has_data() const
{
    if (is_presence_container) return true;
    return non_caching.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_caching.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_caching.is_set || is_set(non_caching.yfilter)) leaf_name_data.push_back(non_caching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-caching")
    {
        non_caching = value;
        non_caching.value_namespace = name_space;
        non_caching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-caching")
    {
        non_caching.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-caching")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::Shortcut::Shortcut()
    :
    virtual_template{YType::uint16, "virtual-template"}
{

    yang_name = "shortcut"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Nhrp::Shortcut::~Shortcut()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Shortcut::has_data() const
{
    if (is_presence_container) return true;
    return virtual_template.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Shortcut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_template.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Shortcut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shortcut";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::Shortcut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::Shortcut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::Shortcut::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Shortcut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::Shortcut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::Shortcut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-template")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::TriggerSvc()
    :
    kbps(this, {"kbps"})
{

    yang_name = "trigger-svc"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::~TriggerSvc()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<kbps.len(); index++)
    {
        if(kbps[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::has_operation() const
{
    for (std::size_t index=0; index<kbps.len(); index++)
    {
        if(kbps[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-svc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "kbps")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps>();
        ent_->parent = this;
        kbps.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : kbps.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbps")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::Kbps()
    :
    kbps{YType::uint32, "kbps"},
    tear_kbps{YType::uint32, "tear-kbps"}
{

    yang_name = "kbps"; yang_parent_name = "trigger-svc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::~Kbps()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::has_data() const
{
    if (is_presence_container) return true;
    return kbps.is_set
	|| tear_kbps.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbps.yfilter)
	|| ydk::is_set(tear_kbps.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kbps";
    ADD_KEY_TOKEN(kbps, "kbps");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbps.is_set || is_set(kbps.yfilter)) leaf_name_data.push_back(kbps.get_name_leafdata());
    if (tear_kbps.is_set || is_set(tear_kbps.yfilter)) leaf_name_data.push_back(tear_kbps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kbps")
    {
        kbps = value;
        kbps.value_namespace = name_space;
        kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-kbps")
    {
        tear_kbps = value;
        tear_kbps.value_namespace = name_space;
        tear_kbps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kbps")
    {
        kbps.yfilter = yfilter;
    }
    if(value_path == "tear-kbps")
    {
        tear_kbps.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbps" || name == "tear-kbps")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nbar::Nbar()
    :
    protocol_discovery(nullptr) // presence node
{

    yang_name = "nbar"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Nbar::~Nbar()
{
}

bool Native::Interface::Tunnel::Ip::Nbar::has_data() const
{
    if (is_presence_container) return true;
    return (protocol_discovery !=  nullptr && protocol_discovery->has_data());
}

bool Native::Interface::Tunnel::Ip::Nbar::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_discovery !=  nullptr && protocol_discovery->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nbar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-discovery")
    {
        if(protocol_discovery == nullptr)
        {
            protocol_discovery = std::make_shared<Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery>();
        }
        return protocol_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol_discovery != nullptr)
    {
        _children["protocol-discovery"] = protocol_discovery;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Nbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Nbar::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Nbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-discovery")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::ProtocolDiscovery()
    :
    ipv4_ipv6{YType::enumeration, "ipv4-ipv6"}
{

    yang_name = "protocol-discovery"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::~ProtocolDiscovery()
{
}

bool Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_ipv6.is_set;
}

bool Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_ipv6.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_ipv6.is_set || is_set(ipv4_ipv6.yfilter)) leaf_name_data.push_back(ipv4_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-ipv6")
    {
        ipv4_ipv6 = value;
        ipv4_ipv6.value_namespace = name_space;
        ipv4_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-ipv6")
    {
        ipv4_ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-ipv6")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Rsvp()
    :
    authentication(nullptr) // presence node
    , bandwidth(nullptr) // presence node
    , neighbor(nullptr) // presence node
    , precedence(std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Precedence>())
    , signalling(std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Signalling>())
    , tos(std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Tos>())
{
    precedence->parent = this;
    signalling->parent = this;
    tos->parent = this;

    yang_name = "rsvp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rsvp::~Rsvp()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (precedence !=  nullptr && precedence->has_data())
	|| (signalling !=  nullptr && signalling->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool Native::Interface::Tunnel::Ip::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rsvp:rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Precedence>();
        }
        return precedence;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Signalling>();
        }
        return signalling;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(neighbor != nullptr)
    {
        _children["neighbor"] = neighbor;
    }

    if(precedence != nullptr)
    {
        _children["precedence"] = precedence;
    }

    if(signalling != nullptr)
    {
        _children["signalling"] = signalling;
    }

    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bandwidth" || name == "neighbor" || name == "precedence" || name == "signalling" || name == "tos")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Authentication::Authentication()
    :
    key{YType::str, "key"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
        ,
    lifetime(std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "authentication"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Rsvp::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Interface::Tunnel::Ip::Rsvp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "key" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime::~Lifetime()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set;
}

bool Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Authentication::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Bandwidth()
    :
    percent{YType::uint16, "percent"}
        ,
    value_(std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value>())
    , mam(std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam>())
{
    value_->parent = this;
    mam->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| (value_ !=  nullptr && value_->has_data())
	|| (mam !=  nullptr && mam->has_data());
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| (value_ !=  nullptr && value_->has_operation())
	|| (mam !=  nullptr && mam->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value>();
        }
        return value_;
    }

    if(child_yang_name == "mam")
    {
        if(mam == nullptr)
        {
            mam = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam>();
        }
        return mam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(value_ != nullptr)
    {
        _children["value"] = value_;
    }

    if(mam != nullptr)
    {
        _children["mam"] = mam;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "mam" || name == "percent")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value::Value()
    :
    value_{YType::uint32, "value"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "value"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value::~Value()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Value::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::Mam()
    :
    max_reservable_bw(nullptr) // presence node
{

    yang_name = "mam"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::~Mam()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::has_data() const
{
    if (is_presence_container) return true;
    return (max_reservable_bw !=  nullptr && max_reservable_bw->has_data());
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::has_operation() const
{
    return is_set(yfilter)
	|| (max_reservable_bw !=  nullptr && max_reservable_bw->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-reservable-bw")
    {
        if(max_reservable_bw == nullptr)
        {
            max_reservable_bw = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw>();
        }
        return max_reservable_bw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(max_reservable_bw != nullptr)
    {
        _children["max-reservable-bw"] = max_reservable_bw;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-reservable-bw")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::MaxReservableBw()
    :
    value_{YType::uint32, "value"},
    bc0{YType::uint32, "bc0"},
    bc1{YType::uint32, "bc1"}
{

    yang_name = "max-reservable-bw"; yang_parent_name = "mam"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::~MaxReservableBw()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| bc0.is_set
	|| bc1.is_set;
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(bc0.yfilter)
	|| ydk::is_set(bc1.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-reservable-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (bc0.is_set || is_set(bc0.yfilter)) leaf_name_data.push_back(bc0.get_name_leafdata());
    if (bc1.is_set || is_set(bc1.yfilter)) leaf_name_data.push_back(bc1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc0")
    {
        bc0 = value;
        bc0.value_namespace = name_space;
        bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc1")
    {
        bc1 = value;
        bc1.value_namespace = name_space;
        bc1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "bc0")
    {
        bc0.yfilter = yfilter;
    }
    if(value_path == "bc1")
    {
        bc1.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "bc0" || name == "bc1")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Neighbor::Neighbor()
    :
    acl_number{YType::uint8, "acl-number"}
{

    yang_name = "neighbor"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Rsvp::Neighbor::~Neighbor()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return acl_number.is_set;
}

bool Native::Interface::Tunnel::Ip::Rsvp::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-number")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Precedence::Precedence()
    :
    conform{YType::uint8, "conform"},
    exceed{YType::uint8, "exceed"}
{

    yang_name = "precedence"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rsvp::Precedence::~Precedence()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Precedence::has_data() const
{
    if (is_presence_container) return true;
    return conform.is_set
	|| exceed.is_set;
}

bool Native::Interface::Tunnel::Ip::Rsvp::Precedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conform.yfilter)
	|| ydk::is_set(exceed.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Precedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform.is_set || is_set(conform.yfilter)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.yfilter)) leaf_name_data.push_back(exceed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Precedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conform")
    {
        conform = value;
        conform.value_namespace = name_space;
        conform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed")
    {
        exceed = value;
        exceed.value_namespace = name_space;
        exceed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Precedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conform")
    {
        conform.yfilter = yfilter;
    }
    if(value_path == "exceed")
    {
        exceed.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Precedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform" || name == "exceed")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::Signalling()
    :
    dscp{YType::uint8, "dscp"}
        ,
    fast_local_repair(std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair>())
    , hello(nullptr) // presence node
{
    fast_local_repair->parent = this;

    yang_name = "signalling"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::~Signalling()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_data())
	|| (hello !=  nullptr && hello->has_data());
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_operation())
	|| (hello !=  nullptr && hello->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-local-repair")
    {
        if(fast_local_repair == nullptr)
        {
            fast_local_repair = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair>();
        }
        return fast_local_repair;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello>();
        }
        return hello;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fast_local_repair != nullptr)
    {
        _children["fast-local-repair"] = fast_local_repair;
    }

    if(hello != nullptr)
    {
        _children["hello"] = hello;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-local-repair" || name == "hello" || name == "dscp")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair::FastLocalRepair()
    :
    wait_time{YType::uint16, "wait-time"}
{

    yang_name = "fast-local-repair"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair::~FastLocalRepair()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair::has_data() const
{
    if (is_presence_container) return true;
    return wait_time.is_set;
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-local-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::FastLocalRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-time")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Hello()
    :
    bfd{YType::empty, "bfd"},
    dscp{YType::uint8, "dscp"},
    graceful_restart{YType::empty, "graceful-restart"}
        ,
    refresh(std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh>())
    , reroute(std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute>())
{
    refresh->parent = this;
    reroute->parent = this;

    yang_name = "hello"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::~Hello()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::has_data() const
{
    if (is_presence_container) return true;
    return bfd.is_set
	|| dscp.is_set
	|| graceful_restart.is_set
	|| (refresh !=  nullptr && refresh->has_data())
	|| (reroute !=  nullptr && reroute->has_data());
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(graceful_restart.yfilter)
	|| (refresh !=  nullptr && refresh->has_operation())
	|| (reroute !=  nullptr && reroute->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (graceful_restart.is_set || is_set(graceful_restart.yfilter)) leaf_name_data.push_back(graceful_restart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh>();
        }
        return refresh;
    }

    if(child_yang_name == "reroute")
    {
        if(reroute == nullptr)
        {
            reroute = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute>();
        }
        return reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(refresh != nullptr)
    {
        _children["refresh"] = refresh;
    }

    if(reroute != nullptr)
    {
        _children["reroute"] = reroute;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart")
    {
        graceful_restart = value;
        graceful_restart.value_namespace = name_space;
        graceful_restart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "graceful-restart")
    {
        graceful_restart.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh" || name == "reroute" || name == "bfd" || name == "dscp" || name == "graceful-restart")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh::Refresh()
    :
    interval{YType::uint16, "interval"},
    misses{YType::uint8, "misses"}
{

    yang_name = "refresh"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh::~Refresh()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| misses.is_set;
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Reroute()
    :
    dscp{YType::uint8, "dscp"}
        ,
    refresh(std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh>())
{
    refresh->parent = this;

    yang_name = "reroute"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::~Reroute()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| (refresh !=  nullptr && refresh->has_data());
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(refresh != nullptr)
    {
        _children["refresh"] = refresh;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh" || name == "dscp")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::Refresh()
    :
    interval{YType::uint16, "interval"},
    misses{YType::uint8, "misses"}
{

    yang_name = "refresh"; yang_parent_name = "reroute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::~Refresh()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| misses.is_set;
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rsvp::Tos::Tos()
    :
    conform{YType::uint8, "conform"},
    exceed{YType::uint8, "exceed"}
{

    yang_name = "tos"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rsvp::Tos::~Tos()
{
}

bool Native::Interface::Tunnel::Ip::Rsvp::Tos::has_data() const
{
    if (is_presence_container) return true;
    return conform.is_set
	|| exceed.is_set;
}

bool Native::Interface::Tunnel::Ip::Rsvp::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conform.yfilter)
	|| ydk::is_set(exceed.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Rsvp::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rsvp::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform.is_set || is_set(conform.yfilter)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.yfilter)) leaf_name_data.push_back(exceed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rsvp::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rsvp::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Rsvp::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conform")
    {
        conform = value;
        conform.value_namespace = name_space;
        conform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed")
    {
        exceed = value;
        exceed.value_namespace = name_space;
        exceed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rsvp::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conform")
    {
        conform.yfilter = yfilter;
    }
    if(value_path == "exceed")
    {
        exceed.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rsvp::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform" || name == "exceed")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::Wccp()
    :
    wccp_list(this, {"id"})
    , web_cache(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WebCache>())
    , redirect(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Redirect>())
    , vrf(this, {"name"})
{
    web_cache->parent = this;
    redirect->parent = this;

    yang_name = "wccp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::~Wccp()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (web_cache !=  nullptr && web_cache->has_data())
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::has_operation() const
{
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (web_cache !=  nullptr && web_cache->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wccp:wccp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wccp-list")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WccpList>();
        ent_->parent = this;
        wccp_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WebCache>();
        }
        return web_cache;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : wccp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(web_cache != nullptr)
    {
        _children["web-cache"] = web_cache;
    }

    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
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

void Native::Interface::Tunnel::Ip::Wccp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Wccp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Wccp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wccp-list" || name == "web-cache" || name == "redirect" || name == "vrf")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_listen{YType::empty, "group-listen"}
        ,
    redirect(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect>())
{
    redirect->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::WccpList::~WccpList()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::WccpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::WccpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::WccpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Wccp::WccpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Wccp::WccpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Wccp::WccpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "id" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "wccp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::WebCache::WebCache()
    :
    group_listen{YType::empty, "group-listen"}
        ,
    redirect(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect>())
{
    redirect->parent = this;

    yang_name = "web-cache"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::WebCache::~WebCache()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::WebCache::has_data() const
{
    if (is_presence_container) return true;
    return group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::WebCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::WebCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Wccp::WebCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Wccp::WebCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Wccp::WebCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::Redirect::Redirect()
    :
    exclude(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude>())
{
    exclude->parent = this;

    yang_name = "redirect"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return (exclude !=  nullptr && exclude->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| (exclude !=  nullptr && exclude->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude>();
        }
        return exclude;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exclude != nullptr)
    {
        _children["exclude"] = exclude;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Wccp::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Wccp::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::Exclude()
    :
    in{YType::empty, "in"}
{

    yang_name = "exclude"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::~Exclude()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set;
}

bool Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    wccp_list(this, {"id"})
    , web_cache(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache>())
{
    web_cache->parent = this;

    yang_name = "vrf"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::~Vrf()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::has_operation() const
{
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wccp-list")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList>();
        ent_->parent = this;
        wccp_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : wccp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(web_cache != nullptr)
    {
        _children["web-cache"] = web_cache;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wccp-list" || name == "web-cache" || name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_listen{YType::empty, "group-listen"}
        ,
    redirect(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect>())
{
    redirect->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::~WccpList()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "id" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "wccp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::WebCache()
    :
    group_listen{YType::empty, "group-listen"}
        ,
    redirect(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect>())
{
    redirect->parent = this;

    yang_name = "web-cache"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::~WebCache()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::has_data() const
{
    if (is_presence_container) return true;
    return group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Ipv6()
    :
    unnumbered{YType::str, "unnumbered"},
    enable{YType::empty, "enable"},
    mtu{YType::uint16, "mtu"},
    redirects{YType::boolean, "redirects"},
    unreachables{YType::boolean, "Cisco-IOS-XE-icmp:unreachables"}
        ,
    destination_guard(nullptr) // presence node
    , source_guard(nullptr) // presence node
    , dhcp(std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp>())
    , address(std::make_shared<Native::Interface::Tunnel::Ipv6::Address>())
    , nd(std::make_shared<Native::Interface::Tunnel::Ipv6::Nd>())
    , tcp(std::make_shared<Native::Interface::Tunnel::Ipv6::Tcp>())
    , traffic_filter(this, {"direction"})
    , flow(std::make_shared<Native::Interface::Tunnel::Ipv6::Flow>())
    , no_pim(std::make_shared<Native::Interface::Tunnel::Ipv6::NoPim>())
    , pim(std::make_shared<Native::Interface::Tunnel::Ipv6::Pim>())
    , ospf(std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf>())
    , rip(this, {"id"})
    , crypto(std::make_shared<Native::Interface::Tunnel::Ipv6::Crypto>())
{
    dhcp->parent = this;
    address->parent = this;
    nd->parent = this;
    tcp->parent = this;
    flow->parent = this;
    no_pim->parent = this;
    pim->parent = this;
    ospf->parent = this;
    crypto->parent = this;

    yang_name = "ipv6"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::~Ipv6()
{
}

bool Native::Interface::Tunnel::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<traffic_filter.len(); index++)
    {
        if(traffic_filter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return unnumbered.is_set
	|| enable.is_set
	|| mtu.is_set
	|| redirects.is_set
	|| unreachables.is_set
	|| (destination_guard !=  nullptr && destination_guard->has_data())
	|| (source_guard !=  nullptr && source_guard->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (no_pim !=  nullptr && no_pim->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (crypto !=  nullptr && crypto->has_data());
}

bool Native::Interface::Tunnel::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<traffic_filter.len(); index++)
    {
        if(traffic_filter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| (destination_guard !=  nullptr && destination_guard->has_operation())
	|| (source_guard !=  nullptr && source_guard->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (no_pim !=  nullptr && no_pim->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-guard")
    {
        if(destination_guard == nullptr)
        {
            destination_guard = std::make_shared<Native::Interface::Tunnel::Ipv6::DestinationGuard>();
        }
        return destination_guard;
    }

    if(child_yang_name == "source-guard")
    {
        if(source_guard == nullptr)
        {
            source_guard = std::make_shared<Native::Interface::Tunnel::Ipv6::SourceGuard>();
        }
        return source_guard;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Tunnel::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Interface::Tunnel::Ipv6::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::Tunnel::Ipv6::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "traffic-filter")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ipv6::TrafficFilter>();
        ent_->parent = this;
        traffic_filter.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-flow:flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::Tunnel::Ipv6::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:no-pim")
    {
        if(no_pim == nullptr)
        {
            no_pim = std::make_shared<Native::Interface::Tunnel::Ipv6::NoPim>();
        }
        return no_pim;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Tunnel::Ipv6::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "Cisco-IOS-XE-ospf:ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "Cisco-IOS-XE-rip:rip")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ipv6::Rip>();
        ent_->parent = this;
        rip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::Tunnel::Ipv6::Crypto>();
        }
        return crypto;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_guard != nullptr)
    {
        _children["destination-guard"] = destination_guard;
    }

    if(source_guard != nullptr)
    {
        _children["source-guard"] = source_guard;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(nd != nullptr)
    {
        _children["nd"] = nd;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    count_ = 0;
    for (auto ent_ : traffic_filter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(flow != nullptr)
    {
        _children["Cisco-IOS-XE-flow:flow"] = flow;
    }

    if(no_pim != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:no-pim"] = no_pim;
    }

    if(pim != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:pim"] = pim;
    }

    if(ospf != nullptr)
    {
        _children["Cisco-IOS-XE-ospf:ospf"] = ospf;
    }

    count_ = 0;
    for (auto ent_ : rip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(crypto != nullptr)
    {
        _children["Cisco-IOS-XE-crypto:crypto"] = crypto;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-icmp:unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-guard" || name == "source-guard" || name == "dhcp" || name == "address" || name == "nd" || name == "tcp" || name == "traffic-filter" || name == "flow" || name == "no-pim" || name == "pim" || name == "ospf" || name == "rip" || name == "crypto" || name == "unnumbered" || name == "enable" || name == "mtu" || name == "redirects" || name == "unreachables")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::DestinationGuard::DestinationGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "destination-guard"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ipv6::DestinationGuard::~DestinationGuard()
{
}

bool Native::Interface::Tunnel::Ipv6::DestinationGuard::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::Tunnel::Ipv6::DestinationGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::DestinationGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::DestinationGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::DestinationGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::DestinationGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::DestinationGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::DestinationGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::DestinationGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::SourceGuard::SourceGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "source-guard"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ipv6::SourceGuard::~SourceGuard()
{
}

bool Native::Interface::Tunnel::Ipv6::SourceGuard::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::Tunnel::Ipv6::SourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::SourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::SourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::SourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::SourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::SourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::SourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::SourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp::Client>())
    , server(this, {"word"})
    , guard(nullptr) // presence node
{
    client->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return (client !=  nullptr && client->has_data())
	|| (guard !=  nullptr && guard->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dhcp:client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:server")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp::Server>();
        ent_->parent = this;
        server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:client"] = client;
    }

    count_ = 0;
    for (auto ent_ : server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(guard != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:guard"] = guard;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ipv6::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "server" || name == "guard")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Dhcp::Client::Client()
    :
    request(std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request>())
{
    request->parent = this;

    yang_name = "client"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Dhcp::Client::~Client()
{
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Client::has_data() const
{
    if (is_presence_container) return true;
    return (request !=  nullptr && request->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Client::has_operation() const
{
    return is_set(yfilter)
	|| (request !=  nullptr && request->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Dhcp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request>();
        }
        return request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(request != nullptr)
    {
        _children["request"] = request;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Dhcp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ipv6::Dhcp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request::Request()
    :
    vendor{YType::empty, "vendor"}
{

    yang_name = "request"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request::~Request()
{
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Client::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Dhcp::Server::Server()
    :
    word{YType::str, "word"},
    preference{YType::uint8, "preference"}
{

    yang_name = "server"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Dhcp::Server::~Server()
{
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Server::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| preference.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(preference.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Dhcp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:server";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Dhcp::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Dhcp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Dhcp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Dhcp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Dhcp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "preference")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Dhcp::Guard::Guard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "guard"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Guard::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Dhcp::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Dhcp::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Dhcp::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Address::Address()
    :
    dhcp(nullptr) // presence node
    , autoconfig(nullptr) // presence node
    , prefix_list(this, {"prefix"})
    , link_local_address(this, {"address"})
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Address::~Address()
{
}

bool Native::Interface::Tunnel::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_local_address.len(); index++)
    {
        if(link_local_address[index]->has_data())
            return true;
    }
    return (dhcp !=  nullptr && dhcp->has_data())
	|| (autoconfig !=  nullptr && autoconfig->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Address::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_local_address.len(); index++)
    {
        if(link_local_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (autoconfig !=  nullptr && autoconfig->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Tunnel::Ipv6::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::Tunnel::Ipv6::Address::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ipv6::Address::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "link-local-address")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress>();
        ent_->parent = this;
        link_local_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(autoconfig != nullptr)
    {
        _children["autoconfig"] = autoconfig;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : link_local_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "autoconfig" || name == "prefix-list" || name == "link-local-address")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Address::Dhcp::Dhcp()
    :
    rapid_commit{YType::empty, "rapid-commit"}
{

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ipv6::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Tunnel::Ipv6::Address::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return rapid_commit.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rapid_commit.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rapid_commit.is_set || is_set(rapid_commit.yfilter)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
        rapid_commit.value_namespace = name_space;
        rapid_commit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rapid-commit")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Address::Autoconfig::Autoconfig()
    :
    default_{YType::empty, "default"}
{

    yang_name = "autoconfig"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ipv6::Address::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::Tunnel::Ipv6::Address::Autoconfig::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Address::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Address::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Address::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Address::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Address::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Address::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Address::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Address::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Address::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    anycast{YType::empty, "anycast"},
    eui_64{YType::empty, "eui-64"}
{

    yang_name = "prefix-list"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Address::PrefixList::~PrefixList()
{
}

bool Native::Interface::Tunnel::Ipv6::Address::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| anycast.is_set
	|| eui_64.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Address::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(anycast.yfilter)
	|| ydk::is_set(eui_64.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Address::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Address::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (anycast.is_set || is_set(anycast.yfilter)) leaf_name_data.push_back(anycast.get_name_leafdata());
    if (eui_64.is_set || is_set(eui_64.yfilter)) leaf_name_data.push_back(eui_64.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Address::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Address::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Address::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast")
    {
        anycast = value;
        anycast.value_namespace = name_space;
        anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eui-64")
    {
        eui_64 = value;
        eui_64.value_namespace = name_space;
        eui_64.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Address::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "anycast")
    {
        anycast.yfilter = yfilter;
    }
    if(value_path == "eui-64")
    {
        eui_64.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Address::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "anycast" || name == "eui-64")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    link_local{YType::empty, "link-local"}
{

    yang_name = "link-local-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| link_local.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(link_local.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (link_local.is_set || is_set(link_local.yfilter)) leaf_name_data.push_back(link_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local")
    {
        link_local = value;
        link_local.value_namespace = name_space;
        link_local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "link-local")
    {
        link_local.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "link-local")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Nd::Nd()
    :
    managed_config_flag{YType::empty, "Cisco-IOS-XE-nd:managed-config-flag"}
        ,
    raguard(std::make_shared<Native::Interface::Tunnel::Ipv6::Nd::Raguard>())
    , autoconfig(std::make_shared<Native::Interface::Tunnel::Ipv6::Nd::Autoconfig>())
    , ra(std::make_shared<Native::Interface::Tunnel::Ipv6::Nd::Ra>())
{
    raguard->parent = this;
    autoconfig->parent = this;
    ra->parent = this;

    yang_name = "nd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Nd::~Nd()
{
}

bool Native::Interface::Tunnel::Ipv6::Nd::has_data() const
{
    if (is_presence_container) return true;
    return managed_config_flag.is_set
	|| (raguard !=  nullptr && raguard->has_data())
	|| (autoconfig !=  nullptr && autoconfig->has_data())
	|| (ra !=  nullptr && ra->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Nd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managed_config_flag.yfilter)
	|| (raguard !=  nullptr && raguard->has_operation())
	|| (autoconfig !=  nullptr && autoconfig->has_operation())
	|| (ra !=  nullptr && ra->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managed_config_flag.is_set || is_set(managed_config_flag.yfilter)) leaf_name_data.push_back(managed_config_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-nd:raguard")
    {
        if(raguard == nullptr)
        {
            raguard = std::make_shared<Native::Interface::Tunnel::Ipv6::Nd::Raguard>();
        }
        return raguard;
    }

    if(child_yang_name == "Cisco-IOS-XE-nd:autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::Tunnel::Ipv6::Nd::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "Cisco-IOS-XE-nd:ra")
    {
        if(ra == nullptr)
        {
            ra = std::make_shared<Native::Interface::Tunnel::Ipv6::Nd::Ra>();
        }
        return ra;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(raguard != nullptr)
    {
        _children["Cisco-IOS-XE-nd:raguard"] = raguard;
    }

    if(autoconfig != nullptr)
    {
        _children["Cisco-IOS-XE-nd:autoconfig"] = autoconfig;
    }

    if(ra != nullptr)
    {
        _children["Cisco-IOS-XE-nd:ra"] = ra;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-nd:managed-config-flag")
    {
        managed_config_flag = value;
        managed_config_flag.value_namespace = name_space;
        managed_config_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managed-config-flag")
    {
        managed_config_flag.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raguard" || name == "autoconfig" || name == "ra" || name == "managed-config-flag")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Nd::Raguard::Raguard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "raguard"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Nd::Raguard::~Raguard()
{
}

bool Native::Interface::Tunnel::Ipv6::Nd::Raguard::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Nd::Raguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Nd::Raguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:raguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Nd::Raguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Nd::Raguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Nd::Raguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Nd::Raguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Nd::Raguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Nd::Raguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Nd::Autoconfig::Autoconfig()
    :
    default_route{YType::empty, "default-route"},
    prefix{YType::empty, "prefix"}
{

    yang_name = "autoconfig"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Nd::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::Tunnel::Ipv6::Nd::Autoconfig::has_data() const
{
    if (is_presence_container) return true;
    return default_route.is_set
	|| prefix.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Nd::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Nd::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Nd::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Nd::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Nd::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Nd::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Nd::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Nd::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-route" || name == "prefix")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Nd::Ra::Ra()
    :
    suppress(nullptr) // presence node
{

    yang_name = "ra"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Nd::Ra::~Ra()
{
}

bool Native::Interface::Tunnel::Ipv6::Nd::Ra::has_data() const
{
    if (is_presence_container) return true;
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Nd::Ra::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Nd::Ra::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:ra";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Nd::Ra::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Nd::Ra::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Nd::Ra::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(suppress != nullptr)
    {
        _children["suppress"] = suppress;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Nd::Ra::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ipv6::Nd::Ra::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ipv6::Nd::Ra::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress::Suppress()
    :
    all{YType::empty, "all"}
{

    yang_name = "suppress"; yang_parent_name = "ra"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress::~Suppress()
{
}

bool Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Nd::Ra::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Tcp::~Tcp()
{
}

bool Native::Interface::Tunnel::Ipv6::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return adjust_mss.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::TrafficFilter::TrafficFilter()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"}
{

    yang_name = "traffic-filter"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::TrafficFilter::~TrafficFilter()
{
}

bool Native::Interface::Tunnel::Ipv6::TrafficFilter::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| access_list.is_set;
}

bool Native::Interface::Tunnel::Ipv6::TrafficFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::TrafficFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-filter";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::TrafficFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::TrafficFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::TrafficFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::TrafficFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::TrafficFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::TrafficFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Flow::Flow()
    :
    ingress{YType::empty, "ingress"},
    egress{YType::empty, "egress"}
        ,
    monitor(this, {"name"})
{

    yang_name = "flow"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Flow::~Flow()
{
}

bool Native::Interface::Tunnel::Ipv6::Flow::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return ingress.is_set
	|| egress.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(egress.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ipv6::Flow::Monitor>();
        ent_->parent = this;
        monitor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : monitor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "ingress" || name == "egress")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    input{YType::empty, "input"},
    output{YType::empty, "output"},
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"}
        ,
    sampler(this, {"direction"})
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::Tunnel::Ipv6::Flow::Monitor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sampler.len(); index++)
    {
        if(sampler[index]->has_data())
            return true;
    }
    return name.is_set
	|| input.is_set
	|| output.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Flow::Monitor::has_operation() const
{
    for (std::size_t index=0; index<sampler.len(); index++)
    {
        if(sampler[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sampler")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler>();
        ent_->parent = this;
        sampler.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sampler.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
}

void Native::Interface::Tunnel::Ipv6::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampler" || name == "name" || name == "input" || name == "output" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::Sampler()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "sampler"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::~Sampler()
{
}

bool Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::NoPim::NoPim()
    :
    pim{YType::boolean, "pim"}
{

    yang_name = "no-pim"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::NoPim::~NoPim()
{
}

bool Native::Interface::Tunnel::Ipv6::NoPim::has_data() const
{
    if (is_presence_container) return true;
    return pim.is_set;
}

bool Native::Interface::Tunnel::Ipv6::NoPim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::NoPim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:no-pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::NoPim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim.is_set || is_set(pim.yfilter)) leaf_name_data.push_back(pim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::NoPim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::NoPim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::NoPim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim")
    {
        pim = value;
        pim.value_namespace = name_space;
        pim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::NoPim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim")
    {
        pim.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::NoPim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pim")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Pim::Pim()
    :
    bfd{YType::empty, "bfd"},
    dr_priority{YType::uint32, "dr-priority"}
        ,
    bsr(std::make_shared<Native::Interface::Tunnel::Ipv6::Pim::Bsr>())
{
    bsr->parent = this;

    yang_name = "pim"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Pim::~Pim()
{
}

bool Native::Interface::Tunnel::Ipv6::Pim::has_data() const
{
    if (is_presence_container) return true;
    return bfd.is_set
	|| dr_priority.is_set
	|| (bsr !=  nullptr && bsr->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| (bsr !=  nullptr && bsr->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Native::Interface::Tunnel::Ipv6::Pim::Bsr>();
        }
        return bsr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bsr != nullptr)
    {
        _children["bsr"] = bsr;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr" || name == "bfd" || name == "dr-priority")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Pim::Bsr::Bsr()
    :
    border{YType::empty, "border"}
{

    yang_name = "bsr"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Pim::Bsr::~Bsr()
{
}

bool Native::Interface::Tunnel::Ipv6::Pim::Bsr::has_data() const
{
    if (is_presence_container) return true;
    return border.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Pim::Bsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(border.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Pim::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Pim::Bsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border.is_set || is_set(border.yfilter)) leaf_name_data.push_back(border.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Pim::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Pim::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Pim::Bsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "border")
    {
        border = value;
        border.value_namespace = name_space;
        border.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Pim::Bsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "border")
    {
        border.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Pim::Bsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Ospf::Ospf()
    :
    cost{YType::uint16, "cost"},
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
        ,
    process(this, {"id"})
    , authentication(std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Authentication>())
    , bfd(nullptr) // presence node
    , database_filter(std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::DatabaseFilter>())
    , demand_circuit(nullptr) // presence node
    , encryption(std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Encryption>())
    , flood_reduction(nullptr) // presence node
    , mtu_ignore(nullptr) // presence node
    , neighbor(this, {"id"})
    , network(std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Network>())
    , shutdown(nullptr) // presence node
{
    authentication->parent = this;
    database_filter->parent = this;
    encryption->parent = this;
    network->parent = this;

    yang_name = "ospf"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Ospf::~Ospf()
{
}

bool Native::Interface::Tunnel::Ipv6::Ospf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return cost.is_set
	|| dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Ospf::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf:ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Process>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Network>();
        }
        return network;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        _children["demand-circuit"] = demand_circuit;
    }

    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    if(flood_reduction != nullptr)
    {
        _children["flood-reduction"] = flood_reduction;
    }

    if(mtu_ignore != nullptr)
    {
        _children["mtu-ignore"] = mtu_ignore;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "authentication" || name == "bfd" || name == "database-filter" || name == "demand-circuit" || name == "encryption" || name == "flood-reduction" || name == "mtu-ignore" || name == "neighbor" || name == "network" || name == "shutdown" || name == "cost" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Ospf::Process::Process()
    :
    id{YType::uint16, "id"},
    area{YType::str, "area"},
    instance{YType::str, "instance"}
{

    yang_name = "process"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Ospf::Process::~Process()
{
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Process::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| area.is_set
	|| instance.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::Interface::Tunnel::Ipv6::Ospf::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Ospf::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Ospf::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Ospf::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ipv6::Ospf::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Ospf::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "area" || name == "instance")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Authentication()
    :
    null{YType::empty, "null"}
        ,
    ipsec(std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Ospf::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Ospf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Ospf::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Ospf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Ospf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Ospf::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Ospf::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "null")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"}
        ,
    md5(std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5>())
    , sha1(std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Sha1>())
{
    md5->parent = this;
    sha1->parent = this;

    yang_name = "ipsec"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::~Ipsec()
{
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return spi.is_set
	|| (md5 !=  nullptr && md5->has_data())
	|| (sha1 !=  nullptr && sha1->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (sha1 !=  nullptr && sha1->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "sha1")
    {
        if(sha1 == nullptr)
        {
            sha1 = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Sha1>();
        }
        return sha1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    if(sha1 != nullptr)
    {
        _children["sha1"] = sha1;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "spi")
        return true;
    return false;
}

Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::Md5()
    :
    key_string(std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::~Md5()
{
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ipv6::Ospf::Authentication::Ipsec::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Rsvp::Authentication::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Rsvp::Authentication::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Interface::Tunnel::Ipv6::TrafficFilter::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::Tunnel::Ipv6::TrafficFilter::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::Tunnel::Ipv6::Flow::Monitor::Sampler::Direction::output {1, "output"};


}
}

