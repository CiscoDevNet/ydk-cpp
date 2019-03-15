
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_125.hpp"
#include "Cisco_IOS_XE_native_126.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::~Peer()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{

    yang_name = "protocol"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{

    yang_name = "local"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::~Local_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::~Peer()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{

    yang_name = "protocol"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Registration()
    :
    interface{YType::str, "interface"}
        ,
    periodic(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(periodic != nullptr)
    {
        _children["periodic"] = periodic;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(crl != nullptr)
    {
        _children["crl"] = crl;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crl")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::str, "trustpoint"}
{

    yang_name = "crl"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::has_data() const
{
    if (is_presence_container) return true;
    return trustpoint.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Rekey()
    :
    acknowledgement{YType::enumeration, "acknowledgement"}
        ,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address>())
    , algorithm(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm>())
    , authentication(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication>())
    , lifetime(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime>())
    , retransmit(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit>())
    , sig_hash(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash>())
    , transport(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport>())
{
    address->parent = this;
    algorithm->parent = this;
    authentication->parent = this;
    lifetime->parent = this;
    retransmit->parent = this;
    sig_hash->parent = this;
    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::has_data() const
{
    if (is_presence_container) return true;
    return acknowledgement.is_set
	|| (address !=  nullptr && address->has_data())
	|| (algorithm !=  nullptr && algorithm->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (sig_hash !=  nullptr && sig_hash->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (sig_hash !=  nullptr && sig_hash->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(algorithm != nullptr)
    {
        _children["algorithm"] = algorithm;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(retransmit != nullptr)
    {
        _children["retransmit"] = retransmit;
    }

    if(sig_hash != nullptr)
    {
        _children["sig-hash"] = sig_hash;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "algorithm" || name == "authentication" || name == "lifetime" || name == "retransmit" || name == "sig-hash" || name == "transport" || name == "acknowledgement")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::Algorithm()
    :
    a3des_cbc{YType::empty, "a3des-cbc"},
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"}
{

    yang_name = "algorithm"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::has_data() const
{
    if (is_presence_container) return true;
    return a3des_cbc.is_set
	|| aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des_cbc.yfilter)
	|| ydk::is_set(aes_128.yfilter)
	|| ydk::is_set(aes_192.yfilter)
	|| ydk::is_set(aes_256.yfilter)
	|| ydk::is_set(des_cbc.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des_cbc.is_set || is_set(a3des_cbc.yfilter)) leaf_name_data.push_back(a3des_cbc.get_name_leafdata());
    if (aes_128.is_set || is_set(aes_128.yfilter)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.yfilter)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.yfilter)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.yfilter)) leaf_name_data.push_back(des_cbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc = value;
        a3des_cbc.value_namespace = name_space;
        a3des_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-128")
    {
        aes_128 = value;
        aes_128.value_namespace = name_space;
        aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
        aes_192.value_namespace = name_space;
        aes_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
        aes_256.value_namespace = name_space;
        aes_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
        des_cbc.value_namespace = name_space;
        des_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc.yfilter = yfilter;
    }
    if(value_path == "aes-128")
    {
        aes_128.yfilter = yfilter;
    }
    if(value_path == "aes-192")
    {
        aes_192.yfilter = yfilter;
    }
    if(value_path == "aes-256")
    {
        aes_256.yfilter = yfilter;
    }
    if(value_path == "des-cbc")
    {
        des_cbc.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a3des-cbc" || name == "aes-128" || name == "aes-192" || name == "aes-256" || name == "des-cbc")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Authentication()
    :
    mypubkey(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey>())
{
    mypubkey->parent = this;

    yang_name = "authentication"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (mypubkey !=  nullptr && mypubkey->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mypubkey !=  nullptr && mypubkey->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mypubkey")
    {
        if(mypubkey == nullptr)
        {
            mypubkey = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey>();
        }
        return mypubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mypubkey != nullptr)
    {
        _children["mypubkey"] = mypubkey;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mypubkey")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::Mypubkey()
    :
    rsa{YType::str, "rsa"}
{

    yang_name = "mypubkey"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::~Mypubkey()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::has_data() const
{
    if (is_presence_container) return true;
    return rsa.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsa.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mypubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsa.is_set || is_set(rsa.yfilter)) leaf_name_data.push_back(rsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsa")
    {
        rsa = value;
        rsa.value_namespace = name_space;
        rsa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsa")
    {
        rsa.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::Retransmit()
    :
    seconds{YType::uint8, "seconds"},
    number{YType::uint8, "number"},
    periodic{YType::empty, "periodic"}
{

    yang_name = "retransmit"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| number.is_set
	|| periodic.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(periodic.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "number" || name == "periodic")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::SigHash()
    :
    algorithm{YType::enumeration, "algorithm"}
{

    yang_name = "sig-hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::has_data() const
{
    if (is_presence_container) return true;
    return algorithm.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "transport"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
        ,
    d3p(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p>())
    , ipsec(this, {"sequence"})
    , pair_wise_keying(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying>())
{
    d3p->parent = this;
    pair_wise_keying->parent = this;

    yang_name = "sa"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::~Sa()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipsec.len(); index++)
    {
        if(ipsec[index]->has_data())
            return true;
    }
    return receive_only.is_set
	|| (d3p !=  nullptr && d3p->has_data())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::has_operation() const
{
    for (std::size_t index=0; index<ipsec.len(); index++)
    {
        if(ipsec[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| (d3p !=  nullptr && d3p->has_operation())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p>();
        }
        return d3p;
    }

    if(child_yang_name == "ipsec")
    {
        auto ent_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec>();
        ent_->parent = this;
        ipsec.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(d3p != nullptr)
    {
        _children["d3p"] = d3p;
    }

    count_ = 0;
    for (auto ent_ : ipsec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(pair_wise_keying != nullptr)
    {
        _children["pair-wise-keying"] = pair_wise_keying;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "d3p" || name == "ipsec" || name == "pair-wise-keying" || name == "receive-only")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::D3p()
    :
    window(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window>())
{
    window->parent = this;

    yang_name = "d3p"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::~D3p()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::has_data() const
{
    if (is_presence_container) return true;
    return (window !=  nullptr && window->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::has_operation() const
{
    return is_set(yfilter)
	|| (window !=  nullptr && window->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(window != nullptr)
    {
        _children["window"] = window;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window::Window()
    :
    msec{YType::uint32, "msec"},
    sec{YType::uint8, "sec"}
{

    yang_name = "window"; yang_parent_name = "d3p"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window::~Window()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window::has_data() const
{
    if (is_presence_container) return true;
    return msec.is_set
	|| sec.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(sec.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (sec.is_set || is_set(sec.yfilter)) leaf_name_data.push_back(sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec")
    {
        sec = value;
        sec.value_namespace = name_space;
        sec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "sec")
    {
        sec.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "sec")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"},
    profile{YType::str, "profile"}
        ,
    default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default>())
    , match(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match>())
    , replay(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay>())
    , tag(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag>())
{
    default_->parent = this;
    match->parent = this;
    replay->parent = this;
    tag->parent = this;

    yang_name = "ipsec"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| profile.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(replay != nullptr)
    {
        _children["replay"] = replay;
    }

    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "match" || name == "replay" || name == "tag" || name == "sequence" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Default()
    :
    profile{YType::empty, "profile"}
        ,
    match(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match>())
    , replay(nullptr) // presence node
    , tag(nullptr) // presence node
{
    match->parent = this;

    yang_name = "default"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::~Default()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(replay != nullptr)
    {
        _children["replay"] = replay;
    }

    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "replay" || name == "tag" || name == "profile")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Match()
    :
    address(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::~Match()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address::Address()
{

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay::Replay()
{

    yang_name = "replay"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay::~Replay()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag::Tag()
{

    yang_name = "tag"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag::~Tag()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Match()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address>())
{
    address->parent = this;

    yang_name = "match"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::~Match()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Replay()
    :
    counter(nullptr) // presence node
    , time(nullptr) // presence node
{

    yang_name = "replay"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::~Replay()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::has_data() const
{
    if (is_presence_container) return true;
    return (counter !=  nullptr && counter->has_data())
	|| (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(time != nullptr)
    {
        _children["time"] = time;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "time")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::Counter()
    :
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "counter"; yang_parent_name = "replay"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::~Counter()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_data() const
{
    if (is_presence_container) return true;
    return window_size.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::Time()
    :
    window_size{YType::uint8, "window-size"}
{

    yang_name = "time"; yang_parent_name = "replay"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::~Time()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::has_data() const
{
    if (is_presence_container) return true;
    return window_size.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Tag()
    :
    cts(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts>())
{
    cts->parent = this;

    yang_name = "tag"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::~Tag()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::has_data() const
{
    if (is_presence_container) return true;
    return (cts !=  nullptr && cts->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (cts !=  nullptr && cts->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts>();
        }
        return cts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cts != nullptr)
    {
        _children["cts"] = cts;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::Cts()
    :
    sgt{YType::empty, "sgt"}
{

    yang_name = "cts"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::~Cts()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_data() const
{
    if (is_presence_container) return true;
    return sgt.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::PairWiseKeying()
    :
    safety_limit{YType::uint8, "safety-limit"}
{

    yang_name = "pair-wise-keying"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::has_data() const
{
    if (is_presence_container) return true;
    return safety_limit.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(safety_limit.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (safety_limit.is_set || is_set(safety_limit.yfilter)) leaf_name_data.push_back(safety_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "safety-limit")
    {
        safety_limit = value;
        safety_limit.value_namespace = name_space;
        safety_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "safety-limit")
    {
        safety_limit.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "safety-limit")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Default()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::empty, "gikev2"}
        ,
    address(nullptr) // presence node
    , authorization(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization>())
    , group(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Group_>())
    , identifier(nullptr) // presence node
    , redundancy(nullptr) // presence node
    , registration(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Registration>())
    , rekey(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey>())
    , sa(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Sa>())
{
    authorization->parent = this;
    group->parent = this;
    registration->parent = this;
    rekey->parent = this;
    sa->parent = this;

    yang_name = "default"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::~Default()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::has_data() const
{
    if (is_presence_container) return true;
    return gdoi.is_set
	|| gikev2.is_set
	|| (address !=  nullptr && address->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (identifier !=  nullptr && identifier->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (sa !=  nullptr && sa->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (sa !=  nullptr && sa->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Sa>();
        }
        return sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    if(group != nullptr)
    {
        _children["group"] = group;
    }

    if(identifier != nullptr)
    {
        _children["identifier"] = identifier;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        _children["rekey"] = rekey;
    }

    if(sa != nullptr)
    {
        _children["sa"] = sa;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "authorization" || name == "group" || name == "identifier" || name == "redundancy" || name == "registration" || name == "rekey" || name == "sa" || name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Address::Address()
{

    yang_name = "address"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Address::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Authorization()
    :
    identity{YType::empty, "identity"}
        ,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::~Authorization()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address::Address()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Group_()
    :
    size(nullptr) // presence node
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::~Group_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::has_data() const
{
    if (is_presence_container) return true;
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::has_operation() const
{
    return is_set(yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(size != nullptr)
    {
        _children["size"] = size;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size::Size()
{

    yang_name = "size"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size::~Size()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier::Identifier()
{

    yang_name = "identifier"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier::~Identifier()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy::Redundancy()
{

    yang_name = "redundancy"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Registration()
    :
    interface{YType::str, "interface"}
        ,
    periodic(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(periodic != nullptr)
    {
        _children["periodic"] = periodic;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(crl != nullptr)
    {
        _children["crl"] = crl;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crl")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::empty, "trustpoint"}
{

    yang_name = "crl"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl::has_data() const
{
    if (is_presence_container) return true;
    return trustpoint.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Rekey()
    :
    acknowledgement{YType::empty, "acknowledgement"}
        ,
    address(nullptr) // presence node
    , algorithm(nullptr) // presence node
    , authentication(nullptr) // presence node
    , lifetime(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime>())
    , retransmit(nullptr) // presence node
    , sig_hash(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash>())
    , transport(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport>())
{
    lifetime->parent = this;
    sig_hash->parent = this;
    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::has_data() const
{
    if (is_presence_container) return true;
    return acknowledgement.is_set
	|| (address !=  nullptr && address->has_data())
	|| (algorithm !=  nullptr && algorithm->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (sig_hash !=  nullptr && sig_hash->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (sig_hash !=  nullptr && sig_hash->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(algorithm != nullptr)
    {
        _children["algorithm"] = algorithm;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(retransmit != nullptr)
    {
        _children["retransmit"] = retransmit;
    }

    if(sig_hash != nullptr)
    {
        _children["sig-hash"] = sig_hash;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "algorithm" || name == "authentication" || name == "lifetime" || name == "retransmit" || name == "sig-hash" || name == "transport" || name == "acknowledgement")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address::Address()
{

    yang_name = "address"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm::Algorithm()
{

    yang_name = "algorithm"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication::Authentication()
{

    yang_name = "authentication"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit::Retransmit()
{

    yang_name = "retransmit"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash::SigHash()
    :
    algorithm{YType::empty, "algorithm"}
{

    yang_name = "sig-hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash::has_data() const
{
    if (is_presence_container) return true;
    return algorithm.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "transport"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
        ,
    d3p(nullptr) // presence node
    , ipsec(this, {"sequence"})
    , pair_wise_keying(nullptr) // presence node
{

    yang_name = "sa"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::~Sa()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipsec.len(); index++)
    {
        if(ipsec[index]->has_data())
            return true;
    }
    return receive_only.is_set
	|| (d3p !=  nullptr && d3p->has_data())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::has_operation() const
{
    for (std::size_t index=0; index<ipsec.len(); index++)
    {
        if(ipsec[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| (d3p !=  nullptr && d3p->has_operation())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p>();
        }
        return d3p;
    }

    if(child_yang_name == "ipsec")
    {
        auto ent_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec>();
        ent_->parent = this;
        ipsec.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(d3p != nullptr)
    {
        _children["d3p"] = d3p;
    }

    count_ = 0;
    for (auto ent_ : ipsec.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(pair_wise_keying != nullptr)
    {
        _children["pair-wise-keying"] = pair_wise_keying;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "d3p" || name == "ipsec" || name == "pair-wise-keying" || name == "receive-only")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p::D3p()
{

    yang_name = "d3p"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p::~D3p()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"}
{

    yang_name = "ipsec"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying::PairWiseKeying()
{

    yang_name = "pair-wise-keying"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default::Default()
    :
    passive{YType::empty, "passive"}
        ,
    client(std::make_shared<Native::Crypto::Gdoi::Group::Default::Client>())
    , identity(nullptr) // presence node
    , server(std::make_shared<Native::Crypto::Gdoi::Group::Default::Server>())
{
    client->parent = this;
    server->parent = this;

    yang_name = "default"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Default::~Default()
{
}

bool Native::Crypto::Gdoi::Group::Default::has_data() const
{
    if (is_presence_container) return true;
    return passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Crypto::Gdoi::Group::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gdoi::Group::Default::Client>();
        }
        return client;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gdoi::Group::Default::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gdoi::Group::Default::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "identity" || name == "server" || name == "passive")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::empty, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
        ,
    protocol(nullptr) // presence node
    , recovery_check(nullptr) // presence node
    , registration(std::make_shared<Native::Crypto::Gdoi::Group::Default::Client::Registration>())
    , rekey(std::make_shared<Native::Crypto::Gdoi::Group::Default::Client::Rekey>())
    , status(std::make_shared<Native::Crypto::Gdoi::Group::Default::Client::Status>())
{
    registration->parent = this;
    rekey->parent = this;
    status->parent = this;

    yang_name = "client"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Default::Client::~Client()
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::has_data() const
{
    if (is_presence_container) return true;
    return bypass_policy.is_set
	|| transform_sets.is_set
	|| transport_encrypt_key.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (recovery_check !=  nullptr && recovery_check->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Native::Crypto::Gdoi::Group::Default::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypass_policy.yfilter)
	|| ydk::is_set(transform_sets.yfilter)
	|| ydk::is_set(transport_encrypt_key.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (recovery_check !=  nullptr && recovery_check->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.yfilter)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transform_sets.is_set || is_set(transform_sets.yfilter)) leaf_name_data.push_back(transform_sets.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.yfilter)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Default::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Default::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Default::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gdoi::Group::Default::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    if(recovery_check != nullptr)
    {
        _children["recovery-check"] = recovery_check;
    }

    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        _children["rekey"] = rekey;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy = value;
        bypass_policy.value_namespace = name_space;
        bypass_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-sets")
    {
        transform_sets = value;
        transform_sets.value_namespace = name_space;
        transform_sets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key = value;
        transport_encrypt_key.value_namespace = name_space;
        transport_encrypt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Default::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy.yfilter = yfilter;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.yfilter = yfilter;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Default::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "recovery-check" || name == "registration" || name == "rekey" || name == "status" || name == "bypass-policy" || name == "transform-sets" || name == "transport-encrypt-key")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default::Client::Protocol::Protocol()
{

    yang_name = "protocol"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Default::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Default::Client::Protocol::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Client::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Client::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default::Client::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck::RecoveryCheck()
{

    yang_name = "recovery-check"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default::Client::Registration::Registration()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "registration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Default::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Registration::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool Native::Crypto::Gdoi::Group::Default::Client::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Client::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Client::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Default::Client::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Default::Client::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default::Client::Rekey::Rekey()
    :
    encryption(nullptr) // presence node
    , hash(nullptr) // presence node
{

    yang_name = "rekey"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Default::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Rekey::has_data() const
{
    if (is_presence_container) return true;
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gdoi::Group::Default::Client::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Client::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Client::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    if(hash != nullptr)
    {
        _children["hash"] = hash;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Client::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default::Client::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "hash")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption::Encryption()
{

    yang_name = "encryption"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash::Hash()
{

    yang_name = "hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default::Client::Status::Status()
    :
    active_sa(nullptr) // presence node
{

    yang_name = "status"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Default::Client::Status::~Status()
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Status::has_data() const
{
    if (is_presence_container) return true;
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gdoi::Group::Default::Client::Status::has_operation() const
{
    return is_set(yfilter)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Client::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(active_sa != nullptr)
    {
        _children["active-sa"] = active_sa;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Client::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default::Client::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sa")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa::ActiveSa()
{

    yang_name = "active-sa"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default::Identity::Identity()
{

    yang_name = "identity"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Crypto::Gdoi::Group::Default::Identity::~Identity()
{
}

bool Native::Crypto::Gdoi::Group::Default::Identity::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Crypto::Gdoi::Group::Default::Identity::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Default::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Default::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::Gdoi::Group::Default::Server::Server()
    :
    local{YType::empty, "local"}
        ,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Default::Server::Address>())
    , hostname(std::make_shared<Native::Crypto::Gdoi::Group::Default::Server::Hostname>())
{
    address->parent = this;
    hostname->parent = this;

    yang_name = "server"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Default::Server::~Server()
{
}

bool Native::Crypto::Gdoi::Group::Default::Server::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Gdoi::Group::Default::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Default::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gdoi::Group::Default::Server::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(hostname != nullptr)
    {
        _children["hostname"] = hostname;
    }

    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Default::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Default::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname" || name == "local")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Default::Server::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Default::Server::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Default::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Default::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Default::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Default::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "hostname"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Gdoi::Group::Default::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gdoi::Group::Default::Server::Hostname::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Default::Server::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Default::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Default::Server::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Gdoi::Group::Default::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Gdoi::Group::Default::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Gdoi::Group::Default::Server::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Default::Server::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Default::Server::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Ikev2::Ikev2()
    :
    certificate_cache{YType::uint16, "certificate-cache"},
    cookie_challenge{YType::uint16, "cookie-challenge"},
    disconnect_revoked_peers{YType::empty, "disconnect-revoked-peers"},
    window{YType::uint8, "window"}
        ,
    authorization(std::make_shared<Native::Crypto::Ikev2::Authorization>())
    , client(std::make_shared<Native::Crypto::Ikev2::Client>())
    , cluster(std::make_shared<Native::Crypto::Ikev2::Cluster>())
    , cts(std::make_shared<Native::Crypto::Ikev2::Cts>())
    , diagnose(std::make_shared<Native::Crypto::Ikev2::Diagnose>())
    , dpd_container(std::make_shared<Native::Crypto::Ikev2::DpdContainer>())
    , fragmentation(nullptr) // presence node
    , http_url(std::make_shared<Native::Crypto::Ikev2::HttpUrl>())
    , keyring(this, {"name"})
    , limit(std::make_shared<Native::Crypto::Ikev2::Limit>())
    , name_mangler(this, {"name"})
    , nat(std::make_shared<Native::Crypto::Ikev2::Nat>())
    , policy(this, {"name"})
    , profile(this, {"name"})
    , proposal(this, {"name"})
    , reconnect(std::make_shared<Native::Crypto::Ikev2::Reconnect>())
    , redirect(std::make_shared<Native::Crypto::Ikev2::Redirect>())
{
    authorization->parent = this;
    client->parent = this;
    cluster->parent = this;
    cts->parent = this;
    diagnose->parent = this;
    dpd_container->parent = this;
    http_url->parent = this;
    limit->parent = this;
    nat->parent = this;
    reconnect->parent = this;
    redirect->parent = this;

    yang_name = "ikev2"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::~Ikev2()
{
}

bool Native::Crypto::Ikev2::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<keyring.len(); index++)
    {
        if(keyring[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name_mangler.len(); index++)
    {
        if(name_mangler[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<proposal.len(); index++)
    {
        if(proposal[index]->has_data())
            return true;
    }
    return certificate_cache.is_set
	|| cookie_challenge.is_set
	|| disconnect_revoked_peers.is_set
	|| window.is_set
	|| (authorization !=  nullptr && authorization->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (cluster !=  nullptr && cluster->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (diagnose !=  nullptr && diagnose->has_data())
	|| (dpd_container !=  nullptr && dpd_container->has_data())
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (http_url !=  nullptr && http_url->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (reconnect !=  nullptr && reconnect->has_data())
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Crypto::Ikev2::has_operation() const
{
    for (std::size_t index=0; index<keyring.len(); index++)
    {
        if(keyring[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name_mangler.len(); index++)
    {
        if(name_mangler[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<proposal.len(); index++)
    {
        if(proposal[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(certificate_cache.yfilter)
	|| ydk::is_set(cookie_challenge.yfilter)
	|| ydk::is_set(disconnect_revoked_peers.yfilter)
	|| ydk::is_set(window.yfilter)
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (cluster !=  nullptr && cluster->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (diagnose !=  nullptr && diagnose->has_operation())
	|| (dpd_container !=  nullptr && dpd_container->has_operation())
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (http_url !=  nullptr && http_url->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (reconnect !=  nullptr && reconnect->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Crypto::Ikev2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:ikev2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate_cache.is_set || is_set(certificate_cache.yfilter)) leaf_name_data.push_back(certificate_cache.get_name_leafdata());
    if (cookie_challenge.is_set || is_set(cookie_challenge.yfilter)) leaf_name_data.push_back(cookie_challenge.get_name_leafdata());
    if (disconnect_revoked_peers.is_set || is_set(disconnect_revoked_peers.yfilter)) leaf_name_data.push_back(disconnect_revoked_peers.get_name_leafdata());
    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Ikev2::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Ikev2::Client>();
        }
        return client;
    }

    if(child_yang_name == "cluster")
    {
        if(cluster == nullptr)
        {
            cluster = std::make_shared<Native::Crypto::Ikev2::Cluster>();
        }
        return cluster;
    }

    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Crypto::Ikev2::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "diagnose")
    {
        if(diagnose == nullptr)
        {
            diagnose = std::make_shared<Native::Crypto::Ikev2::Diagnose>();
        }
        return diagnose;
    }

    if(child_yang_name == "dpd-container")
    {
        if(dpd_container == nullptr)
        {
            dpd_container = std::make_shared<Native::Crypto::Ikev2::DpdContainer>();
        }
        return dpd_container;
    }

    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Crypto::Ikev2::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "http-url")
    {
        if(http_url == nullptr)
        {
            http_url = std::make_shared<Native::Crypto::Ikev2::HttpUrl>();
        }
        return http_url;
    }

    if(child_yang_name == "keyring")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Keyring>();
        ent_->parent = this;
        keyring.append(ent_);
        return ent_;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Crypto::Ikev2::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "name-mangler")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::NameMangler>();
        ent_->parent = this;
        name_mangler.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::Ikev2::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    if(child_yang_name == "proposal")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Proposal>();
        ent_->parent = this;
        proposal.append(ent_);
        return ent_;
    }

    if(child_yang_name == "reconnect")
    {
        if(reconnect == nullptr)
        {
            reconnect = std::make_shared<Native::Crypto::Ikev2::Reconnect>();
        }
        return reconnect;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Crypto::Ikev2::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(cluster != nullptr)
    {
        _children["cluster"] = cluster;
    }

    if(cts != nullptr)
    {
        _children["cts"] = cts;
    }

    if(diagnose != nullptr)
    {
        _children["diagnose"] = diagnose;
    }

    if(dpd_container != nullptr)
    {
        _children["dpd-container"] = dpd_container;
    }

    if(fragmentation != nullptr)
    {
        _children["fragmentation"] = fragmentation;
    }

    if(http_url != nullptr)
    {
        _children["http-url"] = http_url;
    }

    count_ = 0;
    for (auto ent_ : keyring.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    count_ = 0;
    for (auto ent_ : name_mangler.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(nat != nullptr)
    {
        _children["nat"] = nat;
    }

    count_ = 0;
    for (auto ent_ : policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : proposal.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(reconnect != nullptr)
    {
        _children["reconnect"] = reconnect;
    }

    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    return _children;
}

void Native::Crypto::Ikev2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certificate-cache")
    {
        certificate_cache = value;
        certificate_cache.value_namespace = name_space;
        certificate_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-challenge")
    {
        cookie_challenge = value;
        cookie_challenge.value_namespace = name_space;
        cookie_challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers = value;
        disconnect_revoked_peers.value_namespace = name_space;
        disconnect_revoked_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certificate-cache")
    {
        certificate_cache.yfilter = yfilter;
    }
    if(value_path == "cookie-challenge")
    {
        cookie_challenge.yfilter = yfilter;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers.yfilter = yfilter;
    }
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "client" || name == "cluster" || name == "cts" || name == "diagnose" || name == "dpd-container" || name == "fragmentation" || name == "http-url" || name == "keyring" || name == "limit" || name == "name-mangler" || name == "nat" || name == "policy" || name == "profile" || name == "proposal" || name == "reconnect" || name == "redirect" || name == "certificate-cache" || name == "cookie-challenge" || name == "disconnect-revoked-peers" || name == "window")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Authorization()
    :
    policy(this, {"policy_name"})
{

    yang_name = "authorization"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Authorization::~Authorization()
{
}

bool Native::Crypto::Ikev2::Authorization::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Authorization::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::get_children() const
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

void Native::Crypto::Ikev2::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Policy()
    :
    policy_name{YType::str, "policy-name"},
    backup_gateway{YType::str, "backup-gateway"}
        ,
    route(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route>())
    , ipv6(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Ipv6>())
    , pool(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Pool>())
    , aaa(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Aaa>())
    , split_dns(this, {"name"})
    , dns(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Dns>())
    , dhcp(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Dhcp>())
{
    route->parent = this;
    ipv6->parent = this;
    pool->parent = this;
    aaa->parent = this;
    dns->parent = this;
    dhcp->parent = this;

    yang_name = "policy"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Authorization::Policy::~Policy()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<split_dns.len(); index++)
    {
        if(split_dns[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| backup_gateway.is_set
	|| (route !=  nullptr && route->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (pool !=  nullptr && pool->has_data())
	|| (aaa !=  nullptr && aaa->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::has_operation() const
{
    for (std::size_t index=0; index<split_dns.len(); index++)
    {
        if(split_dns[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(backup_gateway.yfilter)
	|| (route !=  nullptr && route->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (pool !=  nullptr && pool->has_operation())
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Authorization::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(policy_name, "policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (backup_gateway.is_set || is_set(backup_gateway.yfilter)) leaf_name_data.push_back(backup_gateway.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route>();
        }
        return route;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Pool>();
        }
        return pool;
    }

    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "split-dns")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::SplitDns>();
        ent_->parent = this;
        split_dns.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route != nullptr)
    {
        _children["route"] = route;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(pool != nullptr)
    {
        _children["pool"] = pool;
    }

    if(aaa != nullptr)
    {
        _children["aaa"] = aaa;
    }

    count_ = 0;
    for (auto ent_ : split_dns.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(dns != nullptr)
    {
        _children["dns"] = dns;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-gateway")
    {
        backup_gateway = value;
        backup_gateway.value_namespace = name_space;
        backup_gateway.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "backup-gateway")
    {
        backup_gateway.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "ipv6" || name == "pool" || name == "aaa" || name == "split-dns" || name == "dns" || name == "dhcp" || name == "policy-name" || name == "backup-gateway")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Route()
    :
    set(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set>())
    , accept(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Accept>())
{
    set->parent = this;
    accept->parent = this;

    yang_name = "route"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::~Route()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::has_data() const
{
    if (is_presence_container) return true;
    return (set !=  nullptr && set->has_data())
	|| (accept !=  nullptr && accept->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::has_operation() const
{
    return is_set(yfilter)
	|| (set !=  nullptr && set->has_operation())
	|| (accept !=  nullptr && accept->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set>();
        }
        return set;
    }

    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Accept>();
        }
        return accept;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(set != nullptr)
    {
        _children["set"] = set;
    }

    if(accept != nullptr)
    {
        _children["accept"] = accept;
    }

    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "accept")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Set()
    :
    interface(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface>())
    , access_list(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList>())
    , remote(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote>())
    , local(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local>())
{
    interface->parent = this;
    access_list->parent = this;
    remote->parent = this;
    local->parent = this;

    yang_name = "set"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::~Set()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::has_data() const
{
    if (is_presence_container) return true;
    return (interface !=  nullptr && interface->has_data())
	|| (access_list !=  nullptr && access_list->has_data())
	|| (remote !=  nullptr && remote->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (remote !=  nullptr && remote->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote>();
        }
        return remote;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(access_list != nullptr)
    {
        _children["access-list"] = access_list;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "access-list" || name == "remote" || name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::Interface()
    :
    interface_default{YType::empty, "interface-default"}
        ,
    interface_list(this, {"interface_name"})
{

    yang_name = "interface"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::~Interface()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_list.len(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    return interface_default.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_list.len(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_default.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_default.is_set || is_set(interface_default.yfilter)) leaf_name_data.push_back(interface_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList>();
        ent_->parent = this;
        interface_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-default")
    {
        interface_default = value;
        interface_default.value_namespace = name_space;
        interface_default.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-default")
    {
        interface_default.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "interface-default")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::InterfaceList()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-list"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::~InterfaceList()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::AccessList()
    :
    access_list_range{YType::str, "access-list-range"}
        ,
    ipv6(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6>())
{
    ipv6->parent = this;

    yang_name = "access-list"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::~AccessList()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::has_data() const
{
    if (is_presence_container) return true;
    return access_list_range.is_set
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_range.yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_range.is_set || is_set(access_list_range.yfilter)) leaf_name_data.push_back(access_list_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-range")
    {
        access_list_range = value;
        access_list_range.value_namespace = name_space;
        access_list_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-range")
    {
        access_list_range.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "access-list-range")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6::Ipv6()
    :
    name{YType::str, "name"}
{

    yang_name = "ipv6"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Remote()
    :
    ipv4(this, {"prefix"})
    , ipv6(this, {"prefix"})
{

    yang_name = "remote"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::~Remote()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::get_children() const
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
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4::Ipv4()
    :
    prefix{YType::str, "prefix"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "ipv4"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| ipv4_mask.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "ipv4-mask")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6::Ipv6()
    :
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Local()
    :
    ipv4(this, {"prefix"})
    , ipv6(this, {"prefix"})
{

    yang_name = "local"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::~Local()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::get_children() const
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
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4::Ipv4()
    :
    prefix{YType::str, "prefix"},
    ipv4_mask{YType::str, "ipv4-mask"},
    next_hop{YType::str, "next-hop"},
    vrf{YType::str, "vrf"},
    tag{YType::uint32, "tag"},
    distance{YType::uint16, "distance"}
{

    yang_name = "ipv4"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| ipv4_mask.is_set
	|| next_hop.is_set
	|| vrf.is_set
	|| tag.is_set
	|| distance.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "ipv4-mask" || name == "next-hop" || name == "vrf" || name == "tag" || name == "distance")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6::Ipv6()
    :
    prefix{YType::str, "prefix"},
    next_hop{YType::str, "next-hop"},
    vrf{YType::str, "vrf"},
    tag{YType::uint32, "tag"},
    distance{YType::uint16, "distance"}
{

    yang_name = "ipv6"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| next_hop.is_set
	|| vrf.is_set
	|| tag.is_set
	|| distance.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(distance.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "next-hop" || name == "vrf" || name == "tag" || name == "distance")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Accept()
    :
    any(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any>())
{
    any->parent = this;

    yang_name = "accept"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::~Accept()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::has_data() const
{
    if (is_presence_container) return true;
    return (any !=  nullptr && any->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::has_operation() const
{
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any>();
        }
        return any;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(any != nullptr)
    {
        _children["any"] = any;
    }

    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any::Any()
    :
    distance{YType::uint16, "distance"},
    tag{YType::uint64, "tag"}
{

    yang_name = "any"; yang_parent_name = "accept"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any::~Any()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any::has_data() const
{
    if (is_presence_container) return true;
    return distance.is_set
	|| tag.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "tag")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Ipv6()
    :
    dns(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns>())
    , pool(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool>())
{
    dns->parent = this;
    pool->parent = this;

    yang_name = "ipv6"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (dns !=  nullptr && dns->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (dns !=  nullptr && dns->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dns != nullptr)
    {
        _children["dns"] = dns;
    }

    if(pool != nullptr)
    {
        _children["pool"] = pool;
    }

    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Authorization::Policy::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns" || name == "pool")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns::Dns()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "dns"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns::~Dns()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| secondary.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool::Pool()
    :
    pool_name{YType::str, "pool-name"}
{

    yang_name = "pool"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool::~Pool()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool::has_data() const
{
    if (is_presence_container) return true;
    return pool_name.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Pool::Pool()
    :
    pool_name{YType::str, "pool-name"}
{

    yang_name = "pool"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Pool::~Pool()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Pool::has_data() const
{
    if (is_presence_container) return true;
    return pool_name.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Aaa::Aaa()
    :
    attribute(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute>())
{
    attribute->parent = this;

    yang_name = "aaa"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Aaa::~Aaa()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Aaa::has_data() const
{
    if (is_presence_container) return true;
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Authorization::Policy::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute::Attribute()
    :
    aaa_attribute_list{YType::str, "aaa-attribute-list"}
{

    yang_name = "attribute"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute::~Attribute()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return aaa_attribute_list.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_attribute_list.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_attribute_list.is_set || is_set(aaa_attribute_list.yfilter)) leaf_name_data.push_back(aaa_attribute_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-attribute-list")
    {
        aaa_attribute_list = value;
        aaa_attribute_list.value_namespace = name_space;
        aaa_attribute_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-attribute-list")
    {
        aaa_attribute_list.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-attribute-list")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::SplitDns::SplitDns()
    :
    name{YType::str, "name"}
{

    yang_name = "split-dns"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::SplitDns::~SplitDns()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::SplitDns::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::SplitDns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::SplitDns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-dns";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::SplitDns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::SplitDns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::SplitDns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::SplitDns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::SplitDns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::SplitDns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Dns::Dns()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "dns"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Dns::~Dns()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Dns::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| secondary.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Crypto::Ikev2::Authorization::Policy::Dhcp::Dhcp()
    :
    giaddr{YType::str, "giaddr"},
    server{YType::str, "server"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "dhcp"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Authorization::Policy::Dhcp::~Dhcp()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return giaddr.is_set
	|| server.is_set
	|| timeout.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(giaddr.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Authorization::Policy::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (giaddr.is_set || is_set(giaddr.yfilter)) leaf_name_data.push_back(giaddr.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Authorization::Policy::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Authorization::Policy::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "giaddr")
    {
        giaddr = value;
        giaddr.value_namespace = name_space;
        giaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Authorization::Policy::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "giaddr")
    {
        giaddr.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Authorization::Policy::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "giaddr" || name == "server" || name == "timeout")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Client()
    :
    flexvpn(this, {"flexvpn_name"})
{

    yang_name = "client"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Client::~Client()
{
}

bool Native::Crypto::Ikev2::Client::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flexvpn.len(); index++)
    {
        if(flexvpn[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Client::has_operation() const
{
    for (std::size_t index=0; index<flexvpn.len(); index++)
    {
        if(flexvpn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flexvpn")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn>();
        ent_->parent = this;
        flexvpn.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flexvpn.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flexvpn")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Flexvpn()
    :
    flexvpn_name{YType::str, "flexvpn-name"}
        ,
    peer(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Peer>())
    , connect(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Connect>())
    , source(this, {"source_id"})
    , client(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_>())
    , backup(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Backup>())
{
    peer->parent = this;
    connect->parent = this;
    client->parent = this;
    backup->parent = this;

    yang_name = "flexvpn"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Client::Flexvpn::~Flexvpn()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return flexvpn_name.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (connect !=  nullptr && connect->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::has_operation() const
{
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flexvpn_name.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (connect !=  nullptr && connect->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexvpn";
    ADD_KEY_TOKEN(flexvpn_name, "flexvpn-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flexvpn_name.is_set || is_set(flexvpn_name.yfilter)) leaf_name_data.push_back(flexvpn_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::Flexvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "connect")
    {
        if(connect == nullptr)
        {
            connect = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Connect>();
        }
        return connect;
    }

    if(child_yang_name == "source")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Source>();
        ent_->parent = this;
        source.append(ent_);
        return ent_;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_>();
        }
        return client;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::Flexvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(connect != nullptr)
    {
        _children["connect"] = connect;
    }

    count_ = 0;
    for (auto ent_ : source.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flexvpn-name")
    {
        flexvpn_name = value;
        flexvpn_name.value_namespace = name_space;
        flexvpn_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flexvpn-name")
    {
        flexvpn_name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "connect" || name == "source" || name == "client" || name == "backup" || name == "flexvpn-name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::Peer()
    :
    reactivate{YType::empty, "reactivate"}
        ,
    peer_id_list(this, {"peer_id"})
{

    yang_name = "peer"; yang_parent_name = "flexvpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::~Peer()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_id_list.len(); index++)
    {
        if(peer_id_list[index]->has_data())
            return true;
    }
    return reactivate.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::has_operation() const
{
    for (std::size_t index=0; index<peer_id_list.len(); index++)
    {
        if(peer_id_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reactivate.yfilter);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reactivate.is_set || is_set(reactivate.yfilter)) leaf_name_data.push_back(reactivate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-id-list")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList>();
        ent_->parent = this;
        peer_id_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_id_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reactivate")
    {
        reactivate = value;
        reactivate.value_namespace = name_space;
        reactivate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reactivate")
    {
        reactivate.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-id-list" || name == "reactivate")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdList()
    :
    peer_id{YType::uint8, "peer-id"}
        ,
    peer_id_container(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer>())
{
    peer_id_container->parent = this;

    yang_name = "peer-id-list"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::~PeerIdList()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::has_data() const
{
    if (is_presence_container) return true;
    return peer_id.is_set
	|| (peer_id_container !=  nullptr && peer_id_container->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| (peer_id_container !=  nullptr && peer_id_container->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-id-list";
    ADD_KEY_TOKEN(peer_id, "peer-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-id-container")
    {
        if(peer_id_container == nullptr)
        {
            peer_id_container = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer>();
        }
        return peer_id_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_id_container != nullptr)
    {
        _children["peer-id-container"] = peer_id_container;
    }

    return _children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-id-container" || name == "peer-id")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::PeerIdContainer()
    :
    peer_address{YType::str, "peer-address"},
    track{YType::uint16, "track"},
    up_down{YType::enumeration, "up-down"}
{

    yang_name = "peer-id-container"; yang_parent_name = "peer-id-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::~PeerIdContainer()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::has_data() const
{
    if (is_presence_container) return true;
    return peer_address.is_set
	|| track.is_set
	|| up_down.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(track.yfilter)
	|| ydk::is_set(up_down.yfilter);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-id-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address" || name == "track" || name == "up-down")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Connect::Connect()
    :
    track{YType::uint16, "track"},
    up_down{YType::enumeration, "up-down"}
{

    yang_name = "connect"; yang_parent_name = "flexvpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Client::Flexvpn::Connect::~Connect()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Connect::has_data() const
{
    if (is_presence_container) return true;
    return track.is_set
	|| up_down.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Connect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(track.yfilter)
	|| ydk::is_set(up_down.yfilter);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Connect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Connect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Connect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track" || name == "up-down")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::Source()
    :
    source_id{YType::uint8, "source-id"}
        ,
    source_id_container(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer>())
{
    source_id_container->parent = this;

    yang_name = "source"; yang_parent_name = "flexvpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::~Source()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::has_data() const
{
    if (is_presence_container) return true;
    return source_id.is_set
	|| (source_id_container !=  nullptr && source_id_container->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_id.yfilter)
	|| (source_id_container !=  nullptr && source_id_container->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    ADD_KEY_TOKEN(source_id, "source-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_id.is_set || is_set(source_id.yfilter)) leaf_name_data.push_back(source_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::Flexvpn::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-id-container")
    {
        if(source_id_container == nullptr)
        {
            source_id_container = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer>();
        }
        return source_id_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_id_container != nullptr)
    {
        _children["source-id-container"] = source_id_container;
    }

    return _children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-id")
    {
        source_id = value;
        source_id.value_namespace = name_space;
        source_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-id")
    {
        source_id.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-id-container" || name == "source-id")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::SourceIdContainer()
    :
    interface_name{YType::str, "interface-name"},
    track{YType::uint16, "track"}
{

    yang_name = "source-id-container"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::~SourceIdContainer()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| track.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-id-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "track")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::Client_()
    :
    connect(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect>())
{
    connect->parent = this;

    yang_name = "client"; yang_parent_name = "flexvpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::~Client_()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::has_data() const
{
    if (is_presence_container) return true;
    return (connect !=  nullptr && connect->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::has_operation() const
{
    return is_set(yfilter)
	|| (connect !=  nullptr && connect->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connect")
    {
        if(connect == nullptr)
        {
            connect = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect>();
        }
        return connect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(connect != nullptr)
    {
        _children["connect"] = connect;
    }

    return _children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Client_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Client::Flexvpn::Client_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connect")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::Connect()
    :
    tunnel{YType::uint32, "Tunnel"}
{

    yang_name = "connect"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::~Connect()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::has_data() const
{
    if (is_presence_container) return true;
    return tunnel.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tunnel")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Backup::Backup()
    :
    group(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group>())
{
    group->parent = this;

    yang_name = "backup"; yang_parent_name = "flexvpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Client::Flexvpn::Backup::~Backup()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (group !=  nullptr && group->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::Flexvpn::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group != nullptr)
    {
        _children["group"] = group;
    }

    return _children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Client::Flexvpn::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group::Group()
    :
    group_number{YType::uint16, "group-number"},
    default_{YType::boolean, "default"}
{

    yang_name = "group"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group::~Group()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group::has_data() const
{
    if (is_presence_container) return true;
    return group_number.is_set
	|| default_.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-number" || name == "default")
        return true;
    return false;
}

Native::Crypto::Ikev2::Cluster::Cluster()
    :
    slave(std::make_shared<Native::Crypto::Ikev2::Cluster::Slave>())
    , standby_group(std::make_shared<Native::Crypto::Ikev2::Cluster::StandbyGroup>())
{
    slave->parent = this;
    standby_group->parent = this;

    yang_name = "cluster"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Cluster::~Cluster()
{
}

bool Native::Crypto::Ikev2::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return (slave !=  nullptr && slave->has_data())
	|| (standby_group !=  nullptr && standby_group->has_data());
}

bool Native::Crypto::Ikev2::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| (slave !=  nullptr && slave->has_operation())
	|| (standby_group !=  nullptr && standby_group->has_operation());
}

std::string Native::Crypto::Ikev2::Cluster::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave")
    {
        if(slave == nullptr)
        {
            slave = std::make_shared<Native::Crypto::Ikev2::Cluster::Slave>();
        }
        return slave;
    }

    if(child_yang_name == "standby-group")
    {
        if(standby_group == nullptr)
        {
            standby_group = std::make_shared<Native::Crypto::Ikev2::Cluster::StandbyGroup>();
        }
        return standby_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(slave != nullptr)
    {
        _children["slave"] = slave;
    }

    if(standby_group != nullptr)
    {
        _children["standby-group"] = standby_group;
    }

    return _children;
}

void Native::Crypto::Ikev2::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave" || name == "standby-group")
        return true;
    return false;
}

Native::Crypto::Ikev2::Cluster::Slave::Slave()
    :
    hello{YType::uint32, "hello"},
    max_session{YType::uint32, "max-session"},
    priority{YType::uint16, "priority"},
    update{YType::uint32, "update"}
{

    yang_name = "slave"; yang_parent_name = "cluster"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Cluster::Slave::~Slave()
{
}

bool Native::Crypto::Ikev2::Cluster::Slave::has_data() const
{
    if (is_presence_container) return true;
    return hello.is_set
	|| max_session.is_set
	|| priority.is_set
	|| update.is_set;
}

bool Native::Crypto::Ikev2::Cluster::Slave::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(max_session.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(update.yfilter);
}

std::string Native::Crypto::Ikev2::Cluster::Slave::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/cluster/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Cluster::Slave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Cluster::Slave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (max_session.is_set || is_set(max_session.yfilter)) leaf_name_data.push_back(max_session.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Cluster::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Cluster::Slave::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Cluster::Slave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-session")
    {
        max_session = value;
        max_session.value_namespace = name_space;
        max_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Cluster::Slave::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "max-session")
    {
        max_session.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Cluster::Slave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello" || name == "max-session" || name == "priority" || name == "update")
        return true;
    return false;
}

Native::Crypto::Ikev2::Cluster::StandbyGroup::StandbyGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "standby-group"; yang_parent_name = "cluster"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Cluster::StandbyGroup::~StandbyGroup()
{
}

bool Native::Crypto::Ikev2::Cluster::StandbyGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Crypto::Ikev2::Cluster::StandbyGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Crypto::Ikev2::Cluster::StandbyGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/cluster/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Cluster::StandbyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Cluster::StandbyGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Cluster::StandbyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Cluster::StandbyGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Cluster::StandbyGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Cluster::StandbyGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Cluster::StandbyGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Cts::Cts()
    :
    sgt{YType::empty, "sgt"}
{

    yang_name = "cts"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Cts::~Cts()
{
}

bool Native::Crypto::Ikev2::Cts::has_data() const
{
    if (is_presence_container) return true;
    return sgt.is_set;
}

bool Native::Crypto::Ikev2::Cts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Crypto::Ikev2::Cts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Crypto::Ikev2::Diagnose::Diagnose()
    :
    error{YType::uint16, "error"}
{

    yang_name = "diagnose"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Diagnose::~Diagnose()
{
}

bool Native::Crypto::Ikev2::Diagnose::has_data() const
{
    if (is_presence_container) return true;
    return error.is_set;
}

bool Native::Crypto::Ikev2::Diagnose::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string Native::Crypto::Ikev2::Diagnose::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Diagnose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diagnose";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Diagnose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Diagnose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Diagnose::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Diagnose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Diagnose::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Diagnose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

Native::Crypto::Ikev2::DpdContainer::DpdContainer()
    :
    dpd{YType::uint16, "dpd"},
    retry_interval{YType::uint8, "retry-interval"},
    dpd_query{YType::enumeration, "dpd-query"}
{

    yang_name = "dpd-container"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::DpdContainer::~DpdContainer()
{
}

bool Native::Crypto::Ikev2::DpdContainer::has_data() const
{
    if (is_presence_container) return true;
    return dpd.is_set
	|| retry_interval.is_set
	|| dpd_query.is_set;
}

bool Native::Crypto::Ikev2::DpdContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dpd.yfilter)
	|| ydk::is_set(retry_interval.yfilter)
	|| ydk::is_set(dpd_query.yfilter);
}

std::string Native::Crypto::Ikev2::DpdContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::DpdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpd-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::DpdContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dpd.is_set || is_set(dpd.yfilter)) leaf_name_data.push_back(dpd.get_name_leafdata());
    if (retry_interval.is_set || is_set(retry_interval.yfilter)) leaf_name_data.push_back(retry_interval.get_name_leafdata());
    if (dpd_query.is_set || is_set(dpd_query.yfilter)) leaf_name_data.push_back(dpd_query.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::DpdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::DpdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::DpdContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dpd")
    {
        dpd = value;
        dpd.value_namespace = name_space;
        dpd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-interval")
    {
        retry_interval = value;
        retry_interval.value_namespace = name_space;
        retry_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpd-query")
    {
        dpd_query = value;
        dpd_query.value_namespace = name_space;
        dpd_query.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::DpdContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dpd")
    {
        dpd.yfilter = yfilter;
    }
    if(value_path == "retry-interval")
    {
        retry_interval.yfilter = yfilter;
    }
    if(value_path == "dpd-query")
    {
        dpd_query.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::DpdContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dpd" || name == "retry-interval" || name == "dpd-query")
        return true;
    return false;
}

Native::Crypto::Ikev2::Fragmentation::Fragmentation()
    :
    mtu{YType::uint16, "mtu"}
{

    yang_name = "fragmentation"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Crypto::Ikev2::Fragmentation::~Fragmentation()
{
}

bool Native::Crypto::Ikev2::Fragmentation::has_data() const
{
    if (is_presence_container) return true;
    return mtu.is_set;
}

bool Native::Crypto::Ikev2::Fragmentation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Crypto::Ikev2::Fragmentation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Fragmentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Fragmentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Fragmentation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Fragmentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu")
        return true;
    return false;
}

Native::Crypto::Ikev2::HttpUrl::HttpUrl()
    :
    cert{YType::empty, "cert"}
{

    yang_name = "http-url"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::HttpUrl::~HttpUrl()
{
}

bool Native::Crypto::Ikev2::HttpUrl::has_data() const
{
    if (is_presence_container) return true;
    return cert.is_set;
}

bool Native::Crypto::Ikev2::HttpUrl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cert.yfilter);
}

std::string Native::Crypto::Ikev2::HttpUrl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::HttpUrl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http-url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::HttpUrl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cert.is_set || is_set(cert.yfilter)) leaf_name_data.push_back(cert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::HttpUrl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::HttpUrl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::HttpUrl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cert")
    {
        cert = value;
        cert.value_namespace = name_space;
        cert.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::HttpUrl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cert")
    {
        cert.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::HttpUrl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cert")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Keyring()
    :
    name{YType::str, "name"}
        ,
    peer(this, {"name"})
{

    yang_name = "keyring"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Keyring::~Keyring()
{
}

bool Native::Crypto::Ikev2::Keyring::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Crypto::Ikev2::Keyring::has_operation() const
{
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Crypto::Ikev2::Keyring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Keyring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keyring";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer>();
        ent_->parent = this;
        peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Keyring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Keyring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "name")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Peer()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    hostname{YType::str, "hostname"}
        ,
    address(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address>())
    , identity(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity>())
    , pre_shared_key(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey>())
{
    address->parent = this;
    identity->parent = this;
    pre_shared_key->parent = this;

    yang_name = "peer"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Keyring::Peer::~Peer()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| hostname.is_set
	|| (address !=  nullptr && address->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data());
}

bool Native::Crypto::Ikev2::Keyring::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation());
}

std::string Native::Crypto::Ikev2::Keyring::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Keyring::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address>();
        }
        return address;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey>();
        }
        return pre_shared_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Keyring::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    if(pre_shared_key != nullptr)
    {
        _children["pre-shared-key"] = pre_shared_key;
    }

    return _children;
}

void Native::Crypto::Ikev2::Keyring::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity" || name == "pre-shared-key" || name == "name" || name == "description" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Address::Address()
    :
    ipv6_prefix{YType::str, "ipv6-prefix"}
        ,
    ipv4(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Keyring::Peer::Address::~Address()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_prefix.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Keyring::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Keyring::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6-prefix")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::Ipv4()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| ipv4_mask.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv4-mask")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Identity()
    :
    address{YType::str, "address"},
    key_id{YType::str, "key-id"}
        ,
    email(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Email>())
    , fqdn(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn>())
{
    email->parent = this;
    fqdn->parent = this;

    yang_name = "identity"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::~Identity()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| key_id.is_set
	|| (email !=  nullptr && email->has_data())
	|| (fqdn !=  nullptr && fqdn->has_data());
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| (email !=  nullptr && email->has_operation())
	|| (fqdn !=  nullptr && fqdn->has_operation());
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Keyring::Peer::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "email")
    {
        if(email == nullptr)
        {
            email = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Email>();
        }
        return email;
    }

    if(child_yang_name == "fqdn")
    {
        if(fqdn == nullptr)
        {
            fqdn = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn>();
        }
        return fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Keyring::Peer::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(email != nullptr)
    {
        _children["email"] = email;
    }

    if(fqdn != nullptr)
    {
        _children["fqdn"] = fqdn;
    }

    return _children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "email" || name == "fqdn" || name == "address" || name == "key-id")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::Email()
    :
    name{YType::str, "name"},
    domain{YType::str, "domain"}
{

    yang_name = "email"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::~Email()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| domain.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "email";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "domain")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::Fqdn()
    :
    name{YType::str, "name"},
    domain{YType::str, "domain"}
{

    yang_name = "fqdn"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::~Fqdn()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| domain.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fqdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "domain")
        return true;
    return false;
}

Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::PreSharedKey()
    :
    local{YType::empty, "local"},
    remote{YType::empty, "remote"},
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"},
    hex{YType::str, "hex"}
{

    yang_name = "pre-shared-key"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| remote.is_set
	|| encryption.is_set
	|| key.is_set
	|| hex.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(hex.yfilter);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (hex.is_set || is_set(hex.yfilter)) leaf_name_data.push_back(hex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex")
    {
        hex = value;
        hex.value_namespace = name_space;
        hex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "hex")
    {
        hex.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "encryption" || name == "key" || name == "hex")
        return true;
    return false;
}

Native::Crypto::Ikev2::Limit::Limit()
    :
    max_sa{YType::uint32, "max-sa"}
        ,
    max_neg_sa(std::make_shared<Native::Crypto::Ikev2::Limit::MaxNegSa>())
{
    max_neg_sa->parent = this;

    yang_name = "limit"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Limit::~Limit()
{
}

bool Native::Crypto::Ikev2::Limit::has_data() const
{
    if (is_presence_container) return true;
    return max_sa.is_set
	|| (max_neg_sa !=  nullptr && max_neg_sa->has_data());
}

bool Native::Crypto::Ikev2::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sa.yfilter)
	|| (max_neg_sa !=  nullptr && max_neg_sa->has_operation());
}

std::string Native::Crypto::Ikev2::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sa.is_set || is_set(max_sa.yfilter)) leaf_name_data.push_back(max_sa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-neg-sa")
    {
        if(max_neg_sa == nullptr)
        {
            max_neg_sa = std::make_shared<Native::Crypto::Ikev2::Limit::MaxNegSa>();
        }
        return max_neg_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(max_neg_sa != nullptr)
    {
        _children["max-neg-sa"] = max_neg_sa;
    }

    return _children;
}

void Native::Crypto::Ikev2::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sa")
    {
        max_sa = value;
        max_sa.value_namespace = name_space;
        max_sa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sa")
    {
        max_sa.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-neg-sa" || name == "max-sa")
        return true;
    return false;
}

Native::Crypto::Ikev2::Limit::MaxNegSa::MaxNegSa()
    :
    max_in_negotation_sa{YType::uint32, "max-in-negotation-sa"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "max-neg-sa"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Limit::MaxNegSa::~MaxNegSa()
{
}

bool Native::Crypto::Ikev2::Limit::MaxNegSa::has_data() const
{
    if (is_presence_container) return true;
    return max_in_negotation_sa.is_set
	|| direction.is_set;
}

bool Native::Crypto::Ikev2::Limit::MaxNegSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_in_negotation_sa.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Crypto::Ikev2::Limit::MaxNegSa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Limit::MaxNegSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-neg-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Limit::MaxNegSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_in_negotation_sa.is_set || is_set(max_in_negotation_sa.yfilter)) leaf_name_data.push_back(max_in_negotation_sa.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Limit::MaxNegSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Limit::MaxNegSa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Limit::MaxNegSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-in-negotation-sa")
    {
        max_in_negotation_sa = value;
        max_in_negotation_sa.value_namespace = name_space;
        max_in_negotation_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Limit::MaxNegSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-in-negotation-sa")
    {
        max_in_negotation_sa.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Limit::MaxNegSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-in-negotation-sa" || name == "direction")
        return true;
    return false;
}

Native::Crypto::Ikev2::NameMangler::NameMangler()
    :
    name{YType::str, "name"},
    dn{YType::enumeration, "dn"},
    email{YType::enumeration, "email"},
    fqdn{YType::enumeration, "fqdn"}
        ,
    eap(std::make_shared<Native::Crypto::Ikev2::NameMangler::Eap>())
{
    eap->parent = this;

    yang_name = "name-mangler"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::NameMangler::~NameMangler()
{
}

bool Native::Crypto::Ikev2::NameMangler::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| dn.is_set
	|| email.is_set
	|| fqdn.is_set
	|| (eap !=  nullptr && eap->has_data());
}

bool Native::Crypto::Ikev2::NameMangler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(dn.yfilter)
	|| ydk::is_set(email.yfilter)
	|| ydk::is_set(fqdn.yfilter)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Crypto::Ikev2::NameMangler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::NameMangler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-mangler";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::NameMangler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (dn.is_set || is_set(dn.yfilter)) leaf_name_data.push_back(dn.get_name_leafdata());
    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());
    if (fqdn.is_set || is_set(fqdn.yfilter)) leaf_name_data.push_back(fqdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::NameMangler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::NameMangler::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::NameMangler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    return _children;
}

void Native::Crypto::Ikev2::NameMangler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn")
    {
        dn = value;
        dn.value_namespace = name_space;
        dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "email")
    {
        email = value;
        email.value_namespace = name_space;
        email.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fqdn")
    {
        fqdn = value;
        fqdn.value_namespace = name_space;
        fqdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::NameMangler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "dn")
    {
        dn.yfilter = yfilter;
    }
    if(value_path == "email")
    {
        email.yfilter = yfilter;
    }
    if(value_path == "fqdn")
    {
        fqdn.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::NameMangler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap" || name == "name" || name == "dn" || name == "email" || name == "fqdn")
        return true;
    return false;
}

Native::Crypto::Ikev2::NameMangler::Eap::Eap()
    :
    dn{YType::enumeration, "dn"},
    all{YType::empty, "all"}
        ,
    prefix(std::make_shared<Native::Crypto::Ikev2::NameMangler::Eap::Prefix>())
    , suffix(std::make_shared<Native::Crypto::Ikev2::NameMangler::Eap::Suffix>())
{
    prefix->parent = this;
    suffix->parent = this;

    yang_name = "eap"; yang_parent_name = "name-mangler"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::NameMangler::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::NameMangler::Eap::has_data() const
{
    if (is_presence_container) return true;
    return dn.is_set
	|| all.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (suffix !=  nullptr && suffix->has_data());
}

bool Native::Crypto::Ikev2::NameMangler::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dn.yfilter)
	|| ydk::is_set(all.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (suffix !=  nullptr && suffix->has_operation());
}

std::string Native::Crypto::Ikev2::NameMangler::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::NameMangler::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dn.is_set || is_set(dn.yfilter)) leaf_name_data.push_back(dn.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::NameMangler::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Crypto::Ikev2::NameMangler::Eap::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "suffix")
    {
        if(suffix == nullptr)
        {
            suffix = std::make_shared<Native::Crypto::Ikev2::NameMangler::Eap::Suffix>();
        }
        return suffix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::NameMangler::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    if(suffix != nullptr)
    {
        _children["suffix"] = suffix;
    }

    return _children;
}

void Native::Crypto::Ikev2::NameMangler::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dn")
    {
        dn = value;
        dn.value_namespace = name_space;
        dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::NameMangler::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dn")
    {
        dn.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::NameMangler::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "suffix" || name == "dn" || name == "all")
        return true;
    return false;
}

Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Prefix()
    :
    delimiter(std::make_shared<Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "prefix"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::NameMangler::Eap::Prefix::~Prefix()
{
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Crypto::Ikev2::NameMangler::Eap::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::NameMangler::Eap::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::NameMangler::Eap::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::NameMangler::Eap::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Crypto::Ikev2::NameMangler::Eap::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::NameMangler::Eap::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter::Delimiter()
    :
    dot{YType::empty, "dot"},
    at_sign{YType::empty, "at-sign"},
    slash_sign{YType::empty, "slash-sign"}
{

    yang_name = "delimiter"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter::~Delimiter()
{
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return dot.is_set
	|| at_sign.is_set
	|| slash_sign.is_set;
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot.yfilter)
	|| ydk::is_set(at_sign.yfilter)
	|| ydk::is_set(slash_sign.yfilter);
}

std::string Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot.is_set || is_set(dot.yfilter)) leaf_name_data.push_back(dot.get_name_leafdata());
    if (at_sign.is_set || is_set(at_sign.yfilter)) leaf_name_data.push_back(at_sign.get_name_leafdata());
    if (slash_sign.is_set || is_set(slash_sign.yfilter)) leaf_name_data.push_back(slash_sign.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot")
    {
        dot = value;
        dot.value_namespace = name_space;
        dot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-sign")
    {
        at_sign = value;
        at_sign.value_namespace = name_space;
        at_sign.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slash-sign")
    {
        slash_sign = value;
        slash_sign.value_namespace = name_space;
        slash_sign.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot")
    {
        dot.yfilter = yfilter;
    }
    if(value_path == "at-sign")
    {
        at_sign.yfilter = yfilter;
    }
    if(value_path == "slash-sign")
    {
        slash_sign.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot" || name == "at-sign" || name == "slash-sign")
        return true;
    return false;
}

Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Suffix()
    :
    delimiter(std::make_shared<Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "suffix"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::NameMangler::Eap::Suffix::~Suffix()
{
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Suffix::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Suffix::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Crypto::Ikev2::NameMangler::Eap::Suffix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suffix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::NameMangler::Eap::Suffix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::NameMangler::Eap::Suffix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::NameMangler::Eap::Suffix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Crypto::Ikev2::NameMangler::Eap::Suffix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::NameMangler::Eap::Suffix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Suffix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter::Delimiter()
    :
    dot{YType::empty, "dot"},
    at_sign{YType::empty, "at-sign"},
    slash_sign{YType::empty, "slash-sign"}
{

    yang_name = "delimiter"; yang_parent_name = "suffix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter::~Delimiter()
{
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return dot.is_set
	|| at_sign.is_set
	|| slash_sign.is_set;
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot.yfilter)
	|| ydk::is_set(at_sign.yfilter)
	|| ydk::is_set(slash_sign.yfilter);
}

std::string Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot.is_set || is_set(dot.yfilter)) leaf_name_data.push_back(dot.get_name_leafdata());
    if (at_sign.is_set || is_set(at_sign.yfilter)) leaf_name_data.push_back(at_sign.get_name_leafdata());
    if (slash_sign.is_set || is_set(slash_sign.yfilter)) leaf_name_data.push_back(slash_sign.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot")
    {
        dot = value;
        dot.value_namespace = name_space;
        dot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-sign")
    {
        at_sign = value;
        at_sign.value_namespace = name_space;
        at_sign.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slash-sign")
    {
        slash_sign = value;
        slash_sign.value_namespace = name_space;
        slash_sign.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot")
    {
        dot.yfilter = yfilter;
    }
    if(value_path == "at-sign")
    {
        at_sign.yfilter = yfilter;
    }
    if(value_path == "slash-sign")
    {
        slash_sign.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot" || name == "at-sign" || name == "slash-sign")
        return true;
    return false;
}

Native::Crypto::Ikev2::Nat::Nat()
    :
    keepalive{YType::uint16, "keepalive"}
{

    yang_name = "nat"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Nat::~Nat()
{
}

bool Native::Crypto::Ikev2::Nat::has_data() const
{
    if (is_presence_container) return true;
    return keepalive.is_set;
}

bool Native::Crypto::Ikev2::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter);
}

std::string Native::Crypto::Ikev2::Nat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Crypto::Ikev2::Policy::Policy()
    :
    name{YType::str, "name"},
    proposal{YType::str, "proposal"}
        ,
    match(std::make_shared<Native::Crypto::Ikev2::Policy::Match>())
{
    match->parent = this;

    yang_name = "policy"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Policy::~Policy()
{
}

bool Native::Crypto::Ikev2::Policy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| proposal.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::Ikev2::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(proposal.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::Ikev2::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (proposal.is_set || is_set(proposal.yfilter)) leaf_name_data.push_back(proposal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Ikev2::Policy::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::Crypto::Ikev2::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proposal")
    {
        proposal = value;
        proposal.value_namespace = name_space;
        proposal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "proposal")
    {
        proposal.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "name" || name == "proposal")
        return true;
    return false;
}

Native::Crypto::Ikev2::Policy::Match::Match()
    :
    address(std::make_shared<Native::Crypto::Ikev2::Policy::Match::Address>())
    , fvrf(std::make_shared<Native::Crypto::Ikev2::Policy::Match::Fvrf>())
{
    address->parent = this;
    fvrf->parent = this;

    yang_name = "match"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Policy::Match::~Match()
{
}

bool Native::Crypto::Ikev2::Policy::Match::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data())
	|| (fvrf !=  nullptr && fvrf->has_data());
}

bool Native::Crypto::Ikev2::Policy::Match::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (fvrf !=  nullptr && fvrf->has_operation());
}

std::string Native::Crypto::Ikev2::Policy::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Policy::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Policy::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Ikev2::Policy::Match::Address>();
        }
        return address;
    }

    if(child_yang_name == "fvrf")
    {
        if(fvrf == nullptr)
        {
            fvrf = std::make_shared<Native::Crypto::Ikev2::Policy::Match::Fvrf>();
        }
        return fvrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Policy::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(fvrf != nullptr)
    {
        _children["fvrf"] = fvrf;
    }

    return _children;
}

void Native::Crypto::Ikev2::Policy::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Policy::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Policy::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "fvrf")
        return true;
    return false;
}

Native::Crypto::Ikev2::Policy::Match::Address::Address()
    :
    local{YType::str, "local"}
{

    yang_name = "address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Policy::Match::Address::~Address()
{
}

bool Native::Crypto::Ikev2::Policy::Match::Address::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set;
}

bool Native::Crypto::Ikev2::Policy::Match::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Crypto::Ikev2::Policy::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Policy::Match::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Policy::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Policy::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Policy::Match::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Policy::Match::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Policy::Match::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Policy::Match::Fvrf::Fvrf()
    :
    name{YType::str, "name"},
    any{YType::empty, "any"}
{

    yang_name = "fvrf"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Policy::Match::Fvrf::~Fvrf()
{
}

bool Native::Crypto::Ikev2::Policy::Match::Fvrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| any.is_set;
}

bool Native::Crypto::Ikev2::Policy::Match::Fvrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(any.yfilter);
}

std::string Native::Crypto::Ikev2::Policy::Match::Fvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fvrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Policy::Match::Fvrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Policy::Match::Fvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Policy::Match::Fvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Policy::Match::Fvrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Policy::Match::Fvrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Policy::Match::Fvrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "any")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Profile()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    ivrf{YType::str, "ivrf"},
    shutdown{YType::empty, "shutdown"}
        ,
    aaa(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa>())
    , authentication(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication>())
    , config_exchange(std::make_shared<Native::Crypto::Ikev2::Profile::ConfigExchange>())
    , dpd(std::make_shared<Native::Crypto::Ikev2::Profile::Dpd>())
    , identity(std::make_shared<Native::Crypto::Ikev2::Profile::Identity>())
    , initial_contact(std::make_shared<Native::Crypto::Ikev2::Profile::InitialContact>())
    , keyring(std::make_shared<Native::Crypto::Ikev2::Profile::Keyring>())
    , lifetime(std::make_shared<Native::Crypto::Ikev2::Profile::Lifetime>())
    , match(std::make_shared<Native::Crypto::Ikev2::Profile::Match>())
    , nat(std::make_shared<Native::Crypto::Ikev2::Profile::Nat>())
    , pki(std::make_shared<Native::Crypto::Ikev2::Profile::Pki>())
    , reconnect(nullptr) // presence node
    , redirect(std::make_shared<Native::Crypto::Ikev2::Profile::Redirect>())
    , virtual_template(std::make_shared<Native::Crypto::Ikev2::Profile::VirtualTemplate>())
{
    aaa->parent = this;
    authentication->parent = this;
    config_exchange->parent = this;
    dpd->parent = this;
    identity->parent = this;
    initial_contact->parent = this;
    keyring->parent = this;
    lifetime->parent = this;
    match->parent = this;
    nat->parent = this;
    pki->parent = this;
    redirect->parent = this;
    virtual_template->parent = this;

    yang_name = "profile"; yang_parent_name = "ikev2"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Crypto::Ikev2::Profile::~Profile()
{
}

bool Native::Crypto::Ikev2::Profile::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| ivrf.is_set
	|| shutdown.is_set
	|| (aaa !=  nullptr && aaa->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (config_exchange !=  nullptr && config_exchange->has_data())
	|| (dpd !=  nullptr && dpd->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (initial_contact !=  nullptr && initial_contact->has_data())
	|| (keyring !=  nullptr && keyring->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (pki !=  nullptr && pki->has_data())
	|| (reconnect !=  nullptr && reconnect->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (virtual_template !=  nullptr && virtual_template->has_data());
}

bool Native::Crypto::Ikev2::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ivrf.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (config_exchange !=  nullptr && config_exchange->has_operation())
	|| (dpd !=  nullptr && dpd->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (initial_contact !=  nullptr && initial_contact->has_operation())
	|| (keyring !=  nullptr && keyring->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (pki !=  nullptr && pki->has_operation())
	|| (reconnect !=  nullptr && reconnect->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (virtual_template !=  nullptr && virtual_template->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Ikev2::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ivrf.is_set || is_set(ivrf.yfilter)) leaf_name_data.push_back(ivrf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "config-exchange")
    {
        if(config_exchange == nullptr)
        {
            config_exchange = std::make_shared<Native::Crypto::Ikev2::Profile::ConfigExchange>();
        }
        return config_exchange;
    }

    if(child_yang_name == "dpd")
    {
        if(dpd == nullptr)
        {
            dpd = std::make_shared<Native::Crypto::Ikev2::Profile::Dpd>();
        }
        return dpd;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Ikev2::Profile::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "initial-contact")
    {
        if(initial_contact == nullptr)
        {
            initial_contact = std::make_shared<Native::Crypto::Ikev2::Profile::InitialContact>();
        }
        return initial_contact;
    }

    if(child_yang_name == "keyring")
    {
        if(keyring == nullptr)
        {
            keyring = std::make_shared<Native::Crypto::Ikev2::Profile::Keyring>();
        }
        return keyring;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ikev2::Profile::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Ikev2::Profile::Match>();
        }
        return match;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::Ikev2::Profile::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Ikev2::Profile::Pki>();
        }
        return pki;
    }

    if(child_yang_name == "reconnect")
    {
        if(reconnect == nullptr)
        {
            reconnect = std::make_shared<Native::Crypto::Ikev2::Profile::Reconnect>();
        }
        return reconnect;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Crypto::Ikev2::Profile::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "virtual-template")
    {
        if(virtual_template == nullptr)
        {
            virtual_template = std::make_shared<Native::Crypto::Ikev2::Profile::VirtualTemplate>();
        }
        return virtual_template;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aaa != nullptr)
    {
        _children["aaa"] = aaa;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(config_exchange != nullptr)
    {
        _children["config-exchange"] = config_exchange;
    }

    if(dpd != nullptr)
    {
        _children["dpd"] = dpd;
    }

    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    if(initial_contact != nullptr)
    {
        _children["initial-contact"] = initial_contact;
    }

    if(keyring != nullptr)
    {
        _children["keyring"] = keyring;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(nat != nullptr)
    {
        _children["nat"] = nat;
    }

    if(pki != nullptr)
    {
        _children["pki"] = pki;
    }

    if(reconnect != nullptr)
    {
        _children["reconnect"] = reconnect;
    }

    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    if(virtual_template != nullptr)
    {
        _children["virtual-template"] = virtual_template;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ivrf")
    {
        ivrf = value;
        ivrf.value_namespace = name_space;
        ivrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ivrf")
    {
        ivrf.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa" || name == "authentication" || name == "config-exchange" || name == "dpd" || name == "identity" || name == "initial-contact" || name == "keyring" || name == "lifetime" || name == "match" || name == "nat" || name == "pki" || name == "reconnect" || name == "redirect" || name == "virtual-template" || name == "name" || name == "description" || name == "ivrf" || name == "shutdown")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Aaa()
    :
    accounting(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Accounting>())
    , authentication(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authentication>())
    , authorization(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization>())
{
    accounting->parent = this;
    authentication->parent = this;
    authorization->parent = this;

    yang_name = "aaa"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::~Aaa()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::has_data() const
{
    if (is_presence_container) return true;
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::get_children() const
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

    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "authorization")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Accounting::Accounting()
    :
    anyconnect_eap{YType::str, "anyconnect-eap"},
    cert{YType::str, "cert"},
    eap{YType::str, "eap"},
    psk{YType::str, "psk"}
{

    yang_name = "accounting"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Accounting::~Accounting()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return anyconnect_eap.is_set
	|| cert.is_set
	|| eap.is_set
	|| psk.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(anyconnect_eap.yfilter)
	|| ydk::is_set(cert.yfilter)
	|| ydk::is_set(eap.yfilter)
	|| ydk::is_set(psk.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anyconnect_eap.is_set || is_set(anyconnect_eap.yfilter)) leaf_name_data.push_back(anyconnect_eap.get_name_leafdata());
    if (cert.is_set || is_set(cert.yfilter)) leaf_name_data.push_back(cert.get_name_leafdata());
    if (eap.is_set || is_set(eap.yfilter)) leaf_name_data.push_back(eap.get_name_leafdata());
    if (psk.is_set || is_set(psk.yfilter)) leaf_name_data.push_back(psk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anyconnect-eap")
    {
        anyconnect_eap = value;
        anyconnect_eap.value_namespace = name_space;
        anyconnect_eap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cert")
    {
        cert = value;
        cert.value_namespace = name_space;
        cert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eap")
    {
        eap = value;
        eap.value_namespace = name_space;
        eap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psk")
    {
        psk = value;
        psk.value_namespace = name_space;
        psk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anyconnect-eap")
    {
        anyconnect_eap.yfilter = yfilter;
    }
    if(value_path == "cert")
    {
        cert.yfilter = yfilter;
    }
    if(value_path == "eap")
    {
        eap.yfilter = yfilter;
    }
    if(value_path == "psk")
    {
        psk.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect-eap" || name == "cert" || name == "eap" || name == "psk")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authentication::Authentication()
    :
    anyconnect_eap{YType::str, "anyconnect-eap"},
    eap{YType::str, "eap"}
{

    yang_name = "authentication"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authentication::~Authentication()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return anyconnect_eap.is_set
	|| eap.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(anyconnect_eap.yfilter)
	|| ydk::is_set(eap.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anyconnect_eap.is_set || is_set(anyconnect_eap.yfilter)) leaf_name_data.push_back(anyconnect_eap.get_name_leafdata());
    if (eap.is_set || is_set(eap.yfilter)) leaf_name_data.push_back(eap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anyconnect-eap")
    {
        anyconnect_eap = value;
        anyconnect_eap.value_namespace = name_space;
        anyconnect_eap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eap")
    {
        eap = value;
        eap.value_namespace = name_space;
        eap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anyconnect-eap")
    {
        anyconnect_eap.yfilter = yfilter;
    }
    if(value_path == "eap")
    {
        eap.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect-eap" || name == "eap")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Authorization()
    :
    group(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group>())
    , user(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User>())
{
    group->parent = this;
    user->parent = this;

    yang_name = "authorization"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::~Authorization()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return (group !=  nullptr && group->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group>();
        }
        return group;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group != nullptr)
    {
        _children["group"] = group;
    }

    if(user != nullptr)
    {
        _children["user"] = user;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "user")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Group()
    :
    override{YType::empty, "override"}
        ,
    anyconnect_eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap>())
    , cert(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert>())
    , eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap>())
    , psk(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk>())
{
    anyconnect_eap->parent = this;
    cert->parent = this;
    eap->parent = this;
    psk->parent = this;

    yang_name = "group"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::~Group()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::has_data() const
{
    if (is_presence_container) return true;
    return override.is_set
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_data())
	|| (cert !=  nullptr && cert->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (psk !=  nullptr && psk->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(override.yfilter)
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_operation())
	|| (cert !=  nullptr && cert->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (psk !=  nullptr && psk->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anyconnect-eap")
    {
        if(anyconnect_eap == nullptr)
        {
            anyconnect_eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap>();
        }
        return anyconnect_eap;
    }

    if(child_yang_name == "cert")
    {
        if(cert == nullptr)
        {
            cert = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert>();
        }
        return cert;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "psk")
    {
        if(psk == nullptr)
        {
            psk = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk>();
        }
        return psk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(anyconnect_eap != nullptr)
    {
        _children["anyconnect-eap"] = anyconnect_eap;
    }

    if(cert != nullptr)
    {
        _children["cert"] = cert;
    }

    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    if(psk != nullptr)
    {
        _children["psk"] = psk;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anyconnect-eap" || name == "cert" || name == "eap" || name == "psk" || name == "override")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::AnyconnectEap()
    :
    list(this, {"name"})
{

    yang_name = "anyconnect-eap"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::~AnyconnectEap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anyconnect-eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::List()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"},
    username{YType::str, "username"},
    local{YType::empty, "local"}
        ,
    name_mangler(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler>())
{
    name_mangler->parent = this;

    yang_name = "list"; yang_parent_name = "anyconnect-eap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set
	|| username.is_set
	|| local.is_set
	|| (name_mangler !=  nullptr && name_mangler->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(local.yfilter)
	|| (name_mangler !=  nullptr && name_mangler->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-mangler")
    {
        if(name_mangler == nullptr)
        {
            name_mangler = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler>();
        }
        return name_mangler;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_mangler != nullptr)
    {
        _children["name-mangler"] = name_mangler;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-mangler" || name == "name" || name == "password" || name == "encryption" || name == "key" || name == "username" || name == "local")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler::NameMangler()
    :
    name{YType::str, "name"},
    password{YType::empty, "password"},
    encryption{YType::uint8, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "name-mangler"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler::~NameMangler()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| password.is_set
	|| encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-mangler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "password" || name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::Cert()
    :
    list(this, {"name"})
{

    yang_name = "cert"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::~Cert()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::Acknowledgement::any {0, "any"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::Acknowledgement::cisco {1, "cisco"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::Acknowledgement::interoperable {2, "interoperable"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha {0, "sha"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha256 {1, "sha256"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha384 {2, "sha384"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha512 {3, "sha512"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Default::Client::TransportEncryptKey::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Default::Client::TransportEncryptKey::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::UpDown::up {0, "up"};
const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::UpDown::down {1, "down"};

const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Connect::UpDown::up {0, "up"};
const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Connect::UpDown::down {1, "down"};

const Enum::YLeaf Native::Crypto::Ikev2::DpdContainer::DpdQuery::on_demand {0, "on-demand"};
const Enum::YLeaf Native::Crypto::Ikev2::DpdContainer::DpdQuery::periodic {1, "periodic"};

const Enum::YLeaf Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Limit::MaxNegSa::Direction::incoming {0, "incoming"};
const Enum::YLeaf Native::Crypto::Ikev2::Limit::MaxNegSa::Direction::outgoing {1, "outgoing"};

const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Dn::common_name {0, "common-name"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Dn::country {1, "country"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Dn::domain {2, "domain"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Dn::locality {3, "locality"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Dn::organization {4, "organization"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Dn::organization_unit {5, "organization-unit"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Dn::state {6, "state"};

const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Email::all {0, "all"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Email::domain {1, "domain"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Email::username {2, "username"};

const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Fqdn::all {0, "all"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Fqdn::domain {1, "domain"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Fqdn::hostname {2, "hostname"};

const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Eap::Dn::common_name {0, "common-name"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Eap::Dn::country {1, "country"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Eap::Dn::domain {2, "domain"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Eap::Dn::locality {3, "locality"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Eap::Dn::organization {4, "organization"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Eap::Dn::organization_unit {5, "organization-unit"};
const Enum::YLeaf Native::Crypto::Ikev2::NameMangler::Eap::Dn::state {6, "state"};


}
}

