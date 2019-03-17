
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_60.hpp"
#include "Cisco_IOS_XE_native_63.hpp"
#include "Cisco_IOS_XE_native_62.hpp"
#include "Cisco_IOS_XE_native_65.hpp"
#include "Cisco_IOS_XE_native_64.hpp"
#include "Cisco_IOS_XE_native_61.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-192"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::~KeyString()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::Aes256()
    :
    key_string(std::make_shared<Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-256"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::~Aes256()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-256";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-256"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::~KeyString()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ospfv3::Manet::~Manet()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Manet::has_data() const
{
    if (is_presence_container) return true;
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peering != nullptr)
    {
        _children["peering"] = peering;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
        ,
    cost(std::make_shared<Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::~Peering()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::has_data() const
{
    if (is_presence_container) return true;
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea::MultiArea()
    :
    id{YType::str, "id"},
    cost{YType::uint32, "cost"}
{

    yang_name = "multi-area"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea::~MultiArea()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Ospfv3::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cost")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
        ,
    database_filter(std::make_shared<Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::~Neighbor()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ospfv3::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
        ,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ospfv3::Network::~Network()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Network::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(point_to_multipoint != nullptr)
    {
        _children["point-to-multipoint"] = point_to_multipoint;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint::has_data() const
{
    if (is_presence_container) return true;
    return non_broadcast.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ospfv3::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Performance::Performance()
    :
    monitor(std::make_shared<Native::Interface::TenGigabitEthernet::Performance::Monitor>())
{
    monitor->parent = this;

    yang_name = "performance"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Performance::~Performance()
{
}

bool Native::Interface::TenGigabitEthernet::Performance::has_data() const
{
    if (is_presence_container) return true;
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::TenGigabitEthernet::Performance::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Performance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ezpm:performance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Performance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Performance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::TenGigabitEthernet::Performance::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Performance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Performance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Performance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Performance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Performance::Monitor::Monitor()
    :
    context{YType::str, "context"}
{

    yang_name = "monitor"; yang_parent_name = "performance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Performance::Monitor::~Monitor()
{
}

bool Native::Interface::TenGigabitEthernet::Performance::Monitor::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Performance::Monitor::has_operation() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Performance::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Performance::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto context_name_datas = context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), context_name_datas.begin(), context_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Performance::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Performance::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Performance::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Performance::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Performance::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
        ,
    mobility(std::make_shared<Native::Interface::TenGigabitEthernet::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Lisp::~Lisp()
{
}

bool Native::Interface::TenGigabitEthernet::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::TenGigabitEthernet::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_subnet_mode.yfilter)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.yfilter)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::TenGigabitEthernet::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mobility != nullptr)
    {
        _children["mobility"] = mobility;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
        extended_subnet_mode.value_namespace = name_space;
        extended_subnet_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobility" || name == "extended-subnet-mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Lisp::Mobility::Mobility()
    :
    dynamic_eid(this, {"dynamic_eid_name"})
    , discover(std::make_shared<Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover>())
    , liveness(std::make_shared<Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness>())
{
    discover->parent = this;
    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::has_data() const
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

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::has_operation() const
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

std::string Native::Interface::TenGigabitEthernet::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Lisp::Mobility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-eid")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid>();
        ent_->parent = this;
        dynamic_eid.append(ent_);
        return ent_;
    }

    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Lisp::Mobility::get_children() const
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

void Native::Interface::TenGigabitEthernet::Lisp::Mobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Lisp::Mobility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-eid" || name == "discover" || name == "liveness")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"}
        ,
    nbr_proxy_reply(nullptr) // presence node
{

    yang_name = "dynamic-eid"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::has_data() const
{
    if (is_presence_container) return true;
    return dynamic_eid_name.is_set
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_data());
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_eid_name.yfilter)
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";
    ADD_KEY_TOKEN(dynamic_eid_name, "dynamic-eid-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.yfilter)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-proxy-reply")
    {
        if(nbr_proxy_reply == nullptr)
        {
            nbr_proxy_reply = std::make_shared<Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply>();
        }
        return nbr_proxy_reply;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nbr_proxy_reply != nullptr)
    {
        _children["nbr-proxy-reply"] = nbr_proxy_reply;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name = value;
        dynamic_eid_name.value_namespace = name_space;
        dynamic_eid_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-proxy-reply" || name == "dynamic-eid-name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::NbrProxyReply()
    :
    requests{YType::uint8, "requests"}
{

    yang_name = "nbr-proxy-reply"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::~NbrProxyReply()
{
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::has_data() const
{
    if (is_presence_container) return true;
    return requests.is_set;
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-proxy-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{

    yang_name = "discover"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover::has_data() const
{
    if (is_presence_container) return true;
    return arp.is_set;
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::Discover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{

    yang_name = "liveness"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness::has_data() const
{
    if (is_presence_container) return true;
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.yfilter)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Lisp::Mobility::Liveness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "ttl")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::SpanningTree::SpanningTree()
    :
    bpdufilter{YType::enumeration, "bpdufilter"},
    cost{YType::uint32, "cost"},
    guard{YType::enumeration, "guard"},
    link_type{YType::enumeration, "link-type"},
    port_priority{YType::uint8, "port-priority"}
        ,
    bpduguard(std::make_shared<Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard>())
    , portfast(nullptr) // presence node
    , vlan(this, {"vlan_ids"})
    , loopguard(std::make_shared<Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard>())
    , mst(std::make_shared<Native::Interface::TenGigabitEthernet::SpanningTree::Mst>())
{
    bpduguard->parent = this;
    loopguard->parent = this;
    mst->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return bpdufilter.is_set
	|| cost.is_set
	|| guard.is_set
	|| link_type.is_set
	|| port_priority.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data());
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bpdufilter.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(guard.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdufilter.is_set || is_set(bpdufilter.yfilter)) leaf_name_data.push_back(bpdufilter.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (guard.is_set || is_set(guard.yfilter)) leaf_name_data.push_back(guard.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Interface::TenGigabitEthernet::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::SpanningTree::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    if(child_yang_name == "loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::Interface::TenGigabitEthernet::SpanningTree::Mst>();
        }
        return mst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpduguard != nullptr)
    {
        _children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        _children["portfast"] = portfast;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(loopguard != nullptr)
    {
        _children["loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        _children["mst"] = mst;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter = value;
        bpdufilter.value_namespace = name_space;
        bpdufilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guard")
    {
        guard = value;
        guard.value_namespace = name_space;
        guard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "guard")
    {
        guard.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "vlan" || name == "loopguard" || name == "mst" || name == "bpdufilter" || name == "cost" || name == "guard" || name == "link-type" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard::Bpduguard()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| enable.is_set;
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "enable")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    trunk{YType::empty, "trunk"},
    edge{YType::empty, "edge"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Portfast::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| trunk.is_set
	|| edge.is_set;
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(edge.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "trunk" || name == "edge")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::SpanningTree::Vlan::Vlan()
    :
    vlan_ids{YType::str, "vlan-ids"},
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"}
{

    yang_name = "vlan"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::SpanningTree::Vlan::~Vlan()
{
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan_ids.is_set
	|| cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_ids.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(port_priority.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan_ids, "vlan-ids");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::SpanningTree::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_ids.is_set || is_set(vlan_ids.yfilter)) leaf_name_data.push_back(vlan_ids.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-ids")
    {
        vlan_ids = value;
        vlan_ids.value_namespace = name_space;
        vlan_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-ids")
    {
        vlan_ids.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-ids" || name == "cost" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "loopguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::SpanningTree::Mst::Mst()
    :
    pre_standard{YType::empty, "pre-standard"}
        ,
    mst_instance(this, {"instance"})
{

    yang_name = "mst"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::SpanningTree::Mst::~Mst()
{
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Mst::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mst_instance.len(); index++)
    {
        if(mst_instance[index]->has_data())
            return true;
    }
    return pre_standard.is_set;
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Mst::has_operation() const
{
    for (std::size_t index=0; index<mst_instance.len(); index++)
    {
        if(mst_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pre_standard.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::SpanningTree::Mst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_standard.is_set || is_set(pre_standard.yfilter)) leaf_name_data.push_back(pre_standard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mst-instance")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance>();
        ent_->parent = this;
        mst_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mst_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Mst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-standard")
    {
        pre_standard = value;
        pre_standard.value_namespace = name_space;
        pre_standard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Mst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-standard")
    {
        pre_standard.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Mst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst-instance" || name == "pre-standard")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance::MstInstance()
    :
    instance{YType::str, "instance"},
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"}
{

    yang_name = "mst-instance"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance::~MstInstance()
{
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance::has_data() const
{
    if (is_presence_container) return true;
    return instance.is_set
	|| cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(port_priority.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst-instance";
    ADD_KEY_TOKEN(instance, "instance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::SpanningTree::Mst::MstInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "cost" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mka::Mka()
    :
    policy(std::make_shared<Native::Interface::TenGigabitEthernet::Mka::Policy>())
    , pre_shared_key(std::make_shared<Native::Interface::TenGigabitEthernet::Mka::PreSharedKey>())
{
    policy->parent = this;
    pre_shared_key->parent = this;

    yang_name = "mka"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mka::~Mka()
{
}

bool Native::Interface::TenGigabitEthernet::Mka::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data());
}

bool Native::Interface::TenGigabitEthernet::Mka::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mka:mka";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mka::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::TenGigabitEthernet::Mka::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Interface::TenGigabitEthernet::Mka::PreSharedKey>();
        }
        return pre_shared_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mka::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(pre_shared_key != nullptr)
    {
        _children["pre-shared-key"] = pre_shared_key;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Mka::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Mka::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Mka::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "pre-shared-key")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mka::Policy::Policy()
    :
    name{YType::str, "name"}
{

    yang_name = "policy"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mka::Policy::~Policy()
{
}

bool Native::Interface::TenGigabitEthernet::Mka::Policy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mka::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mka::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mka::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mka::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mka::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mka::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mka::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mka::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::PreSharedKey()
    :
    key_chain(std::make_shared<Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::~PreSharedKey()
{
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::has_data() const
{
    if (is_presence_container) return true;
    return (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::~KeyChain()
{
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Umbrella::Umbrella()
    :
    out{YType::empty, "out"},
    in{YType::str, "in"}
{

    yang_name = "umbrella"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Umbrella::~Umbrella()
{
}

bool Native::Interface::TenGigabitEthernet::Umbrella::has_data() const
{
    if (is_presence_container) return true;
    return out.is_set
	|| in.is_set;
}

bool Native::Interface::TenGigabitEthernet::Umbrella::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Umbrella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-umbrella:umbrella";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Umbrella::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Umbrella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Umbrella::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Umbrella::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Umbrella::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Umbrella::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    sequence{YType::enumeration, "sequence"},
    pw_class{YType::str, "pw-class"}
{

    yang_name = "xconnect"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Xconnect::~Xconnect()
{
}

bool Native::Interface::TenGigabitEthernet::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| sequence.is_set
	|| pw_class.is_set;
}

bool Native::Interface::TenGigabitEthernet::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(pw_class.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "sequence" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Evpn::Evpn()
    :
    ethernet_segment(this, {"es_value"})
{

    yang_name = "evpn"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Evpn::~Evpn()
{
}

bool Native::Interface::TenGigabitEthernet::Evpn::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Evpn::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment>();
        ent_->parent = this;
        ethernet_segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::EthernetSegment()
    :
    es_value{YType::uint16, "es-value"},
    sytem_mac{YType::str, "sytem-mac"}
        ,
    df_election(std::make_shared<Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection>())
    , redundancy(std::make_shared<Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy>())
{
    df_election->parent = this;
    redundancy->parent = this;

    yang_name = "ethernet-segment"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::~EthernetSegment()
{
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::has_data() const
{
    if (is_presence_container) return true;
    return es_value.is_set
	|| sytem_mac.is_set
	|| (df_election !=  nullptr && df_election->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(es_value.yfilter)
	|| ydk::is_set(sytem_mac.yfilter)
	|| (df_election !=  nullptr && df_election->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";
    ADD_KEY_TOKEN(es_value, "es-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (es_value.is_set || is_set(es_value.yfilter)) leaf_name_data.push_back(es_value.get_name_leafdata());
    if (sytem_mac.is_set || is_set(sytem_mac.yfilter)) leaf_name_data.push_back(sytem_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "df-election")
    {
        if(df_election == nullptr)
        {
            df_election = std::make_shared<Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection>();
        }
        return df_election;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(df_election != nullptr)
    {
        _children["df-election"] = df_election;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "es-value")
    {
        es_value = value;
        es_value.value_namespace = name_space;
        es_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sytem-mac")
    {
        sytem_mac = value;
        sytem_mac.value_namespace = name_space;
        sytem_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "es-value")
    {
        es_value.yfilter = yfilter;
    }
    if(value_path == "sytem-mac")
    {
        sytem_mac.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-election" || name == "redundancy" || name == "es-value" || name == "sytem-mac")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::DfElection()
    :
    wait_time{YType::uint8, "wait-time"}
{

    yang_name = "df-election"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::~DfElection()
{
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::has_data() const
{
    if (is_presence_container) return true;
    return wait_time.is_set;
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "df-election";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-time")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::Redundancy()
    :
    all_active{YType::empty, "all-active"},
    single_active{YType::empty, "single-active"}
{

    yang_name = "redundancy"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::~Redundancy()
{
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return all_active.is_set
	|| single_active.is_set;
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_active.yfilter)
	|| ydk::is_set(single_active.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_active.is_set || is_set(all_active.yfilter)) leaf_name_data.push_back(all_active.get_name_leafdata());
    if (single_active.is_set || is_set(single_active.yfilter)) leaf_name_data.push_back(single_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-active")
    {
        all_active = value;
        all_active.value_namespace = name_space;
        all_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-active")
    {
        single_active = value;
        single_active.value_namespace = name_space;
        single_active.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-active")
    {
        all_active.yfilter = yfilter;
    }
    if(value_path == "single-active")
    {
        single_active.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-active" || name == "single-active")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Dot1x::Dot1x()
    :
    credentials{YType::str, "credentials"},
    max_reauth_req{YType::uint8, "max-reauth-req"},
    max_req{YType::uint8, "max-req"},
    max_start{YType::uint8, "max-start"},
    pae{YType::enumeration, "pae"}
        ,
    authenticator(std::make_shared<Native::Interface::TenGigabitEthernet::Dot1x::Authenticator>())
    , supplicant(std::make_shared<Native::Interface::TenGigabitEthernet::Dot1x::Supplicant>())
    , timeout(std::make_shared<Native::Interface::TenGigabitEthernet::Dot1x::Timeout>())
{
    authenticator->parent = this;
    supplicant->parent = this;
    timeout->parent = this;

    yang_name = "dot1x"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Dot1x::~Dot1x()
{
}

bool Native::Interface::TenGigabitEthernet::Dot1x::has_data() const
{
    if (is_presence_container) return true;
    return credentials.is_set
	|| max_reauth_req.is_set
	|| max_req.is_set
	|| max_start.is_set
	|| pae.is_set
	|| (authenticator !=  nullptr && authenticator->has_data())
	|| (supplicant !=  nullptr && supplicant->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Interface::TenGigabitEthernet::Dot1x::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credentials.yfilter)
	|| ydk::is_set(max_reauth_req.yfilter)
	|| ydk::is_set(max_req.yfilter)
	|| ydk::is_set(max_start.yfilter)
	|| ydk::is_set(pae.yfilter)
	|| (authenticator !=  nullptr && authenticator->has_operation())
	|| (supplicant !=  nullptr && supplicant->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Dot1x::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Dot1x::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credentials.is_set || is_set(credentials.yfilter)) leaf_name_data.push_back(credentials.get_name_leafdata());
    if (max_reauth_req.is_set || is_set(max_reauth_req.yfilter)) leaf_name_data.push_back(max_reauth_req.get_name_leafdata());
    if (max_req.is_set || is_set(max_req.yfilter)) leaf_name_data.push_back(max_req.get_name_leafdata());
    if (max_start.is_set || is_set(max_start.yfilter)) leaf_name_data.push_back(max_start.get_name_leafdata());
    if (pae.is_set || is_set(pae.yfilter)) leaf_name_data.push_back(pae.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Dot1x::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authenticator")
    {
        if(authenticator == nullptr)
        {
            authenticator = std::make_shared<Native::Interface::TenGigabitEthernet::Dot1x::Authenticator>();
        }
        return authenticator;
    }

    if(child_yang_name == "supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Native::Interface::TenGigabitEthernet::Dot1x::Supplicant>();
        }
        return supplicant;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Interface::TenGigabitEthernet::Dot1x::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Dot1x::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authenticator != nullptr)
    {
        _children["authenticator"] = authenticator;
    }

    if(supplicant != nullptr)
    {
        _children["supplicant"] = supplicant;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Dot1x::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "credentials")
    {
        credentials = value;
        credentials.value_namespace = name_space;
        credentials.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reauth-req")
    {
        max_reauth_req = value;
        max_reauth_req.value_namespace = name_space;
        max_reauth_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-req")
    {
        max_req = value;
        max_req.value_namespace = name_space;
        max_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-start")
    {
        max_start = value;
        max_start.value_namespace = name_space;
        max_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pae")
    {
        pae = value;
        pae.value_namespace = name_space;
        pae.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Dot1x::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "credentials")
    {
        credentials.yfilter = yfilter;
    }
    if(value_path == "max-reauth-req")
    {
        max_reauth_req.yfilter = yfilter;
    }
    if(value_path == "max-req")
    {
        max_req.yfilter = yfilter;
    }
    if(value_path == "max-start")
    {
        max_start.yfilter = yfilter;
    }
    if(value_path == "pae")
    {
        pae.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Dot1x::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authenticator" || name == "supplicant" || name == "timeout" || name == "credentials" || name == "max-reauth-req" || name == "max-req" || name == "max-start" || name == "pae")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Authenticator()
    :
    eap(std::make_shared<Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap>())
{
    eap->parent = this;

    yang_name = "authenticator"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::~Authenticator()
{
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::has_data() const
{
    if (is_presence_container) return true;
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::has_operation() const
{
    return is_set(yfilter)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap::Eap()
    :
    profile{YType::str, "profile"}
{

    yang_name = "eap"; yang_parent_name = "authenticator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap::~Eap()
{
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Authenticator::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Supplicant()
    :
    eap(std::make_shared<Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap>())
{
    eap->parent = this;

    yang_name = "supplicant"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::~Supplicant()
{
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::has_data() const
{
    if (is_presence_container) return true;
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::has_operation() const
{
    return is_set(yfilter)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supplicant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap::Eap()
    :
    profile{YType::str, "profile"}
{

    yang_name = "eap"; yang_parent_name = "supplicant"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap::~Eap()
{
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Supplicant::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Dot1x::Timeout::Timeout()
    :
    auth_period{YType::uint16, "auth-period"},
    held_period{YType::uint16, "held-period"},
    quiet_period{YType::uint16, "quiet-period"},
    ratelimit_period{YType::uint16, "ratelimit-period"},
    server_timeout{YType::uint16, "server-timeout"},
    start_period{YType::uint16, "start-period"},
    supp_timeout{YType::uint16, "supp-timeout"},
    tx_period{YType::uint16, "tx-period"}
{

    yang_name = "timeout"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Dot1x::Timeout::~Timeout()
{
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return auth_period.is_set
	|| held_period.is_set
	|| quiet_period.is_set
	|| ratelimit_period.is_set
	|| server_timeout.is_set
	|| start_period.is_set
	|| supp_timeout.is_set
	|| tx_period.is_set;
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_period.yfilter)
	|| ydk::is_set(held_period.yfilter)
	|| ydk::is_set(quiet_period.yfilter)
	|| ydk::is_set(ratelimit_period.yfilter)
	|| ydk::is_set(server_timeout.yfilter)
	|| ydk::is_set(start_period.yfilter)
	|| ydk::is_set(supp_timeout.yfilter)
	|| ydk::is_set(tx_period.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Dot1x::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Dot1x::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_period.is_set || is_set(auth_period.yfilter)) leaf_name_data.push_back(auth_period.get_name_leafdata());
    if (held_period.is_set || is_set(held_period.yfilter)) leaf_name_data.push_back(held_period.get_name_leafdata());
    if (quiet_period.is_set || is_set(quiet_period.yfilter)) leaf_name_data.push_back(quiet_period.get_name_leafdata());
    if (ratelimit_period.is_set || is_set(ratelimit_period.yfilter)) leaf_name_data.push_back(ratelimit_period.get_name_leafdata());
    if (server_timeout.is_set || is_set(server_timeout.yfilter)) leaf_name_data.push_back(server_timeout.get_name_leafdata());
    if (start_period.is_set || is_set(start_period.yfilter)) leaf_name_data.push_back(start_period.get_name_leafdata());
    if (supp_timeout.is_set || is_set(supp_timeout.yfilter)) leaf_name_data.push_back(supp_timeout.get_name_leafdata());
    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Dot1x::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Dot1x::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Dot1x::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-period")
    {
        auth_period = value;
        auth_period.value_namespace = name_space;
        auth_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-period")
    {
        held_period = value;
        held_period.value_namespace = name_space;
        held_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quiet-period")
    {
        quiet_period = value;
        quiet_period.value_namespace = name_space;
        quiet_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit-period")
    {
        ratelimit_period = value;
        ratelimit_period.value_namespace = name_space;
        ratelimit_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-timeout")
    {
        server_timeout = value;
        server_timeout.value_namespace = name_space;
        server_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-period")
    {
        start_period = value;
        start_period.value_namespace = name_space;
        start_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supp-timeout")
    {
        supp_timeout = value;
        supp_timeout.value_namespace = name_space;
        supp_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Dot1x::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-period")
    {
        auth_period.yfilter = yfilter;
    }
    if(value_path == "held-period")
    {
        held_period.yfilter = yfilter;
    }
    if(value_path == "quiet-period")
    {
        quiet_period.yfilter = yfilter;
    }
    if(value_path == "ratelimit-period")
    {
        ratelimit_period.yfilter = yfilter;
    }
    if(value_path == "server-timeout")
    {
        server_timeout.yfilter = yfilter;
    }
    if(value_path == "start-period")
    {
        start_period.yfilter = yfilter;
    }
    if(value_path == "supp-timeout")
    {
        supp_timeout.yfilter = yfilter;
    }
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Dot1x::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-period" || name == "held-period" || name == "quiet-period" || name == "ratelimit-period" || name == "server-timeout" || name == "start-period" || name == "supp-timeout" || name == "tx-period")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Crypto::Crypto()
    :
    map(std::make_shared<Native::Interface::TenGigabitEthernet::Crypto::Map>())
    , ipsec(std::make_shared<Native::Interface::TenGigabitEthernet::Crypto::Ipsec>())
{
    map->parent = this;
    ipsec->parent = this;

    yang_name = "crypto"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Crypto::~Crypto()
{
}

bool Native::Interface::TenGigabitEthernet::Crypto::has_data() const
{
    if (is_presence_container) return true;
    return (map !=  nullptr && map->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::TenGigabitEthernet::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::TenGigabitEthernet::Crypto::Map>();
        }
        return map;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::TenGigabitEthernet::Crypto::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["map"] = map;
    }

    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "ipsec")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Crypto::Map::Map()
    :
    tag{YType::str, "tag"},
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"}
{

    yang_name = "map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Crypto::Map::~Map()
{
}

bool Native::Interface::TenGigabitEthernet::Crypto::Map::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| redundancy.is_set
	|| stateful.is_set;
}

bool Native::Interface::TenGigabitEthernet::Crypto::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Crypto::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Crypto::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Crypto::Map::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Crypto::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "redundancy" || name == "stateful")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::TenGigabitEthernet::Crypto::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::TenGigabitEthernet::Crypto::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "fragmentation")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Lldp::Lldp()
    :
    receive{YType::boolean, "receive"},
    transmit{YType::boolean, "transmit"}
{

    yang_name = "lldp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Lldp::~Lldp()
{
}

bool Native::Interface::TenGigabitEthernet::Lldp::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::TenGigabitEthernet::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lldp:lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "transmit")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::TenGigabitEthernet::ZoneMember::has_data() const
{
    if (is_presence_container) return true;
    return security.is_set;
}

bool Native::Interface::TenGigabitEthernet::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::Vrrp()
    :
    vrrp_group(this, {"group_id"})
    , vrrp_group_v2(this, {"group_id"})
    , delay(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::Delay>())
{
    delay->parent = this;

    yang_name = "vrrp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::~Vrrp()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrrp_group.len(); index++)
    {
        if(vrrp_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrrp_group_v2.len(); index++)
    {
        if(vrrp_group_v2[index]->has_data())
            return true;
    }
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<vrrp_group.len(); index++)
    {
        if(vrrp_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrrp_group_v2.len(); index++)
    {
        if(vrrp_group_v2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vrrp:vrrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrrp-group")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup>();
        ent_->parent = this;
        vrrp_group.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrrp-group-v2")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2>();
        ent_->parent = this;
        vrrp_group_v2.append(ent_);
        return ent_;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrrp_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrrp_group_v2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp-group" || name == "vrrp-group-v2" || name == "delay")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::VrrpGroup()
    :
    group_id{YType::uint8, "group-id"}
        ,
    address_family(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "vrrp-group"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::~VrrpGroup()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| (address_family !=  nullptr && address_family->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "group-id")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
    , ipv6(nullptr) // presence node
{

    yang_name = "address-family"; yang_parent_name = "vrrp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::~AddressFamily()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Ipv4()
    :
    vrrpv2{YType::empty, "vrrpv2"},
    description{YType::str, "description"},
    match_address{YType::empty, "match-address"},
    priority{YType::uint8, "priority"},
    shutdown{YType::empty, "shutdown"}
        ,
    address(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address>())
    , preempt_config(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig>())
    , preempt(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt>())
    , timers(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers>())
    , track(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track>())
    , vrrs(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs>())
{
    address->parent = this;
    preempt_config->parent = this;
    preempt->parent = this;
    timers->parent = this;
    track->parent = this;
    vrrs->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return vrrpv2.is_set
	|| description.is_set
	|| match_address.is_set
	|| priority.is_set
	|| shutdown.is_set
	|| (address !=  nullptr && address->has_data())
	|| (preempt_config !=  nullptr && preempt_config->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (vrrs !=  nullptr && vrrs->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrrpv2.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(match_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (preempt_config !=  nullptr && preempt_config->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (vrrs !=  nullptr && vrrs->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrrpv2.is_set || is_set(vrrpv2.yfilter)) leaf_name_data.push_back(vrrpv2.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (match_address.is_set || is_set(match_address.yfilter)) leaf_name_data.push_back(match_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address>();
        }
        return address;
    }

    if(child_yang_name == "preempt-config")
    {
        if(preempt_config == nullptr)
        {
            preempt_config = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig>();
        }
        return preempt_config;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track>();
        }
        return track;
    }

    if(child_yang_name == "vrrs")
    {
        if(vrrs == nullptr)
        {
            vrrs = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs>();
        }
        return vrrs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(preempt_config != nullptr)
    {
        _children["preempt-config"] = preempt_config;
    }

    if(preempt != nullptr)
    {
        _children["preempt"] = preempt;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    if(vrrs != nullptr)
    {
        _children["vrrs"] = vrrs;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrrpv2")
    {
        vrrpv2 = value;
        vrrpv2.value_namespace = name_space;
        vrrpv2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-address")
    {
        match_address = value;
        match_address.value_namespace = name_space;
        match_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrrpv2")
    {
        vrrpv2.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "match-address")
    {
        match_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "preempt-config" || name == "preempt" || name == "timers" || name == "track" || name == "vrrs" || name == "vrrpv2" || name == "description" || name == "match-address" || name == "priority" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Address()
    :
    primary(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary>())
    , secondary(this, {"address"})
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::~Address()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    primary{YType::empty, "primary"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::~Primary()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| primary.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(primary.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "primary")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::~Secondary()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::PreemptConfig()
    :
    preempt{YType::boolean, "preempt"}
{

    yang_name = "preempt-config"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::~PreemptConfig()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::has_data() const
{
    if (is_presence_container) return true;
    return preempt.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preempt.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempt")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::~Preempt()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::~Delay()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::Timers()
    :
    advertise{YType::uint16, "advertise"}
{

    yang_name = "timers"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::~Timers()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::has_data() const
{
    if (is_presence_container) return true;
    return advertise.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Track()
    :
    event(this, {"object_id"})
{

    yang_name = "track"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::~Track()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::has_operation() const
{
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event>();
        ent_->parent = this;
        event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::Event()
    :
    object_id{YType::uint16, "object-id"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "event"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::~Event()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    ADD_KEY_TOKEN(object_id, "object-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-id" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::Vrrs()
    :
    leader{YType::str, "leader"}
{

    yang_name = "vrrs"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::~Vrrs()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::has_data() const
{
    if (is_presence_container) return true;
    return leader.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(leader.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (leader.is_set || is_set(leader.yfilter)) leaf_name_data.push_back(leader.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "leader")
    {
        leader = value;
        leader.value_namespace = name_space;
        leader.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "leader")
    {
        leader.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "leader")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Ipv6()
    :
    description{YType::str, "description"},
    match_address{YType::empty, "match-address"},
    priority{YType::uint8, "priority"},
    shutdown{YType::empty, "shutdown"}
        ,
    address(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address>())
    , preempt_config(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig>())
    , preempt(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt>())
    , timers(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers>())
    , track(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track>())
    , vrrs(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs>())
{
    address->parent = this;
    preempt_config->parent = this;
    preempt->parent = this;
    timers->parent = this;
    track->parent = this;
    vrrs->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::~Ipv6()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| match_address.is_set
	|| priority.is_set
	|| shutdown.is_set
	|| (address !=  nullptr && address->has_data())
	|| (preempt_config !=  nullptr && preempt_config->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (vrrs !=  nullptr && vrrs->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(match_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (preempt_config !=  nullptr && preempt_config->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (vrrs !=  nullptr && vrrs->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (match_address.is_set || is_set(match_address.yfilter)) leaf_name_data.push_back(match_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "preempt-config")
    {
        if(preempt_config == nullptr)
        {
            preempt_config = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig>();
        }
        return preempt_config;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track>();
        }
        return track;
    }

    if(child_yang_name == "vrrs")
    {
        if(vrrs == nullptr)
        {
            vrrs = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs>();
        }
        return vrrs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(preempt_config != nullptr)
    {
        _children["preempt-config"] = preempt_config;
    }

    if(preempt != nullptr)
    {
        _children["preempt"] = preempt;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    if(vrrs != nullptr)
    {
        _children["vrrs"] = vrrs;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-address")
    {
        match_address = value;
        match_address.value_namespace = name_space;
        match_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "match-address")
    {
        match_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "preempt-config" || name == "preempt" || name == "timers" || name == "track" || name == "vrrs" || name == "description" || name == "match-address" || name == "priority" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Address()
    :
    primary(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary>())
    , ipv6_prefix(this, {"prefix"})
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::~Address()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_prefix.len(); index++)
    {
        if(ipv6_prefix[index]->has_data())
            return true;
    }
    return (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv6_prefix.len(); index++)
    {
        if(ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "ipv6-prefix")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix>();
        ent_->parent = this;
        ipv6_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    count_ = 0;
    for (auto ent_ : ipv6_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "ipv6-prefix")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::Primary()
    :
    ipv6_link_local{YType::str, "ipv6-link-local"},
    primary{YType::empty, "primary"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::~Primary()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_link_local.is_set
	|| primary.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_link_local.yfilter)
	|| ydk::is_set(primary.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_link_local.is_set || is_set(ipv6_link_local.yfilter)) leaf_name_data.push_back(ipv6_link_local.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-link-local")
    {
        ipv6_link_local = value;
        ipv6_link_local.value_namespace = name_space;
        ipv6_link_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-link-local")
    {
        ipv6_link_local.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-link-local" || name == "primary")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::Ipv6Prefix()
    :
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6-prefix"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::~Ipv6Prefix()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::PreemptConfig()
    :
    preempt{YType::boolean, "preempt"}
{

    yang_name = "preempt-config"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::~PreemptConfig()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::has_data() const
{
    if (is_presence_container) return true;
    return preempt.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preempt.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempt")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::~Preempt()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::~Delay()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::Timers()
    :
    advertise{YType::uint16, "advertise"}
{

    yang_name = "timers"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::~Timers()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::has_data() const
{
    if (is_presence_container) return true;
    return advertise.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Track()
    :
    event(this, {"object_id"})
{

    yang_name = "track"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::~Track()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::has_operation() const
{
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event>();
        ent_->parent = this;
        event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::Event()
    :
    object_id{YType::uint16, "object-id"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "event"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::~Event()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    ADD_KEY_TOKEN(object_id, "object-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-id" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::Vrrs()
    :
    leader{YType::str, "leader"}
{

    yang_name = "vrrs"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::~Vrrs()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::has_data() const
{
    if (is_presence_container) return true;
    return leader.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(leader.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (leader.is_set || is_set(leader.yfilter)) leaf_name_data.push_back(leader.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "leader")
    {
        leader = value;
        leader.value_namespace = name_space;
        leader.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "leader")
    {
        leader.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "leader")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::VrrpGroupV2()
    :
    group_id{YType::uint8, "group-id"},
    description{YType::str, "description"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"},
    shutdown{YType::empty, "shutdown"}
        ,
    authentication(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication>())
    , ip(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip>())
    , preempt_config(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig>())
    , preempt(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt>())
    , timers(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers>())
    , track(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track>())
{
    authentication->parent = this;
    ip->parent = this;
    preempt_config->parent = this;
    preempt->parent = this;
    timers->parent = this;
    track->parent = this;

    yang_name = "vrrp-group-v2"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::~VrrpGroupV2()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| description.is_set
	|| name.is_set
	|| priority.is_set
	|| shutdown.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (preempt_config !=  nullptr && preempt_config->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (track !=  nullptr && track->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt_config !=  nullptr && preempt_config->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (track !=  nullptr && track->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group-v2";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt-config")
    {
        if(preempt_config == nullptr)
        {
            preempt_config = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig>();
        }
        return preempt_config;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track>();
        }
        return track;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(preempt_config != nullptr)
    {
        _children["preempt-config"] = preempt_config;
    }

    if(preempt != nullptr)
    {
        _children["preempt"] = preempt;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "ip" || name == "preempt-config" || name == "preempt" || name == "timers" || name == "track" || name == "group-id" || name == "description" || name == "name" || name == "priority" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication::Authentication()
    :
    text{YType::str, "text"}
{

    yang_name = "authentication"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication::~Authentication()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return text.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "text")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Ip()
    :
    primary(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary>())
    , secondary(this, {"address"})
{
    primary->parent = this;

    yang_name = "ip"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::~Ip()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::Primary()
    :
    address{YType::str, "address"}
{

    yang_name = "primary"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::~Primary()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::Secondary()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::~Secondary()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::PreemptConfig()
    :
    preempt{YType::boolean, "preempt"}
{

    yang_name = "preempt-config"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::~PreemptConfig()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::has_data() const
{
    if (is_presence_container) return true;
    return preempt.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preempt.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempt")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::~Preempt()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::~Delay()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Timers()
    :
    learn{YType::empty, "learn"}
        ,
    advertise(std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise>())
{
    advertise->parent = this;

    yang_name = "timers"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::~Timers()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::has_data() const
{
    if (is_presence_container) return true;
    return learn.is_set
	|| (advertise !=  nullptr && advertise->has_data());
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learn.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learn.is_set || is_set(learn.yfilter)) leaf_name_data.push_back(learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise>();
        }
        return advertise;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertise != nullptr)
    {
        _children["advertise"] = advertise;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learn")
    {
        learn = value;
        learn.value_namespace = name_space;
        learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learn")
    {
        learn.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "learn")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::Advertise()
    :
    interval{YType::uint8, "interval"},
    msec{YType::uint16, "msec"}
{

    yang_name = "advertise"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::~Advertise()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| msec.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "msec")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Track()
    :
    event(this, {"object_id"})
{

    yang_name = "track"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::~Track()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::has_operation() const
{
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event>();
        ent_->parent = this;
        event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::Event()
    :
    object_id{YType::uint16, "object-id"},
    decrement{YType::uint8, "decrement"}
{

    yang_name = "event"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::~Event()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| decrement.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(decrement.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    ADD_KEY_TOKEN(object_id, "object-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-id" || name == "decrement")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Vrrp::Delay::Delay()
    :
    reload{YType::uint16, "reload"},
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Vrrp::Delay::~Delay()
{
}

bool Native::Interface::TenGigabitEthernet::Vrrp::Delay::has_data() const
{
    if (is_presence_container) return true;
    return reload.is_set
	|| minimum.is_set;
}

bool Native::Interface::TenGigabitEthernet::Vrrp::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Vrrp::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Vrrp::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Vrrp::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Vrrp::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Vrrp::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Vrrp::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Vrrp::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload" || name == "minimum")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::FabricDomain::FabricDomain()
    :
    iwan_fabric(std::make_shared<Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric>())
{
    iwan_fabric->parent = this;

    yang_name = "fabric-domain"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::FabricDomain::~FabricDomain()
{
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::has_data() const
{
    if (is_presence_container) return true;
    return (iwan_fabric !=  nullptr && iwan_fabric->has_data());
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::has_operation() const
{
    return is_set(yfilter)
	|| (iwan_fabric !=  nullptr && iwan_fabric->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::FabricDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-iwanfabric:fabric-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::FabricDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::FabricDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iwan-fabric")
    {
        if(iwan_fabric == nullptr)
        {
            iwan_fabric = std::make_shared<Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric>();
        }
        return iwan_fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::FabricDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iwan_fabric != nullptr)
    {
        _children["iwan-fabric"] = iwan_fabric;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::FabricDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::FabricDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iwan-fabric")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::IwanFabric()
    :
    word(this, {"word"})
{

    yang_name = "iwan-fabric"; yang_parent_name = "fabric-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::~IwanFabric()
{
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::has_operation() const
{
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iwan-fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word>();
        ent_->parent = this;
        word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::Word()
    :
    word{YType::str, "word"},
    interface_id{YType::uint8, "interface-id"}
{

    yang_name = "word"; yang_parent_name = "iwan-fabric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::~Word()
{
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| interface_id.is_set;
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "interface-id")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::AnalysisModule::AnalysisModule()
    :
    monitoring(std::make_shared<Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring>())
{
    monitoring->parent = this;

    yang_name = "analysis-module"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::AnalysisModule::~AnalysisModule()
{
}

bool Native::Interface::TenGigabitEthernet::AnalysisModule::has_data() const
{
    if (is_presence_container) return true;
    return (monitoring !=  nullptr && monitoring->has_data());
}

bool Native::Interface::TenGigabitEthernet::AnalysisModule::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring !=  nullptr && monitoring->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::AnalysisModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nam:analysis-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::AnalysisModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::AnalysisModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring")
    {
        if(monitoring == nullptr)
        {
            monitoring = std::make_shared<Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring>();
        }
        return monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::AnalysisModule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitoring != nullptr)
    {
        _children["monitoring"] = monitoring;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::AnalysisModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::AnalysisModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::AnalysisModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring::Monitoring()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "monitoring"; yang_parent_name = "analysis-module"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring::~Monitoring()
{
}

bool Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::AnalysisModule::Monitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Cts()
    :
    manual(nullptr) // presence node
    , role_based(std::make_shared<Native::Interface::TenGigabitEthernet::Cts::RoleBased>())
{
    role_based->parent = this;

    yang_name = "cts"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Cts::~Cts()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::has_data() const
{
    if (is_presence_container) return true;
    return (manual !=  nullptr && manual->has_data())
	|| (role_based !=  nullptr && role_based->has_data());
}

bool Native::Interface::TenGigabitEthernet::Cts::has_operation() const
{
    return is_set(yfilter)
	|| (manual !=  nullptr && manual->has_operation())
	|| (role_based !=  nullptr && role_based->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual>();
        }
        return manual;
    }

    if(child_yang_name == "role-based")
    {
        if(role_based == nullptr)
        {
            role_based = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::RoleBased>();
        }
        return role_based;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::get_children() const
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

void Native::Interface::TenGigabitEthernet::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual" || name == "role-based")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Manual()
    :
    policy(std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Policy>())
    , sap(std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Sap>())
    , propagate(std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate>())
{
    policy->parent = this;
    sap->parent = this;
    propagate->parent = this;

    yang_name = "manual"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::~Manual()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data())
	|| (sap !=  nullptr && sap->has_data())
	|| (propagate !=  nullptr && propagate->has_data());
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (sap !=  nullptr && sap->has_operation())
	|| (propagate !=  nullptr && propagate->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Cts::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::Manual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "sap")
    {
        if(sap == nullptr)
        {
            sap = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Sap>();
        }
        return sap;
    }

    if(child_yang_name == "propagate")
    {
        if(propagate == nullptr)
        {
            propagate = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate>();
        }
        return propagate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::Manual::get_children() const
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

void Native::Interface::TenGigabitEthernet::Cts::Manual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "sap" || name == "propagate")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Policy()
    :
    static_(std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static>())
{
    static_->parent = this;

    yang_name = "policy"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::~Policy()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static::Static()
    :
    sgt{YType::uint16, "sgt"},
    trusted{YType::empty, "trusted"}
{

    yang_name = "static"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static::~Static()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static::has_data() const
{
    if (is_presence_container) return true;
    return sgt.is_set
	|| trusted.is_set;
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Policy::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt" || name == "trusted")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Sap()
    :
    pmk(this, {"word"})
{

    yang_name = "sap"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::~Sap()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pmk.len(); index++)
    {
        if(pmk[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::has_operation() const
{
    for (std::size_t index=0; index<pmk.len(); index++)
    {
        if(pmk[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmk")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk>();
        ent_->parent = this;
        pmk.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::get_children() const
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

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmk")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::Pmk()
    :
    word{YType::str, "word"}
        ,
    mode_list(std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList>())
{
    mode_list->parent = this;

    yang_name = "pmk"; yang_parent_name = "sap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::~Pmk()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| (mode_list !=  nullptr && mode_list->has_data());
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (mode_list !=  nullptr && mode_list->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-list")
    {
        if(mode_list == nullptr)
        {
            mode_list = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList>();
        }
        return mode_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode_list != nullptr)
    {
        _children["mode-list"] = mode_list;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-list" || name == "word")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::ModeList()
    :
    gcm_encrypt(nullptr) // presence node
    , no_encap(nullptr) // presence node
{

    yang_name = "mode-list"; yang_parent_name = "pmk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::~ModeList()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::has_data() const
{
    if (is_presence_container) return true;
    return (gcm_encrypt !=  nullptr && gcm_encrypt->has_data())
	|| (no_encap !=  nullptr && no_encap->has_data());
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::has_operation() const
{
    return is_set(yfilter)
	|| (gcm_encrypt !=  nullptr && gcm_encrypt->has_operation())
	|| (no_encap !=  nullptr && no_encap->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gcm-encrypt")
    {
        if(gcm_encrypt == nullptr)
        {
            gcm_encrypt = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt>();
        }
        return gcm_encrypt;
    }

    if(child_yang_name == "no-encap")
    {
        if(no_encap == nullptr)
        {
            no_encap = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap>();
        }
        return no_encap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::get_children() const
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

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt" || name == "no-encap")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::GcmEncrypt()
    :
    gmac(nullptr) // presence node
{

    yang_name = "gcm-encrypt"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::~GcmEncrypt()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_data() const
{
    if (is_presence_container) return true;
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcm-encrypt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gmac != nullptr)
    {
        _children["gmac"] = gmac;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::Gmac()
    :
    null{YType::empty, "null"}
{

    yang_name = "gmac"; yang_parent_name = "gcm-encrypt"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::~Gmac()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_data() const
{
    if (is_presence_container) return true;
    return null.is_set;
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::NoEncap()
    :
    gmac(nullptr) // presence node
{

    yang_name = "no-encap"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::~NoEncap()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_data() const
{
    if (is_presence_container) return true;
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gmac != nullptr)
    {
        _children["gmac"] = gmac;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::Gmac()
    :
    gcm_encrypt{YType::empty, "gcm-encrypt"}
{

    yang_name = "gmac"; yang_parent_name = "no-encap"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::~Gmac()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_data() const
{
    if (is_presence_container) return true;
    return gcm_encrypt.is_set;
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gcm_encrypt.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_encrypt.is_set || is_set(gcm_encrypt.yfilter)) leaf_name_data.push_back(gcm_encrypt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt = value;
        gcm_encrypt.value_namespace = name_space;
        gcm_encrypt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate::Propagate()
    :
    sgt{YType::boolean, "sgt"}
{

    yang_name = "propagate"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate::~Propagate()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate::has_data() const
{
    if (is_presence_container) return true;
    return sgt.is_set;
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Cts::Manual::Propagate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::RoleBased::RoleBased()
    :
    sgt_cache{YType::enumeration, "sgt-cache"},
    enforcement{YType::empty, "enforcement"}
        ,
    sgt_map(std::make_shared<Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap>())
{
    sgt_map->parent = this;

    yang_name = "role-based"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Cts::RoleBased::~RoleBased()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::RoleBased::has_data() const
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

bool Native::Interface::TenGigabitEthernet::Cts::RoleBased::has_operation() const
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

std::string Native::Interface::TenGigabitEthernet::Cts::RoleBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role-based";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::RoleBased::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enforcement.is_set || is_set(enforcement.yfilter)) leaf_name_data.push_back(enforcement.get_name_leafdata());

    auto sgt_cache_name_datas = sgt_cache.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sgt_cache_name_datas.begin(), sgt_cache_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sgt-map")
    {
        if(sgt_map == nullptr)
        {
            sgt_map = std::make_shared<Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap>();
        }
        return sgt_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sgt_map != nullptr)
    {
        _children["sgt-map"] = sgt_map;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Cts::RoleBased::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Cts::RoleBased::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Cts::RoleBased::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt-map" || name == "sgt-cache" || name == "enforcement")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap::SgtMap()
    :
    security_group{YType::str, "security-group"},
    sgt{YType::uint16, "sgt"}
{

    yang_name = "sgt-map"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap::~SgtMap()
{
}

bool Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap::has_data() const
{
    if (is_presence_container) return true;
    return security_group.is_set
	|| sgt.is_set;
}

bool Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security_group.yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgt-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security_group.is_set || is_set(security_group.yfilter)) leaf_name_data.push_back(security_group.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group" || name == "sgt")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Udld::Udld()
    :
    port(nullptr) // presence node
{

    yang_name = "udld"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Udld::~Udld()
{
}

bool Native::Interface::TenGigabitEthernet::Udld::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::TenGigabitEthernet::Udld::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:udld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Udld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::TenGigabitEthernet::Udld::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Udld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Udld::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Udld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Udld::Port::Port()
    :
    aggressive{YType::empty, "aggressive"},
    disable{YType::empty, "disable"}
{

    yang_name = "port"; yang_parent_name = "udld"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Udld::Port::~Port()
{
}

bool Native::Interface::TenGigabitEthernet::Udld::Port::has_data() const
{
    if (is_presence_container) return true;
    return aggressive.is_set
	|| disable.is_set;
}

bool Native::Interface::TenGigabitEthernet::Udld::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Udld::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Udld::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Udld::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Udld::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Udld::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Udld::Port::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Udld::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive" || name == "disable")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cdp::Cdp()
    :
    enable{YType::boolean, "enable"}
        ,
    tlv(std::make_shared<Native::Interface::TenGigabitEthernet::Cdp::Tlv>())
{
    tlv->parent = this;

    yang_name = "cdp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Cdp::~Cdp()
{
}

bool Native::Interface::TenGigabitEthernet::Cdp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::Interface::TenGigabitEthernet::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cdp:cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::Interface::TenGigabitEthernet::Cdp::Tlv>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv != nullptr)
    {
        _children["tlv"] = tlv;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv" || name == "enable")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cdp::Tlv::Tlv()
    :
    server_location{YType::empty, "server-location"},
    location{YType::empty, "location"}
        ,
    app(nullptr) // presence node
{

    yang_name = "tlv"; yang_parent_name = "cdp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Cdp::Tlv::~Tlv()
{
}

bool Native::Interface::TenGigabitEthernet::Cdp::Tlv::has_data() const
{
    if (is_presence_container) return true;
    return server_location.is_set
	|| location.is_set
	|| (app !=  nullptr && app->has_data());
}

bool Native::Interface::TenGigabitEthernet::Cdp::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_location.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (app !=  nullptr && app->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Cdp::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cdp::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_location.is_set || is_set(server_location.yfilter)) leaf_name_data.push_back(server_location.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cdp::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app")
    {
        if(app == nullptr)
        {
            app = std::make_shared<Native::Interface::TenGigabitEthernet::Cdp::Tlv::App>();
        }
        return app;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cdp::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(app != nullptr)
    {
        _children["app"] = app;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Cdp::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-location")
    {
        server_location = value;
        server_location.value_namespace = name_space;
        server_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Cdp::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-location")
    {
        server_location.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Cdp::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app" || name == "server-location" || name == "location")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Cdp::Tlv::App::App()
    :
    tlvtype{YType::uint16, "tlvtype"},
    value_{YType::str, "value"}
{

    yang_name = "app"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Cdp::Tlv::App::~App()
{
}

bool Native::Interface::TenGigabitEthernet::Cdp::Tlv::App::has_data() const
{
    if (is_presence_container) return true;
    return tlvtype.is_set
	|| value_.is_set;
}

bool Native::Interface::TenGigabitEthernet::Cdp::Tlv::App::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlvtype.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Cdp::Tlv::App::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Cdp::Tlv::App::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlvtype.is_set || is_set(tlvtype.yfilter)) leaf_name_data.push_back(tlvtype.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Cdp::Tlv::App::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Cdp::Tlv::App::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Cdp::Tlv::App::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlvtype")
    {
        tlvtype = value;
        tlvtype.value_namespace = name_space;
        tlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Cdp::Tlv::App::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlvtype")
    {
        tlvtype.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Cdp::Tlv::App::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlvtype" || name == "value")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Mvrp()
    :
    mvrp{YType::empty, "mvrp"}
        ,
    registration(std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Registration>())
    , timer(std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Timer>())
{
    registration->parent = this;
    timer->parent = this;

    yang_name = "mvrp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Mvrp::~Mvrp()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::has_data() const
{
    if (is_presence_container) return true;
    return mvrp.is_set
	|| (registration !=  nullptr && registration->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Interface::TenGigabitEthernet::Mvrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mvrp.yfilter)
	|| (registration !=  nullptr && registration->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mvrp:mvrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mvrp.is_set || is_set(mvrp.yfilter)) leaf_name_data.push_back(mvrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mvrp")
    {
        mvrp = value;
        mvrp.value_namespace = name_space;
        mvrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mvrp")
    {
        mvrp.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registration" || name == "timer" || name == "mvrp")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Registration::Registration()
    :
    fixed{YType::empty, "fixed"},
    forbidden{YType::empty, "forbidden"},
    normal{YType::empty, "normal"}
{

    yang_name = "registration"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mvrp::Registration::~Registration()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Registration::has_data() const
{
    if (is_presence_container) return true;
    return fixed.is_set
	|| forbidden.is_set
	|| normal.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed.yfilter)
	|| ydk::is_set(forbidden.yfilter)
	|| ydk::is_set(normal.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed.is_set || is_set(fixed.yfilter)) leaf_name_data.push_back(fixed.get_name_leafdata());
    if (forbidden.is_set || is_set(forbidden.yfilter)) leaf_name_data.push_back(forbidden.get_name_leafdata());
    if (normal.is_set || is_set(normal.yfilter)) leaf_name_data.push_back(normal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed")
    {
        fixed = value;
        fixed.value_namespace = name_space;
        fixed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forbidden")
    {
        forbidden = value;
        forbidden.value_namespace = name_space;
        forbidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal")
    {
        normal = value;
        normal.value_namespace = name_space;
        normal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed")
    {
        fixed.yfilter = yfilter;
    }
    if(value_path == "forbidden")
    {
        forbidden.yfilter = yfilter;
    }
    if(value_path == "normal")
    {
        normal.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "forbidden" || name == "normal")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::Timer()
    :
    periodic{YType::empty, "periodic"}
        ,
    join(nullptr) // presence node
    , leave(nullptr) // presence node
    , leave_all(nullptr) // presence node
{

    yang_name = "timer"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::~Timer()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::has_data() const
{
    if (is_presence_container) return true;
    return periodic.is_set
	|| (join !=  nullptr && join->has_data())
	|| (leave !=  nullptr && leave->has_data())
	|| (leave_all !=  nullptr && leave_all->has_data());
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| (join !=  nullptr && join->has_operation())
	|| (leave !=  nullptr && leave->has_operation())
	|| (leave_all !=  nullptr && leave_all->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join")
    {
        if(join == nullptr)
        {
            join = std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join>();
        }
        return join;
    }

    if(child_yang_name == "leave")
    {
        if(leave == nullptr)
        {
            leave = std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave>();
        }
        return leave;
    }

    if(child_yang_name == "leave-all")
    {
        if(leave_all == nullptr)
        {
            leave_all = std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll>();
        }
        return leave_all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(join != nullptr)
    {
        _children["join"] = join;
    }

    if(leave != nullptr)
    {
        _children["leave"] = leave;
    }

    if(leave_all != nullptr)
    {
        _children["leave-all"] = leave_all;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join" || name == "leave" || name == "leave-all" || name == "periodic")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::Join()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "join"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::~Join()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::Leave()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "leave"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::~Leave()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leave";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::LeaveAll()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "leave-all"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::~LeaveAll()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leave-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ntp::Ntp()
    :
    broadcast{YType::empty, "broadcast"}
        ,
    broadcast_option(std::make_shared<Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption>())
{
    broadcast_option->parent = this;

    yang_name = "ntp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ntp::~Ntp()
{
}

bool Native::Interface::TenGigabitEthernet::Ntp::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| (broadcast_option !=  nullptr && broadcast_option->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| (broadcast_option !=  nullptr && broadcast_option->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-option")
    {
        if(broadcast_option == nullptr)
        {
            broadcast_option = std::make_shared<Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption>();
        }
        return broadcast_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast_option != nullptr)
    {
        _children["broadcast-option"] = broadcast_option;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-option" || name == "broadcast")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::BroadcastOption()
    :
    broadcast(std::make_shared<Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast>())
{
    broadcast->parent = this;

    yang_name = "broadcast-option"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::~BroadcastOption()
{
}

bool Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::has_data() const
{
    if (is_presence_container) return true;
    return (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast != nullptr)
    {
        _children["broadcast"] = broadcast;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast::Broadcast()
    :
    client{YType::empty, "client"}
{

    yang_name = "broadcast"; yang_parent_name = "broadcast-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast::~Broadcast()
{
}

bool Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast::has_data() const
{
    if (is_presence_container) return true;
    return client.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ntp::BroadcastOption::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Utd::~Utd()
{
}

bool Native::Interface::TenGigabitEthernet::Utd::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::TenGigabitEthernet::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::TwentyFiveGigE()
    :
    name{YType::str, "name"},
    media_type{YType::enumeration, "media-type"},
    port_type{YType::enumeration, "port-type"},
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
    duplex{YType::enumeration, "Cisco-IOS-XE-ethernet:duplex"},
    cisco_ios_xe_ethernet_macsec{YType::empty, "Cisco-IOS-XE-ethernet:macsec"},
    cisco_ios_xe_switch_macsec{YType::empty, "Cisco-IOS-XE-switch:macsec"},
    nat66{YType::enumeration, "Cisco-IOS-XE-nat:nat66"}
        ,
    switchport_conf(std::make_shared<Native::Interface::TwentyFiveGigE::SwitchportConf>())
    , switchport(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport>())
    , stackwise_virtual(std::make_shared<Native::Interface::TwentyFiveGigE::StackwiseVirtual>())
    , arp(std::make_shared<Native::Interface::TwentyFiveGigE::Arp>())
    , backup(std::make_shared<Native::Interface::TwentyFiveGigE::Backup>())
    , cemoudp(std::make_shared<Native::Interface::TwentyFiveGigE::Cemoudp>())
    , cws_tunnel(std::make_shared<Native::Interface::TwentyFiveGigE::CwsTunnel>())
    , l2protocol_tunnel(nullptr) // presence node
    , encapsulation(std::make_shared<Native::Interface::TwentyFiveGigE::Encapsulation>())
    , fair_queue_conf(std::make_shared<Native::Interface::TwentyFiveGigE::FairQueueConf>())
    , fair_queue(std::make_shared<Native::Interface::TwentyFiveGigE::FairQueue>())
    , flowcontrol(std::make_shared<Native::Interface::TwentyFiveGigE::Flowcontrol>())
    , isis(std::make_shared<Native::Interface::TwentyFiveGigE::Isis>())
    , keepalive_settings(std::make_shared<Native::Interface::TwentyFiveGigE::KeepaliveSettings>())
    , bfd(std::make_shared<Native::Interface::TwentyFiveGigE::Bfd>())
    , bandwidth(std::make_shared<Native::Interface::TwentyFiveGigE::Bandwidth>())
    , dampening(std::make_shared<Native::Interface::TwentyFiveGigE::Dampening>())
    , domain(std::make_shared<Native::Interface::TwentyFiveGigE::Domain>())
    , hold_queue(this, {"direction"})
    , mpls(std::make_shared<Native::Interface::TwentyFiveGigE::Mpls>())
    , ip_vrf(std::make_shared<Native::Interface::TwentyFiveGigE::IpVrf>())
    , vrf(std::make_shared<Native::Interface::TwentyFiveGigE::Vrf>())
    , ip(std::make_shared<Native::Interface::TwentyFiveGigE::Ip>())
    , ipv6(std::make_shared<Native::Interface::TwentyFiveGigE::Ipv6>())
    , logging(std::make_shared<Native::Interface::TwentyFiveGigE::Logging>())
    , mdix(std::make_shared<Native::Interface::TwentyFiveGigE::Mdix>())
    , mop(std::make_shared<Native::Interface::TwentyFiveGigE::Mop>())
    , interface_qos(std::make_shared<Native::Interface::TwentyFiveGigE::InterfaceQos>())
    , source(std::make_shared<Native::Interface::TwentyFiveGigE::Source>())
    , standby(std::make_shared<Native::Interface::TwentyFiveGigE::Standby>())
    , access_session(std::make_shared<Native::Interface::TwentyFiveGigE::AccessSession>())
    , storm_control(std::make_shared<Native::Interface::TwentyFiveGigE::StormControl>())
    , trust(std::make_shared<Native::Interface::TwentyFiveGigE::Trust>())
    , priority_queue(std::make_shared<Native::Interface::TwentyFiveGigE::PriorityQueue>())
    , rcv_queue(std::make_shared<Native::Interface::TwentyFiveGigE::RcvQueue>())
    , peer(std::make_shared<Native::Interface::TwentyFiveGigE::Peer>())
    , pm_path(std::make_shared<Native::Interface::TwentyFiveGigE::PmPath>())
    , power(std::make_shared<Native::Interface::TwentyFiveGigE::Power>())
    , carrier_delay(std::make_shared<Native::Interface::TwentyFiveGigE::CarrierDelay>())
    , channel_group(std::make_shared<Native::Interface::TwentyFiveGigE::ChannelGroup>())
    , ethernet(std::make_shared<Native::Interface::TwentyFiveGigE::Ethernet>())
    , eapol(std::make_shared<Native::Interface::TwentyFiveGigE::Eapol>())
    , synchronous(std::make_shared<Native::Interface::TwentyFiveGigE::Synchronous>())
    , speed(std::make_shared<Native::Interface::TwentyFiveGigE::Speed>())
    , negotiation(std::make_shared<Native::Interface::TwentyFiveGigE::Negotiation>())
    , plim(std::make_shared<Native::Interface::TwentyFiveGigE::Plim>())
    , pppoe(std::make_shared<Native::Interface::TwentyFiveGigE::Pppoe>())
    , service(std::make_shared<Native::Interface::TwentyFiveGigE::Service>())
    , lacp(std::make_shared<Native::Interface::TwentyFiveGigE::Lacp>())
    , cisco_ios_xe_ethernet_macsec_option(std::make_shared<Native::Interface::TwentyFiveGigE::CiscoIOSXEEthernetMacsecOption>())
    , snmp(std::make_shared<Native::Interface::TwentyFiveGigE::Snmp>())
    , authentication(std::make_shared<Native::Interface::TwentyFiveGigE::Authentication>())
    , mab(nullptr) // presence node
    , et_analytics(std::make_shared<Native::Interface::TwentyFiveGigE::EtAnalytics>())
    , service_policy(std::make_shared<Native::Interface::TwentyFiveGigE::ServicePolicy>())
    , auto_(std::make_shared<Native::Interface::TwentyFiveGigE::Auto>())
    , datalink(std::make_shared<Native::Interface::TwentyFiveGigE::Datalink>())
    , energywise(nullptr) // presence node
    , location(std::make_shared<Native::Interface::TwentyFiveGigE::Location>())
    , mac(std::make_shared<Native::Interface::TwentyFiveGigE::Mac>())
    , macro(std::make_shared<Native::Interface::TwentyFiveGigE::Macro>())
    , dual_active(std::make_shared<Native::Interface::TwentyFiveGigE::DualActive>())
    , load_balancing(std::make_shared<Native::Interface::TwentyFiveGigE::LoadBalancing>())
    , vlan_range(this, {"id"})
    , switch_(std::make_shared<Native::Interface::TwentyFiveGigE::Switch>())
    , srr_queue(std::make_shared<Native::Interface::TwentyFiveGigE::SrrQueue>())
    , cisco_ios_xe_switch_macsec_option_(std::make_shared<Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption>())
    , ospfv3(std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3>())
    , performance(std::make_shared<Native::Interface::TwentyFiveGigE::Performance>())
    , lisp(std::make_shared<Native::Interface::TwentyFiveGigE::Lisp>())
    , spanning_tree(std::make_shared<Native::Interface::TwentyFiveGigE::SpanningTree>())
    , mka(std::make_shared<Native::Interface::TwentyFiveGigE::Mka>())
    , umbrella(std::make_shared<Native::Interface::TwentyFiveGigE::Umbrella>())
    , xconnect(std::make_shared<Native::Interface::TwentyFiveGigE::Xconnect>())
    , evpn(std::make_shared<Native::Interface::TwentyFiveGigE::Evpn>())
    , dot1x(std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x>())
    , crypto(std::make_shared<Native::Interface::TwentyFiveGigE::Crypto>())
    , lldp(std::make_shared<Native::Interface::TwentyFiveGigE::Lldp>())
    , zone_member(std::make_shared<Native::Interface::TwentyFiveGigE::ZoneMember>())
    , fabric_domain(std::make_shared<Native::Interface::TwentyFiveGigE::FabricDomain>())
    , analysis_module(std::make_shared<Native::Interface::TwentyFiveGigE::AnalysisModule>())
    , cts(std::make_shared<Native::Interface::TwentyFiveGigE::Cts>())
    , udld(std::make_shared<Native::Interface::TwentyFiveGigE::Udld>())
    , cdp(std::make_shared<Native::Interface::TwentyFiveGigE::Cdp>())
    , mvrp(nullptr) // presence node
    , ntp(std::make_shared<Native::Interface::TwentyFiveGigE::Ntp>())
    , utd(std::make_shared<Native::Interface::TwentyFiveGigE::Utd>())
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
    power->parent = this;
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
    cisco_ios_xe_ethernet_macsec_option->parent = this;
    snmp->parent = this;
    authentication->parent = this;
    et_analytics->parent = this;
    service_policy->parent = this;
    auto_->parent = this;
    datalink->parent = this;
    location->parent = this;
    mac->parent = this;
    macro->parent = this;
    dual_active->parent = this;
    load_balancing->parent = this;
    switch_->parent = this;
    srr_queue->parent = this;
    cisco_ios_xe_switch_macsec_option_->parent = this;
    ospfv3->parent = this;
    performance->parent = this;
    lisp->parent = this;
    spanning_tree->parent = this;
    mka->parent = this;
    umbrella->parent = this;
    xconnect->parent = this;
    evpn->parent = this;
    dot1x->parent = this;
    crypto->parent = this;
    lldp->parent = this;
    zone_member->parent = this;
    fabric_domain->parent = this;
    analysis_module->parent = this;
    cts->parent = this;
    udld->parent = this;
    cdp->parent = this;
    ntp->parent = this;
    utd->parent = this;

    yang_name = "TwentyFiveGigE"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Interface::TwentyFiveGigE::~TwentyFiveGigE()
{
}

bool Native::Interface::TwentyFiveGigE::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return name.is_set
	|| media_type.is_set
	|| port_type.is_set
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
	|| cisco_ios_xe_ethernet_macsec.is_set
	|| cisco_ios_xe_switch_macsec.is_set
	|| nat66.is_set
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
	|| (power !=  nullptr && power->has_data())
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
	|| (cisco_ios_xe_ethernet_macsec_option !=  nullptr && cisco_ios_xe_ethernet_macsec_option->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (et_analytics !=  nullptr && et_analytics->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (location !=  nullptr && location->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (macro !=  nullptr && macro->has_data())
	|| (dual_active !=  nullptr && dual_active->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data())
	|| (switch_ !=  nullptr && switch_->has_data())
	|| (srr_queue !=  nullptr && srr_queue->has_data())
	|| (cisco_ios_xe_switch_macsec_option_ !=  nullptr && cisco_ios_xe_switch_macsec_option_->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (performance !=  nullptr && performance->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (mka !=  nullptr && mka->has_data())
	|| (umbrella !=  nullptr && umbrella->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (zone_member !=  nullptr && zone_member->has_data())
	|| (fabric_domain !=  nullptr && fabric_domain->has_data())
	|| (analysis_module !=  nullptr && analysis_module->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (udld !=  nullptr && udld->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (mvrp !=  nullptr && mvrp->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (utd !=  nullptr && utd->has_data());
}

bool Native::Interface::TwentyFiveGigE::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(port_type.yfilter)
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
	|| ydk::is_set(cisco_ios_xe_ethernet_macsec.yfilter)
	|| ydk::is_set(cisco_ios_xe_switch_macsec.yfilter)
	|| ydk::is_set(nat66.yfilter)
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
	|| (power !=  nullptr && power->has_operation())
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
	|| (cisco_ios_xe_ethernet_macsec_option !=  nullptr && cisco_ios_xe_ethernet_macsec_option->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (et_analytics !=  nullptr && et_analytics->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (location !=  nullptr && location->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (macro !=  nullptr && macro->has_operation())
	|| (dual_active !=  nullptr && dual_active->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation())
	|| (srr_queue !=  nullptr && srr_queue->has_operation())
	|| (cisco_ios_xe_switch_macsec_option_ !=  nullptr && cisco_ios_xe_switch_macsec_option_->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (performance !=  nullptr && performance->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (mka !=  nullptr && mka->has_operation())
	|| (umbrella !=  nullptr && umbrella->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (zone_member !=  nullptr && zone_member->has_operation())
	|| (fabric_domain !=  nullptr && fabric_domain->has_operation())
	|| (analysis_module !=  nullptr && analysis_module->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (udld !=  nullptr && udld->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (mvrp !=  nullptr && mvrp->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (utd !=  nullptr && utd->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::TwentyFiveGigE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TwentyFiveGigE";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
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
    if (cisco_ios_xe_ethernet_macsec.is_set || is_set(cisco_ios_xe_ethernet_macsec.yfilter)) leaf_name_data.push_back(cisco_ios_xe_ethernet_macsec.get_name_leafdata());
    if (cisco_ios_xe_switch_macsec.is_set || is_set(cisco_ios_xe_switch_macsec.yfilter)) leaf_name_data.push_back(cisco_ios_xe_switch_macsec.get_name_leafdata());
    if (nat66.is_set || is_set(nat66.yfilter)) leaf_name_data.push_back(nat66.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::TwentyFiveGigE::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "stackwise-virtual")
    {
        if(stackwise_virtual == nullptr)
        {
            stackwise_virtual = std::make_shared<Native::Interface::TwentyFiveGigE::StackwiseVirtual>();
        }
        return stackwise_virtual;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::TwentyFiveGigE::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::TwentyFiveGigE::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::TwentyFiveGigE::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::TwentyFiveGigE::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::TwentyFiveGigE::L2protocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::TwentyFiveGigE::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::TwentyFiveGigE::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::TwentyFiveGigE::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::TwentyFiveGigE::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::TwentyFiveGigE::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::TwentyFiveGigE::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::TwentyFiveGigE::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::TwentyFiveGigE::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::TwentyFiveGigE::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::TwentyFiveGigE::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "hold-queue")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::HoldQueue>();
        ent_->parent = this;
        hold_queue.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::TwentyFiveGigE::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::TwentyFiveGigE::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::TwentyFiveGigE::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::TwentyFiveGigE::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::TwentyFiveGigE::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::TwentyFiveGigE::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::TwentyFiveGigE::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::TwentyFiveGigE::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::TwentyFiveGigE::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::TwentyFiveGigE::Source>();
        }
        return source;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::TwentyFiveGigE::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::TwentyFiveGigE::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::TwentyFiveGigE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::TwentyFiveGigE::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::TwentyFiveGigE::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::TwentyFiveGigE::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::TwentyFiveGigE::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::TwentyFiveGigE::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "Cisco-IOS-XE-power:power")
    {
        if(power == nullptr)
        {
            power = std::make_shared<Native::Interface::TwentyFiveGigE::Power>();
        }
        return power;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<Native::Interface::TwentyFiveGigE::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:channel-group")
    {
        if(channel_group == nullptr)
        {
            channel_group = std::make_shared<Native::Interface::TwentyFiveGigE::ChannelGroup>();
        }
        return channel_group;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::TwentyFiveGigE::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:eapol")
    {
        if(eapol == nullptr)
        {
            eapol = std::make_shared<Native::Interface::TwentyFiveGigE::Eapol>();
        }
        return eapol;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Interface::TwentyFiveGigE::Synchronous>();
        }
        return synchronous;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:speed")
    {
        if(speed == nullptr)
        {
            speed = std::make_shared<Native::Interface::TwentyFiveGigE::Speed>();
        }
        return speed;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:negotiation")
    {
        if(negotiation == nullptr)
        {
            negotiation = std::make_shared<Native::Interface::TwentyFiveGigE::Negotiation>();
        }
        return negotiation;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:plim")
    {
        if(plim == nullptr)
        {
            plim = std::make_shared<Native::Interface::TwentyFiveGigE::Plim>();
        }
        return plim;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Native::Interface::TwentyFiveGigE::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Interface::TwentyFiveGigE::Service>();
        }
        return service;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<Native::Interface::TwentyFiveGigE::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:macsec-option")
    {
        if(cisco_ios_xe_ethernet_macsec_option == nullptr)
        {
            cisco_ios_xe_ethernet_macsec_option = std::make_shared<Native::Interface::TwentyFiveGigE::CiscoIOSXEEthernetMacsecOption>();
        }
        return cisco_ios_xe_ethernet_macsec_option;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::TwentyFiveGigE::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-sanet:authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::TwentyFiveGigE::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "Cisco-IOS-XE-sanet:mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Interface::TwentyFiveGigE::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "Cisco-IOS-XE-eta:et-analytics")
    {
        if(et_analytics == nullptr)
        {
            et_analytics = std::make_shared<Native::Interface::TwentyFiveGigE::EtAnalytics>();
        }
        return et_analytics;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::TwentyFiveGigE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::TwentyFiveGigE::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Interface::TwentyFiveGigE::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::Interface::TwentyFiveGigE::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::Interface::TwentyFiveGigE::Location>();
        }
        return location;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::TwentyFiveGigE::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:macro")
    {
        if(macro == nullptr)
        {
            macro = std::make_shared<Native::Interface::TwentyFiveGigE::Macro>();
        }
        return macro;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::Interface::TwentyFiveGigE::DualActive>();
        }
        return dual_active;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::Interface::TwentyFiveGigE::LoadBalancing>();
        }
        return load_balancing;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:vlan-range")
    {
        auto ent_ = std::make_shared<Native::Interface::TwentyFiveGigE::VlanRange>();
        ent_->parent = this;
        vlan_range.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Interface::TwentyFiveGigE::Switch>();
        }
        return switch_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:srr-queue")
    {
        if(srr_queue == nullptr)
        {
            srr_queue = std::make_shared<Native::Interface::TwentyFiveGigE::SrrQueue>();
        }
        return srr_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:macsec-option")
    {
        if(cisco_ios_xe_switch_macsec_option_ == nullptr)
        {
            cisco_ios_xe_switch_macsec_option_ = std::make_shared<Native::Interface::TwentyFiveGigE::CiscoIOSXESwitchMacsecOption>();
        }
        return cisco_ios_xe_switch_macsec_option_;
    }

    if(child_yang_name == "Cisco-IOS-XE-ospfv3:ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Interface::TwentyFiveGigE::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "Cisco-IOS-XE-ezpm:performance")
    {
        if(performance == nullptr)
        {
            performance = std::make_shared<Native::Interface::TwentyFiveGigE::Performance>();
        }
        return performance;
    }

    if(child_yang_name == "Cisco-IOS-XE-lisp:lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::TwentyFiveGigE::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::TwentyFiveGigE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "Cisco-IOS-XE-mka:mka")
    {
        if(mka == nullptr)
        {
            mka = std::make_shared<Native::Interface::TwentyFiveGigE::Mka>();
        }
        return mka;
    }

    if(child_yang_name == "Cisco-IOS-XE-umbrella:umbrella")
    {
        if(umbrella == nullptr)
        {
            umbrella = std::make_shared<Native::Interface::TwentyFiveGigE::Umbrella>();
        }
        return umbrella;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::TwentyFiveGigE::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<Native::Interface::TwentyFiveGigE::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "Cisco-IOS-XE-dot1x:dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Interface::TwentyFiveGigE::Dot1x>();
        }
        return dot1x;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::TwentyFiveGigE::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "Cisco-IOS-XE-lldp:lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Interface::TwentyFiveGigE::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "Cisco-IOS-XE-zone:zone-member")
    {
        if(zone_member == nullptr)
        {
            zone_member = std::make_shared<Native::Interface::TwentyFiveGigE::ZoneMember>();
        }
        return zone_member;
    }

    if(child_yang_name == "Cisco-IOS-XE-iwanfabric:fabric-domain")
    {
        if(fabric_domain == nullptr)
        {
            fabric_domain = std::make_shared<Native::Interface::TwentyFiveGigE::FabricDomain>();
        }
        return fabric_domain;
    }

    if(child_yang_name == "Cisco-IOS-XE-nam:analysis-module")
    {
        if(analysis_module == nullptr)
        {
            analysis_module = std::make_shared<Native::Interface::TwentyFiveGigE::AnalysisModule>();
        }
        return analysis_module;
    }

    if(child_yang_name == "Cisco-IOS-XE-cts:cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Interface::TwentyFiveGigE::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "Cisco-IOS-XE-udld:udld")
    {
        if(udld == nullptr)
        {
            udld = std::make_shared<Native::Interface::TwentyFiveGigE::Udld>();
        }
        return udld;
    }

    if(child_yang_name == "Cisco-IOS-XE-cdp:cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<Native::Interface::TwentyFiveGigE::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "Cisco-IOS-XE-mvrp:mvrp")
    {
        if(mvrp == nullptr)
        {
            mvrp = std::make_shared<Native::Interface::TwentyFiveGigE::Mvrp>();
        }
        return mvrp;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Native::Interface::TwentyFiveGigE::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "Cisco-IOS-XE-utd:utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::TwentyFiveGigE::Utd>();
        }
        return utd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::get_children() const
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

    if(power != nullptr)
    {
        _children["Cisco-IOS-XE-power:power"] = power;
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

    if(cisco_ios_xe_ethernet_macsec_option != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:macsec-option"] = cisco_ios_xe_ethernet_macsec_option;
    }

    if(snmp != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:snmp"] = snmp;
    }

    if(authentication != nullptr)
    {
        _children["Cisco-IOS-XE-sanet:authentication"] = authentication;
    }

    if(mab != nullptr)
    {
        _children["Cisco-IOS-XE-sanet:mab"] = mab;
    }

    if(et_analytics != nullptr)
    {
        _children["Cisco-IOS-XE-eta:et-analytics"] = et_analytics;
    }

    if(service_policy != nullptr)
    {
        _children["Cisco-IOS-XE-policy:service-policy"] = service_policy;
    }

    if(auto_ != nullptr)
    {
        _children["Cisco-IOS-XE-switch:auto"] = auto_;
    }

    if(datalink != nullptr)
    {
        _children["Cisco-IOS-XE-switch:datalink"] = datalink;
    }

    if(energywise != nullptr)
    {
        _children["Cisco-IOS-XE-switch:energywise"] = energywise;
    }

    if(location != nullptr)
    {
        _children["Cisco-IOS-XE-switch:location"] = location;
    }

    if(mac != nullptr)
    {
        _children["Cisco-IOS-XE-switch:mac"] = mac;
    }

    if(macro != nullptr)
    {
        _children["Cisco-IOS-XE-switch:macro"] = macro;
    }

    if(dual_active != nullptr)
    {
        _children["Cisco-IOS-XE-switch:dual-active"] = dual_active;
    }

    if(load_balancing != nullptr)
    {
        _children["Cisco-IOS-XE-switch:load-balancing"] = load_balancing;
    }

    count_ = 0;
    for (auto ent_ : vlan_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(switch_ != nullptr)
    {
        _children["Cisco-IOS-XE-switch:switch"] = switch_;
    }

    if(srr_queue != nullptr)
    {
        _children["Cisco-IOS-XE-switch:srr-queue"] = srr_queue;
    }

    if(cisco_ios_xe_switch_macsec_option_ != nullptr)
    {
        _children["Cisco-IOS-XE-switch:macsec-option"] = cisco_ios_xe_switch_macsec_option_;
    }

    if(ospfv3 != nullptr)
    {
        _children["Cisco-IOS-XE-ospfv3:ospfv3"] = ospfv3;
    }

    if(performance != nullptr)
    {
        _children["Cisco-IOS-XE-ezpm:performance"] = performance;
    }

    if(lisp != nullptr)
    {
        _children["Cisco-IOS-XE-lisp:lisp"] = lisp;
    }

    if(spanning_tree != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:spanning-tree"] = spanning_tree;
    }

    if(mka != nullptr)
    {
        _children["Cisco-IOS-XE-mka:mka"] = mka;
    }

    if(umbrella != nullptr)
    {
        _children["Cisco-IOS-XE-umbrella:umbrella"] = umbrella;
    }

    if(xconnect != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:xconnect"] = xconnect;
    }

    if(evpn != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:evpn"] = evpn;
    }

    if(dot1x != nullptr)
    {
        _children["Cisco-IOS-XE-dot1x:dot1x"] = dot1x;
    }

    if(crypto != nullptr)
    {
        _children["Cisco-IOS-XE-crypto:crypto"] = crypto;
    }

    if(lldp != nullptr)
    {
        _children["Cisco-IOS-XE-lldp:lldp"] = lldp;
    }

    if(zone_member != nullptr)
    {
        _children["Cisco-IOS-XE-zone:zone-member"] = zone_member;
    }

    if(fabric_domain != nullptr)
    {
        _children["Cisco-IOS-XE-iwanfabric:fabric-domain"] = fabric_domain;
    }

    if(analysis_module != nullptr)
    {
        _children["Cisco-IOS-XE-nam:analysis-module"] = analysis_module;
    }

    if(cts != nullptr)
    {
        _children["Cisco-IOS-XE-cts:cts"] = cts;
    }

    if(udld != nullptr)
    {
        _children["Cisco-IOS-XE-udld:udld"] = udld;
    }

    if(cdp != nullptr)
    {
        _children["Cisco-IOS-XE-cdp:cdp"] = cdp;
    }

    if(mvrp != nullptr)
    {
        _children["Cisco-IOS-XE-mvrp:mvrp"] = mvrp;
    }

    if(ntp != nullptr)
    {
        _children["Cisco-IOS-XE-ntp:ntp"] = ntp;
    }

    if(utd != nullptr)
    {
        _children["Cisco-IOS-XE-utd:utd"] = utd;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Cisco-IOS-XE-ethernet:macsec")
    {
        cisco_ios_xe_ethernet_macsec = value;
        cisco_ios_xe_ethernet_macsec.value_namespace = name_space;
        cisco_ios_xe_ethernet_macsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-switch:macsec")
    {
        cisco_ios_xe_switch_macsec = value;
        cisco_ios_xe_switch_macsec.value_namespace = name_space;
        cisco_ios_xe_switch_macsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-nat:nat66")
    {
        nat66 = value;
        nat66.value_namespace = name_space;
        nat66.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
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
    if(value_path == "macsec")
    {
        cisco_ios_xe_ethernet_macsec.yfilter = yfilter;
    }
    if(value_path == "macsec")
    {
        cisco_ios_xe_switch_macsec.yfilter = yfilter;
    }
    if(value_path == "nat66")
    {
        nat66.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport-conf" || name == "switchport" || name == "stackwise-virtual" || name == "arp" || name == "backup" || name == "cemoudp" || name == "cws-tunnel" || name == "l2protocol-tunnel" || name == "encapsulation" || name == "fair-queue-conf" || name == "fair-queue" || name == "flowcontrol" || name == "isis" || name == "keepalive-settings" || name == "bfd" || name == "bandwidth" || name == "dampening" || name == "domain" || name == "hold-queue" || name == "mpls" || name == "ip-vrf" || name == "vrf" || name == "ip" || name == "ipv6" || name == "logging" || name == "mdix" || name == "mop" || name == "interface_qos" || name == "source" || name == "standby" || name == "access-session" || name == "storm-control" || name == "trust" || name == "priority-queue" || name == "rcv-queue" || name == "peer" || name == "pm-path" || name == "power" || name == "carrier-delay" || name == "channel-group" || name == "ethernet" || name == "eapol" || name == "synchronous" || name == "speed" || name == "negotiation" || name == "plim" || name == "pppoe" || name == "service" || name == "lacp" || name == "macsec-option" || name == "snmp" || name == "authentication" || name == "mab" || name == "et-analytics" || name == "service-policy" || name == "auto" || name == "datalink" || name == "energywise" || name == "location" || name == "mac" || name == "macro" || name == "dual-active" || name == "load-balancing" || name == "vlan-range" || name == "switch" || name == "srr-queue" || name == "macsec-option" || name == "ospfv3" || name == "performance" || name == "lisp" || name == "spanning-tree" || name == "mka" || name == "umbrella" || name == "xconnect" || name == "evpn" || name == "dot1x" || name == "crypto" || name == "lldp" || name == "zone-member" || name == "fabric-domain" || name == "analysis-module" || name == "cts" || name == "udld" || name == "cdp" || name == "mvrp" || name == "ntp" || name == "utd" || name == "name" || name == "media-type" || name == "port-type" || name == "description" || name == "mac-address" || name == "shutdown" || name == "keepalive" || name == "if-state" || name == "delay" || name == "load-interval" || name == "max-reserved-bandwidth" || name == "mtu" || name == "service-insertion" || name == "channel-protocol" || name == "duplex" || name == "macsec" || name == "macsec" || name == "nat66")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "switchport-conf"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::TwentyFiveGigE::SwitchportConf::has_data() const
{
    if (is_presence_container) return true;
    return switchport.is_set;
}

bool Native::Interface::TwentyFiveGigE::SwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::SwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::SwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::SwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::SwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "Cisco-IOS-XE-switch:nonegotiate"},
    protected_{YType::empty, "Cisco-IOS-XE-switch:protected"},
    host{YType::empty, "Cisco-IOS-XE-switch:host"}
        ,
    access(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Access>())
    , block(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Block>())
    , mode(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Mode>())
    , port_security(nullptr) // presence node
    , trunk(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk>())
    , voice(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Voice>())
    , priority(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Priority>())
    , autostate(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Autostate>())
    , private_vlan(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan>())
    , vepa(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Vepa>())
{
    access->parent = this;
    block->parent = this;
    mode->parent = this;
    trunk->parent = this;
    voice->parent = this;
    priority->parent = this;
    autostate->parent = this;
    private_vlan->parent = this;
    vepa->parent = this;

    yang_name = "switchport"; yang_parent_name = "TwentyFiveGigE"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::~Switchport()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::has_data() const
{
    if (is_presence_container) return true;
    return nonegotiate.is_set
	|| protected_.is_set
	|| host.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (trunk !=  nullptr && trunk->has_data())
	|| (voice !=  nullptr && voice->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (autostate !=  nullptr && autostate->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (vepa !=  nullptr && vepa->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(host.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation())
	|| (voice !=  nullptr && voice->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (autostate !=  nullptr && autostate->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (vepa !=  nullptr && vepa->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-switch:access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk>();
        }
        return trunk;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Voice>();
        }
        return voice;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:autostate")
    {
        if(autostate == nullptr)
        {
            autostate = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Autostate>();
        }
        return autostate;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:vepa")
    {
        if(vepa == nullptr)
        {
            vepa = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Vepa>();
        }
        return vepa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["Cisco-IOS-XE-switch:access"] = access;
    }

    if(block != nullptr)
    {
        _children["Cisco-IOS-XE-switch:block"] = block;
    }

    if(mode != nullptr)
    {
        _children["Cisco-IOS-XE-switch:mode"] = mode;
    }

    if(port_security != nullptr)
    {
        _children["Cisco-IOS-XE-switch:port-security"] = port_security;
    }

    if(trunk != nullptr)
    {
        _children["Cisco-IOS-XE-switch:trunk"] = trunk;
    }

    if(voice != nullptr)
    {
        _children["Cisco-IOS-XE-switch:voice"] = voice;
    }

    if(priority != nullptr)
    {
        _children["Cisco-IOS-XE-switch:priority"] = priority;
    }

    if(autostate != nullptr)
    {
        _children["Cisco-IOS-XE-switch:autostate"] = autostate;
    }

    if(private_vlan != nullptr)
    {
        _children["Cisco-IOS-XE-switch:private-vlan"] = private_vlan;
    }

    if(vepa != nullptr)
    {
        _children["Cisco-IOS-XE-switch:vepa"] = vepa;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-switch:nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-switch:protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-switch:host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "trunk" || name == "voice" || name == "priority" || name == "autostate" || name == "private-vlan" || name == "vepa" || name == "nonegotiate" || name == "protected" || name == "host")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Access::Access()
    :
    vlan(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan>())
{
    vlan->parent = this;

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Access::~Access()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Access::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::Vlan()
    :
    vlan{YType::str, "vlan"},
    name{YType::str, "name"}
{

    yang_name = "vlan"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::~Vlan()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| name.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "name")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Block::Block()
    :
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Block::~Block()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Block::has_data() const
{
    if (is_presence_container) return true;
    return multicast.is_set
	|| unicast.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::TwentyFiveGigE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Mode::Mode()
    :
    dynamic{YType::enumeration, "dynamic"}
        ,
    access(nullptr) // presence node
    , dot1q_tunnel(nullptr) // presence node
    , private_vlan(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan>())
    , trunk(nullptr) // presence node
{
    private_vlan->parent = this;

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Mode::~Mode()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| (access !=  nullptr && access->has_data())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (trunk !=  nullptr && trunk->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Mode::Access>();
        }
        return access;
    }

    if(child_yang_name == "dot1q-tunnel")
    {
        if(dot1q_tunnel == nullptr)
        {
            dot1q_tunnel = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel>();
        }
        return dot1q_tunnel;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk>();
        }
        return trunk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(dot1q_tunnel != nullptr)
    {
        _children["dot1q-tunnel"] = dot1q_tunnel;
    }

    if(private_vlan != nullptr)
    {
        _children["private-vlan"] = private_vlan;
    }

    if(trunk != nullptr)
    {
        _children["trunk"] = trunk;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "dot1q-tunnel" || name == "private-vlan" || name == "trunk" || name == "dynamic")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Mode::Access::Access()
{

    yang_name = "access"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Switchport::Mode::Access::~Access()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::Access::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::Access::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Mode::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Mode::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Mode::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Mode::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Mode::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switchport::Mode::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel::Dot1qTunnel()
{

    yang_name = "dot1q-tunnel"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel::~Dot1qTunnel()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::Dot1qTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan::PrivateVlan()
    :
    host{YType::empty, "host"},
    promiscuous{YType::empty, "promiscuous"}
{

    yang_name = "private-vlan"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| promiscuous.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(promiscuous.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (promiscuous.is_set || is_set(promiscuous.yfilter)) leaf_name_data.push_back(promiscuous.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promiscuous")
    {
        promiscuous = value;
        promiscuous.value_namespace = name_space;
        promiscuous.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "promiscuous")
    {
        promiscuous.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "promiscuous")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk::Trunk()
{

    yang_name = "trunk"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk::~Trunk()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Mode::Trunk::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::PortSecurity()
    :
    violation{YType::enumeration, "violation"}
        ,
    aging(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging>())
    , mac_address(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress>())
    , maximum(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum>())
{
    aging->parent = this;
    mac_address->parent = this;
    maximum->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::has_data() const
{
    if (is_presence_container) return true;
    return violation.is_set
	|| (aging !=  nullptr && aging->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aging != nullptr)
    {
        _children["aging"] = aging;
    }

    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "mac-address" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"},
    type{YType::enumeration, "type"}
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::has_data() const
{
    if (is_presence_container) return true;
    return static_.is_set
	|| time.is_set
	|| type.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static" || name == "time" || name == "type")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress::MacAddress()
    :
    sticky{YType::empty, "sticky"},
    hw_address{YType::str, "hw-address"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "mac-address"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress::~MacAddress()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return sticky.is_set
	|| hw_address.is_set
	|| vlan.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| ydk::is_set(hw_address.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (hw_address.is_set || is_set(hw_address.yfilter)) leaf_name_data.push_back(hw_address.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-address")
    {
        hw_address = value;
        hw_address.value_namespace = name_space;
        hw_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
    if(value_path == "hw-address")
    {
        hw_address.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sticky" || name == "hw-address" || name == "vlan")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum::Maximum()
    :
    max_addresses{YType::uint16, "max-addresses"},
    vlan{YType::str, "vlan"}
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum::has_data() const
{
    if (is_presence_container) return true;
    return max_addresses.is_set
	|| vlan.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_addresses.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_addresses.is_set || is_set(max_addresses.yfilter)) leaf_name_data.push_back(max_addresses.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-addresses")
    {
        max_addresses = value;
        max_addresses.value_namespace = name_space;
        max_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-addresses")
    {
        max_addresses.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-addresses" || name == "vlan")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::Trunk()
    :
    encapsulation{YType::enumeration, "encapsulation"}
        ,
    allowed(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed>())
    , native(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_>())
    , pruning(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning>())
{
    allowed->parent = this;
    native->parent = this;
    pruning->parent = this;

    yang_name = "trunk"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::~Trunk()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| (allowed !=  nullptr && allowed->has_data())
	|| (native !=  nullptr && native->has_data())
	|| (pruning !=  nullptr && pruning->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (allowed !=  nullptr && allowed->has_operation())
	|| (native !=  nullptr && native->has_operation())
	|| (pruning !=  nullptr && pruning->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:trunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Trunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowed")
    {
        if(allowed == nullptr)
        {
            allowed = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed>();
        }
        return allowed;
    }

    if(child_yang_name == "native")
    {
        if(native == nullptr)
        {
            native = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_>();
        }
        return native;
    }

    if(child_yang_name == "pruning")
    {
        if(pruning == nullptr)
        {
            pruning = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning>();
        }
        return pruning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allowed != nullptr)
    {
        _children["allowed"] = allowed;
    }

    if(native != nullptr)
    {
        _children["native"] = native;
    }

    if(pruning != nullptr)
    {
        _children["pruning"] = pruning;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed" || name == "native" || name == "pruning" || name == "encapsulation")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Allowed()
    :
    vlan(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan>())
{
    vlan->parent = this;

    yang_name = "allowed"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::~Allowed()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan::Vlan()
    :
    vlans{YType::str, "vlans"},
    add{YType::str, "add"},
    all{YType::empty, "all"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"}
{

    yang_name = "vlan"; yang_parent_name = "allowed"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan::~Vlan()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return vlans.is_set
	|| add.is_set
	|| all.is_set
	|| none.is_set
	|| remove.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan::has_operation() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlans.yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(except.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(remove.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlans.is_set || is_set(vlans.yfilter)) leaf_name_data.push_back(vlans.get_name_leafdata());
    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());

    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlans")
    {
        vlans = value;
        vlans.value_namespace = name_space;
        vlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlans")
    {
        vlans.yfilter = yfilter;
    }
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "except")
    {
        except.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Allowed::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlans" || name == "add" || name == "all" || name == "except" || name == "none" || name == "remove")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::Native_()
    :
    vlan{YType::str, "vlan"}
{

    yang_name = "native"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::~Native_()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Pruning()
    :
    vlan(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan>())
{
    vlan->parent = this;

    yang_name = "pruning"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::~Pruning()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pruning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan::Vlan()
    :
    vlans{YType::str, "vlans"},
    add{YType::str, "add"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"}
{

    yang_name = "vlan"; yang_parent_name = "pruning"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan::~Vlan()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return add.is_set
	|| none.is_set
	|| remove.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan::has_operation() const
{
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlans.yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(except.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(remove.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());

    auto vlans_name_datas = vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlans_name_datas.begin(), vlans_name_datas.end());
    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlans")
    {
        vlans.append(value);
    }
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlans")
    {
        vlans.yfilter = yfilter;
    }
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "except")
    {
        except.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Trunk::Pruning::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlans" || name == "add" || name == "except" || name == "none" || name == "remove")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Voice::Voice()
    :
    vlan(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan>())
    , detect(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect>())
{
    vlan->parent = this;
    detect->parent = this;

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Voice::~Voice()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data())
	|| (detect !=  nullptr && detect->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (detect !=  nullptr && detect->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "detect")
    {
        if(detect == nullptr)
        {
            detect = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect>();
        }
        return detect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    if(detect != nullptr)
    {
        _children["detect"] = detect;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "detect")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::Vlan()
    :
    vlan{YType::str, "vlan"},
    name{YType::str, "name"}
{

    yang_name = "vlan"; yang_parent_name = "voice"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::~Vlan()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| name.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "name")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::Detect()
    :
    cisco_phone(nullptr) // presence node
{

    yang_name = "detect"; yang_parent_name = "voice"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::~Detect()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::has_data() const
{
    if (is_presence_container) return true;
    return (cisco_phone !=  nullptr && cisco_phone->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::has_operation() const
{
    return is_set(yfilter)
	|| (cisco_phone !=  nullptr && cisco_phone->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-phone")
    {
        if(cisco_phone == nullptr)
        {
            cisco_phone = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone>();
        }
        return cisco_phone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cisco_phone != nullptr)
    {
        _children["cisco-phone"] = cisco_phone;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-phone")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone::CiscoPhone()
    :
    full_duplex{YType::empty, "full-duplex"}
{

    yang_name = "cisco-phone"; yang_parent_name = "detect"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone::~CiscoPhone()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone::has_data() const
{
    if (is_presence_container) return true;
    return full_duplex.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full_duplex.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-phone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_duplex.is_set || is_set(full_duplex.yfilter)) leaf_name_data.push_back(full_duplex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full-duplex")
    {
        full_duplex = value;
        full_duplex.value_namespace = name_space;
        full_duplex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full-duplex")
    {
        full_duplex.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Voice::Detect::CiscoPhone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full-duplex")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Priority::Priority()
    :
    extend(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend>())
{
    extend->parent = this;

    yang_name = "priority"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Priority::~Priority()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Priority::has_data() const
{
    if (is_presence_container) return true;
    return (extend !=  nullptr && extend->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::Priority::has_operation() const
{
    return is_set(yfilter)
	|| (extend !=  nullptr && extend->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend>();
        }
        return extend;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(extend != nullptr)
    {
        _children["extend"] = extend;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switchport::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extend")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend::Extend()
    :
    trust{YType::empty, "trust"},
    cos{YType::uint8, "cos"}
{

    yang_name = "extend"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend::~Extend()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| cos.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Priority::Extend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust" || name == "cos")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::Autostate::Autostate()
    :
    exclude{YType::empty, "exclude"}
{

    yang_name = "autostate"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::Autostate::~Autostate()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::Autostate::has_data() const
{
    if (is_presence_container) return true;
    return exclude.is_set;
}

bool Native::Interface::TwentyFiveGigE::Switchport::Autostate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclude.yfilter);
}

std::string Native::Interface::TwentyFiveGigE::Switchport::Autostate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:autostate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::Autostate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude.is_set || is_set(exclude.yfilter)) leaf_name_data.push_back(exclude.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::Autostate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::Autostate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::Autostate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude")
    {
        exclude = value;
        exclude.value_namespace = name_space;
        exclude.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwentyFiveGigE::Switchport::Autostate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude")
    {
        exclude.yfilter = yfilter;
    }
}

bool Native::Interface::TwentyFiveGigE::Switchport::Autostate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::PrivateVlan()
    :
    association(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association>())
    , host_association(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::HostAssociation>())
    , mapping(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Mapping>())
{
    association->parent = this;
    host_association->parent = this;
    mapping->parent = this;

    yang_name = "private-vlan"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::has_data() const
{
    if (is_presence_container) return true;
    return (association !=  nullptr && association->has_data())
	|| (host_association !=  nullptr && host_association->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| (association !=  nullptr && association->has_operation())
	|| (host_association !=  nullptr && host_association->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association>();
        }
        return association;
    }

    if(child_yang_name == "host-association")
    {
        if(host_association == nullptr)
        {
            host_association = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::HostAssociation>();
        }
        return host_association;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(association != nullptr)
    {
        _children["association"] = association;
    }

    if(host_association != nullptr)
    {
        _children["host-association"] = host_association;
    }

    if(mapping != nullptr)
    {
        _children["mapping"] = mapping;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association" || name == "host-association" || name == "mapping")
        return true;
    return false;
}

Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::Association()
    :
    host(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::Host>())
    , mapping(std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::Mapping>())
{
    host->parent = this;
    mapping->parent = this;

    yang_name = "association"; yang_parent_name = "private-vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::~Association()
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::has_data() const
{
    if (is_presence_container) return true;
    return (host !=  nullptr && host->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::has_operation() const
{
    return is_set(yfilter)
	|| (host !=  nullptr && host->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::Host>();
        }
        return host;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host != nullptr)
    {
        _children["host"] = host;
    }

    if(mapping != nullptr)
    {
        _children["mapping"] = mapping;
    }

    return _children;
}

void Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TwentyFiveGigE::Switchport::PrivateVlan::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "mapping")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::SpanningTree::Bpdufilter::disable {0, "disable"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::SpanningTree::Bpdufilter::enable {1, "enable"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::SpanningTree::Guard::loop {0, "loop"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::SpanningTree::Guard::none {1, "none"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::SpanningTree::Guard::root {2, "root"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::SpanningTree::LinkType::point_to_point {0, "point-to-point"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::SpanningTree::LinkType::shared {1, "shared"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Xconnect::Sequence::both {0, "both"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Xconnect::Sequence::receive {1, "receive"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Xconnect::Sequence::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Dot1x::Pae::authenticator {0, "authenticator"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Dot1x::Pae::supplicant {1, "supplicant"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Dot1x::Pae::both {2, "both"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtCache::egress {0, "egress"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Cts::RoleBased::SgtCache::ingress {1, "ingress"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::MediaType::auto_select {0, "auto-select"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::MediaType::rj45 {1, "rj45"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::MediaType::sfp {2, "sfp"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::PortType::nni {0, "nni"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::ChannelProtocol::lacp {0, "lacp"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::ChannelProtocol::pagp {1, "pagp"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Duplex::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Duplex::full {1, "full"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Duplex::half {2, "half"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Nat66::inside {0, "inside"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Nat66::outside {1, "outside"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::Access::Vlan::Vlan_::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::Mode::Dynamic::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::Mode::Dynamic::desirable {1, "desirable"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Violation::restrict {1, "restrict"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Violation::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::Type::absolute {0, "absolute"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::PortSecurity::Aging::Type::inactivity {1, "inactivity"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::Trunk::Encapsulation::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::Trunk::Encapsulation::isl {1, "isl"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::Trunk::Encapsulation::negotiate {2, "negotiate"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::Trunk::Native_::Vlan::tag {0, "tag"};

const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::Vlan_::dot1p {0, "dot1p"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::Vlan_::none {1, "none"};
const Enum::YLeaf Native::Interface::TwentyFiveGigE::Switchport::Voice::Vlan::Vlan_::untagged {2, "untagged"};


}
}

